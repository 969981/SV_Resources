/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034eaa50; name: FUN_034eaa50
 */


undefined8 * FUN_034eaa50(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  if (param_2 != 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x38);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar3 + 2) = param_1;
  *(undefined4 *)((long)puVar3 + 0x14) = 1;
  *puVar3 = &PTR_LAB_047c5a70;
  puVar3[5] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar2 = PTR_DAT_047e6f28;
  *(undefined4 *)(puVar3 + 6) = 0;
  lVar5 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x2d8));
  uVar4 = *(uint *)(lVar5 + 0x300);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x308)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(lVar5 + 0x2f8);
    uVar4 = *(uint *)(lVar5 + 0x300);
    if (uVar4 == 0) goto LAB_034eab30;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 2) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 2) - uVar1 * uVar4;
  puVar3[1] = *(undefined8 *)(*(long *)(lVar5 + 0x2f8) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(lVar5 + 0x2f8) + (ulong)uVar4 * 8) = puVar3;
  *(int *)(lVar5 + 0x308) = *(int *)(lVar5 + 0x308) + 1;
LAB_034eab30:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x2d8));
  return puVar3;
}


