/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289a2e4; name: FUN_0289a2e4
 */


void FUN_0289a2e4(long param_1,long *param_2)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x168) != *param_2) {
    *(long *)(param_1 + 0x168) = *param_2;
    uVar1 = FUN_014bfb64();
    if ((uVar1 & 1) != 0) {
      FUN_019b6ee4(param_1,2,*param_2);
      return;
    }
  }
  return;
}


