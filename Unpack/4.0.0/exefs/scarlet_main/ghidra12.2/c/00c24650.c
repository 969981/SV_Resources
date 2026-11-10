/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c24650; name: FUN_00c24650
 */


long FUN_00c24650(long *param_1,int param_2,undefined1 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  
  plVar4 = param_1 + 1;
  plVar12 = (long *)*plVar4;
  if (plVar12 != (long *)0x0) {
    plVar4 = param_1 + 1;
    do {
      if (param_2 < (int)plVar12[4]) {
        plVar6 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar6 == (long *)0x0) {
          goto LAB_00c246dc;
        }
      }
      else {
        if (param_2 <= (int)plVar12[4]) goto LAB_00c246dc;
        plVar4 = plVar12 + 1;
        plVar6 = (long *)*plVar4;
        if (plVar6 == (long *)0x0) goto LAB_00c246dc;
      }
      plVar12 = plVar6;
    } while( true );
  }
  plVar12 = plVar4;
LAB_00c246dc:
  lVar7 = *plVar4;
  if (lVar7 == 0) {
    lVar7 = tpidr_el0;
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,8);
    *(int *)(puVar3 + 4) = param_2;
    plVar6 = puVar3 + 5;
    *plVar6 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[2] = plVar12;
    *puVar3 = 0;
    puVar3[1] = 0;
    *plVar4 = (long)puVar3;
    if (*(long *)*param_1 == 0) {
      puVar5 = puVar3;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar5 = (undefined8 *)*plVar4;
    }
    FUN_010108e0(param_1[1],puVar5);
    param_1[2] = param_1[2] + 1;
    puVar3[7] = param_5;
    *(undefined1 *)(puVar3 + 6) = param_3;
    *(undefined1 *)((long)puVar3 + 0x31) = 1;
    lVar9 = param_1[3];
    if (lVar9 == 0) {
      plVar4 = *(long **)(lVar7 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
    }
    else {
      plVar4 = (long *)FUN_00c0e238(lVar9,0,0x18);
      *plVar4 = lVar9;
      plVar4[1] = 0;
      plVar4[2] = 0;
      FUN_00c0e13c(lVar9,plVar4,PTR_LAB_047dad90);
    }
    *plVar6 = (long)plVar4;
  }
  else {
    plVar6 = (long *)(lVar7 + 0x28);
    *(undefined8 *)(lVar7 + 0x38) = param_5;
  }
  lVar7 = *plVar6;
  piVar8 = *(int **)(lVar7 + 0x10);
  if (piVar8 != (int *)0x0) {
    iVar2 = *(int *)(lVar7 + 8);
    if (iVar2 < *piVar8) {
      *(int *)(lVar7 + 8) = iVar2 + 1;
      if (*(long *)(piVar8 + (long)iVar2 * 2 + 2) != 0) {
        return *(long *)(piVar8 + (long)iVar2 * 2 + 2);
      }
    }
  }
  lVar7 = (**(code **)(*param_4 + 0x20))(param_4,param_1[3]);
  plVar6 = (long *)*plVar6;
  piVar8 = (int *)plVar6[2];
  if (piVar8 == (int *)0x0) {
    iVar2 = (int)plVar6[1];
    iVar11 = *(int *)((long)plVar6 + 0xc);
LAB_00c248cc:
    FUN_00c11f04(plVar6,(iVar11 - iVar2) + 1);
LAB_00c248dc:
    piVar8 = (int *)plVar6[2];
    iVar1 = *piVar8;
  }
  else {
    iVar1 = *piVar8;
    iVar10 = (int)plVar6[1];
    iVar11 = *(int *)((long)plVar6 + 0xc);
    lVar9 = (long)iVar10;
    if (iVar1 < iVar11) {
      if (iVar10 < iVar1) {
        *(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar8 + lVar9 * 2 + 2);
        iVar10 = (int)plVar6[1];
      }
      *(long *)(piVar8 + (long)iVar10 * 2 + 2) = lVar7;
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      *(int *)plVar6[2] = *(int *)plVar6[2] + 1;
      return lVar7;
    }
    iVar2 = iVar11;
    if (iVar10 == iVar11) goto LAB_00c248cc;
    if (iVar1 == iVar11) {
      if ((*(long **)(piVar8 + lVar9 * 2 + 2) != (long *)0x0) && (*plVar6 == 0)) {
        (**(code **)(**(long **)(piVar8 + lVar9 * 2 + 2) + 8))();
      }
      goto LAB_00c248ec;
    }
    if (iVar10 < iVar1) {
      *(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar8 + lVar9 * 2 + 2);
      goto LAB_00c248dc;
    }
  }
  *piVar8 = iVar1 + 1;
LAB_00c248ec:
  lVar9 = plVar6[1];
  *(int *)(plVar6 + 1) = (int)lVar9 + 1;
  *(long *)(plVar6[2] + (long)(int)lVar9 * 8 + 8) = lVar7;
  return lVar7;
}


