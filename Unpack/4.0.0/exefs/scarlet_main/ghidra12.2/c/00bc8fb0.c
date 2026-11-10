/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc8fb0; name: FUN_00bc8fb0
 */


void FUN_00bc8fb0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
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
  if ((*(byte *)(param_1 + 0x10) >> 2 & 1) != 0) {
    FUN_00c0d4cc(3,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_00c02020(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}


