/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f1128; name: FUN_030f1128
 */


void FUN_030f1128(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint local_a0 [2];
  uint local_98 [2];
  undefined4 local_90 [3];
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_30;
  uint local_2c;
  uint auStack_28 [2];
  
  auStack_28[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  local_2c = (uint)param_3;
  local_30 = (undefined4)param_2;
  if (auStack_28[0] == local_2c >> 0x16) {
    memset(local_90,0,0x60);
    local_84 = 0x80000000;
    local_78 = 0;
    local_80 = &DAT_03d7702c;
    local_70 = 0;
    uStack_68 = 0x8000000000000000;
    local_60 = &DAT_03d7702c;
    local_58 = 0;
    local_40 = &DAT_03d7702c;
    local_38 = 0;
    local_50 = 0;
    uStack_48 = 0x8000000000000000;
    iVar1 = FUN_030f0d78(param_1 + 8,auStack_28,local_90);
    FUN_030d9a14(local_90);
    plVar3 = (long *)(*(long *)(param_1 + 8) + (long)iVar1 * 0x68 + 0x28);
  }
  else {
    local_a0[0] = (uint)(param_3 >> 0x16) & 0x3ff;
    local_98[0] = auStack_28[0];
    lVar2 = FUN_030f0e0c(param_1,local_98,local_a0);
    plVar3 = (long *)(lVar2 + 0x40);
  }
  local_90[0] = 0;
  iVar1 = FUN_030f1224(plVar3,&local_30,local_90);
  lVar2 = *plVar3 + (long)iVar1 * 0xc;
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  return;
}


