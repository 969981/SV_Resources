/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02159980; name: FUN_02159980
 */


undefined8 FUN_02159980(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x950);
  if (plVar5 != (long *)0x0) {
    plVar2 = (long *)(**(code **)plVar5[5])(plVar5 + 5);
    if (((*PTR_DAT_047dd140 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd140), iVar1 != 0)) {
      uVar4 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd148 = uVar4;
      __cxa_guard_release(PTR_DAT_047dd140);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047dd148) {
        uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0xa10) == 0) {
          (**(code **)(*plVar5 + 0x78))(plVar5,param_2 & 1);
          *(undefined1 *)(param_1 + 0x81) = 1;
          FUN_02159a80(param_1);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


