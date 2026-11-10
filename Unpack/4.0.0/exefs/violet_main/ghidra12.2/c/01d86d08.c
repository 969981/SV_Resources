/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d86d08; name: thunk_FUN_01b91b38
 */


void thunk_FUN_01b91b38(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_0483adf8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483adf8);
    if (iVar1 != 0) {
      FUN_00100190(param_1,param_2,&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483adf8);
    }
  }
  DAT_0483ae00 = DAT_0483ade8;
  FUN_01f9adc4(param_1,param_2,DAT_0483ade8,param_3);
  return;
}


