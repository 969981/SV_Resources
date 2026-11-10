/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196b99c; name: FUN_0196b99c
 */


void FUN_0196b99c(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x45e350da1d34436d;
  puStack_38 = &DAT_03c273af;
  local_30 = 4;
  local_28 = (long *)0x0;
  uVar2 = FUN_01470908(param_1,&local_40);
  iVar1 = 0;
  if ((uVar2 & 0xff) != 0) {
    iVar1 = (int)(uVar2 >> 0x20);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uVar3 = 0x3f800000;
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(&DAT_03cb5558 + (ulong)(iVar1 == 1) * 4);
  }
  if ((*PTR_DAT_047d4d78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4d78);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4d90,PTR_DAT_047d4d80,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4d78);
    }
  }
  *(undefined8 *)PTR_DAT_047d4d88 = *(undefined8 *)PTR_DAT_047d4d80;
  FUN_0196baa4(uVar3,uVar3);
  return;
}


