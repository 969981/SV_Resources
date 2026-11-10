/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022d4ea8; name: FUN_022d4ea8
 */


void FUN_022d4ea8(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  puVar1 = &LAB_02b816e0;
  if (DAT_048463f0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_1c = param_4;
  local_14 = param_3;
  FUN_022d7158(param_2,puVar1,0,&local_14,&local_18,&local_1c);
  return;
}


