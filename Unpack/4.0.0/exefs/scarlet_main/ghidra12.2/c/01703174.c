/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01703174; name: FUN_01703174
 */


void FUN_01703174(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  float local_18;
  float local_14;
  
  local_14 = (float)param_1;
  local_18 = (float)param_2;
  puVar1 = PTR_LAB_047d55c0;
  if (DAT_0480ef60 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_017031c4(param_3,puVar1,0,&local_14,&local_18);
  return;
}


