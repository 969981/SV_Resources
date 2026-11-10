/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bf39a4; name: FUN_01bf39a4
 */


void FUN_01bf39a4(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_4;
  
  puVar1 = PTR_LAB_047d5940;
  if (DAT_04810540 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_3;
  FUN_01bf4684(&local_50,param_2,puVar1,0,&local_4);
  *param_1 = 1;
  local_38 = local_50;
  uStack_30 = uStack_48;
  local_28 = local_40;
  FUN_00d5b7a4(param_1 + 8,&local_38);
  return;
}


