/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a283f0; name: FUN_02a283f0
 */


void FUN_02a283f0(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long *local_8;
  
  if ((DAT_0483adf8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483adf8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483adf8);
    }
  }
  uVar1 = DAT_0483ade8;
  DAT_0483ae00 = DAT_0483ade8;
  local_8 = (long *)*param_1;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x58))();
  }
  FUN_02a284b4(uVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return;
}


