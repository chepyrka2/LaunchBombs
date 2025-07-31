git clone https://github.com/chepyrka2/LaunchBombs.git
cd LaunchBombs
status=$(g++ --version | grep "command not found")
if [["$status" == *"command not found"* ]]; then
  echo "GCC не установлен!"
  exit 0
fi 
sudo g++ bomb.cpp -o /usr/bin/LaunchBombs
echo "Теперь программу можно запустить через LaunchBombs"
LaunchBombs
