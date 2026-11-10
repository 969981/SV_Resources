/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ae6bd0; name: FUN_01ae6bd0
 */


undefined8 FUN_01ae6bd0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (pbVar5 = (byte *)*puVar2, pbVar5 == (byte *)0x0)) {
    if ((DAT_04800db8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04800db8);
      pbVar5 = &DAT_04800da8;
      if (iVar1 != 0) {
        DAT_04800da8 = 0;
        DAT_04800db0 = 0;
        FUN_00100190(FUN_01784638,&DAT_04800da8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800db8);
      }
    }
    else {
      pbVar5 = &DAT_04800da8;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) || (pbVar6 = (byte *)*puVar2, pbVar6 == (byte *)0x0)) {
    if ((DAT_04800db8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04800db8);
      pbVar6 = &DAT_04800da8;
      if (iVar1 != 0) {
        DAT_04800da8 = 0;
        DAT_04800db0 = 0;
        FUN_00100190(FUN_01784638,&DAT_04800da8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800db8);
      }
    }
    else {
      pbVar6 = &DAT_04800da8;
    }
  }
  if (*pbVar5 < 2) {
    lVar3 = *(long *)(pbVar5 + 8);
  }
  else {
    lVar3 = 0;
  }
  if (*pbVar6 < 2) {
    lVar4 = *(long *)(pbVar6 + 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_00c419e0(param_1,lVar3 == lVar4);
  return 1;
}


