/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021593c0; name: FUN_021593c0
 */


undefined8 FUN_021593c0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (**(long **)(param_1 + 0x950) != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x950) + 0x28))();
    if (((*PTR_DAT_047dd130 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dd130), iVar1 != 0)) {
      uVar3 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd138 = uVar3;
      __cxa_guard_release(PTR_DAT_047dd130);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047dd138) {
        if (*(int *)(param_1 + 0xa10) == 0) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


