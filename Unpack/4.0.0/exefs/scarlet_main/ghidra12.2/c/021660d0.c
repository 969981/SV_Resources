/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021660d0; name: FUN_021660d0
 */


uint FUN_021660d0(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    if (((*PTR_DAT_047d9060 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9060), iVar2 != 0)) {
      uVar4 = FUN_01de2ec4();
      *(undefined8 *)PTR_DAT_047d9068 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9060);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d9068) {
        uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar1 & 1;
      }
    }
  }
  return 0;
}


