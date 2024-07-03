#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>

bool SaveOtaRecord(const std::string& tar_file, const std::map<std::string, bool>& ota_record) {
    std::ofstream ofs(tar_file);
    if (!ofs.is_open()) {
        return false;
    }
    for (const auto& item : ota_record) {
        ofs << item.first << " " << item.second << std::endl;
    }
    ofs.close();
    return true;
}

bool LoadOtaRecord(const std::string& tar_file, std::map<std::string, bool>& ota_record) {
    std::ifstream ifs(tar_file);
    if (!ifs.is_open()) {
        return false;
    }
    std::string line;
    while (std::getline(ifs, line)) {
        std::stringstream ss(line);
        std::string key;
        bool value;
        ss >> key >> value;
        ota_record[key] = value;
    }
    ifs.close();
    if (std::remove(tar_file.c_str()) != 0) {
        std::cout << "remove file failed: " << tar_file << std::endl;
    }
    std::cout << "remove file success: " << tar_file << std::endl;
    return true;
}


int main() {
    std::map<std::string, bool> ota_record;
    ota_record["need_out"] = true;
    std::cout << "ota_record: " << ota_record["need_out"] << std::endl;
    SaveOtaRecord("ota_record.txt", ota_record);
    ota_record.clear();
    LoadOtaRecord("ota_record.txt", ota_record);
    std::cout << "ota_record: " << ota_record["need_out"] << std::endl;
}

