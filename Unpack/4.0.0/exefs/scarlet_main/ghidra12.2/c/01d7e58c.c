/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d7e58c; name: FUN_01d7e58c
 */


void FUN_01d7e58c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_30 [2];
  undefined8 auStack_20 [2];
  
  puVar1 = PTR_LAB_047d8070;
  if (DAT_04832220 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  auStack_20[0] = param_1;
  FUN_01d7ee34(param_3,puVar1,0,auStack_20,local_30);
  return;
}


