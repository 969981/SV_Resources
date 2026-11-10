/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003de4b0; name: FUN_003de4b0
 */


undefined8 FUN_003de4b0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == (int *)0x0) || (*param_2 != 0x10)) || (*(long *)(param_2 + 2) == 0)) {
    return 0;
  }
  uVar1 = FUN_003e01b0(*(long *)(param_2 + 2),param_1);
  return uVar1;
}


