/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3e3ac; name: FUN_01b3e3ac
 */


void FUN_01b3e3ac(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (0x1f < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3e3a0();
  }
  uVar1 = 1L << ((ulong)param_2 & 0x3f);
  if ((param_3 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 8) & (uVar1 ^ 0xffffffffffffffff);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8) | uVar1;
  }
  *(ulong *)(param_1 + 8) = uVar1;
  return;
}


