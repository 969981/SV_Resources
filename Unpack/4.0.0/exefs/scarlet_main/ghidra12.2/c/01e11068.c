/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e11068; name: FUN_01e11068
 */


uint FUN_01e11068(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0x764d6844e4a09e7;
  pcStack_28 = "0461_rangeattack02_loop";
  local_20 = 0x17;
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30,param_2);
  return uVar1 & 1;
}


