/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129d10; name: FUN_00129d10
 */


long FUN_00129d10(long param_1,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x68) + 0xc);
    do {
      if (param_3 < piVar2[-1]) {
        return 0;
      }
      if ((param_3 < *piVar2) && (param_2 = param_2 + -1, param_2 == 0)) {
        return *(long *)(piVar2 + -3) + 0x18;
      }
      lVar1 = lVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (lVar1 < *(int *)(param_1 + 0x24));
  }
  return 0;
}


