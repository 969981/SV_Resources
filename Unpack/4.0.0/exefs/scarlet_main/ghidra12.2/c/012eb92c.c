/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012eb92c; name: FUN_012eb92c
 */


void FUN_012eb92c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  uVar1 = FUN_012ec3f4(*(undefined8 *)(*param_1 + 8));
  FUN_012ebc58(&local_28,uVar1);
  local_8 = *param_2;
  *param_2 = 0;
  FUN_012eb990(&local_8);
  uVar1 = local_28;
  local_28 = 0;
  *param_2 = uVar1;
  FUN_012eb990(&local_28);
  return;
}


