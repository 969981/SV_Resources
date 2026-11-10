/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ce900; name: FUN_024ce900
 */


undefined8 FUN_024ce900(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar4, pcVar5 == (char *)0x0)) {
    if ((DAT_0484cf88 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0484cf88);
      pcVar5 = &DAT_0484cf60;
      if (iVar3 != 0) {
        DAT_0484cf60 = 0;
        DAT_0484cf68 = 0;
        FUN_00100190(&LAB_024d1cf8,&DAT_0484cf60,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484cf88);
      }
    }
    else {
      pcVar5 = &DAT_0484cf60;
    }
  }
  if (((DAT_0484cf98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0484cf98), iVar3 != 0)) {
    DAT_0484e868 = '\x01';
    __cxa_guard_release(&DAT_0484cf98);
  }
  pcVar1 = (code *)PTR_FUN_047deef0;
  if (DAT_0484e868 == '\0') {
    pcVar1 = (code *)0x0;
  }
  auVar2 = ZEXT812(0);
  if (((*pcVar5 == '\x01') || (*pcVar5 == '\0')) &&
     (auVar2 = ZEXT812(0), *(long *)(pcVar5 + 8) != 0)) {
    auVar2 = (*pcVar1)();
  }
  FUN_00c46da0((double)auVar2._0_4_,param_1);
  FUN_00c46da0((double)auVar2._4_4_,param_1);
  FUN_00c46da0((double)auVar2._8_4_,param_1);
  return 3;
}


