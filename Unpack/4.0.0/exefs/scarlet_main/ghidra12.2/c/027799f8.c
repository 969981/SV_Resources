/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027799f8; name: FUN_027799f8
 */


void FUN_027799f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined2 param_6)

{
  long *plVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined2 local_70;
  undefined8 local_60;
  undefined8 uStack_50;
  undefined8 local_40;
  
  param_4[2] = 0;
  param_4[3] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  local_90 = *param_5;
  uStack_88 = param_5[1];
  local_80 = param_5[2];
  plVar1 = (long *)param_5[3];
  plStack_78 = plVar1;
  local_70 = param_6;
  local_60 = param_1;
  uStack_50 = param_2;
  local_40 = param_3;
  if (plVar1 == (long *)0x0) {
    FUN_02779b08(param_4,&local_90);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_02779b08(param_4,&local_90);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


