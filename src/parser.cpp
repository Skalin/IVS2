class Parser {
public:
	std::vector <string> getInputData() {
		return this->inputData;
	}

	void setInputData(std::vector<string> &input) {
		this->inputData = input;
	}

protected:
	bool cleanInputData() {
		while (!this->inputData.empty()) {
			this->inputData.push_back();
		}
	}
private:
}
