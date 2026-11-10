/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f3705c; name: FUN_02f3705c
 */


void FUN_02f3705c(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined2 local_8c0;
  undefined4 local_8bc;
  undefined8 local_8b8;
  undefined1 local_8b0;
  undefined2 local_8af;
  undefined1 local_8ad;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 *local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  
  if ((param_3 & 0xffffff) == 0xffffff) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0xb0);
  }
  lVar1 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar5 = (long *)0x0;
    iVar9 = -1;
    bVar3 = false;
  }
  else {
    lVar10 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar1 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar6;
      iVar8 = DAT_0486b380;
      iVar9 = (int)*(undefined8 *)(lVar6 + lVar10 * 8 + 1000);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar1 + 0x1000b8) = lVar6;
      }
    }
    else {
      iVar9 = (int)*(undefined8 *)(lVar6 + lVar10 * 8 + 1000);
      iVar8 = DAT_0486b380;
    }
    *(long *)(lVar6 + (long)iVar8 * 8 + 1000) = (long)(iVar9 + 1);
    plVar5 = *(long **)(param_1 + 0x800);
    bVar3 = iVar9 == 0;
  }
  bVar3 = (bool)(bVar3 & plVar5 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar3)) {
    local_870 = (undefined8 *)0x3302000030;
    uStack_850 = param_2[2];
    local_848 = param_2[3];
    local_860 = *param_2;
    local_858 = param_2[1];
    if (bVar3) {
      local_868 = uVar11;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_870);
    }
  }
  local_8bc = 0;
  local_870 = &local_860;
  local_8b8 = 0;
  local_868 = 0x8000020000000000;
  local_8c0 = 0xffff;
  local_8b0 = 1;
  local_8ad = 0;
  local_8d0 = 0;
  uStack_8c8 = 0;
  uStack_888 = param_2[1];
  local_890 = *param_2;
  uStack_878 = param_2[3];
  uStack_880 = param_2[2];
  local_8af = 0x208;
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
            (*(long **)(param_1 + 0x4c0),&local_8d0,&local_870);
  uVar4 = FUN_02f3b84c(param_1,param_3 & 0xffffffff,local_870,local_868 & 0xffffffff);
  if (0 < (int)uVar4) {
    lVar6 = 0;
    do {
      if ((*(byte *)(*(long *)(param_1 + 0x38) +
                     ((ulong)*(uint *)((long)local_870 + lVar6) & 0xffffff) * 0xc0 + 0x54) & 9) == 0
         ) {
        FUN_02f35f08(param_1,(ulong)*(uint *)((long)local_870 + lVar6),0);
      }
      lVar6 = lVar6 + 4;
    } while ((ulong)uVar4 * 4 != lVar6);
  }
  uVar2 = local_868;
  uVar7 = (ulong)local_868._4_4_;
  local_868 = (ulong)local_868._4_4_ << 0x20;
  if ((-1 < (long)uVar2) && (local_870 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_870,uVar7 << 2);
  }
  if (iVar9 != -1) {
    lVar10 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar1 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar6;
    }
    *(long *)(lVar6 + lVar10 * 8 + 1000) = (long)iVar9;
  }
  return;
}


