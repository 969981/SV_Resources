/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01593870; name: FUN_01593870
 */


undefined8 FUN_01593870(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 = (undefined1 *)*puVar4, puVar5 == (undefined1 *)0x0)
     ) {
    if ((DAT_04806580 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04806580);
      puVar5 = &DAT_04806558;
      if (iVar1 != 0) {
        DAT_04806558 = 0;
        DAT_04806560 = 0;
        FUN_00100190(&LAB_01b3df58,&DAT_04806558,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04806580);
      }
    }
    else {
      puVar5 = &DAT_04806558;
    }
  }
  iVar1 = FUN_00c92df0(param_1,2,0);
  iVar2 = FUN_00cc4dc0(param_1,3);
  if (((DAT_04806588 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04806588), iVar3 != 0)) {
    DAT_04809bd0 = 1;
    __cxa_guard_release(&DAT_04806588);
  }
  FUN_01593984(puVar5,(long)iVar1,iVar2 != 0);
  return 0;
}


