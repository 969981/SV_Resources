/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0259d74c; name: FUN_0259d74c
 */


void FUN_0259d74c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_0259d798(&local_8);
    uVar1 = local_8;
  }
  local_8 = 0;
  *param_1 = uVar1;
  FUN_0259d55c(&local_8);
  return;
}


