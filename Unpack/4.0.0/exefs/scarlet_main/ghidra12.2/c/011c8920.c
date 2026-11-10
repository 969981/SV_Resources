/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c8920; name: FUN_011c8920
 */


undefined8 * FUN_011c8920(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d9330 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9330), puVar2 = PTR_DAT_047d9168, iVar3 != 0)) {
    if (((*PTR_DAT_047d9160 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9160), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
        uVar5 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d9160);
    }
    *(undefined **)PTR_DAT_047d9338 = puVar2;
    __cxa_guard_release(PTR_DAT_047d9330);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar4 == (long *)PTR_DAT_047d9338) break;
    plVar4 = (long *)*plVar4;
  }
  return param_1 + -5;
}


