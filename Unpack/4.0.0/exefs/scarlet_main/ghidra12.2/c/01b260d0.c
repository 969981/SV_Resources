/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b260d0; name: FUN_01b260d0
 */


undefined8 FUN_01b260d0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  if (((DAT_04805708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04805708), iVar1 != 0)) {
    DAT_0451ef58 = 0;
    __cxa_guard_release(&DAT_04805708);
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04805700 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04805700);
      puVar4 = &DAT_048056d8;
      if (iVar1 != 0) {
        DAT_048056d8 = 0;
        DAT_048056e0 = 0;
        FUN_00100190(&LAB_01704894,&DAT_048056d8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04805700);
      }
    }
    else {
      puVar4 = &DAT_048056d8;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  FUN_01b261c8(&DAT_0451ef58,puVar4,uVar3);
  return 0;
}


