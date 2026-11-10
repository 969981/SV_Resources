/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c82bc0; name: FUN_01c82bc0
 */


undefined8 FUN_01c82bc0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (pbVar6 = (byte *)*puVar2, pbVar6 == (byte *)0x0)) {
    if ((DAT_048152e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048152e8);
      pbVar6 = &DAT_048152c0;
      if (iVar1 != 0) {
        DAT_048152c0 = 0;
        DAT_048152c8 = 0;
        FUN_00100190(&LAB_0117fe5c,&DAT_048152c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048152e8);
      }
    }
    else {
      pbVar6 = &DAT_048152c0;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) || (pbVar3 = (byte *)*puVar2, pbVar3 == (byte *)0x0)) {
    if ((DAT_048152e8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048152e8);
      if (iVar1 != 0) {
        DAT_048152c0 = 0;
        DAT_048152c8 = 0;
        FUN_00100190(&LAB_0117fe5c,&DAT_048152c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048152e8);
      }
      pbVar3 = &DAT_048152c0;
    }
    else {
      pbVar3 = &DAT_048152c0;
    }
  }
  if (*pbVar6 < 2) {
    lVar5 = *(long *)(pbVar6 + 8);
  }
  else {
    lVar5 = 0;
  }
  if (*pbVar3 < 2) {
    lVar4 = *(long *)(pbVar3 + 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_00c419e0(param_1,lVar5 == lVar4);
  return 1;
}


