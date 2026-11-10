/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d2efc; name: FUN_012d2efc
 */


void FUN_012d2efc(long *param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 4) * -0x3333333333333333) < 3) {
    lVar2 = param_1[1];
    local_40 = 0;
    plStack_38 = param_1 + 3;
    local_58 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0xf0,8);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 4) * 0x10;
    local_40 = local_58 + 0xf0;
    local_48 = lStack_50;
    FUN_012d2fc0(param_1,&local_58);
    FUN_012d3068(&local_58);
  }
  return;
}


