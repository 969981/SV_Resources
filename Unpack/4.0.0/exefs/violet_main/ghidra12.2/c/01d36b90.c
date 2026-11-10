/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d36b90; name: FUN_01d36b90
 */


undefined8 FUN_01d36b90(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (((DAT_0482dc60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0482dc60), iVar2 != 0)) {
    DAT_0482e4e0 = '\x01';
    __cxa_guard_release(&DAT_0482dc60);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar3, pcVar5 == (char *)0x0)) {
    if ((DAT_0482dc00 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0482dc00);
      if (iVar2 != 0) {
        DAT_0482dbd8 = 0;
        DAT_0482dbe0 = 0;
        FUN_00100190(&LAB_01d392cc,&DAT_0482dbd8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0482dc00);
      }
      pcVar5 = &DAT_0482dbd8;
    }
    else {
      pcVar5 = &DAT_0482dbd8;
    }
  }
  lVar1 = 0x10;
  if (DAT_0482e4e0 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar5 == '\x01') || (*pcVar5 == '\0')) && (*(long *)(pcVar5 + 8) != 0)) {
    uVar4 = *(undefined8 *)(*(long *)(pcVar5 + 8) + lVar1);
  }
  else {
    uVar4 = 0;
  }
  FUN_00c5d960(param_1,uVar4);
  return 1;
}


