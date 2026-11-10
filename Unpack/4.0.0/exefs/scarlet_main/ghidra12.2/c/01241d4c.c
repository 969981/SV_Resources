/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01241d4c; name: FUN_01241d4c
 */


void FUN_01241d4c(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  long *local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined2 local_fc;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 auStack_58 [8];
  long **local_38;
  
  local_108 = (long *)CONCAT71(local_108._1_7_,1);
  FUN_0131b9b4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f60),&local_38,&local_108);
  memset(&local_108,0,0x8f);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60._0_1_ = 0;
  local_60._1_1_ = 0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x1280);
  FUN_01244704(lVar10,&local_108);
  local_38 = &local_108;
  FUN_01243e3c(*(undefined8 *)(*(long *)(lVar10 + 0x78) + 0x17e0),auStack_58,&local_38);
  local_60._0_1_ = 0;
  if (local_68._6_1_ != '\0') {
    local_60._0_1_ = 1;
    plVar6 = local_108;
    while (plVar6 != (long *)0x0) {
      lVar10 = *(long *)(param_1 + 0x20);
      uVar4 = (**(code **)(*plVar6 + 0x98))();
      lVar12 = *(long *)(lVar10 + 0x20);
      plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),uVar4);
      (**(code **)(*plVar6 + 0x2c8))();
      plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x30),uVar4);
      (**(code **)(*plVar6 + 0x568))();
      FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x43,uVar4);
      uVar8 = (ulong)(byte)local_60;
      if (local_68._6_1_ <= (byte)local_60) break;
      local_60._0_1_ = (byte)local_60 + 1;
      plVar6 = (&local_108)[uVar8];
    }
  }
  FUN_0293c488(*(undefined8 *)(param_1 + 0x30));
  FUN_0292fbf4(*(undefined8 *)(param_1 + 0x38));
  lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x68);
  if (0 < *(int *)(lVar10 + 0x28)) {
    lVar12 = 8;
    do {
      if (lVar12 - 8U < 0x1e) {
        uVar11 = *(undefined1 *)(lVar10 + lVar12);
      }
      else {
        uVar11 = 0;
      }
      lVar10 = *(long *)(param_1 + 0x20);
      plVar6 = (long *)FUN_01021c94(*(undefined8 *)
                                     (*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x30),uVar11);
      (**(code **)(*plVar6 + 0x448))();
      FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x23,uVar11);
      lVar9 = lVar12 + -7;
      lVar12 = lVar12 + 1;
      lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 0x68);
    } while (lVar9 < *(int *)(lVar10 + 0x28));
  }
  *(undefined8 *)(lVar10 + 0x1e) = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined4 *)(lVar10 + 0x28) = 0;
  memset(&local_108,0,0x8f);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x1280);
  FUN_01244704(lVar10,&local_108);
  local_38 = &local_108;
  FUN_01243e3c(*(undefined8 *)(*(long *)(lVar10 + 0x78) + 0x17e0),auStack_58,&local_38);
  puVar3 = PTR_DAT_047d3f08;
  puVar2 = PTR_DAT_047d3f00;
  uVar1 = local_60 >> 8;
  local_60 = local_60 & 0xff00;
  if (local_68._6_1_ != '\0') {
    local_60 = CONCAT11((char)uVar1,1);
    plVar6 = local_108;
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)plVar6[5])();
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        uVar7 = FUN_01b07aa4();
        *(undefined8 *)puVar3 = uVar7;
        __cxa_guard_release(puVar2);
      }
      for (; (plVar6 != (long *)0x0 && (plVar6 != (long *)puVar3)); plVar6 = (long *)*plVar6) {
      }
      uVar8 = (ulong)(byte)local_60;
      if (local_68._6_1_ <= (byte)local_60) break;
      local_60 = CONCAT11(local_60._1_1_,(byte)local_60 + 1);
      plVar6 = (&local_108)[uVar8];
    }
  }
  local_100 = 0;
  local_fe = 0;
  local_fc = 0;
  local_108 = (long *)0x5;
  local_38 = (long **)((ulong)local_38 & 0xffffffffffffff00);
  FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),&local_38,&local_108);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
    local_100 = 0;
    local_fe = 0;
    local_fc = 0;
    local_108 = (long *)0x1a;
    local_38 = (long **)((ulong)local_38 & 0xffffffffffffff00);
    FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),&local_38,&local_108);
  }
  if ((**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\0') &&
     (uVar8 = FUN_01499e20(param_1), (uVar8 & 1) != 0)) {
    **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 9;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x210);
  uVar8 = *(ulong *)(lVar12 + 8);
  if (uVar8 < 9999) {
    *(ulong *)(lVar12 + 8) = uVar8 + 1;
  }
  FUN_0129aff0(*(undefined8 *)(lVar10 + 0x18),0x2d,0);
  FUN_02e21a74(*(undefined8 *)(param_1 + 0x40));
  *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x88) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x90) = 0;
  return;
}


