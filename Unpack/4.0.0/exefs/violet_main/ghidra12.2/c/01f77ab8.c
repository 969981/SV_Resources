/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f77ab8; name: FUN_01f77ab8
 */


void FUN_01f77ab8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_01cfa44c(*param_1,param_1[2]);
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    return;
  }
  for (lVar1 = *(long *)(lVar2 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    param_1[1] = lVar1;
    lVar2 = lVar1;
  }
  FUN_01cfa44c(*param_1,lVar2);
  return;
}


