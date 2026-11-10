/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bf268; name: FUN_027bf268
 */


void FUN_027bf268(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  
  FUN_027bf1b4();
  lVar3 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar3 != 0) {
    plVar4 = *(long **)(param_1 + 0x138);
    plVar1 = *(long **)(lVar3 + 0x30);
    if (plVar1 != (long *)0x0) {
      if (plVar1 == (long *)(lVar3 + 0x10)) {
        pcVar2 = *(code **)(*plVar1 + 0x10);
      }
      else {
        pcVar2 = *(code **)(*plVar1 + 0x18);
      }
      (*pcVar2)();
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,0x40,0x10);
  }
  plVar1 = *(long **)(param_1 + 0x120);
  if (plVar1 != (long *)0x0) {
    if (plVar1 == (long *)(param_1 + 0x100)) {
      pcVar2 = *(code **)(*plVar1 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*plVar1 + 0x18);
    }
    (*pcVar2)();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xd8));
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0xc0) = lVar3;
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),lVar3,*(long *)(param_1 + 200) - lVar3,8);
  }
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0xa0) = lVar3;
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),lVar3,*(long *)(param_1 + 0xa8) - lVar3,8);
  }
  lVar3 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar3 != 0) {
    plVar1 = *(long **)(param_1 + 0x90);
    FUN_027bf154(lVar3);
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,0x148,8);
  }
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 == (long *)(param_1 + 0x50)) {
                    /* WARNING: Could not recover jumptable at 0x027bf3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027bf39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


