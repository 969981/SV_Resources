/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029363e0; name: FUN_029363e0
 */


void FUN_029363e0(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if ((uVar1 & 0x1c7) == 2) {
    uVar1 = uVar1 & 0xfffffffffffffe00 |
            uVar1 & 7 | ((ulong)((uint)((int)uVar1 + param_2 * 8) >> 3) & 0x3f) << 3;
    *(ulong *)(param_1 + 8) = uVar1;
  }
  if ((uVar1 & 0x1c7) == 4) {
    *(ulong *)(param_1 + 8) =
         uVar1 & 0xfffffffffffffe00 |
         uVar1 & 7 | ((ulong)((uint)((int)uVar1 + param_2 * 8) >> 3) & 0x3f) << 3;
  }
  return;
}


