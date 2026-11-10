/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01576e9c; name: FUN_01576e9c
 */


undefined1 FUN_01576e9c(short param_1,int param_2,short param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (param_2 == param_4) {
    uVar2 = 2;
  }
  uVar1 = param_2 == param_4;
  if (param_1 != param_3) {
    uVar1 = uVar2;
  }
  return uVar1;
}


