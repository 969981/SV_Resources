/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348b60c; name: FUN_0348b60c
 */


undefined8 * FUN_0348b60c(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  
  if (param_2 == 2) {
    uVar6 = 2;
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x78);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    ppuVar5 = &PTR_FUN_047c3200;
  }
  else if (param_2 == 1) {
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x78);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar6 = 1;
    ppuVar5 = &PTR_FUN_047c3198;
  }
  else {
    if (param_2 != 0) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x78);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar6 = 0;
    ppuVar5 = &PTR_FUN_047c3130;
  }
  *(undefined4 *)(puVar3 + 2) = param_1;
  *(undefined4 *)((long)puVar3 + 0x14) = 1;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[6] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[7] = &PTR_LAB_047c32a0;
  puVar3[8] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar2 = PTR_DAT_047e6f28;
  *puVar3 = ppuVar5;
  *(undefined4 *)(puVar3 + 3) = uVar6;
  lVar7 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x188));
  uVar4 = *(uint *)(lVar7 + 0x1b0);
  if ((uVar4 == 0) ||
     (fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x1b8)), 0.9 < fVar8 / (float)uVar4)) {
    FUN_03458ccc(lVar7 + 0x1a8);
    uVar4 = *(uint *)(lVar7 + 0x1b0);
    if (uVar4 == 0) goto LAB_0348b774;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 2) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 2) - uVar1 * uVar4;
  puVar3[1] = *(undefined8 *)(*(long *)(lVar7 + 0x1a8) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(lVar7 + 0x1a8) + (ulong)uVar4 * 8) = puVar3;
  *(int *)(lVar7 + 0x1b8) = *(int *)(lVar7 + 0x1b8) + 1;
LAB_0348b774:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x188));
  return puVar3;
}


