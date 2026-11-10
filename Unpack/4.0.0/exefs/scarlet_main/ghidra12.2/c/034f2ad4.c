/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


