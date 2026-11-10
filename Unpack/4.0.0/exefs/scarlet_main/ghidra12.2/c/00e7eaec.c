/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e7eaec; name: FUN_00e7eaec
 */


uint FUN_00e7eaec(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*param_1 != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
    if (((*PTR_DAT_047ddc60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047ddc60), puVar2 = PTR_DAT_047d9168, iVar4 != 0)) {
      if (((*PTR_DAT_047d9160 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9160), puVar1 = PTR_DAT_047d3988, iVar4 != 0)) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar4 != 0)) {
          uVar6 = FUN_01adab84();
          *(undefined8 *)puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_047d9160);
      }
      *(undefined **)PTR_DAT_047ddc68 = puVar2;
      __cxa_guard_release(PTR_DAT_047ddc60);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_047ddc68) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        return ~uVar3 & 1;
      }
    }
  }
  return 0;
}


