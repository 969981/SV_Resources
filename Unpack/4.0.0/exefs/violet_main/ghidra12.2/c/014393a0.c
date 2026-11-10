/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014393a0; name: FUN_014393a0
 */


undefined8 FUN_014393a0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04856e48 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04856e48);
      puVar4 = &DAT_04856e30;
      if (iVar1 != 0) {
        DAT_04856e30 = 0;
        DAT_04856e38 = 0;
        FUN_00100190(FUN_011c9250,&DAT_04856e30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04856e48);
      }
    }
    else {
      puVar4 = &DAT_04856e30;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04856f40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04856f40), iVar1 != 0)) {
    DAT_04856f30 = &LAB_02ba54a8;
    DAT_04856f38 = 0;
    __cxa_guard_release(&DAT_04856f40);
  }
  FUN_014394a4(&DAT_04856f30,puVar4,uVar3);
  return 0;
}


