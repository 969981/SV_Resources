/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f0318; name: FUN_017f0318
 */


void FUN_017f0318(long param_1,short *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  
  iVar5 = (**(code **)(*(long *)*param_3 + 0x98))();
  iVar6 = (**(code **)(*(long *)param_3[1] + 0x98))();
  *(int *)(param_2 + 4) = iVar5;
  puVar13 = (undefined8 *)(param_1 + 0x30);
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,iVar5);
  param_2[6] = sVar3;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x150))((long *)*puVar13,iVar5);
  param_2[7] = sVar3;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x60))((long *)*puVar13,iVar5);
  *(undefined1 *)(param_2 + 8) = uVar2;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x68))((long *)*puVar13,iVar5);
  *(undefined1 *)((long)param_2 + 0x11) = uVar2;
  *(int *)(param_2 + 0x10) = iVar6;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,iVar6);
  param_2[0x12] = sVar3;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x150))((long *)*puVar13,iVar6);
  param_2[0x13] = sVar3;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x60))((long *)*puVar13,iVar6);
  *(undefined1 *)(param_2 + 0x14) = uVar2;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x68))((long *)*puVar13,iVar6);
  *(undefined1 *)((long)param_2 + 0x29) = uVar2;
  iVar7 = (**(code **)(*(long *)*puVar13 + 0x238))((long *)*puVar13,iVar5);
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      iVar8 = (**(code **)(*(long *)*puVar13 + 0x240))((long *)*puVar13,iVar5,iVar9);
      if ((iVar8 != iVar5) &&
         (uVar10 = (**(code **)(*(long *)*puVar13 + 0x88))((long *)*puVar13,iVar8),
         (uVar10 & 1) == 0)) goto LAB_017f049c;
      iVar9 = iVar9 + 1;
    } while (iVar7 != iVar9);
  }
  iVar8 = 0;
LAB_017f049c:
  *(int *)(param_2 + 10) = iVar8;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,iVar8);
  param_2[0xc] = sVar3;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x150))((long *)*puVar13,iVar8);
  param_2[0xd] = sVar3;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x60))((long *)*puVar13,iVar8);
  *(undefined1 *)(param_2 + 0xe) = uVar2;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x68))((long *)*puVar13,iVar8);
  *(undefined1 *)((long)param_2 + 0x1d) = uVar2;
  iVar5 = (**(code **)(*(long *)*puVar13 + 0x238))((long *)*puVar13,iVar6);
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      iVar9 = (**(code **)(*(long *)*puVar13 + 0x240))((long *)*puVar13,iVar6,iVar7);
      if ((iVar9 != iVar6) &&
         (uVar10 = (**(code **)(*(long *)*puVar13 + 0x88))((long *)*puVar13,iVar9),
         (uVar10 & 1) == 0)) goto LAB_017f0570;
      iVar7 = iVar7 + 1;
    } while (iVar5 != iVar7);
  }
  iVar9 = 0;
LAB_017f0570:
  *(int *)(param_2 + 0x16) = iVar9;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,iVar9);
  param_2[0x18] = sVar3;
  sVar3 = (**(code **)(*(long *)*puVar13 + 0x150))((long *)*puVar13,iVar9);
  param_2[0x19] = sVar3;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x60))((long *)*puVar13,iVar9);
  *(undefined1 *)(param_2 + 0x1a) = uVar2;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x68))((long *)*puVar13,iVar9);
  *(undefined1 *)((long)param_2 + 0x35) = uVar2;
  sVar3 = *(short *)(param_3 + 2);
  plVar15 = (long *)*param_3;
  *param_2 = sVar3;
  sVar4 = (**(code **)(*(long *)*puVar13 + 0x360))((long *)*puVar13,sVar3);
  param_2[1] = sVar4;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x308))((long *)*puVar13,sVar3);
  *(undefined1 *)(param_2 + 2) = uVar2;
  uVar2 = (**(code **)(*(long *)*puVar13 + 0x318))((long *)*puVar13,sVar3);
  *(undefined1 *)((long)param_2 + 5) = uVar2;
  plVar14 = plVar15 + 5;
  plVar11 = (long *)(**(code **)*plVar14)(plVar14);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar5 != 0))
  {
    uVar12 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar12;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar11 == (long *)0x0) {
      return;
    }
    if (plVar11 == (long *)PTR_DAT_047d3f08) break;
    plVar11 = (long *)*plVar11;
  }
  uVar10 = (**(code **)(*plVar15 + 0x5b0))();
  lVar1 = 0x6ee;
  if ((uVar10 & 1) == 0) {
    lVar1 = 0x6e8;
  }
  if (sVar3 != 0x388) {
    return;
  }
  if (*(short *)((long)plVar14 + lVar1) == 0x3f3) {
    uVar2 = FUN_017f0700(0x388,plVar15);
    *(undefined1 *)(param_2 + 2) = uVar2;
    return;
  }
  return;
}


