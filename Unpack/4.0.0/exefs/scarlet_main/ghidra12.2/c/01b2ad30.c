/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2ad30; name: FUN_01b2ad30
 */


void FUN_01b2ad30(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  FUN_01b2ad74(&local_8,param_2);
  uVar1 = local_8;
  *param_1 = 1;
  local_8 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_0177a49c(&local_8);
  return;
}


