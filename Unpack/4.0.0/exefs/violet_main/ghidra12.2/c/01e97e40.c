/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e97e40; name: FUN_01e97e40
 */


bool FUN_01e97e40(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_01f6496c(lVar3 + -0x28);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


