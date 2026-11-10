/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aefdb0; name: FUN_01aefdb0
 */


undefined8 FUN_01aefdb0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_04801498 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04801498), iVar2 != 0)) {
    DAT_04801918 = '\x01';
    __cxa_guard_release(&DAT_04801498);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_04801480 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04801480);
      pcVar4 = &DAT_04801458;
      if (iVar2 != 0) {
        DAT_04801458 = 0;
        DAT_04801460 = 0;
        FUN_00100190(&LAB_01a96e3c,&DAT_04801458,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04801480);
      }
    }
    else {
      pcVar4 = &DAT_04801458;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  lVar1 = 4;
  if (DAT_04801918 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar4 == '\0') || (*pcVar4 == '\x01')) && (*(long *)(pcVar4 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar4 + 8) + lVar1) = iVar2 != 0;
  }
  return 0;
}


