/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034874e8; name: FUN_034874e8
 */


undefined8 * FUN_034874e8(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x40);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar3 + 2) = param_1;
  *(undefined4 *)((long)puVar3 + 0x14) = 1;
  *puVar3 = &PTR_FUN_047c2fe0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar2 = PTR_DAT_047e6f28;
  puVar3[7] = 0;
  lVar5 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x118));
  uVar4 = *(uint *)(lVar5 + 0x140);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x148)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(lVar5 + 0x138);
    uVar4 = *(uint *)(lVar5 + 0x140);
    if (uVar4 == 0) goto LAB_034875bc;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 2) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 2) - uVar1 * uVar4;
  puVar3[1] = *(undefined8 *)(*(long *)(lVar5 + 0x138) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(lVar5 + 0x138) + (ulong)uVar4 * 8) = puVar3;
  *(int *)(lVar5 + 0x148) = *(int *)(lVar5 + 0x148) + 1;
LAB_034875bc:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x118));
  return puVar3;
}


