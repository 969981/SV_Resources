/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005bf558; name: FUN_005bf558
 */


void FUN_005bf558(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(long *)*param_1 != 0) {
      FUN_005bfabc(*(long *)*param_1,&DAT_03c886bc);
      lVar4 = *(long *)*param_1;
      uVar1 = FUN_01cf7e20();
      uVar2 = FUN_01cf7e20();
      uVar3 = FUN_01cf7e20();
      if (*(char *)(lVar4 + 0x40) == '\0') {
        lVar5 = *(long *)(lVar4 + 0x10);
        *(undefined1 *)(lVar4 + 0x40) = 1;
        nn::os::LockMutex((MutexType *)(lVar5 + 0x38));
        *(undefined1 *)(lVar5 + 200) = 1;
        *(undefined8 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x80) = uVar1;
        *(undefined8 *)(lVar5 + 0x88) = 0;
        *(undefined8 *)(lVar5 + 0x90) = 0;
        *(undefined8 *)(lVar5 + 0x70) = 0;
        *(undefined8 *)(lVar5 + 0x68) = 0;
        *(undefined8 *)(lVar5 + 0x98) = 0;
        *(undefined8 *)(lVar5 + 0xa0) = uVar2;
        *(undefined8 *)(lVar5 + 0xb8) = 0;
        *(undefined8 *)(lVar5 + 0xc0) = uVar3;
        *(undefined8 *)(lVar5 + 0xa8) = 0;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
        *(undefined8 *)(lVar5 + 0x60) = 0;
        *(undefined8 *)(lVar5 + 0x58) = 0;
        nn::os::SignalEvent((EventType *)(lVar5 + 0x10));
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x38));
        return;
      }
    }
  }
  return;
}


