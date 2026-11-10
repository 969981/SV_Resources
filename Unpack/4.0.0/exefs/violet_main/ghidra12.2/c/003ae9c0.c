/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ae9c0; name: FUN_003ae9c0
 */


undefined8 FUN_003ae9c0(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  if ((param_1 != (long *)0x0) &&
     ((iVar2 = 0, param_2 == 1 ||
      ((param_2 == 2 &&
       (iVar2 = (int)((*param_1 - (long)param_1) - 0x20U >> 3) * -0x33333333 + 1, iVar2 < 9)))))) {
    iVar3 = iVar2 + -9;
    plVar4 = param_1 + (long)iVar2 * 5 + 4;
    do {
      if ((*plVar4 != 0) && (plVar4[1] != 0)) {
        *param_1 = (long)plVar4;
        return 1;
      }
      plVar4 = plVar4 + 5;
      bVar1 = iVar3 != -1;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return 0;
}


