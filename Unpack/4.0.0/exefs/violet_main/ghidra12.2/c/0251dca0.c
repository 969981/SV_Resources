/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0251dca0; name: FUN_0251dca0
 */


undefined8 FUN_0251dca0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (pbVar5 = (byte *)*puVar2, (byte *)*puVar2 == (byte *)0x0)) {
    if ((*PTR_DAT_047d4528 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4528);
      pbVar5 = PTR_DAT_047d4530;
      if (iVar1 != 0) {
        *PTR_DAT_047d4530 = 0;
        *(undefined8 *)(pbVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d6418,pbVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4528);
      }
    }
    else {
      pbVar5 = PTR_DAT_047d4530;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) || (pbVar6 = (byte *)*puVar2, (byte *)*puVar2 == (byte *)0x0)) {
    if ((*PTR_DAT_047d4528 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4528);
      pbVar6 = PTR_DAT_047d4530;
      if (iVar1 != 0) {
        *PTR_DAT_047d4530 = 0;
        *(undefined8 *)(pbVar6 + 8) = 0;
        FUN_00100190(PTR_LAB_047d6418,pbVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4528);
      }
    }
    else {
      pbVar6 = PTR_DAT_047d4530;
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


