/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb57bc; name: FUN_01eb57bc
 */


void FUN_01eb57bc(uint *param_1,long param_2,long *param_3)

{
  byte bVar1;
  uint local_18 [2];
  
  FUN_01eb583c(local_18);
  if (local_18[0] == 0) {
    bVar1 = *(byte *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (1 >= bVar1) {
      *(bool *)(param_2 + 0x10) = bVar1 != 0;
    }
    *param_1 = (uint)(1 < bVar1);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


