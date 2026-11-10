/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01741afc; name: FUN_01741afc
 */


void FUN_01741afc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_01741eac();
  FUN_01742f70(&local_50,param_1);
  uVar2 = local_50;
  lVar1 = DAT_04842520;
  local_50 = 0;
  DAT_04842520 = uVar2;
  if (lVar1 == 0) {
    DAT_04842528 = local_48;
    DAT_04842530 = uStack_40;
    DAT_04842538 = local_38;
  }
  else {
    FUN_021f97a4(&DAT_04842528);
    DAT_04842528 = local_48;
    DAT_04842530 = uStack_40;
    DAT_04842538 = local_38;
  }
  FUN_017422e4(DAT_04842520,param_2);
  FUN_01741c84(&local_58,param_1);
  local_50 = DAT_04842540;
  DAT_04842540 = 0;
  FUN_01741c18(&local_50);
  DAT_04842540 = local_58;
  local_58 = 0;
  FUN_01741c18(&local_58);
  FUN_01741c0c();
  FUN_01741e00();
  FUN_01741c10();
  FUN_01741c14();
  param_3 = param_3 & 1;
  FUN_01743a48(param_1,param_3);
  FUN_01741cf0(param_1,param_3);
  FUN_01741d78(param_1,param_3);
  return;
}


