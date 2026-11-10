/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02158ec8; name: FUN_02158ec8
 */


undefined8 FUN_02158ec8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x950);
  if (plVar5 != (long *)0x0) {
    puVar2 = (undefined8 *)(**(code **)plVar5[5])(plVar5 + 5);
    if (((*PTR_DAT_047dd130 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd130), iVar1 != 0)) {
      uVar4 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd138 = uVar4;
      __cxa_guard_release(PTR_DAT_047dd130);
    }
    if (puVar2 != (undefined8 *)0x0) {
      while (puVar2 != (undefined8 *)PTR_DAT_047dd138) {
        puVar2 = (undefined8 *)*puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
      }
      uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0xa10) == 0)) {
        FUN_02158fb4(param_1);
        return 1;
      }
    }
  }
  return 0;
}


