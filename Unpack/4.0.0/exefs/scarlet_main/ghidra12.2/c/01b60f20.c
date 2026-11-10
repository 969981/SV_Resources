/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b60f20; name: FUN_01b60f20
 */


bool FUN_01b60f20(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_40 [6];
  long *local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
  FUN_00d8fb98(local_40,PTR_DAT_047dcc90);
  lVar3 = FUN_00f844f4(uVar5,local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40[0] = 0x1e3fdf75;
  uVar1 = FUN_018f8f1c(lVar3,local_40);
  if (((uVar1 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x60), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,local_40);
  }
  return 0xff < uVar1;
}


