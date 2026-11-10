/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346bdcc; name: FUN_0346bdcc
 */


undefined8 * FUN_0346bdcc(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x1c0);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[6] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = param_1;
  puVar1 = PTR_DAT_047e7128 + 0x10;
  *(undefined4 *)(puVar3 + 3) = param_1;
  *(undefined4 *)((long)puVar3 + 0x1c) = 1;
  *(undefined1 *)(puVar3 + 5) = 1;
  puVar3[10] = 0;
  puVar3[0xb] = puVar1;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = param_1;
  memset(puVar3 + 0xe,0,0x50);
  uVar4 = *(uint *)((long)puVar3 + 0xda);
  puVar3[0x1f] = 0;
  puVar3[0x19] = puVar3;
  puVar3[0x1a] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x23] = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0xc2c0999a;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  memset(puVar3 + 0x25,0,0x78);
  puVar3[1] = &PTR_LAB_047c1a90;
  *(undefined4 *)(puVar3 + 0x37) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x36) = param_1;
  puVar3[0x34] = puVar1;
  puVar3[0x35] = 0;
  *puVar3 = &PTR_LAB_047c17f0;
  *(byte *)((long)puVar3 + 0x1bc) = *(byte *)((long)puVar3 + 0x1bc) & 0x80 | 0x30;
  puVar3[7] = &PTR_LAB_047c1b68;
  puVar3[4] = &PTR_LAB_047c1ad0;
  puVar1 = PTR_DAT_047e6f28;
  *(uint *)((long)puVar3 + 0xda) = uVar4 & 0xe0090000 | 0x24000;
  lVar5 = *(long *)puVar1;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x38));
  uVar4 = *(uint *)(lVar5 + 0x60);
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x68)), 0.9 < fVar6 / (float)uVar4)) {
    FUN_03458ccc(lVar5 + 0x58);
    uVar4 = *(uint *)(lVar5 + 0x60);
    if (uVar4 == 0) goto LAB_0346bf58;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = *(uint *)(puVar3 + 3) / uVar4;
  }
  uVar4 = *(uint *)(puVar3 + 3) - uVar2 * uVar4;
  puVar3[2] = *(undefined8 *)(*(long *)(lVar5 + 0x58) + (ulong)uVar4 * 8);
  *(undefined8 **)(*(long *)(lVar5 + 0x58) + (ulong)uVar4 * 8) = puVar3 + 1;
  *(int *)(lVar5 + 0x68) = *(int *)(lVar5 + 0x68) + 1;
LAB_0346bf58:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x38));
  return puVar3;
}


