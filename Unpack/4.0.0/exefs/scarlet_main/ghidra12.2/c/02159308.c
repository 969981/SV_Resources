/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02159308; name: FUN_02159308
 */


undefined8 FUN_02159308(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (**(long **)(param_1 + 0x950) != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x950) + 0x28))();
    if (((*PTR_DAT_047dd140 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd140), iVar1 != 0)) {
      uVar3 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd148 = uVar3;
      __cxa_guard_release(PTR_DAT_047dd140);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047dd148) {
        if (*(int *)(param_1 + 0xa10) == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


