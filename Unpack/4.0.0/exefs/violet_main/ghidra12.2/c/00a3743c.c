/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3743c; name: FUN_00a3743c
 */


void FUN_00a3743c(undefined1 *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_048358b0 != (code *)0x0) {
    *param_1 = 1;
    if (*(int *)(param_1 + 4) < 0) {
      local_14 = 0;
      (*DAT_048358b0)(&DAT_048358d0,&local_14);
    }
    if (DAT_04835930 != (code *)0x0) {
      local_18 = 0;
      (*DAT_04835930)(&DAT_04835950,&local_18);
      if (((*PTR_DAT_047d62a0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar1 != 0)) {
        FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d62a0);
      }
      lVar2 = *(long *)PTR_DAT_047d62a8;
      *(long *)PTR_DAT_047d62b0 = lVar2;
      if (lVar2 != 0) {
        FUN_00b0c448();
      }
    }
  }
  return;
}


