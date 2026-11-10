/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01593984; name: FUN_01593984
 */


void FUN_01593984(undefined8 param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  byte local_18 [4];
  undefined4 local_14;
  
  pcVar1 = FUN_01b3e3ac;
  if (DAT_04809bd0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_18[0] = param_3 & 1;
  local_14 = param_2;
  FUN_015939d4(param_1,pcVar1,0,&local_14,local_18);
  return;
}


