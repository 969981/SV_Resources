/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294acf0; name: FUN_0294acf0
 */


void FUN_0294acf0(long param_1,uint param_2)

{
  ulong uVar1;
  
  if (-1 < (int)*(ulong *)(param_1 + 8) * 0x20000000 + -0x20000000) {
    uVar1 = 0x2000000;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xfffffffffdffffff | uVar1;
  }
  return;
}


