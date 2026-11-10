/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349dde0; name: FUN_0349dde0
 */


void FUN_0349dde0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  uint local_1564;
  undefined4 local_1560 [66];
  undefined4 local_1458;
  char local_1454 [268];
  undefined4 local_1348;
  undefined1 local_1344;
  undefined4 local_1238;
  undefined1 local_1234;
  undefined4 local_1128;
  undefined1 local_1124;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_f08;
  undefined1 local_f04;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_ce8;
  undefined1 local_ce4;
  undefined4 local_bd8;
  undefined1 local_bd4;
  undefined4 local_ac8;
  undefined1 local_ac4;
  undefined4 local_9b8;
  undefined1 local_9b4;
  undefined4 local_8a8;
  undefined1 local_8a4;
  undefined4 local_798;
  undefined1 local_794;
  undefined4 local_688;
  undefined1 local_684;
  undefined4 local_578;
  undefined1 local_574;
  undefined4 local_468;
  undefined1 local_464;
  undefined4 local_358;
  undefined1 local_354;
  undefined4 local_248;
  undefined1 local_244;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_28;
  undefined1 local_24;
  
  *param_2 = 0;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = -0x19eeceb6;
    *param_1 = -0x19eeceb6;
  }
  local_1458 = 0;
  local_1454[0] = '\0';
  local_1348 = 0;
  local_1344 = 0;
  local_1238 = 0;
  local_1234 = 0;
  local_1128 = 0;
  local_1124 = 0;
  local_1018 = 0;
  local_1014 = 0;
  local_f08 = 0;
  local_f04 = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_ac8 = 0;
  local_ac4 = 0;
  local_9b8 = 0;
  local_9b4 = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_798 = 0;
  local_794 = 0;
  local_688 = 0;
  local_684 = 0;
  local_578 = 0;
  local_574 = 0;
  local_468 = 0;
  local_464 = 0;
  local_358 = 0;
  local_354 = 0;
  local_248 = 0;
  local_244 = 0;
  local_138 = 0;
  local_134 = 0;
  local_28 = 0;
  local_24 = 0;
  local_1564 = 0x14;
  iVar2 = FUN_03448c10(iVar2,&local_1564,local_1560);
  if (iVar2 == 1) {
    if (local_1564 != 0) {
      uVar3 = 0;
      pcVar4 = local_1454;
      do {
        if (*pcVar4 != '\0') goto LAB_0349df0c;
        uVar3 = uVar3 + 1;
        pcVar4 = pcVar4 + 0x110;
      } while (local_1564 != uVar3);
      uVar3 = (ulong)local_1564;
LAB_0349df0c:
      uVar1 = 0;
      if ((uint)uVar3 != local_1564) {
        uVar1 = (uint)uVar3;
      }
      *param_2 = local_1560[(ulong)uVar1 * 0x44];
    }
  }
  return;
}


