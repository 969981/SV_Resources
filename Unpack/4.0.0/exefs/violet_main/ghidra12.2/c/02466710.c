/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02466710; name: FUN_02466710
 */


void FUN_02466710(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,int *param_5)

{
  uint *puVar1;
  
  if (((param_5 == (int *)0x0) || (param_2 == 0)) || (*param_5 != 0)) {
    *param_1 = 0;
    return;
  }
  puVar1 = (uint *)(param_2 + (param_3 & 0xffffffff) * 4 + 4);
  FUN_028b3cc0((long)puVar1 + (ulong)*puVar1,param_5);
  return;
}


