/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e5720; name: FUN_003e5720
 */


undefined8 FUN_003e5720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0045d160(*param_1,*param_2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (param_1[1] == 0 && param_2[1] == 0) {
    return 0;
  }
  uVar1 = FUN_003de440();
  return uVar1;
}


