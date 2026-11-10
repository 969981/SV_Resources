/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02162f70; name: FUN_02162f70
 */


undefined8 FUN_02162f70(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047dd110 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd110), puVar1 = PTR_DAT_047dd048, iVar2 != 0)) {
    if (((*PTR_DAT_047dd040 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd040), iVar2 != 0)) {
      uVar4 = FUN_00ea2d24();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047dd040);
    }
    *(undefined **)PTR_DAT_047dd118 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd110);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047dd118) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


