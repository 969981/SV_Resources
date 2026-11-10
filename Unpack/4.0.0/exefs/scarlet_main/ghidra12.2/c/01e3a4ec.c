/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3a4ec; name: FUN_01e3a4ec
 */


uint FUN_01e3a4ec(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*param_1 != 0) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    if (((*PTR_DAT_047d7d10 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d7d10), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)PTR_DAT_047d7d18 = puVar1;
      __cxa_guard_release(PTR_DAT_047d7d10);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d7d18) {
        uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar2 & 1;
      }
    }
  }
  return 0;
}


