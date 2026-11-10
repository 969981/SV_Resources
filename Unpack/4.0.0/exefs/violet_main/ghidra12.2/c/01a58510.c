/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a58510; name: FUN_01a58510
 */


undefined8 FUN_01a58510(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined4 local_24;
  
  puVar5 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar5 == (undefined8 *)0x0) || (pcVar7 = (char *)*puVar5, pcVar7 == (char *)0x0)) {
    if ((DAT_0480b0a0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_0480b0a0);
      pcVar7 = &DAT_0480b088;
      if (iVar4 != 0) {
        DAT_0480b088 = 0;
        DAT_0480b090 = 0;
        FUN_00100190(FUN_00c937e0,&DAT_0480b088,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480b0a0);
      }
    }
    else {
      pcVar7 = &DAT_0480b088;
    }
  }
  uVar3 = FUN_00c92df0(param_1,2,0);
  if (((DAT_0480b0e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0480b0e0), iVar4 != 0)) {
    DAT_0480bbd0 = '\x01';
    __cxa_guard_release(&DAT_0480b0e0);
  }
  cVar2 = *pcVar7;
  pcVar1 = FUN_0095525c;
  if (DAT_0480bbd0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_24 = uVar3;
  if (cVar2 == '\x02') {
    if (*(long *)(pcVar7 + 8) == 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(pcVar7 + 8) + 0x10);
    if (lVar6 == 0) {
      return 0;
    }
    lVar6 = lVar6 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01a58680(pcVar7 + 8,pcVar1,0,&local_24);
      return 0;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return 0;
    }
    lVar6 = *(long *)(pcVar7 + 8);
    if (lVar6 == 0) {
      return 0;
    }
  }
  (*pcVar1)(lVar6);
  return 0;
}


