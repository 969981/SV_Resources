/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a047bc; name: FUN_01a047bc
 */


int FUN_01a047bc(long param_1,undefined1 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == *(long *)(param_1 + 0x38)) {
    FUN_0157184c(param_1,1);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar1 + -1;
  *(undefined1 *)(lVar1 + -1) = param_2;
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}


