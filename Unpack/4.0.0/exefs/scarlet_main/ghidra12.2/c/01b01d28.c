/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b01d28; name: FUN_01b01d28
 */


void FUN_01b01d28(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_FUN_047d3e10;
  if (DAT_04802a78 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01b027c8(param_3);
  FUN_01b02c20(&local_60,param_2,puVar1,0,uVar2);
  *param_1 = 1;
  local_48 = local_60;
  uStack_40 = uStack_58;
  local_38 = local_50;
  FUN_01b02c60(param_1 + 8,&local_48);
  return;
}


