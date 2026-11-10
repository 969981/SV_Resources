/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e73700; name: FUN_01e73700
 */


void FUN_01e73700(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 == 0) {
    FUN_01f70d3c(param_1,0);
    return;
  }
  lVar2 = *(long *)(*param_2 + 0x10);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  FUN_01f70d3c(param_1,lVar1);
  return;
}


