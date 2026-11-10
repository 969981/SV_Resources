/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0ba70; name: FUN_00d0ba70
 */


undefined * FUN_00d0ba70(undefined1 param_1 [16],long param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_24;
  int local_8;
  int iStack_4;
  
  lVar7 = *(long *)(param_2 + 0x210);
  if (*(long *)(lVar7 + 0xa8) == *(long *)(lVar7 + 0xa0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar6 = PTR_DAT_047d3e30, iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar6 = PTR_DAT_047d3e30;
    }
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x98);
    fVar10 = (float)iVar5;
    fVar9 = (fVar10 / (float)*(undefined8 *)(lVar7 + 0x60)) *
            (param_1._0_4_ - (float)*(undefined8 *)(lVar7 + 0x40));
    if (0.0 <= fVar9) {
      fVar12 = (float)*(int *)(lVar7 + 0x9c);
      iStack_4 = -1;
      fVar11 = (fVar12 / (float)*(undefined8 *)(lVar7 + 0x68)) *
               (param_1._8_4_ - (float)*(undefined8 *)(lVar7 + 0x48));
      bVar3 = false;
      bVar4 = false;
      if (fVar11 < fVar12) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar9) && !NAN(fVar10)) {
          bVar3 = fVar9 < fVar10;
          bVar4 = false;
        }
      }
      if ((bVar3 != bVar4) && (0.0 <= fVar11)) {
        iStack_4 = (int)fVar9 + iVar5 * (int)fVar11;
      }
    }
    else {
      iStack_4 = -1;
    }
    iVar5 = *(int *)(lVar7 + 0x9c) * iVar5;
    local_24 = iVar5 + -1;
    local_8 = 0;
    piVar1 = &iStack_4;
    if (iVar5 <= iStack_4) {
      piVar1 = &local_24;
    }
    piVar2 = &local_8;
    if (-1 < iStack_4) {
      piVar2 = piVar1;
    }
    if (*(long *)(lVar7 + 0xe0) - (long)*(long **)(lVar7 + 0xd8) == 0x20) {
      uVar8 = (ulong)*(byte *)(*(long *)(**(long **)(lVar7 + 0xd8) + 0x20) + (long)*piVar2);
    }
    else {
      uVar8 = 0;
    }
    puVar6 = (undefined *)(*(long *)(lVar7 + 0xa0) + uVar8 * 0x20);
  }
  return puVar6;
}


