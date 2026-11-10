/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03240f5c; name: FUN_03240f5c
 */


void FUN_03240f5c(void)

{
  long lVar1;
  long lVar2;
  
  nn::os::FreeTlsSlot(DAT_048857a8);
  nn::os::LockMutex(DAT_048857c0);
  lVar1 = *DAT_048857c8;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x528);
    FUN_03241154(lVar1);
    (**(code **)(*DAT_048857d8 + 0x18))(DAT_048857d8,lVar1,0x578);
    lVar1 = lVar2;
  }
  DAT_048857b0 = 0;
  nn::os::UnlockMutex(DAT_048857c0);
  nn::os::FinalizeMutex(DAT_048857c0);
  (**(code **)(*DAT_048857d8 + 0x18))(DAT_048857d8,DAT_048857c0,0x20);
  DAT_048857c0 = (MutexType *)0x0;
  (**(code **)(*DAT_048857d8 + 0x18))(DAT_048857d8,DAT_048857c8,0x10);
  lVar1 = DAT_04885800;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    (**(code **)(*DAT_048857d8 + 0x18))(DAT_048857d8,lVar1,0x10);
    lVar1 = lVar2;
  }
  DAT_048857b0 = 0;
  DAT_048857c8 = (long *)0x0;
  DAT_048857d0 = 0;
  DAT_048857d8 = (long *)0x0;
  DAT_048857e0 = 0;
  DAT_048857e8 = 0;
  DAT_048857f0 = 0;
  DAT_048857f8 = 0;
  DAT_04885800 = 0;
  return;
}


