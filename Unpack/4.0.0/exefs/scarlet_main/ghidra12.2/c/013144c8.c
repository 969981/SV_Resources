/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013144c8; name: FUN_013144c8
 */


void FUN_013144c8(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined2 uVar3;
  code *pcVar4;
  
  FUN_013146c4();
  FUN_01314a94(param_1);
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  iVar2 = *(int *)(param_1 + 0x3f4);
  if (iVar2 - 3U < 2) {
    if ((*(char *)(param_1 + 0x463) != '\0') &&
       ((*(undefined1 *)(param_1 + 0x460) = 1, *(char *)(param_1 + 0x58) != -0x7f ||
        (*(char *)(param_1 + 0x59) != -0x7f)))) {
      uVar3 = *(undefined2 *)(param_1 + 0x58);
      plVar1 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x8181;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
    }
  }
  else if (iVar2 == 1) {
    if ((*(char *)(param_1 + 0x463) != '\0') &&
       ((*(char *)(param_1 + 0x58) != '\0' || (*(char *)(param_1 + 0x59) != '\b')))) {
      uVar3 = *(undefined2 *)(param_1 + 0x58);
      plVar1 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x800;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
    }
    pcVar4 = *(code **)(param_1 + 0x368);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(undefined8 *)(param_1 + 0x370) = 0;
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(undefined8 *)(param_1 + 0x360) = 0;
      (*pcVar4)(param_1 + 0x380);
    }
    *(undefined1 **)(param_1 + 0x360) = &LAB_00e5c18c;
    *(long *)(param_1 + 0x380) = param_1;
    *(undefined1 **)(param_1 + 0x368) = &LAB_02e3fe38;
    *(undefined1 **)(param_1 + 0x370) = &LAB_02e3fe3c;
    *(undefined1 **)(param_1 + 0x378) = &LAB_02e3fe48;
  }
  else if (iVar2 == 2) {
    if ((*(char *)(param_1 + 0x463) != '\0') &&
       ((*(undefined1 *)(param_1 + 0x460) = 1, *(char *)(param_1 + 0x58) != -0x7f ||
        (*(char *)(param_1 + 0x59) != -0x7f)))) {
      uVar3 = *(undefined2 *)(param_1 + 0x58);
      plVar1 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x8181;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
    }
    *(undefined1 *)(param_1 + 0x462) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


