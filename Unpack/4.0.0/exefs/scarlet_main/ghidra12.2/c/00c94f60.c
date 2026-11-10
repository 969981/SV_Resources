/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c94f60; name: FUN_00c94f60
 */


void FUN_00c94f60(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(ulong *)(param_1 + 0x60) < 0xfffffffffffffffe) &&
      (((*(long *)(param_1 + 0x40) != 0 || (*(long *)(param_1 + 0x48) != 0)) &&
       (1.1920929e-07 < *(float *)(param_2 + 0x10))))) && (*(char *)(param_1 + 0x68) == '\0')) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar2;
    FUN_0236cff8(uVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x60),param_2);
    return;
  }
  return;
}


