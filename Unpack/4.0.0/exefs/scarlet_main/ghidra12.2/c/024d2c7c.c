/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d2c7c; name: FUN_024d2c7c
 */


uint FUN_024d2c7c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  uint uVar2;
  byte local_24 [4];
  undefined8 local_20 [2];
  
  local_24[0] = param_3 & 1;
  puVar1 = PTR_FUN_047def68;
  if (DAT_0484f038 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_20[0] = param_1;
  uVar2 = FUN_024d9acc(param_2,puVar1,0,local_20,local_24);
  return uVar2 & 1;
}


