/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00deac54; name: FUN_00deac54
 */


void FUN_00deac54(long param_1,long *param_2,undefined2 *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_50;
  undefined2 local_48;
  
  if (*param_2 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar4 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar4;
    if (lVar4 != 0) {
      lVar3 = FUN_00fe9b78(lVar4);
      plVar5 = *(long **)(lVar3 + 0x20);
      plVar1 = plVar5;
      if (*(long *)(lVar3 + 0x28) != 0) {
        plVar1 = plVar5 + *(long *)(lVar3 + 0x28);
      }
      if (plVar5 != plVar1) {
        do {
          lVar6 = *plVar5;
          lVar3 = FUN_0156cb10(lVar4);
          if (lVar3 != lVar6) {
            local_48 = *param_3;
            local_50 = lVar6;
            FUN_01eac598(param_1 + 0x90,&local_50);
          }
          plVar5 = plVar5 + 1;
        } while (plVar1 != plVar5);
      }
    }
  }
  return;
}


