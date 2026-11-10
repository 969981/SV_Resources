/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a34ba4; name: FUN_01a34ba4
 */


void FUN_01a34ba4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  FUN_00f321ec(param_2,0);
  lVar1 = FUN_02131274(param_2);
  if ((lVar1 == 0) || (lVar1 == lVar2)) {
    return;
  }
  FUN_01a34ab0(lVar1,*param_1);
  return;
}


