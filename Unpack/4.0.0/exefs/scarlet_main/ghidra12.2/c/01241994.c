/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01241994; name: FUN_01241994
 */


void FUN_01241994(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  char local_9c [4];
  byte local_98 [4];
  byte local_94 [4];
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined1 local_73;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 local_53;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined1 local_43;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined1 local_33;
  
  uStack_88 = 0;
  uStack_90 = 0;
  local_8b = 0;
  local_83 = 1;
  local_80 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  local_73 = 1;
  local_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  local_63 = 1;
  local_60 = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  local_53 = 1;
  local_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  local_43 = 1;
  uStack_38 = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_33 = 1;
  local_94[0] = 0;
  local_98[0] = 0;
  local_9c[0] = '\0';
  FUN_01241aa0(*(undefined8 *)(param_1 + 0x20));
  FUN_01248e90(param_1,&uStack_90,*param_3,param_3[1]);
  FUN_01242278(param_1,&uStack_90,local_94,local_9c,*param_3,param_3[1]);
  if (local_9c[0] == '\0') {
    bVar1 = 0;
  }
  else {
    FUN_01241b64(param_1,&uStack_90,local_98,*param_3,param_3[1]);
    bVar1 = local_98[0] & 1;
  }
  FUN_01241ab8(param_1,*param_3,&uStack_90);
  FUN_01241aac(*(undefined8 *)(param_1 + 0x20));
  *param_2 = local_94[0] | bVar1;
  return;
}


