/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018806c4; name: FUN_018806c4
 */


void FUN_018806c4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  void *pvStack_50;
  undefined4 local_48 [2];
  undefined1 auStack_40 [24];
  long *local_28;
  
  memset((void *)(param_1 + 0x40),0,0x7eb0);
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar2;
  FUN_00d8fb98(auStack_40,PTR_DAT_047dcc90);
  uVar2 = FUN_00f844f4(uVar2,auStack_40);
  local_48[0] = 0x99e1625e;
  local_58 = 0x7eb0;
  pvStack_50 = (void *)(param_1 + 0x40);
  FUN_018807b4(uVar2,local_48,&pvStack_50,&local_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


