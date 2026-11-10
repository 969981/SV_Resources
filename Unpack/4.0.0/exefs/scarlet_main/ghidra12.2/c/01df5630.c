/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df5630; name: FUN_01df5630
 */


void FUN_01df5630(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if ((DAT_0483adf8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0483adf8);
    if (iVar1 != 0) {
      FUN_00100190(param_1,param_2,param_3,param_4,&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483adf8);
    }
  }
  DAT_0483ae00 = DAT_0483ade8;
  FUN_010568f0(param_1,param_2,param_3,param_4,0xc61c3c00,0x461c3c00,DAT_0483ade8,param_5);
  return;
}


