/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ece4c; name: FUN_004ece4c
 */


void FUN_004ece4c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *plStack_68;
  
  *param_1 = (long)(PTR_DAT_047cda80 + 0x10);
  puVar2 = PTR_LAB_047cd728;
  puVar1 = PTR_LAB_047cba48;
  plVar11 = *(long **)(param_1[3] + 0x10);
  if (plVar11 != (long *)0x0) {
    do {
      lVar10 = plVar11[3];
      lVar9 = *(long *)(lVar10 + 0x20);
      iVar6 = *(int *)(lVar9 + 0x6c);
      if (0 < iVar6) {
        lVar5 = *(long *)(lVar9 + 0x30);
        lVar10 = 0;
        do {
          if (((*(int *)(lVar5 + lVar10 * 0x30 + 0x18) != 1) ||
              (*(char *)(**(long **)(lVar5 + lVar10 * 0x30 + 0x20) + 0x41) == '\0')) &&
             (0 < *(int *)(lVar5 + lVar10 * 0x30 + 0x18))) {
            lVar8 = 0;
            do {
              lVar7 = *(long *)(*(long *)(lVar5 + lVar10 * 0x30 + 0x20) + lVar8 * 8);
              puVar3 = *(ulong **)(lVar7 + 0x30);
              if (puVar3 != (ulong *)0x0) {
                puStack_80 = puVar2;
                local_88 = lVar7;
                if (*puVar3 != 0xffffffffffffffff) {
                    /* try { // try from 004ecf70 to 004ecf7b has its CatchHandler @ 004ed02c */
                  local_78 = &local_70;
                  local_70 = &puStack_80;
                  plStack_68 = &local_88;
                  std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
                }
                lVar5 = *(long *)(lVar9 + 0x30);
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(lVar5 + lVar10 * 0x30 + 0x18));
            iVar6 = *(int *)(lVar9 + 0x6c);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar6);
        lVar10 = plVar11[3];
      }
      if (lVar10 != 0) {
        FUN_004ed5d4(lVar10);
        FUN_0049e790(puVar1,lVar10);
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  std::mutex::~mutex((mutex *)(param_1 + 4));
  plVar11 = (long *)param_1[3];
  param_1[3] = 0;
  puVar1 = PTR_LAB_047cba48;
  if (plVar11 != (long *)0x0) {
    plVar4 = (long *)plVar11[2];
    while (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      FUN_0049e790(puVar1);
    }
    lVar9 = *plVar11;
    *plVar11 = 0;
    if (lVar9 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar11);
  }
  FUN_005021d0(param_1);
  return;
}


