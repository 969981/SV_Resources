/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e5130; name: FUN_003e5130
 */


undefined4 FUN_003e5130(long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + *(long *)(param_3 + 8));
  *(undefined4 *)(*param_1 + *(long *)(param_3 + 8)) = param_2;
  return uVar1;
}


