/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156b384; name: FUN_0156b384
 */


void FUN_0156b384(byte param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((DAT_0483b1e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483b1e0);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b1e0);
    }
  }
  DAT_0483b1e8 = DAT_0483b1d0;
  *(byte *)(DAT_0483b1d0 + 0x68) = param_1 & 1;
  local_40 = 0x88a93e1a8489cbf5;
  puStack_38 = PTR_s_DynamicAOEnable_047db098;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  plVar2 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,param_1 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


