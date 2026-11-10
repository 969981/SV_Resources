/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea9888; name: FUN_01ea9888
 */


void FUN_01ea9888(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char local_68 [8];
  undefined1 auStack_60 [16];
  
  if ((*(long *)(param_2 + 8) != 0) && (*(short *)(*(long *)(param_2 + 8) + 0x1a) != 0)) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar5 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar5;
    if (lVar5 != 0) {
      lVar4 = FUN_00fe9b78(lVar5);
      plVar2 = *(long **)(lVar4 + 0x20);
      plVar1 = plVar2;
      if (*(long *)(lVar4 + 0x28) != 0) {
        plVar1 = plVar2 + *(long *)(lVar4 + 0x28);
      }
      if (plVar2 != plVar1) {
        lVar6 = *plVar2;
        param_1 = param_1 + 0x60;
        lVar4 = FUN_0156cb10(lVar5);
        if ((lVar4 != lVar6) && (FUN_01ea9a98(local_68,lVar6,param_2), local_68[0] != '\0')) {
          FUN_01912180(param_1,auStack_60);
          local_68[0] = '\0';
        }
        if (plVar2 + 1 != plVar1) {
          lVar6 = plVar2[1];
          lVar4 = FUN_0156cb10(lVar5);
          if ((lVar4 != lVar6) && (FUN_01ea9a98(local_68,lVar6,param_2), local_68[0] != '\0')) {
            FUN_01912180(param_1,auStack_60);
            local_68[0] = '\0';
          }
          if (plVar2 + 2 != plVar1) {
            lVar6 = plVar2[2];
            lVar4 = FUN_0156cb10(lVar5);
            if ((lVar4 != lVar6) && (FUN_01ea9a98(local_68,lVar6,param_2), local_68[0] != '\0')) {
              FUN_01912180(param_1,auStack_60);
              local_68[0] = '\0';
            }
            for (plVar2 = plVar2 + 3; plVar2 != plVar1; plVar2 = plVar2 + 1) {
              lVar6 = *plVar2;
              lVar4 = FUN_0156cb10(lVar5);
              if ((lVar4 != lVar6) && (FUN_01ea9a98(local_68,lVar6,param_2), local_68[0] != '\0')) {
                FUN_01912180(param_1,auStack_60);
                local_68[0] = '\0';
              }
            }
          }
        }
      }
    }
  }
  return;
}


