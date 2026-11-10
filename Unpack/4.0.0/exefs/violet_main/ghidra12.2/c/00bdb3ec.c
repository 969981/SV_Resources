/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdb3ec; name: FUN_00bdb3ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bdb3ec(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      FUN_00c0d4cc(2,*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar3 * 8 + 8),param_2);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_00c0c288(3,*(undefined8 *)(param_1 + 0x30),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    FUN_00c0a5f0(4,*(undefined8 *)(param_1 + 0x38),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    FUN_00c0a1b0(5,*(undefined8 *)(param_1 + 0x40),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    FUN_00c0b724(*(undefined8 *)(param_1 + 0x48),6,param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    FUN_00c0cab4(7,*(undefined8 *)(param_1 + 0x50),param_2);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    FUN_00c0c288(8,*(undefined8 *)(param_1 + 0x58),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


