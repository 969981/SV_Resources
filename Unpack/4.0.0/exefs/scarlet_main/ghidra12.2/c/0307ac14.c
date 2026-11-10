/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307ac14; name: FUN_0307ac14
 */


void FUN_0307ac14(long param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  
  lVar9 = *(long *)(param_1 + 0x38);
  lVar1 = lVar9 + (long)*param_2 * 0x100;
  plVar13 = (long *)(lVar1 + 0xb0);
  piVar14 = (int *)*plVar13;
  iVar4 = *(int *)(lVar1 + 0xb8);
  if (iVar4 == 0) {
LAB_0307ad48:
    *(int *)(lVar1 + 0xb8) = 0;
    uVar3 = *(uint *)(lVar1 + 0xbc);
    if ((-1 < (int)uVar3) && (*plVar13 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*plVar13,(ulong)uVar3 << 3);
    }
    *plVar13 = 0;
    *(uint *)(lVar1 + 0xbc) = 0x80000000;
    lVar9 = *(long *)(lVar1 + 0xc0);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar9,0);
      *(long *)(lVar1 + 0xc0) = (long)&DAT_03d7702c;
      *(undefined4 *)(lVar1 + 200) = 0;
    }
    return;
  }
  piVar2 = piVar14 + (long)iVar4 * 2;
  do {
    iVar4 = piVar14[1];
    lVar9 = lVar9 + (long)*piVar14 * 0x100;
    plVar8 = (long *)(lVar9 + 0xb0);
    lVar7 = FUN_03080134(plVar8,param_2);
    if (lVar7 == 0) {
      uVar10 = 0xffffffff00000000;
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (ulong)*(uint *)(lVar7 + 4);
      uVar10 = (lVar7 - *(long *)(lVar9 + 0xc0)) * 0x20000000;
    }
    if (*(uint *)(lVar9 + 200) < (uint)(uVar10 >> 0x20)) {
LAB_0307acd0:
      lVar9 = FUN_03080134(plVar8,*plVar8 + ((long)((uVar12 | uVar10) << 0x20) >> 0x1d));
    }
    else {
      lVar9 = *(long *)(lVar9 + 0xc0) + ((long)uVar10 >> 0x20) * 8;
      if (*(int *)(lVar9 + 4) != (int)(uVar12 | uVar10)) goto LAB_0307acd0;
    }
    FUN_030801a4(plVar8,lVar9);
    plVar11 = (long *)(*(long *)(param_1 + 0x48) + (long)iVar4 * 0x18);
    *(undefined1 *)(plVar11 + 2) = 1;
    plVar8 = (long *)*plVar11;
    *plVar11 = 0;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar11 = plVar8 + 2;
      do {
        lVar9 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
    piVar14 = piVar14 + 2;
    if (piVar14 == piVar2) goto LAB_0307ad48;
    lVar9 = *(long *)(param_1 + 0x38);
  } while( true );
}


