/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


