/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346c320; name: FUN_0346c320
 */


undefined8 FUN_0346c320(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined2 *)(param_1 + 0xdc) = 0xffff;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  puVar2 = PTR_DAT_047e6f28;
  *(undefined1 *)(param_1 + 0xde) = 0xff;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 1;
  lVar4 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x150));
  uVar3 = *(uint *)(lVar4 + 0x178);
  if ((uVar3 == 0) ||
     (fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x180)), 0.9 < fVar5 / (float)uVar3)) {
    FUN_03458ccc(lVar4 + 0x170);
    uVar3 = *(uint *)(lVar4 + 0x178);
    if (uVar3 == 0) goto LAB_0346c408;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x10) / uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0x10) - uVar1 * uVar3;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(lVar4 + 0x170) + (ulong)uVar3 * 8);
  *(long *)(*(long *)(lVar4 + 0x170) + (ulong)uVar3 * 8) = param_1;
  *(int *)(lVar4 + 0x180) = *(int *)(lVar4 + 0x180) + 1;
LAB_0346c408:
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x150));
  return 1;
}


