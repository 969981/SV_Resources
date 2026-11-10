/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012af424; name: FUN_012af424
 */


void FUN_012af424(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 4) * -0x7d05f417d05f417d) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x2b0,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lStack_60 = local_68 + (lVar2 - lVar1 >> 4) * 0x10;
    local_50 = local_68 + param_2 * 0x2b0;
    local_58 = lStack_60;
    FUN_012af500(param_1,&local_68);
    FUN_012af8a4(&local_68);
  }
  return;
}


