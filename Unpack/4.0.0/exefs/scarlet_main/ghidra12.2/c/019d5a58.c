/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d5a58; name: FUN_019d5a58
 */


bool FUN_019d5a58(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int local_50 [4];
  
  puVar1 = PTR_DAT_047d0a08;
  if (*param_2 != 0) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      return false;
    }
    iVar2 = FUN_00f21480();
    if ((iVar2 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) {
      plVar4 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea70,0x7c);
      if (plVar4 == (long *)0x0) {
        return false;
      }
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar6 = *(long *)PTR_DAT_047d6ca0;
      *(long *)PTR_DAT_047d6ca8 = lVar6;
      if (((lVar6 != 0) && (*(long *)puVar1 != 0)) &&
         (lVar6 = *(long *)(*(long *)puVar1 + 0xb8), lVar6 != 0)) {
        uVar5 = FUN_014c27b0(param_3);
        uVar3 = FUN_014c27c8(param_3);
        if (*param_2 == lVar6) {
          FUN_01a54aec(param_1,param_2,uVar5,uVar3);
          return true;
        }
        (**(code **)(*plVar4 + 0x70))(local_50,plVar4,*param_2,uVar3);
        if (local_50[0] == 0) {
          (**(code **)(*plVar4 + 0x60))(local_50,plVar4,*param_2,uVar5,uVar3);
          return local_50[0] == 0;
        }
      }
    }
  }
  return false;
}


