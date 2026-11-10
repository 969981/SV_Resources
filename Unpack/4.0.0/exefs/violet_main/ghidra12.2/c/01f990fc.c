/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f990fc; name: FUN_01f990fc
 */


void FUN_01f990fc(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((DAT_0483add8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483add8);
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_02a27cb8,&DAT_0483adc8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483add8);
    }
  }
  DAT_0483ade0 = DAT_0483adc8;
  FUN_0172b4c8(param_1,DAT_0483adc8,param_2);
  return;
}


