/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f74630; name: FUN_00f74630
 */


undefined8 FUN_00f74630(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_048312e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048312e0);
      if (iVar1 != 0) {
        DAT_048312b8 = 0;
        DAT_048312c0 = 0;
        FUN_00100190(&LAB_0193eb18,&DAT_048312b8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048312e0);
      }
      puVar3 = &DAT_048312b8;
    }
    else {
      puVar3 = &DAT_048312b8;
    }
  }
  if (((DAT_04831680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04831680), iVar1 != 0)) {
    DAT_04831678 = PTR_LAB_047d7d20;
    __cxa_guard_release(&DAT_04831680,puVar3);
  }
  FUN_00f74720(&DAT_04831678,puVar3);
  return 0;
}


