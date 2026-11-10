/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02923ed0; name: thunk_FUN_021fa234
 */


uint thunk_FUN_021fa234(undefined2 param_1)

{
  uint uVar1;
  undefined *puStack_20;
  undefined2 uStack_18;
  
  puStack_20 = PTR_DAT_047ddac0 + 0x10;
  uStack_18 = param_1;
  uVar1 = FUN_021fa26c(&puStack_20);
  return uVar1 & 1;
}


