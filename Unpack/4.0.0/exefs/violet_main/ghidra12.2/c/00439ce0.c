/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00439ce0; name: FUN_00439ce0
 */


undefined8 FUN_00439ce0(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_00439b20(param_1,param_2,param_1 + 2);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  *param_1 = 0;
  *param_3 = iVar1;
  return 1;
}


