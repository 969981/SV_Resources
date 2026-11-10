/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d3204; name: FUN_024d3204
 */


uint FUN_024d3204(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  byte local_34 [4];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_34[0] = param_4 & 1;
  puVar1 = PTR_LAB_047def80;
  if (DAT_0484f050 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  local_20[0] = param_1;
  uVar2 = FUN_024d9c7c(param_3,puVar1,0,local_20,local_30,local_34);
  return uVar2 & 1;
}


