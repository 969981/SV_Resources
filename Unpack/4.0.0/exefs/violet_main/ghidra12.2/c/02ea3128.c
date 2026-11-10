/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ea3128; name: FUN_02ea3128
 */


void FUN_02ea3128(long *param_1,uint param_2,uint param_3,long param_4,undefined8 param_5,
                 uint param_6,int param_7)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(*param_1 + uVar2 * 4);
    if (uVar1 == param_2) {
      FUN_02ea3128(param_1,uVar2 & 0xffffffff,param_3,param_4,param_5,param_6,param_7 + 1);
      uVar1 = *(uint *)(*param_1 + uVar2 * 4);
    }
    if (uVar1 == param_3) {
      FUN_02ea3128(param_1,param_2,uVar2 & 0xffffffff,param_4,param_5,param_6,param_7 + 1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x1f);
  if (((1 << (ulong)(param_3 & 0x1f) | 1 << (ulong)(param_2 & 0x1f)) & (param_6 ^ 0xffffffff)) == 0)
  {
    param_1[(ulong)param_2 * 0x1f + (ulong)param_3 + 1] = param_4;
  }
  return;
}


