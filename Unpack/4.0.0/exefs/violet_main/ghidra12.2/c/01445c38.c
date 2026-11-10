/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01445c38; name: FUN_01445c38
 */


void FUN_01445c38(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((param_2 & 0xff) < (uint)*(byte *)(param_1 + 0x48)) {
    uVar1 = (ulong)(param_2 >> 3) & 0x18;
    *(ulong *)(*(long *)(param_1 + 0x10) + uVar1) =
         *(ulong *)(*(long *)(param_1 + 0x10) + uVar1) | 1L << ((ulong)param_2 & 0x3f);
  }
  return;
}


