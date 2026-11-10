/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02923f10; name: thunk_FUN_021eca0c
 */


uint thunk_FUN_021eca0c(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  undefined *puStack_20;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  puStack_20 = PTR_DAT_047d8ee0 + 0x10;
  uStack_18 = param_1;
  uStack_16 = param_2;
  uVar1 = FUN_021eca48(&puStack_20);
  return uVar1 & 1;
}


