/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b625c0; name: FUN_01b625c0
 */


bool FUN_01b625c0(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_40 [6];
  long *local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar6;
  FUN_00d8fb98(local_40,PTR_DAT_047dcc90);
  lVar2 = FUN_00f844f4(uVar6,local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40[0] = 0x4a884fa8;
  uVar3 = FUN_01122fe4(lVar2,local_40);
  if (((uVar3 & 0xff) == 0) && (plVar5 = *(long **)(lVar2 + 0x60), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,local_40);
  }
  uVar4 = FUN_020f03c8();
  return (uVar4 & 0xff) == 0 || (int)(uVar3 >> 0x20) != (int)(uVar4 >> 0x20);
}


