/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345f330; name: FUN_0345f330
 */


undefined8 * FUN_0345f330(undefined2 param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  puVar2 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,0x128);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined1 *)((long)puVar2 + 0x36) = 4;
  *(int *)(puVar2 + 2) = param_2;
  *(undefined4 *)((long)puVar2 + 0x14) = 1;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined2 *)((long)puVar2 + 0x34) = param_1;
  *(undefined4 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_FUN_047c1030;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  lVar4 = *param_3;
  puVar2[0xc] = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    param_2 = *(int *)(puVar2 + 2);
  }
  *(undefined4 *)(puVar2 + 0x1a) = 1;
  *(undefined2 *)((long)puVar2 + 0xc4) = 1;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0x400000000;
  *(undefined8 *)((long)puVar2 + 0xbc) = 0;
  *(undefined8 *)((long)puVar2 + 0xb4) = 0;
  *(undefined8 *)((long)puVar2 + 0xac) = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  *(undefined1 *)(puVar2 + 0x20) = 0;
  *(byte *)((long)puVar2 + 0xcc) = *(byte *)((long)puVar2 + 0xcc) & 0xfe;
  *(undefined2 *)((long)puVar2 + 0x104) = 0xff00;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar2[0x22] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  if (param_2 == 0) {
    return puVar2;
  }
  lVar4 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar4 + 0xe0));
  uVar3 = *(uint *)(lVar4 + 0x108);
  if ((uVar3 == 0) ||
     (fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x110)), 0.9 < fVar5 / (float)uVar3)) {
    FUN_03458ccc(lVar4 + 0x100);
    uVar3 = *(uint *)(lVar4 + 0x108);
    if (uVar3 == 0) goto LAB_0345f49c;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = *(uint *)(puVar2 + 2) / uVar3;
  }
  uVar3 = *(uint *)(puVar2 + 2) - uVar1 * uVar3;
  puVar2[1] = *(undefined8 *)(*(long *)(lVar4 + 0x100) + (ulong)uVar3 * 8);
  *(undefined8 **)(*(long *)(lVar4 + 0x100) + (ulong)uVar3 * 8) = puVar2;
  *(int *)(lVar4 + 0x110) = *(int *)(lVar4 + 0x110) + 1;
LAB_0345f49c:
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0xe0));
  return puVar2;
}


