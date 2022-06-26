# include <string>

std::string disemvowel(const std::string& str) {
  // huvisagch result buyu urdun , trolls buyu hasagdag huvisagch
  std:: string urdun, hasagdah;
  
  urdun = "";
  hasagdah = "aeiuoAEIUO";
  
  // garaas orj irj bui text iin urtaar i index davtalt huine
  for(unsigned int i =0; i < str.length(); i++) {
    // hasah char iin urt aar j index guinee
    for(unsigned int j = 0; j < hasagdah.length(); j++){
      if(str[i] == hasagdah[j]) {
        break;
      }
      
      if(j == hasagdah.length() -1) {
        urdun += str[i];
      } 
    }
  }
  return urdun;
}
