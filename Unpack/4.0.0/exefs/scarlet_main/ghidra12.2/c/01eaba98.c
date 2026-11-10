/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaba98; name: FUN_01eaba98
 */


void FUN_01eaba98(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char local_1e0 [8];
  undefined1 auStack_1d8 [16];
  char local_1c8;
  char local_1b0;
  
  if ((*(long *)(param_2 + 8) != 0) && (*(short *)(*(long *)(param_2 + 8) + 0x1a) != 0)) {
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
          lVar3 = FUN_0156cb10(lVar4);
          if ((lVar3 != *plVar5) && (FUN_01eabbe8(local_1e0,*plVar5,param_2), local_1e0[0] != '\0'))
          {
            FUN_01eabe50(param_1 + 0x58,auStack_1d8);
            if (local_1b0 != '\0') {
              local_1b0 = '\0';
            }
            if (local_1c8 != '\0') {
              local_1c8 = '\0';
            }
            local_1e0[0] = '\0';
          }
          plVar5 = plVar5 + 1;
        } while (plVar1 != plVar5);
      }
    }
  }
  return;
}


