/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f2ad4; name: FUN_034f2ad4
 */


void FUN_034f2ad4(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  do {
    lVar1 = *(long *)(param_1 + (ulong)param_2 * 8);
    if (*(int *)(lVar1 + 0x184) == 0x2b) {
      FUN_034f1dbc(lVar1,lVar1 + 0x158);
    }
    param_2 = param_2 + 1;
  } while (param_2 < param_3);
  return;
}


