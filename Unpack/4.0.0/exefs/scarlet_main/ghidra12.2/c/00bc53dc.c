/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc53dc; name: FUN_00bc53dc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bc53dc(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00c0c288(1,*(undefined8 *)(param_1 + 0x18),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FUN_00c0c288(2,*(undefined8 *)(param_1 + 0x30),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00c09ed4(3,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FUN_00c0bbcc(4,*(undefined4 *)(param_1 + 0x24),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN_00c0bbcc(5,*(undefined4 *)(param_1 + 0x38),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FUN_00c0c288(6,*(undefined8 *)(param_1 + 0x28),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FUN_00c0c288(7,*(undefined8 *)(param_1 + 0x40),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_00c0d4cc(8,*(undefined8 *)(param_1 + 0x50),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    FUN_00c09ed4(9,*(undefined4 *)(param_1 + 0x3c),param_2);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_00c0c288(10,*(undefined8 *)(param_1 + 0x48),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


