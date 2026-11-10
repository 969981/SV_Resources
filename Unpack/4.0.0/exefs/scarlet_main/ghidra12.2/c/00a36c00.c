/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a36c00; name: FUN_00a36c00
 */


void FUN_00a36c00(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  short sVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar2 = *(long **)(lVar8 + 0x1c8);
  plVar4 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar4 == plVar2) {
      return;
    }
    lVar8 = *plVar4;
    uVar7 = FUN_00a371b8(lVar8 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar7 & 1) == 0);
  bVar5 = *(int *)(param_1 + 0x10) != -1;
  uVar9 = 2;
  if (!bVar5) {
    uVar9 = 1;
  }
  uVar1 = (uint)bVar5;
  if (*(int *)(param_1 + 0x14) != -1) {
    uVar1 = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x24) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x2c) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x34) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x38) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x3c) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x40) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x44) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x48) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x50) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x54) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x58) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x5c) != -1) {
    uVar1 = uVar1 + 1;
  }
  if (*(long *)(lVar8 + 0xb00) == 0) {
    fVar10 = 0.0;
  }
  else {
    sVar3 = *(short *)(lVar8 + 0x178);
    fVar10 = *(float *)(lVar8 + 0x17c);
    if (sVar3 == *(short *)(lVar8 + 0x484)) {
      fVar10 = fVar10 + *(float *)(lVar8 + 0x488);
    }
    if (sVar3 == *(short *)(lVar8 + 0x694)) {
      fVar10 = fVar10 + *(float *)(lVar8 + 0x698);
    }
    if (sVar3 == *(short *)(lVar8 + 0x8a4)) {
      fVar10 = fVar10 + *(float *)(lVar8 + 0x8a8);
    }
  }
  if ((float)uVar1 - fVar10 <= 0.0) {
    return;
  }
  FUN_02adc838(lVar8,0xf,0xffffffff,0xffffffff,0,1,param_2);
  return;
}


