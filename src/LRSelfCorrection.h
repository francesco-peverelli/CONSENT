#include <mutex>
#include <future>
#include <fstream>
#include <sstream>
#include <utility>
#include <vector>
#include <algorithm> 
#include <string>
#include <set>
#include <map>
#include <fstream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <unistd.h>
#include "Alignment.h"

std::vector<std::vector<std::string>> getAlignmentPiles(std::vector<Alignment>& alignments, unsigned minSupport, unsigned windowSize, unsigned windowOverlap, std::string readsDir);

std::vector<std::pair<std::string, std::string>> computeConsensuses(std::string tplId, std::vector<std::vector<std::string>>& piles, std::string readsDir, unsigned minSupport, unsigned merSize, unsigned commonKMers, unsigned solidThresh, unsigned windowOverlap);

std::pair<std::string, std::string> alignConsensuses(std::vector<Alignment>& alignments, std::string readsDir, std::vector<std::pair<std::string, std::string>>& consensuses);

void processRead(std::vector<Alignment>& alignments, std::string readsDir, unsigned minSupport, unsigned windowSize, unsigned merSize, unsigned commonKMers, unsigned solidThresh, unsigned windowOverlap);

void processReads(std::vector<std::vector<std::string>>& reads, std::string readsDir, unsigned minSupport, unsigned windowSize, unsigned merSize, unsigned commonKMers, unsigned solidThresh, unsigned windowOverlap);

Alignment getAlignmentFromString(std::string al);

void runCorrection(std::string alignmentFile, std::string readsDir, unsigned minSupport, unsigned windowSize, unsigned merSize, unsigned commonKMers, unsigned solidThresh, unsigned windowOverlap, unsigned nbThreads);
