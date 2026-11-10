/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026a6ee0; name: FUN_026a6ee0
 */


undefined8 FUN_026a6ee0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04857068 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04857068);
      if (iVar1 != 0) {
        DAT_04857050 = 0;
        DAT_04857058 = 0;
        FUN_00100190(FUN_00efba40,&DAT_04857050,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04857068);
      }
      puVar4 = &DAT_04857050;
    }
    else {
      puVar4 = &DAT_04857050;
    }
  }
  if (((DAT_04857070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04857070), iVar1 != 0)) {
    DAT_04859130 = 1;
    __cxa_guard_release(&DAT_04857070);
  }
  uVar3 = FUN_026a6fd8(puVar4);
  FUN_00c85bd0(param_1,uVar3);
  return 1;
}


