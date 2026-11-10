/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d76b0; name: FUN_024d76b0
 */


void FUN_024d76b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_30 [2];
  undefined8 auStack_20 [2];
  
  puVar1 = PTR_LAB_047defa8;
  if (DAT_0484f078 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  auStack_20[0] = param_1;
  FUN_024da698(param_3,puVar1,0,auStack_20,local_30);
  return;
}


