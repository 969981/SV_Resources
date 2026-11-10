/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b68ecc; name: FUN_02b68ecc
 */


undefined8 FUN_02b68ecc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **local_b8;
  undefined **local_b0;
  long local_a8;
  undefined1 *local_a0;
  long local_98;
  long lStack_90;
  undefined1 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined **local_58;
  long local_50;
  undefined1 *local_48;
  
  local_50 = 0;
  local_48 = (undefined1 *)0x0;
  local_60 = 0;
  local_58 = (undefined **)0x0;
  lVar6 = param_1[1];
  nn::os::LockMutex((MutexType *)(lVar6 + 0x80));
  lVar4 = *(long *)(lVar6 + 8);
  if (lVar4 == *(long *)(lVar6 + 0x10)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      plVar1 = (long *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x30;
      lVar7 = lVar7 + *plVar1 + 4;
    } while (*(long *)(lVar6 + 0x10) != lVar4);
  }
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x80));
  ppuVar5 = (undefined **)*param_1;
  local_68 = lVar7;
  uVar2 = (**(code **)(*ppuVar5 + 0x10))(ppuVar5,lVar7,8);
  local_a0 = &DAT_00000008;
  local_b8 = (undefined **)0x0;
  local_b0 = ppuVar5;
  local_a8 = lVar7;
  FUN_021e34b4(&local_60,uVar2);
  local_58 = local_b0;
  local_50 = local_a8;
  local_48 = local_a0;
  FUN_021e34b4(&local_b8,0);
  lVar6 = local_60;
  lVar4 = local_68;
  if (local_60 == 0) {
    uVar2 = 0;
  }
  else {
    local_98 = local_60;
    lStack_90 = local_68;
    local_a0 = PTR_DAT_047dcc78 + 0x10;
    local_a8 = 0;
    local_80 = &DAT_03d626d4;
    uStack_78 = 0x7f;
    local_88 = 0;
    local_70 = 0;
    local_b8 = &PTR_LAB_045a7a08;
    local_b0 = &PTR_LAB_045a7958;
    uVar3 = FUN_017624e0(param_1[1],&local_b8);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) {
      local_60 = 0;
      FUN_021e34b4(param_1 + 3,lVar6);
      uVar2 = 1;
      param_1[4] = local_58;
      param_1[2] = lVar4;
      param_1[5] = local_50;
      param_1[6] = local_48;
    }
  }
  FUN_021e34b4(&local_60,0);
  return uVar2;
}


