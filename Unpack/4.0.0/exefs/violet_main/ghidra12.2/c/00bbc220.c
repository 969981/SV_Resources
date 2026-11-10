/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bbc220; name: FUN_00bbc220
 */


void FUN_00bbc220(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    FUN_00c0c288(1,*(undefined8 *)(param_1 + 0x18),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_00c0c288(2,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      FUN_00c0bea8(3,*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar3 * 8 + 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x30));
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00c0d4cc(4,*(undefined8 *)(*(long *)(param_1 + 0x70) + (long)iVar4 * 8 + 8),param_2);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00c0d4cc(5,*(undefined8 *)(*(long *)(param_1 + 0x88) + (long)iVar4 * 8 + 8),param_2);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00c0d4cc(6,*(undefined8 *)(*(long *)(param_1 + 0xa0) + (long)iVar4 * 8 + 8),param_2);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00c0d4cc(7,*(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar4 * 8 + 8),param_2);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 9 & 1) != 0) {
    FUN_00c0d4cc(8,*(undefined8 *)(param_1 + 0xc0),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    FUN_00c0d4cc(9,*(undefined8 *)(param_1 + 200),param_2);
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      FUN_00c09ed4(10,*(undefined4 *)(*(long *)(param_1 + 0x48) + lVar3 * 4 + 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = 0;
    do {
      FUN_00c09ed4(0xb,*(undefined4 *)(*(long *)(param_1 + 0x58) + lVar3 * 4 + 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x50));
  }
  if ((*(byte *)(param_1 + 0x11) >> 3 & 1) != 0) {
    FUN_00c0c288(0xc,*(undefined8 *)(param_1 + 0xd0),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


