/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0bd1c; name: FUN_00b0bd1c
 */


void FUN_00b0bd1c(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *local_80 [4];
  long *local_60;
  char *local_38;
  
  puVar1 = PTR_DAT_047d8ac0;
  if ((uint)*(byte *)(param_1 + 0x48) != (param_2 & 0xff)) {
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    puVar3 = PTR_DAT_047d8ad0;
    puVar2 = PTR_DAT_047d8ac8;
    lVar5 = *(long *)PTR_DAT_047d8ac8;
    *(long *)PTR_DAT_047d8ad0 = lVar5;
    if (lVar5 != 0) {
      local_38 = "message/dat/JPN/common/message_error.dat";
      FUN_00e52f24(local_80,&local_38);
      FUN_014ed314(lVar5,local_80,*(undefined1 *)(param_1 + 0x48));
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_80[0] != (long *)0x0) {
        (**(code **)(*local_80[0] + 0x20))();
      }
    }
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    lVar5 = *(long *)puVar2;
    *(long *)puVar3 = lVar5;
    if (lVar5 != 0) {
      local_38 = "message/dat/JPN/common/message_error.dat";
      FUN_00e52f24(local_80,&local_38);
      FUN_011fbdf0(lVar5,local_80,param_2);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      if (local_80[0] != (long *)0x0) {
        (**(code **)(*local_80[0] + 0x20))();
      }
    }
    *(char *)(param_1 + 0x48) = (char)param_2;
  }
  return;
}


