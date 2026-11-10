/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00406050; name: FUN_00406050
 */


undefined8 FUN_00406050(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_003eb490(*param_1);
    FUN_003eb490(param_1[1]);
    uVar1 = 1;
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return uVar1;
}


