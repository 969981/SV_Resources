/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c5614; name: FUN_031c5614
 */


void FUN_031c5614(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    bVar1 = iVar2 < param_3 * 2;
    iVar2 = iVar2 << 1;
  } while (bVar1);
  FUN_02ef5fd4();
  return;
}


