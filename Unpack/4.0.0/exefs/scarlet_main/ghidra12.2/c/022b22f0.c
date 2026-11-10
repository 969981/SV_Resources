/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b22f0; name: FUN_022b22f0
 */


void FUN_022b22f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_80 [2];
  undefined8 auStack_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_LAB_047dde68;
  if (DAT_04843c08 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_80[0] = param_3;
  auStack_70[0] = param_2;
  FUN_022b308c(&local_60,param_4,puVar1,0,auStack_70,local_80);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_00f36dc0(param_1 + 8,&local_40);
  return;
}


