/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3aac; name: FUN_007c3aac
 */


void FUN_007c3aac(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1070;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_2 == 0) {
    if (param_3 < 2) {
      if (*(long *)PTR_DAT_047d0fc0 == 0) {
        return;
      }
      param_2 = FUN_007c3d34(*(long *)PTR_DAT_047d0fc0,param_1);
      param_1[1] = param_2;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      if (*(long *)PTR_DAT_047d0fc0 == 0) {
        return;
      }
      param_2 = FUN_007c4038();
      param_1[1] = param_2;
    }
    if (param_2 == 0) {
      return;
    }
  }
  FUN_007c2ba8(param_2,param_1);
  return;
}


