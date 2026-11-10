/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a45920; name: FUN_01a45920
 */


undefined8 FUN_01a45920(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar6 = (char *)*puVar4, pcVar6 == (char *)0x0)) {
    if ((DAT_0480c070 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0480c070);
      pcVar6 = &DAT_0480c058;
      if (iVar3 != 0) {
        DAT_0480c058 = 0;
        DAT_0480c060 = 0;
        FUN_00100190(FUN_015a5d3c,&DAT_0480c058,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480c070);
      }
    }
    else {
      pcVar6 = &DAT_0480c058;
    }
  }
  if (((DAT_0480c0a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0480c0a0), iVar3 != 0)) {
    DAT_0480c6f0 = '\x01';
    __cxa_guard_release(&DAT_0480c0a0);
  }
  cVar2 = *pcVar6;
  pcVar1 = (code *)PTR_FUN_047d5258;
  if (DAT_0480c6f0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (cVar2 == '\x02') {
    if (*(long *)(pcVar6 + 8) == 0) {
      return 0;
    }
    lVar5 = *(long *)(*(long *)(pcVar6 + 8) + 0x10);
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = lVar5 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      FUN_01a45a6c(pcVar6 + 8,pcVar1,0);
      return 0;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return 0;
    }
    lVar5 = *(long *)(pcVar6 + 8);
    if (lVar5 == 0) {
      return 0;
    }
  }
  (*pcVar1)(lVar5);
  return 0;
}


