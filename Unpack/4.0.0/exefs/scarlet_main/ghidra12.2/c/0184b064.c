/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184b064; name: FUN_0184b064
 */


void FUN_0184b064(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_LAB_047d7f78;
  if (DAT_048321f8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  puVar2 = (undefined8 *)FUN_0184b0f0(param_4);
  fStack_54 = (float)param_1;
  local_58 = (float)param_2;
  local_40 = puVar2[2];
  uStack_38 = puVar2[3];
  local_50 = *puVar2;
  uStack_48 = puVar2[1];
  FUN_0184b178(param_3,puVar1,0,&local_50,&fStack_54,&local_58);
  return;
}


