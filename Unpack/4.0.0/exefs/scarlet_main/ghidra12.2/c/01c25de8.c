/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c25de8; name: FUN_01c25de8
 */


void FUN_01c25de8(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  byte local_8 [4];
  byte local_4 [4];
  
  local_8[0] = param_4 & 1;
  local_4[0] = param_3 & 1;
  puVar1 = PTR_LAB_047d5d18;
  if (DAT_04812570 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c28914(auStack_30,param_2,puVar1,0,local_4,local_8);
  FUN_01c28960(param_1,auStack_30);
  FUN_01c22770(auStack_30);
  return;
}


