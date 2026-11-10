/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e539bc; name: FUN_02e539bc
 */


bool FUN_02e539bc(long *param_1)

{
  bool bVar1;
  long lVar2;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (*(short *)(param_1[1] + 0x1a) == 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


