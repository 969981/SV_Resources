/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034e870; name: FUN_0034e870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034e870(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar8;
  byte *pbVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  byte *local_58;
  byte *local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_a0 = CONCAT17(local_a0._7_1_,0x2054534f500a);
  local_58 = (byte *)0x0;
  local_50 = (byte *)0x0;
                    /* try { // try from 0034e8b8 to 0034e8c3 has its CatchHandler @ 0034eb30 */
  FUN_0034e1b4(&local_58,&local_a0);
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
                    /* try { // try from 0034e8dc to 0034e8eb has its CatchHandler @ 0034eb28 */
  FUN_0034e360(param_2,1,&local_58);
  if (param_3 != 0) {
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (uVar9 != 0) {
      puVar11 = *(undefined8 **)(param_2 + 0x30);
      uVar10 = 0;
      do {
        iVar6 = strcmp((char *)*puVar11,"Content-Type");
        if (iVar6 == 0) goto LAB_0034e988;
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 2;
      } while (uVar10 < uVar9);
    }
    local_90 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar4 = s_Content_Type__text_plain_03be0494._0_8_;
    uVar2 = CONCAT62(s_Content_Type__text_plain_03be0494._10_6_,
                     s_Content_Type__text_plain_03be0494._8_2_);
    uStack_98 = _UNK_03cab348;
    local_a0 = _DAT_03cab340;
    uVar3 = CONCAT26(s_Content_Type__text_plain_03be0494._16_2_,
                     s_Content_Type__text_plain_03be0494._10_6_);
    *(undefined8 *)(local_90 + 0x12) = s_Content_Type__text_plain_03be0494._18_8_;
    *(undefined8 *)(local_90 + 10) = uVar3;
    *(undefined8 *)(local_90 + 8) = uVar2;
    *(undefined8 *)local_90 = uVar4;
    local_90[0x1a] = '\0';
                    /* try { // try from 0034e964 to 0034e96f has its CatchHandler @ 0034eaf4 */
    FUN_0034e1b4(&local_58,&local_a0);
    if ((local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
LAB_0034e988:
    local_68 = PTR_FUN_047cc7f8;
                    /* try { // try from 0034e994 to 0034e9af has its CatchHandler @ 0034eb00 */
    local_70 = param_4;
    FUN_00391b20(&local_a0,"Content-Length: %lu\r\n",0x15,&local_70,1);
                    /* try { // try from 0034e9b0 to 0034e9bb has its CatchHandler @ 0034eafc */
    FUN_0034e1b4(&local_58,&local_a0);
    if ((local_a0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90);
    }
  }
  local_a0 = CONCAT44(local_a0._4_4_,0xa0d04);
                    /* try { // try from 0034e9e8 to 0034e9f3 has its CatchHandler @ 0034eb24 */
  FUN_0034e1b4(&local_58,&local_a0);
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
                    /* try { // try from 0034ea10 to 0034ea23 has its CatchHandler @ 0034eb1c */
  FUN_002b3540(&local_70,local_58,local_50,&DAT_03c886bc,0);
  if (param_3 != 0) {
                    /* try { // try from 0034ea2c to 0034ea37 has its CatchHandler @ 0034eaf8 */
    local_a0 = param_3;
    uStack_98 = param_4;
    FUN_00395dc0(&local_70,&local_a0);
  }
  puVar1 = (undefined *)(local_70 >> 1 & 0x7f);
  uVar9 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    puVar1 = local_68;
    uVar9 = local_60;
  }
                    /* try { // try from 0034ea58 to 0034ea5f has its CatchHandler @ 0034eb08 */
  FUN_003676d0(param_1,uVar9,puVar1);
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  pbVar5 = local_58;
  puVar1 = PTR_LAB_047cba48;
  if (local_58 != (byte *)0x0) {
    if (local_50 != local_58) {
      pbVar8 = local_50;
      do {
        pbVar7 = pbVar8 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(pbVar8 + -8));
        }
        pbVar8 = pbVar7;
      } while (pbVar5 != pbVar7);
    }
    local_50 = pbVar5;
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  return;
}


