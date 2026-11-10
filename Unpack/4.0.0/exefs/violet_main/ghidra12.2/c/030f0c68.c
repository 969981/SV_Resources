/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f0c68; name: FUN_030f0c68
 */


void FUN_030f0c68(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint local_a8 [2];
  uint local_a0 [2];
  uint local_98;
  uint uStack_94;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined4 local_40;
  uint local_38 [2];
  
  local_a0[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  uVar3 = (uint)param_3;
  local_38[0] = local_a0[0];
  if (local_a0[0] == uVar3 >> 0x16) {
    memset(&local_98,0,0x60);
    local_8c = 0x80000000;
    local_80 = 0;
    local_88 = &DAT_03d7702c;
    local_78 = 0;
    uStack_70 = 0x8000000000000000;
    local_68 = &DAT_03d7702c;
    local_60 = 0;
    local_48 = &DAT_03d7702c;
    local_40 = 0;
    local_58 = 0;
    uStack_50 = 0x8000000000000000;
    iVar1 = FUN_030f0d78(param_1 + 8,local_38,&local_98);
    FUN_030d9a14(&local_98);
    lVar2 = *(long *)(param_1 + 8) + (long)iVar1 * 0x68 + 8;
    local_98 = (uint)param_2 & 0x3fffff;
    FUN_030d9db8(lVar2,&local_98);
    local_98 = uVar3 & 0x3fffff;
    FUN_030d9db8(lVar2,&local_98);
  }
  else {
    local_a8[0] = (uint)(param_3 >> 0x16) & 0x3ff;
    lVar2 = FUN_030f0e0c(param_1,local_a0,local_a8);
    local_98 = (uint)param_2;
    uStack_94 = uVar3;
    FUN_030f2730(lVar2 + 0x20,&local_98);
  }
  return;
}


