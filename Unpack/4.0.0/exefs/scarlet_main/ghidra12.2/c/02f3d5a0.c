/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f3d5a0; name: FUN_02f3d5a0
 */


void FUN_02f3d5a0(long param_1,ulong param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  param_2 = param_2 & 0xffffff;
  uVar3 = (undefined1)param_3;
  if (param_2 == 0xffffff) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + param_2 * 0xc0 + 0xb0);
  }
  lVar2 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar5 = (long *)0x0;
    iVar8 = -1;
    bVar4 = false;
  }
  else {
    lVar9 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar2 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar6;
      iVar7 = DAT_0486b380;
      iVar8 = (int)*(undefined8 *)(lVar6 + lVar9 * 8 + 1000);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar2 + 0x1000b8) = lVar6;
      }
    }
    else {
      iVar8 = (int)*(undefined8 *)(lVar6 + lVar9 * 8 + 1000);
      iVar7 = DAT_0486b380;
    }
    *(long *)(lVar6 + (long)iVar7 * 8 + 1000) = (long)(iVar8 + 1);
    plVar5 = *(long **)(param_1 + 0x800);
    bVar4 = iVar8 == 0;
  }
  bVar4 = (bool)(bVar4 & plVar5 != (long *)0x0);
  if (((*(char *)(param_1 + 0x999) != '\0') || (bVar4)) &&
     (local_68 = 0x2002000020, uStack_60 = uVar10, local_58 = uVar3, bVar4)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
  }
  plVar5 = *(long **)(param_1 + 0x698);
  if (plVar5 == (long *)0x0) goto LAB_02f3d768;
  lVar6 = (long)*(int *)(*(long *)(param_1 + 0x38) + param_2 * 0xc0 + 0x80);
  if (param_3 == 2) {
    lVar6 = *(long *)(param_1 + 0x150) + lVar6 * 0x80;
    iVar7 = *(int *)(lVar6 + 0x4c);
    if (iVar7 != 0 && iVar7 != 0x7fffffff) {
      *(undefined1 *)
       (plVar5[0x71] + (long)*(int *)(*(long *)(*plVar5 + 0x38) + param_2 * 0xc0 + 0x80) * 0x20 +
       0xe) = 0;
      uVar1 = *(undefined4 *)(lVar6 + 0x48);
      uVar10 = 1;
      goto LAB_02f3d740;
    }
  }
  else if ((param_3 == 1) &&
          (lVar6 = *(long *)(param_1 + 0x150) + lVar6 * 0x80, iVar7 = *(int *)(lVar6 + 0x4c),
          iVar7 == 0x7fffffff || iVar7 == 0)) {
    *(undefined1 *)
     (plVar5[0x71] + (long)*(int *)(*(long *)(*plVar5 + 0x38) + param_2 * 0xc0 + 0x80) * 0x20 + 0xe)
         = 0;
    uVar1 = *(undefined4 *)(lVar6 + 0x48);
    uVar10 = 0;
LAB_02f3d740:
    FUN_02f35f08(param_1,uVar1,uVar10);
  }
  *(undefined1 *)
   ((*(long **)(param_1 + 0x698))[0x71] +
    (long)*(int *)(*(long *)(**(long **)(param_1 + 0x698) + 0x38) + param_2 * 0xc0 + 0x80) * 0x20 +
   0xe) = uVar3;
LAB_02f3d768:
  if (iVar8 != -1) {
    lVar9 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar2 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar6;
    }
    *(long *)(lVar6 + lVar9 * 8 + 1000) = (long)iVar8;
  }
  return;
}


