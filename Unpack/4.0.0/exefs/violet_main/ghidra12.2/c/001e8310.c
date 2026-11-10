/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e8310; name: FUN_001e8310
 */


bool FUN_001e8310(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_001e834c(param_1,*param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    param_2[1] = param_1;
  }
  return bVar1;
}


