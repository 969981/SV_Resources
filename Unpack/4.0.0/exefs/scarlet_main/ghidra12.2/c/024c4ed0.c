/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c4ed0; name: FUN_024c4ed0
 */


void FUN_024c4ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_30 [2];
  undefined8 auStack_20 [2];
  
  puVar1 = PTR_LAB_047dee40;
  if (DAT_0484efc8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  auStack_20[0] = param_1;
  FUN_024c84f0(param_3,puVar1,0,auStack_20,local_30);
  return;
}


