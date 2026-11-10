/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049e4a0; name: FUN_0049e4a0
 */


uint FUN_0049e4a0(void)

{
  uint uVar1;
  
  uVar1 = nn::time::IsInitialized();
  return uVar1 & 1;
}


