/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01981264; name: FUN_01981264
 */


undefined8 FUN_01981264(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(long **)(param_1 + 0x40) == (long *)0x0) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x68))(), (uVar2 & 1) != 0)) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    uVar3 = *(undefined8 *)PTR_DAT_047d6ca0;
    *(undefined8 *)PTR_DAT_047d6ca8 = uVar3;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


