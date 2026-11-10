/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


