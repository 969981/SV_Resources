/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ff16c; name: FUN_007ff16c
 */


void FUN_007ff16c(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 local_40;
  undefined4 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1378));
  if (*(char *)(*(long *)(param_1 + 0x1308) + 0x10) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x1308) + 0x10) = 0;
    FUN_00802150(*(undefined8 *)(param_1 + 0x1300));
  }
  lVar4 = *(long *)(param_1 + 0x1300);
  bVar1 = *(char *)(lVar4 + 0xa8) == '\0';
  if (bVar1) {
    cVar2 = *(char *)(param_1 + 0x1370);
  }
  else {
    *(undefined1 *)(lVar4 + 0xa8) = 0;
    FUN_00802224(lVar4,*(undefined8 *)(param_1 + 0x1308));
    cVar2 = *(char *)(param_1 + 0x1370);
  }
  if (cVar2 == '\0') {
    if (*(short *)(param_1 + 0x114e) != 0) {
      uVar6 = 0;
      do {
        plVar5 = (long *)FUN_008013e4(*(undefined8 *)(param_1 + 0x1308),uVar6);
        if ((((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(*(long *)(param_1 + 0x1308) + 0x18)))
            && (*(char *)((long)plVar5 + 0x5a) != '\0')) && (1 < (int)plVar5[2] - 0xdU))
        goto LAB_007ff254;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 0x114e));
    }
    *(undefined1 *)(param_1 + 0x1370) = 1;
  }
LAB_007ff254:
  if (!bVar1) {
    local_38 = 0;
    local_40 = 0x1000000;
    FUN_008015b0(*(undefined8 *)(param_1 + 0x1308),&local_40);
    puVar3 = PTR_DAT_047d0860;
    lVar4 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
    *(undefined1 *)(*(long *)(lVar4 + 0x10) + 0xa8) = 1;
    lVar4 = FUN_007f74c0(*(undefined8 *)puVar3);
    *(undefined1 *)(*(long *)(lVar4 + 8) + 0x82) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1378));
  return;
}


