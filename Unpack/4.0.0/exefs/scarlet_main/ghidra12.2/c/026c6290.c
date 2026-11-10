/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026c6290; name: FUN_026c6290
 */


undefined8 FUN_026c6290(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04857a50 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04857a50);
      if (iVar1 != 0) {
        DAT_04857a38 = 0;
        DAT_04857a40 = 0;
        FUN_00100190(FUN_01853664,&DAT_04857a38,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04857a50);
      }
      puVar4 = &DAT_04857a38;
    }
    else {
      puVar4 = &DAT_04857a38;
    }
  }
  if (((DAT_04857a58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04857a58), iVar1 != 0)) {
    DAT_04859200 = 1;
    __cxa_guard_release(&DAT_04857a58);
  }
  uVar3 = FUN_026c6388(puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


