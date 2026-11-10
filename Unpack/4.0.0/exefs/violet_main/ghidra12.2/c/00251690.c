/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00251690; name: FUN_00251690
 */


void FUN_00251690(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ostream *poVar3;
  size_t sVar4;
  undefined *local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158 [8];
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined *local_e8 [17];
  undefined8 local_60;
  undefined4 local_58;
  char local_44 [4];
  
  puVar2 = PTR_DAT_047cbcc8;
  puVar1 = PTR_DAT_047cbcc8 + 0x40;
  local_e8[0] = PTR_DAT_047cbcd0 + 0x40;
  local_170 = PTR_DAT_047cbcd0 + 0x18;
  local_168 = 0;
  local_160 = puVar1;
                    /* try { // try from 002516e4 to 002516ef has its CatchHandler @ 00251884 */
  std::ios_base::init((ios *)local_e8);
  local_58 = 0xffffffff;
  local_170 = puVar2 + 0x18;
  local_e8[0] = puVar2 + 0x68;
  local_60 = 0;
  local_160 = puVar1;
                    /* try { // try from 00251710 to 00251717 has its CatchHandler @ 00251868 */
  std::streambuf::streambuf((streambuf *)local_158);
  puVar1 = PTR_DAT_047cbcd8;
  local_158[0] = PTR_DAT_047cbcd8 + 0x10;
  plStack_100 = (long *)FUN_01cf7e20();
  local_f0 = 0x18;
  local_108 = 0;
  local_f8 = 0;
  local_44[0] = '`';
  local_118 = 0;
  uStack_110 = 0;
                    /* try { // try from 00251750 to 0025178b has its CatchHandler @ 00251898 */
  poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                     ((ostream *)&local_160,local_44,1);
  sVar4 = strlen(param_2);
  poVar3 = std::__put_character_sequence<char,std::char_traits<char>>(poVar3,param_2,sVar4);
  local_44[0] = '`';
  std::__put_character_sequence<char,std::char_traits<char>>(poVar3,local_44,1);
                    /* try { // try from 0025178c to 00251797 has its CatchHandler @ 00251818 */
  FUN_00213290(param_1,(streambuf *)local_158);
  local_170 = puVar2 + 0x18;
  local_e8[0] = puVar2 + 0x68;
  local_160 = puVar2 + 0x40;
  local_158[0] = puVar1 + 0x10;
  if ((local_118 & 1) != 0) {
    (**(code **)(*plStack_100 + 0x18))(plStack_100,local_108,local_118 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)local_158);
  std::iostream::~iostream((iostream *)&local_170);
  std::ios::~ios((ios *)local_e8);
  return;
}


