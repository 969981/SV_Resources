/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014fb77c; name: FUN_014fb77c
 */


void FUN_014fb77c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_047d8658 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8658), iVar1 != 0))
  {
    FUN_00100190(&LAB_00a1bb68,PTR_DAT_047d8660,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8658);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8660;
  local_40 = 0x4596c46a040ed6ad;
  pcStack_38 = "SystemColorFade";
  local_30 = 0xf;
  local_28 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8668 = uVar2;
  FUN_014fbaa8(uVar2,&local_40);
  FUN_014fc4a4(param_1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


