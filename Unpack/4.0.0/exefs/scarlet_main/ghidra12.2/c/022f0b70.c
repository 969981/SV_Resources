/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f0b70; name: FUN_022f0b70
 */


uint FUN_022f0b70(double param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  float local_18;
  undefined4 local_14;
  
  local_18 = (float)param_1;
  pcVar1 = FUN_022f3774;
  if (DAT_04846470 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_14 = param_3;
  uVar2 = FUN_022f39f0(param_2,pcVar1,0,&local_14,&local_18);
  return uVar2 & 1;
}


