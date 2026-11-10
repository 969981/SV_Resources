/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc2120; name: FUN_00bc2120
 */


void FUN_00bc2120(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_00c0c288(1,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(2,*(undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(3,*(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(4,*(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(5,*(undefined8 *)(*(long *)(param_1 + 0x90) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(6,*(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  if (*(char *)(param_1 + 0x10) < '\0') {
    FUN_00c0d4cc(7,*(undefined8 *)(param_1 + 0xb0),param_2);
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(8,*(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_00c0d4cc(9,*(undefined8 *)(*(long *)(param_1 + 200) + (long)iVar2 * 8 + 8),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  if (0 < *(int *)(param_1 + 0xd8)) {
    lVar3 = 0;
    do {
      FUN_00c0bea8(10,*(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar3 * 8 + 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xd8));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


