/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b0b704; name: FUN_02b0b704
 */


ulong FUN_02b0b704(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_40 = &DAT_e4d07a996e5ef5e8;
  puStack_38 = &DAT_03c60f6f;
  local_30 = 4;
  local_28 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  lVar3 = FUN_00f844f4(uVar2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0x26b67610);
  uVar4 = FUN_015a83d0(lVar3,&local_40);
  if (((uVar4 & 0xff) == 0) && (plVar5 = *(long **)(lVar3 + 0x60), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_40);
  }
  return uVar4 >> 0x10 & 0xffff;
}


