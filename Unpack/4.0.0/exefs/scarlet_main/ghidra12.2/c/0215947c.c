/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215947c; name: FUN_0215947c
 */


undefined8 FUN_0215947c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = (long *)**(undefined8 **)(param_1 + 0x950);
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)(**(code **)plVar4[5])(plVar4 + 5);
    if (((*PTR_DAT_047dd140 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd140), iVar1 != 0)) {
      uVar3 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd148 = uVar3;
      __cxa_guard_release(PTR_DAT_047dd140);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047dd148) {
        if (*(int *)(param_1 + 0xa10) != 0) {
          return 0;
        }
        if (*(char *)((long)plVar4 + 0x4c) == '\0') {
          (**(code **)(*plVar4 + 0x70))();
          *(undefined1 *)(param_1 + 0x81) = 1;
          FUN_02159584(param_1);
          return 1;
        }
        (**(code **)(*plVar4 + 0x80))();
        *(undefined1 *)(param_1 + 0x81) = 1;
        FUN_02159784(param_1);
        return 1;
      }
    }
  }
  return 0;
}


