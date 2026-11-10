/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03519a74; name: FUN_03519a74
 */


undefined8 * FUN_03519a74(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  MutexType *pMVar5;
  float fVar6;
  
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,400);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_034aa700(puVar3,param_1);
  puVar3[1] = &PTR_LAB_047c7458;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  *(byte *)(puVar3 + 0x1e) = *(byte *)(puVar3 + 0x1e) & 199;
  *(byte *)((long)puVar3 + 0xf1) = *(byte *)((long)puVar3 + 0xf1) & 0x80;
  *(byte *)((long)puVar3 + 0x124) = *(byte *)((long)puVar3 + 0x124) & 0xf0;
  *puVar3 = &PTR_FUN_047c71a0;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  puVar3[7] = &PTR_LAB_047c7530;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0x100000000;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  puVar3[4] = &PTR_LAB_047c7498;
  *(undefined2 *)(puVar3 + 0x2b) = 0;
  *(undefined4 *)((long)puVar3 + 0x15c) = 50000;
  puVar2 = PTR_DAT_047e74e8;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x27] = 0;
  puVar3[0x28] = puVar2 + 0x10;
  *(undefined8 *)((long)puVar3 + 0x16d) = 0;
  *(undefined2 *)((long)puVar3 + 0x175) = 1;
  *(undefined2 *)(puVar3 + 0x2f) = 0;
  puVar2 = PTR_DAT_047e6f28;
  puVar3[0x30] = 0;
  puVar3[0x31] = 0;
  *(uint *)((long)puVar3 + 0xda) = *(uint *)((long)puVar3 + 0xda) & 0xfffdffff;
  pMVar5 = *(MutexType **)puVar2;
  nn::os::LockMutex(pMVar5);
  uVar4 = *(uint *)(pMVar5 + 0x28);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(pMVar5 + 0x30)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(pMVar5 + 0x20);
    uVar4 = *(uint *)(pMVar5 + 0x28);
    if (uVar4 == 0) goto LAB_03519be0;
  }
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(puVar3 + 3) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 3) - uVar1 * uVar4;
  puVar3[2] = *(undefined8 *)(*(long *)(pMVar5 + 0x20) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(pMVar5 + 0x20) + (ulong)uVar4 * 8) = puVar3 + 1;
  *(int *)(pMVar5 + 0x30) = *(int *)(pMVar5 + 0x30) + 1;
LAB_03519be0:
  nn::os::UnlockMutex(pMVar5);
  return puVar3;
}


