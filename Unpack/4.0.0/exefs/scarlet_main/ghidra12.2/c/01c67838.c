/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c67838; name: FUN_01c67838
 */


void FUN_01c67838(void)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_04839720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839720), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1b6d8,&DAT_04839710,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839720);
  }
  lVar1 = DAT_04839710;
  DAT_04839708 = DAT_04839710;
  if (DAT_04839710 != 0) {
    *(undefined1 *)(DAT_04839710 + 0x39) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 0x48) = 0;
  }
  return;
}


