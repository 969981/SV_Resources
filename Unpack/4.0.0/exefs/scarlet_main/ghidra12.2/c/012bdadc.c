/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bdadc; name: FUN_012bdadc
 */


long FUN_012bdadc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_012be350(&local_40,*param_1,param_1);
  uVar2 = local_40;
  lVar1 = DAT_04866080;
  local_40 = 0;
  DAT_04866080 = uVar2;
  if (lVar1 == 0) {
    DAT_04866088 = local_38;
    DAT_04866090 = uStack_30;
    DAT_04866098 = local_28;
  }
  else {
    FUN_028f9144(&DAT_04866088);
    DAT_04866088 = local_38;
    DAT_04866090 = uStack_30;
    DAT_04866098 = local_28;
  }
  return DAT_04866080;
}


