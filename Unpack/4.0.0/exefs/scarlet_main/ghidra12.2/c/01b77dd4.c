/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b77dd4; name: FUN_01b77dd4
 */


uint FUN_01b77dd4(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_40 = &DAT_e4d07a996e5ef5e8;
  puStack_38 = &DAT_03c60f6f;
  local_30 = 4;
  local_28 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar3;
  lVar4 = FUN_00f844f4(uVar3,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,0xa946f9c1);
  uVar1 = FUN_0156a070(lVar4,&local_40);
  if (((uVar1 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x60), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_40);
  }
  return uVar1 & 0xff00 | (uint)((uVar1 >> 8 & 0xff) < 0xff);
}


