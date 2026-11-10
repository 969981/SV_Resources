/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01490318; name: FUN_01490318
 */


void FUN_01490318(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((DAT_0483aff0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483aff0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a3d9c0,&DAT_0483afe0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483aff0);
    }
  }
  uVar1 = DAT_0483afe0;
  DAT_0483aff8 = DAT_0483afe0;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_30 = param_1[2];
  local_28 = (long *)param_1[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_014903f8(uVar1,&local_40,param_2 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


