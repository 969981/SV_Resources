/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00250e00; name: FUN_00250e00
 */


void FUN_00250e00(undefined8 param_1,long *param_2,char *param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  size_t sVar4;
  bool bVar5;
  byte *__s;
  byte *pbVar6;
  undefined *local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *plStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined *local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_047cbcc8;
  local_f8[0] = PTR_DAT_047cbcd0 + 0x40;
  local_180 = PTR_DAT_047cbcd0 + 0x18;
  puVar1 = PTR_DAT_047cbcc8 + 0x40;
  local_178 = 0;
  local_170 = puVar1;
                    /* try { // try from 00250e5c to 00250e67 has its CatchHandler @ 00250fc4 */
  std::ios_base::init((ios *)local_f8);
  local_68 = 0xffffffff;
  local_180 = puVar3 + 0x18;
  local_f8[0] = puVar3 + 0x68;
  local_70 = 0;
  local_170 = puVar1;
                    /* try { // try from 00250e88 to 00250e8f has its CatchHandler @ 00250fbc */
  std::streambuf::streambuf((streambuf *)local_168);
  puVar1 = PTR_DAT_047cbcd8;
  local_168[0] = PTR_DAT_047cbcd8 + 0x10;
  plStack_110 = (long *)FUN_01cf7e20();
  local_118 = 0;
  local_108 = 0;
  local_100 = 0x18;
  local_128 = 0;
  uStack_120 = 0;
  pbVar6 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  if (pbVar6 != pbVar2) {
    bVar5 = true;
    do {
      if (!bVar5) {
        sVar4 = strlen(param_3);
                    /* try { // try from 00250ee0 to 00250f17 has its CatchHandler @ 00250fcc */
        std::__put_character_sequence<char,std::char_traits<char>>
                  ((ostream *)&local_170,param_3,sVar4);
      }
      if ((*pbVar6 & 1) == 0) {
        __s = pbVar6 + 1;
      }
      else {
        __s = *(byte **)(pbVar6 + 0x10);
      }
      sVar4 = strlen((char *)__s);
      std::__put_character_sequence<char,std::char_traits<char>>
                ((ostream *)&local_170,(char *)__s,sVar4);
      pbVar6 = pbVar6 + 0x20;
      bVar5 = false;
    } while (pbVar2 != pbVar6);
  }
                    /* try { // try from 00250f28 to 00250f33 has its CatchHandler @ 00250fb8 */
  FUN_00213290(param_1,(streambuf *)local_168);
  local_180 = puVar3 + 0x18;
  local_f8[0] = puVar3 + 0x68;
  local_170 = puVar3 + 0x40;
  local_168[0] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    (**(code **)(*plStack_110 + 0x18))(plStack_110,local_118,local_128 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)local_168);
  std::iostream::~iostream((iostream *)&local_180);
  std::ios::~ios((ios *)local_f8);
  return;
}


