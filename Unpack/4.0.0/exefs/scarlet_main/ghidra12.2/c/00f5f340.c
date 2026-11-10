/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5f340; name: FUN_00f5f340
 */


void FUN_00f5f340(long param_1,byte param_2)

{
  int iVar1;
  ulong uVar2;
  byte local_24 [4];
  
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  uVar2 = (**(code **)(*DAT_04859430 + 0x48))();
  if (((param_2 & 1) != 0) ||
     ((uVar2 <= *(ulong *)(param_1 + 0x10) && (*(float *)(param_1 + 0x1c) <= 0.0)))) {
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
    FUN_026ff704();
    FUN_0173c198();
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      local_24[0] = param_2 & 1;
      (**(code **)(param_1 + 0x20))(param_1 + 0x40,local_24);
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
    if ((param_2 & 1) == 0) {
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    }
    else {
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
    }
  }
  return;
}


