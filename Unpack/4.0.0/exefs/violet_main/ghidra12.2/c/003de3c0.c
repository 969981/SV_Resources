/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003de3c0; name: FUN_003de3c0
 */


void FUN_003de3c0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint *local_18;
  
  if (((*param_1 | 4) != 5) && (*(long *)(param_1 + 2) != 0)) {
    local_18 = param_1;
    FUN_003e4890(&local_18,0,0);
    param_1 = local_18;
  }
  *param_1 = param_2;
  if (param_2 != 1) {
    *(long *)(param_1 + 2) = param_3;
    return;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 0xff;
  }
  param_1[2] = uVar1;
  return;
}


