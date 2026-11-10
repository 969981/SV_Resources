/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dab3a8; name: FUN_01dab3a8
 */


void FUN_01dab3a8(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined *puVar1;
  float local_1c;
  float fStack_18;
  float local_14;
  
  local_14 = (float)param_1;
  fStack_18 = (float)param_2;
  local_1c = (float)param_3;
  puVar1 = PTR_LAB_047d8620;
  if (DAT_04834320 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01dac38c(param_4,puVar1,0,&local_14,&fStack_18,&local_1c);
  return;
}


