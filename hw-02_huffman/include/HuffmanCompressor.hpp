#ifndef HUFFMAN_COMPRESSOR_HPP
#define HUFFMAN_COMPRESSOR_HPP

#include <fstream>
#include <vector>

class HuffmanCompressor {
public:
  struct CompressorStats {
    size_t sourceSize;
    size_t processedSize;
    size_t metadataSize;
  };

  CompressorStats compress(std::ifstream &fin, std::ofstream &fout);
  CompressorStats compress(std::vector<char> &buffer, std::ofstream &fout);

  CompressorStats decompress(std::ifstream &fin, std::vector<char> &buffer);
  CompressorStats decompress(std::ifstream &fin, std::ofstream &fout);
};

#endif
