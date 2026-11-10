/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ad6e0; name: FUN_002ad6e0
 */


void FUN_002ad6e0(undefined4 param_1,ulong *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_160;
  ulong uStack_158;
  byte *local_150;
  byte local_140 [8];
  size_t local_138;
  byte *local_130;
  undefined *local_128;
  undefined8 uStack_120;
  ulong local_f8;
  ulong uStack_f0;
  byte *local_e8;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  byte *local_98;
  byte *local_90;
  byte local_68 [16];
  undefined8 local_58;
  
  uVar6 = (ulong)local_c8 >> 0x18;
  local_c8 = (char *)CONCAT53((uint5)uVar6 & 0xffffffff00,0x202004);
                    /* try { // try from 002ad718 to 002ad723 has its CatchHandler @ 002adb8c */
  FUN_002adbb0(&local_98,param_1,&local_c8);
                    /* try { // try from 002ad728 to 002ad73b has its CatchHandler @ 002adb2c */
  FUN_002b3540(local_140,local_98,local_90,&DAT_03c886bc,0);
  pbVar5 = local_98;
  puVar2 = PTR_LAB_047cba48;
  if (local_98 != (byte *)0x0) {
    if (local_90 != local_98) {
      do {
        pbVar4 = local_90 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          FUN_0049e790(puVar2,*(undefined8 *)(local_90 + -8));
        }
        local_90 = pbVar4;
      } while (pbVar5 != pbVar4);
    }
    local_90 = pbVar5;
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  if (((ulong)local_c8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b8);
  }
  pbVar5 = (byte *)((ulong)local_140 | 1);
  local_90 = (byte *)(ulong)(local_140[0] >> 1);
  local_98 = pbVar5;
  if ((local_140[0] & 1) != 0) {
    local_90 = (byte *)local_138;
    local_98 = local_130;
  }
  local_c8 = "region";
  uStack_c0 = 6;
                    /* try { // try from 002ad7ec to 002ad7ff has its CatchHandler @ 002adb18 */
  FUN_003959c0(&local_160,&local_98,&local_c8);
  pbVar4 = (byte *)((ulong)&local_160 | 1);
  uVar6 = param_2[1];
  local_98 = pbVar4;
  if ((local_160 & 1) != 0) {
    local_98 = local_150;
  }
  if (uVar6 != 0) {
    uVar7 = *param_2;
    sVar3 = 0;
    if (local_98 != (byte *)0x0) {
      sVar3 = strlen((char *)local_98);
    }
    local_c8 = ": \"";
    uStack_c0 = 3;
    local_128 = &DAT_03c246d6;
    uStack_120 = 1;
                    /* try { // try from 002ad854 to 002ad86b has its CatchHandler @ 002adae8 */
    local_f8 = uVar7;
    uStack_f0 = uVar6;
    local_90 = (byte *)sVar3;
    FUN_00395b50(local_68,&local_98,&local_c8,&local_f8,&local_128);
                    /* try { // try from 002ad86c to 002ad877 has its CatchHandler @ 002adaac */
    FUN_002acaf4(param_3,local_68);
    if ((local_68[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
  }
  local_90 = (byte *)(ulong)(local_140[0] >> 1);
  local_98 = pbVar5;
  if ((local_140[0] & 1) != 0) {
    local_90 = (byte *)local_138;
    local_98 = local_130;
  }
  local_c8 = "zone";
  uStack_c0 = 4;
                    /* try { // try from 002ad8bc to 002ad8cb has its CatchHandler @ 002adaf0 */
  FUN_003959c0(&local_f8,&local_98,&local_c8);
  if (((byte)local_160 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_150);
  }
  local_150 = local_e8;
  uStack_158 = uStack_f0;
  local_160 = local_f8;
  uVar6 = param_2[3];
  local_98 = pbVar4;
  if ((local_f8 & 1) != 0) {
    local_98 = local_e8;
  }
  if (uVar6 != 0) {
    uVar7 = param_2[2];
    sVar3 = 0;
    if (local_98 != (byte *)0x0) {
      sVar3 = strlen((char *)local_98);
    }
    local_c8 = ": \"";
    uStack_c0 = 3;
    local_128 = &DAT_03c246d6;
    uStack_120 = 1;
                    /* try { // try from 002ad930 to 002ad947 has its CatchHandler @ 002adaa8 */
    local_f8 = uVar7;
    uStack_f0 = uVar6;
    local_90 = (byte *)sVar3;
    FUN_00395b50(local_68,&local_98,&local_c8,&local_f8,&local_128);
                    /* try { // try from 002ad948 to 002ad953 has its CatchHandler @ 002adaa4 */
    FUN_002acaf4(param_3,local_68);
    if ((local_68[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
  }
  local_90 = (byte *)(ulong)(local_140[0] >> 1);
  local_98 = pbVar5;
  if ((local_140[0] & 1) != 0) {
    local_90 = (byte *)local_138;
    local_98 = local_130;
  }
  local_c8 = "sub_zone";
  uStack_c0 = 8;
                    /* try { // try from 002ad998 to 002ad9a7 has its CatchHandler @ 002adaec */
  FUN_003959c0(&local_f8,&local_98,&local_c8);
  if ((local_160 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_150);
  }
  local_150 = local_e8;
  uStack_158 = uStack_f0;
  local_160 = local_f8;
  uVar6 = local_160;
  local_160._0_1_ = (byte)local_f8;
  if ((local_f8 & 1) != 0) {
    pbVar4 = local_e8;
  }
  uVar7 = param_2[5];
  bVar1 = (byte)local_160;
  local_160 = uVar6;
  if (uVar7 != 0) {
    uVar6 = param_2[4];
    sVar3 = 0;
    local_98 = pbVar4;
    if (pbVar4 != (byte *)0x0) {
      sVar3 = strlen((char *)pbVar4);
    }
    local_c8 = ": \"";
    uStack_c0 = 3;
    local_128 = &DAT_03c246d6;
    uStack_120 = 1;
                    /* try { // try from 002ada0c to 002ada23 has its CatchHandler @ 002adaa0 */
    local_f8 = uVar6;
    uStack_f0 = uVar7;
    local_90 = (byte *)sVar3;
    FUN_00395b50(local_68,&local_98,&local_c8,&local_f8,&local_128);
                    /* try { // try from 002ada24 to 002ada2f has its CatchHandler @ 002ada9c */
    FUN_002acaf4(param_3,local_68);
    if ((local_68[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
    bVar1 = (byte)local_160;
  }
  if ((bVar1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_150);
  }
  if ((local_140[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_130);
  }
  return;
}


