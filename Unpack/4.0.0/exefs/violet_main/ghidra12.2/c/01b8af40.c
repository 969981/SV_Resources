/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b8af40; name: FUN_01b8af40
 */


undefined8 FUN_01b8af40(undefined8 param_1)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  if (((DAT_0480aad8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0480aad8), iVar3 != 0)) {
    DAT_0480b918 = '\x01';
    __cxa_guard_release(&DAT_0480aad8);
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar5 = (char *)*puVar4, pcVar5 == (char *)0x0)) {
    if ((DAT_0480a968 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0480a968);
      pcVar5 = &DAT_0480a958;
      if (iVar3 != 0) {
        DAT_0480a958 = 0;
        DAT_0480a960 = 0;
        FUN_00100190(&LAB_009532e8,&DAT_0480a958,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480a968);
      }
    }
    else {
      pcVar5 = &DAT_0480a958;
    }
  }
  uVar2 = FUN_00c92df0(param_1,2,0);
  lVar1 = 0x80;
  if (DAT_0480b918 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar5 == '\x01') || (*pcVar5 == '\0')) && (*(long *)(pcVar5 + 8) != 0)) {
    *(undefined2 *)(*(long *)(pcVar5 + 8) + lVar1) = uVar2;
  }
  return 0;
}


