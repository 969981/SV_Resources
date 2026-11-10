/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03479338; name: FUN_03479338
 */


undefined8 * FUN_03479338(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,0x40);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined8 *)((long)puVar3 + 0x14) = 1;
  *puVar3 = &PTR_FUN_047c2450;
  *(undefined4 *)(puVar3 + 2) = param_1;
  puVar3[4] = 0;
  *(undefined2 *)(puVar3 + 5) = 100;
  *(undefined1 *)((long)puVar3 + 0x2a) = 0;
  puVar2 = PTR_DAT_047e6f28;
  puVar3[6] = 0;
  puVar3[7] = 0;
  lVar5 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x1f8));
  uVar4 = *(uint *)(lVar5 + 0x220);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x228)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(lVar5 + 0x218);
    uVar4 = *(uint *)(lVar5 + 0x220);
    if (uVar4 == 0) goto LAB_03479418;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 2) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 2) - uVar1 * uVar4;
  puVar3[1] = *(undefined8 *)(*(long *)(lVar5 + 0x218) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(lVar5 + 0x218) + (ulong)uVar4 * 8) = puVar3;
  *(int *)(lVar5 + 0x228) = *(int *)(lVar5 + 0x228) + 1;
LAB_03479418:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1f8));
  return puVar3;
}


