/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347f5f0; name: FUN_0347f5f0
 */


undefined8 * FUN_0347f5f0(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x98);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar3 + 2) = param_1;
  *(undefined4 *)((long)puVar3 + 0x14) = 1;
  *(undefined1 *)(puVar3 + 4) = 1;
  *puVar3 = &PTR_FUN_047c26e8;
  puVar3[3] = &PTR_LAB_047c2730;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0xffffffff;
  puVar3[0xd] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(puVar3 + 0xe),true,0);
  puVar3[0x12] = 0;
  *puVar3 = &PTR_FUN_047c28e8;
  puVar2 = PTR_DAT_047e6f28;
  puVar3[3] = &PTR_LAB_047c2930;
  lVar5 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x230));
  uVar4 = *(uint *)(lVar5 + 600);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x260)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(lVar5 + 0x250);
    uVar4 = *(uint *)(lVar5 + 600);
    if (uVar4 == 0) goto LAB_0347f708;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 2) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 2) - uVar1 * uVar4;
  puVar3[1] = *(undefined8 *)(*(long *)(lVar5 + 0x250) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(lVar5 + 0x250) + (ulong)uVar4 * 8) = puVar3;
  *(int *)(lVar5 + 0x260) = *(int *)(lVar5 + 0x260) + 1;
LAB_0347f708:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x230));
  return puVar3;
}


