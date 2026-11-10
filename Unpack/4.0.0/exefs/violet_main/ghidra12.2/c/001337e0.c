/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001337e0; name: FUN_001337e0
 */


void FUN_001337e0(long *param_1,int param_2)

{
  param_2 = (uint)*(byte *)((long)param_1 + 0x44) + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < param_2) {
    if (0xfe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)param_2;
  }
  return;
}


