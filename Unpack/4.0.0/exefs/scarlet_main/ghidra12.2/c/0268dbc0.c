/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0268dbc0; name: FUN_0268dbc0
 */


undefined8 FUN_0268dbc0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  uVar2 = FUN_0268da20(param_1,1);
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_048569d8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048569d8);
      if (iVar1 != 0) {
        DAT_048569b0 = 0;
        DAT_048569b8 = 0;
        FUN_00100190(&LAB_02693a94,&DAT_048569b0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048569d8);
      }
      puVar4 = &DAT_048569b0;
    }
    else {
      puVar4 = &DAT_048569b0;
    }
  }
  if (((DAT_048569a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048569a8), iVar1 != 0)) {
    DAT_04859078 = 1;
    __cxa_guard_release(&DAT_048569a8,puVar4);
  }
  uVar2 = FUN_0268dcd0(uVar2,puVar4);
  FUN_00c85bd0(param_1,uVar2);
  return 1;
}


