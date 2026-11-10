/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014aeff0; name: FUN_014aeff0
 */


undefined8 FUN_014aeff0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)(**(code **)*param_1)();
  if (((DAT_04837630 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04837630), puVar1 = PTR_DAT_047d3988, iVar2 != 0)) {
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0)) {
      uVar4 = FUN_01adab84();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    DAT_04837628 = puVar1;
    __cxa_guard_release(&DAT_04837630);
  }
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if ((undefined **)puVar3 == &DAT_04837628) break;
    puVar3 = (undefined8 *)*puVar3;
  }
  return 1;
}


