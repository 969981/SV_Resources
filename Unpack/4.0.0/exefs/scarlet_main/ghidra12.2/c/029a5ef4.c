/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a5ef4; name: FUN_029a5ef4
 */


void FUN_029a5ef4(float param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (((*(char *)(param_2 + 0x25) == '\0') || (lVar4 = *(long *)(param_2 + 0x58), lVar4 == 0)) ||
     (*(int *)(lVar4 + 0x38) == 0)) {
    return;
  }
  if (*(int *)(lVar4 + 0x4c) == 0) {
    if ((*PTR_DAT_047d8280 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280);
      if (iVar1 != 0) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
    }
    lVar3 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar3;
    plVar2 = *(long **)(*(long *)(lVar3 + 0x200) + 0x60);
    (**(code **)(*plVar2 + 0xe8))
              (plVar2,1,*(undefined4 *)(lVar4 + 0x38),(int)(param_1 * 1000.0),param_3);
    *(undefined4 *)(lVar4 + 0x4c) = 1;
    *(float *)(lVar4 + 0x50) = param_1;
  }
  else {
    *(undefined4 *)(lVar4 + 0x4c) = 2;
  }
  *(undefined4 *)(lVar4 + 0x54) = 0;
  FUN_0159d42c(*(undefined8 *)(param_2 + 0x58));
  return;
}


