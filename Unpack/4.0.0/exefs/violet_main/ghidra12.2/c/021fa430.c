/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021fa430; name: FUN_021fa430
 */


uint FUN_021fa430(undefined2 param_1)

{
  uint uVar1;
  undefined *local_20;
  undefined2 local_18;
  
  local_20 = PTR_DAT_047ddac0 + 0x10;
  local_18 = param_1;
  uVar1 = FUN_021fa468(&local_20);
  return uVar1 & 1;
}


