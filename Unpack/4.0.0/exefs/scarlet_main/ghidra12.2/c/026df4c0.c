/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026df4c0; name: FUN_026df4c0
 */


void FUN_026df4c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 char *param_5,undefined8 *param_6)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_00ca1900();
  FUN_026df5a0(param_1,*param_3);
  FUN_026df5a0(param_1,*param_4);
  FUN_00c419e0(param_1,*param_5 != '\0');
  local_68 = *param_6;
  FUN_0103155c(&local_88,&local_68);
  local_60 = local_88;
  uStack_58 = uStack_80;
  local_88 = 0;
  local_68 = CONCAT71(local_68._1_7_,1);
  local_50 = local_78;
  uStack_48 = uStack_70;
  FUN_01031320(param_1,&local_68);
  if ((char)local_68 == '\x01') {
    FUN_026df72c(&local_60,0);
  }
  FUN_026df72c(&local_88,0);
  return;
}


