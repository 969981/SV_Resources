/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4d488; name: FUN_00a4d488
 */


int FUN_00a4d488(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == 2) {
    plVar1 = (long *)(param_1 + 0x6140);
    lVar2 = 0x6148;
  }
  else if (param_2 == 1) {
    plVar1 = (long *)(param_1 + 0x60d0);
    lVar2 = 0x60d8;
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    plVar1 = (long *)(param_1 + 0x6060);
    lVar2 = 0x6068;
  }
  return (int)((ulong)(*(long *)(param_1 + lVar2) - *plVar1) >> 3) * -0x55555555;
}


