# binary path -> /usr/local/bin
# assets path -> /usr/local/share/boykisser

echo "Compiling main.cpp"
g++ main.cpp -o boykisser

echo "Copying the binary into binary /usr/local/bin/"
sudo install -Dm755 boykisser /usr/local/bin/boykisser

echo "Creating an asset directory"
sudo mkdir -p /usr/local/share/boykisser

echo "Installing assets"
sudo cp -r kissers /usr/local/share/boykisser

echo "Done!"