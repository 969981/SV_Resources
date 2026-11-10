/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f92380; name: FUN_01f92380
 */


uint FUN_01f92380(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    if (((*PTR_DAT_047d5688 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5688), iVar2 != 0)) {
      uVar4 = FUN_01bd65a8();
      *(undefined8 *)PTR_DAT_047d5690 = uVar4;
      __cxa_guard_release(PTR_DAT_047d5688);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d5690) {
        uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar1 & 1;
      }
    }
  }
  return 0;
}


