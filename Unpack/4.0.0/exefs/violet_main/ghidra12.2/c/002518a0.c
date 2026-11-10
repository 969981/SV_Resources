/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002518a0; name: FUN_002518a0
 */


void FUN_002518a0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  size_t sVar4;
  ostream *poVar5;
  bool bVar6;
  char *__s;
  byte *__s_00;
  byte *pbVar7;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined *local_170 [8];
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *plStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined *local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  char local_64 [4];
  
  puVar3 = PTR_DAT_047cbcc8;
  puVar1 = PTR_DAT_047cbcc8 + 0x40;
  local_100[0] = PTR_DAT_047cbcd0 + 0x40;
  local_188 = PTR_DAT_047cbcd0 + 0x18;
  local_180 = 0;
  local_178 = puVar1;
                    /* try { // try from 002518f8 to 00251903 has its CatchHandler @ 00251aa4 */
  std::ios_base::init((ios *)local_100);
  local_70 = 0xffffffff;
  local_188 = puVar3 + 0x18;
  local_100[0] = puVar3 + 0x68;
  local_78 = 0;
  local_178 = puVar1;
                    /* try { // try from 00251924 to 0025192b has its CatchHandler @ 00251a9c */
  std::streambuf::streambuf((streambuf *)local_170);
  local_170[0] = PTR_DAT_047cbcd8 + 0x10;
  plStack_118 = (long *)FUN_01cf7e20();
  puVar1 = PTR_PTR_047cc1a0;
  local_120 = 0;
  local_110 = 0;
  local_108 = 0x18;
  local_130 = 0;
  uStack_128 = 0;
  pbVar7 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  if (pbVar7 != pbVar2) {
    bVar6 = true;
    do {
      if (!bVar6) {
        __s = *(char **)puVar1;
        sVar4 = strlen(__s);
                    /* try { // try from 0025198c to 00251997 has its CatchHandler @ 00251aac */
        std::__put_character_sequence<char,std::char_traits<char>>((ostream *)&local_178,__s,sVar4);
      }
      if ((*pbVar7 & 1) == 0) {
        __s_00 = pbVar7 + 1;
      }
      else {
        __s_00 = *(byte **)(pbVar7 + 0x10);
      }
      local_64[0] = '`';
                    /* try { // try from 002519b0 to 002519eb has its CatchHandler @ 00251b28 */
      poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                         ((ostream *)&local_178,local_64,1);
      sVar4 = strlen((char *)__s_00);
      poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                         (poVar5,(char *)__s_00,sVar4);
      local_64[0] = '`';
      std::__put_character_sequence<char,std::char_traits<char>>(poVar5,local_64,1);
      pbVar7 = pbVar7 + 0x20;
      bVar6 = false;
    } while (pbVar2 != pbVar7);
  }
                    /* try { // try from 002519fc to 00251a07 has its CatchHandler @ 00251a98 */
  FUN_00213290(param_1,(streambuf *)local_170);
  local_188 = puVar3 + 0x18;
  local_178 = puVar3 + 0x40;
  local_100[0] = puVar3 + 0x68;
  local_170[0] = PTR_DAT_047cbcd8 + 0x10;
  if ((local_130 & 1) != 0) {
    (**(code **)(*plStack_118 + 0x18))(plStack_118,local_120,local_130 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)local_170);
  std::iostream::~iostream((iostream *)&local_188);
  std::ios::~ios((ios *)local_100);
  return;
}


