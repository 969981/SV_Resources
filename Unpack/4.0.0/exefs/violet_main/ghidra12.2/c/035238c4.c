/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035238c4; name: FUN_035238c4
 */


undefined8 * FUN_035238c4(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  MutexType *pMVar5;
  float fVar6;
  
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x148);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[6] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = param_1;
  puVar2 = PTR_DAT_047e7128;
  *(undefined4 *)(puVar3 + 3) = param_1;
  *(undefined4 *)((long)puVar3 + 0x1c) = 1;
  *(undefined1 *)(puVar3 + 5) = 1;
  puVar3[10] = 0;
  puVar3[0xb] = puVar2 + 0x10;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = param_1;
  memset(puVar3 + 0xe,0,0x50);
  puVar3[1] = &PTR_LAB_047c80e0;
  puVar3[0x19] = puVar3;
  puVar3[0x1a] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  *(byte *)(puVar3 + 0x1e) = *(byte *)(puVar3 + 0x1e) & 199;
  *(byte *)((long)puVar3 + 0xf1) = *(byte *)((long)puVar3 + 0xf1) & 0x80;
  *(byte *)((long)puVar3 + 0x124) = *(byte *)((long)puVar3 + 0x124) & 0xf0;
  *puVar3 = &PTR_LAB_047c7e28;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar3[4] = &PTR_LAB_047c8120;
  puVar3[7] = &PTR_LAB_047c81b8;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  puVar3[0x27] = 0;
  puVar2 = PTR_DAT_047e6f28;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  *(uint *)((long)puVar3 + 0xda) = *(uint *)((long)puVar3 + 0xda) & 0xe0090000 | 0x4000;
  pMVar5 = *(MutexType **)puVar2;
  nn::os::LockMutex(pMVar5);
  uVar4 = *(uint *)(pMVar5 + 0x28);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(pMVar5 + 0x30)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(pMVar5 + 0x20);
    uVar4 = *(uint *)(pMVar5 + 0x28);
    if (uVar4 == 0) goto LAB_03523a34;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 3) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 3) - uVar1 * uVar4;
  puVar3[2] = *(undefined8 *)(*(long *)(pMVar5 + 0x20) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(pMVar5 + 0x20) + (ulong)uVar4 * 8) = puVar3 + 1;
  *(int *)(pMVar5 + 0x30) = *(int *)(pMVar5 + 0x30) + 1;
LAB_03523a34:
  nn::os::UnlockMutex(pMVar5);
  return puVar3;
}


