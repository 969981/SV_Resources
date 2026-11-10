/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02169ca8; name: FUN_02169ca8
 */


void FUN_02169ca8(long param_1,int param_2)

{
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3))
  {
    FUN_014acdd4(*(undefined8 *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 8));
    return;
  }
  return;
}


