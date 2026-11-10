/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018813a4; name: FUN_018813a4
 */


bool FUN_018813a4(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int local_80 [3];
  undefined1 local_73;
  int local_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  undefined1 local_63;
  int local_60;
  undefined4 uStack_5c;
  undefined5 uStack_58;
  undefined1 local_53;
  int local_50;
  undefined4 uStack_4c;
  undefined5 uStack_48;
  undefined1 local_43;
  int local_40;
  undefined4 uStack_3c;
  undefined5 uStack_38;
  undefined1 local_33;
  int local_30;
  undefined4 uStack_2c;
  undefined5 uStack_28;
  undefined1 local_23;
  
  stack0xffffffffffffff88 = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_73 = 1;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_63 = 1;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_53 = 1;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_43 = 1;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_33 = 1;
  uStack_28 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_23 = 1;
  FUN_0188183c(local_80,*param_2,param_2[1],param_2[2],param_2[3]);
  if (*(char *)(param_2 + 4) != '\0') {
    FUN_01881f54(local_80,*param_2,param_2[1],param_2[2],param_2[3]);
  }
  FUN_0188148c(param_1,local_80);
  if ((((local_80[0] == 0) && (local_70 == 0)) && (local_60 == 0)) &&
     ((local_50 == 0 && (local_40 == 0)))) {
    bVar1 = local_30 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


