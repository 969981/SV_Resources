/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01305470; name: FUN_01305470
 */


void FUN_01305470(long *param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 4) * -0x79435e50d79435e5) >> 4 < 0x271) {
    lVar2 = param_1[1];
    local_40 = 0;
    plStack_38 = param_1 + 3;
    local_58 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x2e6300,0x10);
    if (local_58 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lStack_50 = local_58 + (lVar2 - lVar1 >> 4) * 0x10;
    local_40 = local_58 + 0x2e6300;
    local_48 = lStack_50;
    FUN_01305610(param_1,&local_58);
    FUN_0130554c(&local_58);
  }
  return;
}


