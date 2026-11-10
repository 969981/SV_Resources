/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03460b70; name: FUN_03460b70
 */


void FUN_03460b70(undefined8 *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_047c10a0;
  puVar1 = PTR_DAT_047e2fd0;
  puVar2 = (ulong *)param_1[0x1f];
  while (puVar2 != (ulong *)0x0) {
    uVar3 = *puVar2;
    (**(code **)(puVar1 + 0x30))(0x10);
    puVar2 = (ulong *)(uVar3 & 0x3fffffffffffffff);
  }
  param_1[0x1f] = 0;
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xd));
  return;
}


