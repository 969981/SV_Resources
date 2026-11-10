/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024667dc; name: FUN_024667dc
 */


void FUN_024667dc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,int *param_5)

{
  if ((param_5 == (int *)0x0) || (*param_5 != 1)) {
    *param_1 = 0;
    return;
  }
  FUN_028b3f88(param_2 + *(long *)(*(long *)(param_5 + 8) + *(long *)(param_5 + 2) * 8) * param_3 +
               4,param_5);
  return;
}


