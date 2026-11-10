/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299ce20; name: FUN_0299ce20
 */


void FUN_0299ce20(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  float local_28;
  
  nn::os::LockMutex((MutexType *)(param_4 + 0x150));
  *(long *)(param_4 + 0x128) = param_1._8_8_;
  *(long *)(param_4 + 0x120) = param_1._0_8_;
  *(long *)(param_4 + 0x138) = param_2._8_8_;
  *(long *)(param_4 + 0x130) = param_2._0_8_;
  *(long *)(param_4 + 0x148) = param_3._8_8_;
  *(long *)(param_4 + 0x140) = param_3._0_8_;
  if (*(long *)(param_4 + 0x40) == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = FUN_00cf8198();
  }
  local_40 = -param_2._8_4_;
  local_34 = -param_3._8_4_;
  local_28 = -param_1._8_4_;
  plVar2 = *(long **)(*(long *)(param_4 + 0x200) + 0x60);
  local_48 = param_2._0_8_;
  local_3c = param_3._0_8_;
  local_30 = param_1._0_8_;
  (**(code **)(*plVar2 + 0x70))(plVar2,uVar1,&local_48);
  nn::os::UnlockMutex((MutexType *)(param_4 + 0x150));
  return;
}


