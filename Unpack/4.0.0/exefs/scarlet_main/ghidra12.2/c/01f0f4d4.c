/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f0f4d4; name: FUN_01f0f4d4
 */


void FUN_01f0f4d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 local_5b;
  undefined5 uStack_58;
  undefined8 *local_50 [3];
  long *local_38;
  
  puVar1 = PTR_DAT_047d4c98;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_5b = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar3 = PTR_DAT_047d4ca8;
  puVar2 = PTR_DAT_047d4ca0;
  uVar5 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar5;
  FUN_00d8fb98(local_50,PTR_DAT_047dcc90);
  uVar5 = FUN_00f844f4(uVar5,local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_78[0] = 0xa1fe2727;
  local_50[0] = &local_70;
  local_80 = 0x1d;
  FUN_018d8ea8(uVar5,local_78,local_50,&local_80);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_00d8fb98(local_50,PTR_DAT_047dcc90);
  uVar5 = FUN_00f844f4(uVar5,local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50[0] = (undefined8 *)CONCAT44(local_50[0]._4_4_,0x1e3fdf75);
  local_80 = local_80 & 0xffffffffffffff00;
  FUN_016c15d4(uVar5,local_50,&local_80);
  return;
}


