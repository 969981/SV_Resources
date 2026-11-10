/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02644630; name: FUN_02644630
 */


void FUN_02644630(undefined8 param_1,undefined8 param_2,undefined8 *param_3,char *param_4,
                 undefined8 *param_5)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_026447a0();
  FUN_026447a0(param_1,*param_3);
  FUN_00c419e0(param_1,*param_4 != '\0');
  local_58 = *param_5;
  FUN_0103155c(&local_78,&local_58);
  local_50 = local_78;
  uStack_48 = uStack_70;
  local_78 = 0;
  local_58 = CONCAT71(local_58._1_7_,1);
  local_40 = local_68;
  uStack_38 = uStack_60;
  FUN_01031320(param_1,&local_58);
  if ((char)local_58 == '\x01') {
    FUN_0264492c(&local_50,0);
  }
  FUN_0264492c(&local_78,0);
  return;
}


