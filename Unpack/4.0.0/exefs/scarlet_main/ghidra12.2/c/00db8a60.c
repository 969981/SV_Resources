/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db8a60; name: FUN_00db8a60
 */


void FUN_00db8a60(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int *piVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 uVar12;
  float fVar13;
  undefined *local_100;
  undefined1 auStack_f8 [56];
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar1 = param_1 + 0x10;
  FUN_00cf7854(lVar1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x40);
  FUN_00cf76e4(param_1 + 0x58,param_2 + 0x48);
  uVar2 = *(undefined1 *)(param_2 + 0x98);
  lVar7 = *(long *)(param_2 + 0x88);
  uVar12 = *(undefined8 *)(param_2 + 0x90);
  pfVar11 = (float *)(param_1 + 0xbc);
  pfVar11[0] = 0.0;
  pfVar11[1] = 0.0;
  *(undefined1 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar12;
  *(undefined8 *)(param_1 + 0xb0) = 0x3c00000000;
  *(long *)(param_1 + 0x98) = lVar7;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  if (((lVar7 != 0) || (*(long *)(param_1 + 0xa0) != 0)) || (*(long *)(param_1 + 0x50) != 0))
  goto LAB_00db8af0;
  if ((*(long *)(param_1 + 0x60) == 0) || ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0))
  {
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0 &&
         (*(long *)(param_1 + 0x18) != 0)))) &&
       ((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0)) {
      puVar6 = (uint *)(**(code **)(**(long **)(param_1 + 0x18) + 0x70))();
      lVar7 = (long)puVar6 + (ulong)*puVar6;
      goto LAB_00db90a0;
    }
  }
  else {
    lVar7 = FUN_029be138(*(undefined8 *)(param_1 + 0x60));
LAB_00db90a0:
    if (lVar7 != 0) goto LAB_00db8af0;
  }
  puVar3 = PTR_DAT_047de148;
  if ((*(long *)(param_1 + 0x60) == 0) || ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0))
  {
    plVar5 = *(long **)(param_1 + 0xd0);
    if (plVar5 != (long *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      memset(auStack_f8,0,0x98);
      local_100 = puVar3 + 0x10;
      local_c0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_80 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_b8 = PTR_DAT_047e31b0 + 0x10;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar12,&local_100,param_3,param_4,param_5);
      FUN_00ca25d0(&local_b8);
      FUN_00ca246c(&local_100);
    }
    puVar3 = PTR_DAT_047e31b0;
    plVar5 = *(long **)(param_1 + 0xf0);
    if (plVar5 != (long *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      memset(auStack_f8,0,0x98);
      local_100 = PTR_DAT_047de148 + 0x10;
      local_b8 = puVar3 + 0x10;
      local_80 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_c0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar12,&local_100,param_3,param_4,param_5);
      FUN_00ca25d0(&local_b8);
      FUN_00ca246c(&local_100);
    }
    plVar5 = *(long **)(param_1 + 0x110);
    if (plVar5 != (long *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      memset(auStack_f8,0,0x98);
      local_100 = PTR_DAT_047de148 + 0x10;
      local_b8 = puVar3 + 0x10;
      local_80 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_c0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar12,&local_100,param_3,param_4,param_5);
      FUN_00ca25d0(&local_b8);
      FUN_00ca246c(&local_100);
    }
    plVar5 = *(long **)(param_1 + 0x130);
    if (plVar5 != (long *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      memset(auStack_f8,0,0x98);
      local_100 = PTR_DAT_047de148 + 0x10;
      local_b8 = puVar3 + 0x10;
      local_80 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_c0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar12,&local_100,param_3,param_4,param_5);
      FUN_00ca25d0(&local_b8);
      FUN_00ca246c(&local_100);
    }
    plVar5 = *(long **)(param_1 + 0x150);
    if (plVar5 != (long *)0x0) {
      uVar12 = *(undefined8 *)(param_1 + 8);
      memset(auStack_f8,0,0x98);
      local_100 = PTR_DAT_047de148 + 0x10;
      local_b8 = puVar3 + 0x10;
      local_80 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_c0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar12,&local_100,param_3,param_4,param_5);
      FUN_00ca25d0(&local_b8);
      FUN_00ca246c(&local_100);
    }
    plVar5 = *(long **)(param_1 + 0x170);
    if (plVar5 == (long *)0x0) {
      return;
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    memset(auStack_f8,0,0x98);
    local_100 = PTR_DAT_047de148 + 0x10;
    local_b8 = puVar3 + 0x10;
    local_80 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_c0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 1;
    (**(code **)(*plVar5 + 0x10))(plVar5,uVar12,&local_100,param_3,param_4,param_5);
    FUN_00ca25d0(&local_b8);
    FUN_00ca246c(&local_100);
    return;
  }
LAB_00db8af0:
  piVar4 = (int *)FUN_00db90e0(param_2);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 5)) {
    uVar8 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (uint)(*(int *)((long)piVar4 + uVar10) != 0);
    }
  }
  *(uint *)(param_1 + 0xb0) = uVar8;
  piVar4 = (int *)FUN_00db90e0(param_2);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 9)) {
    uVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4];
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = *(undefined4 *)((long)piVar4 + uVar10);
    }
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar9;
  piVar4 = (int *)FUN_00db90e0(param_2);
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
     (uVar10 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar10 == 0)) {
    fVar13 = 4.2949673e+09;
  }
  else {
    fVar13 = (float)(*(int *)((long)piVar4 + uVar10) - 1);
  }
  *(float *)(param_1 + 0xc4) = fVar13;
  if (fVar13 < *(float *)(param_1 + 0xc0)) {
    *(float *)(param_1 + 0xc0) = fVar13;
  }
  if (fVar13 < *pfVar11) {
    *pfVar11 = fVar13;
  }
  plVar5 = *(long **)(param_1 + 0xd0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0xf0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0x110);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0x130);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0x150);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5)
    ;
  }
  plVar5 = *(long **)(param_1 + 0x170);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00db8cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 8),lVar1,param_3,param_4,param_5);
  return;
}


