/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012eb8e8; name: FUN_012eb8e8
 */


void FUN_012eb8e8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  uVar1 = FUN_012ebfe4(*(undefined8 *)(*param_1 + 8));
  FUN_012ebb9c(&local_8,uVar1);
  FUN_012eba08(param_2);
  *param_2 = local_8;
  return;
}


