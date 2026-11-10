/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8dff4; name: FUN_00c8dff4
 */


void FUN_00c8dff4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 4) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 4,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lStack_60 = local_68 + (lVar2 - lVar1 >> 4) * 0x10;
    local_50 = local_68 + param_2 * 0x10;
    local_58 = lStack_60;
    FUN_00c8e0b0(param_1,&local_68);
    FUN_00c8e250(&local_68);
  }
  return;
}


