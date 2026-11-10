/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ea320c; name: FUN_02ea320c
 */


void FUN_02ea320c(long *param_1,uint param_2,uint param_3,long param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(*param_1 + uVar2 * 4);
    if (uVar1 == param_2) {
      FUN_02ea320c(param_1,uVar2 & 0xffffffff,param_3,param_4,param_5 + 1);
      uVar1 = *(uint *)(*param_1 + uVar2 * 4);
    }
    if (uVar1 == param_3) {
      FUN_02ea320c(param_1,param_2,uVar2 & 0xffffffff,param_4,param_5 + 1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x1f);
  param_1[(ulong)param_2 * 0x1f + (ulong)param_3 + 1] = param_4;
  return;
}


