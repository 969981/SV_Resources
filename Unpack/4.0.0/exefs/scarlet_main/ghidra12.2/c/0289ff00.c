/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289ff00; name: FUN_0289ff00
 */


uint FUN_0289ff00(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = param_4;
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_0289fcf8(param_1,&local_18);
  }
  else {
    uVar1 = FUN_018654fc(param_1,&local_18);
  }
  return uVar1 & 1;
}


