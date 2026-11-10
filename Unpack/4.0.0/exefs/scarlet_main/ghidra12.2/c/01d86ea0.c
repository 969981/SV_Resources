/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d86ea0; name: thunk_FUN_01b92170
 */


void thunk_FUN_01b92170(undefined8 param_1,undefined1 param_2 [16])

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_2._0_8_;
  if ((DAT_0483adf8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483adf8);
    uVar2 = (ulong)param_2._0_4_;
    if (iVar1 != 0) {
      FUN_00100190(param_1,&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483adf8);
      uVar2 = (ulong)param_2._0_4_;
    }
  }
  DAT_0483ae00 = DAT_0483ade8;
  FUN_01056a08(param_1,0,uVar2,0xc61c3c00,0x461c3c00,DAT_0483ade8,0);
  return;
}


