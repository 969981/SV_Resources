/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfc160; name: FUN_01cfc160
 */


void FUN_01cfc160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047d7098;
  if (DAT_0482cc88 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_38 = param_4;
  local_8 = param_3;
  FUN_01d014c8(auStack_30,param_2,puVar1,0,&local_8,&local_38);
  FUN_01cfc740(param_1,auStack_30);
  FUN_01cfc798(auStack_30);
  return;
}


