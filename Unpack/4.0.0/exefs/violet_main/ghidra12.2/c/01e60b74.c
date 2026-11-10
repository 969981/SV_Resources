/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e60b74; name: FUN_01e60b74
 */


void FUN_01e60b74(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (cVar1 == -0x44) {
    FUN_01e60be4(0xbc,param_2,param_3);
    return;
  }
  *param_1 = 1;
  return;
}


