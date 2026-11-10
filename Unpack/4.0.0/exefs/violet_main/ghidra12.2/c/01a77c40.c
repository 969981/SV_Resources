/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a77c40; name: FUN_01a77c40
 */


undefined8 FUN_01a77c40(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) || (pcVar6 = (char *)*puVar4, pcVar6 == (char *)0x0)) {
    if ((DAT_0484a8f0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0484a8f0);
      pcVar6 = &DAT_0484a8d8;
      if (iVar3 != 0) {
        DAT_0484a8d8 = 0;
        DAT_0484a8e0 = 0;
        FUN_00100190(FUN_01796ebc,&DAT_0484a8d8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484a8f0);
      }
    }
    else {
      pcVar6 = &DAT_0484a8d8;
    }
  }
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar4 == (undefined8 *)0x0) || (pbVar7 = (byte *)*puVar4, pbVar7 == (byte *)0x0)) {
    if ((DAT_0484a920 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_0484a920);
      pbVar7 = &DAT_0484a8f8;
      if (iVar3 != 0) {
        DAT_0484a8f8 = 0;
        DAT_0484a900 = 0;
        FUN_00100190(&LAB_02486bdc,&DAT_0484a8f8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484a920);
      }
    }
    else {
      pbVar7 = &DAT_0484a8f8;
    }
  }
  if (((DAT_0484a8d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0484a8d0), iVar3 != 0)) {
    DAT_0484bef8 = '\x01';
    __cxa_guard_release(&DAT_0484a8d0);
  }
  cVar2 = DAT_0484bef8;
  if ((1 < *pbVar7) || (puVar4 = *(undefined8 **)(pbVar7 + 8), puVar4 == (undefined8 *)0x0)) {
    if (((DAT_0484a970 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0484a970), iVar3 != 0)) {
      DAT_0484a938 = 0;
      DAT_0484a940 = 0;
      DAT_0484a928 = &DAT_cbf29ce484222645;
      DAT_0484a930 = &DAT_03c886bc;
      DAT_0484a948 = &DAT_cbf29ce484222645;
      DAT_0484a950 = &DAT_03c886bc;
      DAT_0484a958 = 0;
      DAT_0484a960 = 0;
      FUN_00100190(&LAB_02b97314,&DAT_0484a928,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0484a970);
    }
    puVar4 = &DAT_0484a928;
  }
  pcVar1 = (code *)PTR_FUN_047debc8;
  if (cVar2 == '\0') {
    pcVar1 = (code *)0x0;
  }
  cVar2 = *pcVar6;
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
      FUN_01a77ebc(pcVar6 + 8,pcVar1,0);
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
  (*pcVar1)(lVar5,puVar4);
  return 0;
}


