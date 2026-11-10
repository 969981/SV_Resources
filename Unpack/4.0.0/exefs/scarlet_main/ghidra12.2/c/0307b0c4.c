/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307b0c4; name: FUN_0307b0c4
 */


void FUN_0307b0c4(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  
  lVar7 = *(long *)(param_1 + 0x38);
  lVar2 = lVar7 + (long)*param_2 * 0x100;
  plVar13 = (long *)(lVar2 + 0xd0);
  lVar12 = *plVar13;
  piVar14 = (int *)(lVar2 + 0xd8);
  iVar9 = *piVar14;
  uVar15 = (ulong)(iVar9 - 1);
  if (0 < iVar9) {
    while( true ) {
      lVar7 = lVar7 + (long)*(int *)(lVar12 + (-(uVar15 >> 0x1f & 1) & 0xfffffff000000000 |
                                              (uVar15 & 0xffffffff) << 4)) * 0x100;
      plVar6 = (long *)(lVar7 + 0xd0);
      lVar12 = FUN_030802ac(plVar6,param_2);
      if (lVar12 == 0) {
        uVar8 = 0xffffffff00000000;
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar12 + 4);
        uVar8 = (lVar12 - *(long *)(lVar7 + 0xe0)) * 0x20000000;
      }
      if ((*(uint *)(lVar7 + 0xe8) < (uint)(uVar8 >> 0x20)) ||
         (lVar7 = *(long *)(lVar7 + 0xe0) + ((long)uVar8 >> 0x20) * 8,
         *(int *)(lVar7 + 4) != (int)(uVar10 | uVar8))) {
        lVar7 = FUN_030802ac(plVar6,*plVar6 + ((long)((uVar10 | uVar8) << 0x20) >> 0x1c));
      }
      FUN_0308031c(plVar6,lVar7);
      lVar12 = *plVar13;
      uVar15 = uVar15 + 0xffffffff;
      if ((int)uVar15 < 0) break;
      lVar7 = *(long *)(param_1 + 0x38);
    }
    iVar9 = *piVar14;
  }
  if (iVar9 != 0) {
    lVar7 = lVar12 + (long)iVar9 * 0x10;
    do {
      plVar6 = *(long **)(lVar7 + -8);
      lVar7 = lVar7 + -0x10;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (lVar7 != lVar12);
  }
  *piVar14 = 0;
  uVar3 = *(uint *)(lVar2 + 0xdc);
  if ((-1 < (int)uVar3) && (*plVar13 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*plVar13,(ulong)uVar3 << 4);
  }
  *plVar13 = 0;
  *(uint *)(lVar2 + 0xdc) = 0x80000000;
  lVar7 = *(long *)(lVar2 + 0xe0);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(long *)(lVar2 + 0xe0) = (long)&DAT_03d7702c;
    *(undefined4 *)(lVar2 + 0xe8) = 0;
  }
  return;
}


