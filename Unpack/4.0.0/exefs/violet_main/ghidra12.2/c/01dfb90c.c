/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfb90c; name: FUN_01dfb90c
 */


void FUN_01dfb90c(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x688);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00fa4838(param_1,lVar1 + (long)param_3 * 0x10);
  return;
}


