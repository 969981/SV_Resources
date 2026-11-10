/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1c630; name: FUN_00c1c630
 */


void FUN_00c1c630(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *local_38;
  
  uVar4 = FUN_00c202f0(param_1,*(undefined4 *)(param_2 + 0x38),param_2,&local_38);
  puVar2 = local_38;
  if ((uVar4 & 1) != 0) {
    *(char *)(local_38 + 1) = (char)*(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)((long)local_38 + 9) = 1;
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) {
      lVar9 = tpidr_el0;
      plVar5 = *(long **)(lVar9 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar9 + 0x30) = DAT_04859430;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
    }
    else {
      plVar5 = (long *)FUN_00c0e238(lVar9,0,0x18);
      *plVar5 = lVar9;
      plVar5[1] = 0;
      plVar5[2] = 0;
      FUN_00c0e13c(lVar9,plVar5,PTR_LAB_047dad90);
    }
    *puVar2 = plVar5;
  }
  plVar5 = (long *)*local_38;
  piVar6 = (int *)plVar5[2];
  if (piVar6 == (int *)0x0) {
    iVar3 = (int)plVar5[1];
    iVar8 = *(int *)((long)plVar5 + 0xc);
LAB_00c1c770:
    FUN_00c11f04(plVar5,(iVar8 - iVar3) + 1);
LAB_00c1c780:
    piVar6 = (int *)plVar5[2];
    iVar1 = *piVar6;
  }
  else {
    iVar1 = *piVar6;
    iVar7 = (int)plVar5[1];
    iVar8 = *(int *)((long)plVar5 + 0xc);
    lVar9 = (long)iVar7;
    if (iVar1 < iVar8) {
      if (iVar7 < iVar1) {
        *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar6 + lVar9 * 2 + 2);
        iVar7 = (int)plVar5[1];
      }
      *(undefined8 *)(piVar6 + (long)iVar7 * 2 + 2) = param_3;
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      *(int *)plVar5[2] = *(int *)plVar5[2] + 1;
      return;
    }
    iVar3 = iVar8;
    if (iVar7 == iVar8) goto LAB_00c1c770;
    if (iVar1 == iVar8) {
      if (*(long **)(piVar6 + lVar9 * 2 + 2) != (long *)0x0 && *plVar5 == 0) {
        (**(code **)(**(long **)(piVar6 + lVar9 * 2 + 2) + 8))();
      }
      goto LAB_00c1c790;
    }
    if (iVar7 < iVar1) {
      *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar6 + lVar9 * 2 + 2);
      goto LAB_00c1c780;
    }
  }
  *piVar6 = iVar1 + 1;
LAB_00c1c790:
  lVar9 = plVar5[1];
  *(int *)(plVar5 + 1) = (int)lVar9 + 1;
  *(undefined8 *)(plVar5[2] + (long)(int)lVar9 * 8 + 8) = param_3;
  return;
}


