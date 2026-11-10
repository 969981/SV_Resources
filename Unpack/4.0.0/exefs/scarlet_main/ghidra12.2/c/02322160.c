/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02322160; name: FUN_02322160
 */


undefined8 FUN_02322160(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04846e20 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04846e20);
      puVar4 = &DAT_04846df8;
      if (iVar1 != 0) {
        DAT_04846df8 = 0;
        DAT_04846e00 = 0;
        FUN_00100190(&LAB_023275a0,&DAT_04846df8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04846e20);
      }
    }
    else {
      puVar4 = &DAT_04846df8;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04846e68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04846e68), iVar1 != 0)) {
    DAT_04846e58 = PTR_FUN_047de540;
    DAT_04846e60 = 0;
    __cxa_guard_release(&DAT_04846e68);
  }
  FUN_02322264(&DAT_04846e58,puVar4,uVar3);
  return 0;
}


