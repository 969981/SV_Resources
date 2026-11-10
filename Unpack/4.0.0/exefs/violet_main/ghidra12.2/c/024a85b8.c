/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a85b8; name: FUN_024a85b8
 */


ulong FUN_024a85b8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_f0;
  long local_e8;
  undefined1 auStack_e0 [160];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  pthread_mutex_t *local_28;
  
  local_28 = (pthread_mutex_t *)param_1[3];
  local_38 = auStack_e0;
  local_40 = 10;
  local_30 = 0;
  pthread_mutex_lock(local_28);
  if (*(long *)*param_1 == param_2) {
    if ((param_1[1] == 0) || (*(int *)(param_1[1] + 8) != 1)) {
      uVar3 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],0x20,0x10);
      FUN_024a8fa0(uVar3,(undefined8 *)*param_1,*(undefined8 *)*param_1,param_1[5]);
      local_e8 = param_1[5];
      if (local_e8 == 0) {
        local_e8 = FUN_024a7940();
      }
      FUN_024a9050(param_1,uVar3,param_1,&local_e8);
    }
    local_f0 = *(undefined8 *)(*(long *)*param_1 + 8);
    FUN_024a8750(param_1,auStack_e0,0,&local_f0,0);
  }
  uVar1 = pthread_mutex_unlock(local_28);
  uVar2 = (ulong)uVar1;
  if (local_38 != (undefined1 *)0x0) {
    uVar2 = FUN_024a5ff8(auStack_e0,&local_f0);
  }
  return uVar2;
}


