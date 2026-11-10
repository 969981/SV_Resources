/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002cc810; name: FUN_002cc810
 */


void FUN_002cc810(undefined1 *param_1,char *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  size_t sVar3;
  ostream *poVar4;
  
  puVar1 = PTR_DAT_047cc890 + 0x18;
  puVar2 = PTR_DAT_047cc890 + 0x40;
  *param_1 = 0;
  *(undefined **)(param_1 + 8) = puVar1;
  *(undefined **)(param_1 + 0x78) = puVar2;
                    /* try { // try from 002cc858 to 002cc863 has its CatchHandler @ 002cc918 */
  std::ios_base::init(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  puVar1 = PTR_DAT_047cc898;
  *(undefined **)(param_1 + 8) = PTR_DAT_047cc898 + 0x18;
  *(undefined **)(param_1 + 0x78) = puVar1 + 0x40;
                    /* try { // try from 002cc888 to 002cc88f has its CatchHandler @ 002cc910 */
  std::streambuf::streambuf((streambuf *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x10) = PTR_DAT_047cc8a0 + 0x10;
  *(undefined4 *)(param_1 + 0x70) = 0x10;
  sVar3 = strlen(param_2);
                    /* try { // try from 002cc8c4 to 002cc8f7 has its CatchHandler @ 002cc920 */
  poVar4 = std::__put_character_sequence<char,std::char_traits<char>>
                     ((ostream *)(param_1 + 8),param_2,sVar3);
  poVar4 = std::__put_character_sequence<char,std::char_traits<char>>(poVar4,":",1);
  poVar4 = (ostream *)std::ostream::operator<<(poVar4,param_3);
  std::__put_character_sequence<char,std::char_traits<char>>(poVar4,": ",2);
  return;
}


