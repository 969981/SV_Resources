/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c25ba8; name: FUN_01c25ba8
 */


void FUN_01c25ba8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  undefined4 local_4;
  
  puVar1 = PTR_LAB_047d5d08;
  if (DAT_04812560 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_3;
  FUN_01c28630(auStack_30,param_2,puVar1,0,&local_4);
  FUN_01c286a0(param_1,auStack_30);
  FUN_01c193a0(auStack_30);
  return;
}


