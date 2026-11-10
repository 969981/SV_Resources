/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124eb70; name: FUN_0124eb70
 */


void FUN_0124eb70(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  
  plVar4 = (long *)(**(code **)param_2[5])();
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0))
  {
    uVar6 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar6;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (plVar4 == (long *)PTR_DAT_047d3f08) break;
    plVar4 = (long *)*plVar4;
  }
  iVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar2 = param_2[0xe3];
  puVar5 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50
                                 ),iVar3);
  if (puVar5 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar5;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
    if (4 < (uVar1 & 0xff)) {
      return;
    }
  }
  uVar9 = (ulong)uVar1 & 0xff;
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x250);
  piVar7 = (int *)(lVar8 + uVar9 * 0x60 + 0x10);
  if ((((*piVar7 == iVar3) || (piVar7 = (int *)(lVar8 + uVar9 * 0x60 + 0x20), *piVar7 == iVar3)) ||
      (piVar7 = (int *)(lVar8 + uVar9 * 0x60 + 0x30), *piVar7 == iVar3)) ||
     (((piVar7 = (int *)(lVar8 + uVar9 * 0x60 + 0x40), *piVar7 == iVar3 ||
       (piVar7 = (int *)(lVar8 + uVar9 * 0x60 + 0x50), *piVar7 == iVar3)) ||
      (piVar7 = (int *)(lVar8 + uVar9 * 0x60 + 0x60), *piVar7 == iVar3)))) {
    *(short *)((long)piVar7 + 6) = (short)lVar2;
    return;
  }
  return;
}


