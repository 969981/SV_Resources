/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa82c0; name: FUN_01fa82c0
 */


void FUN_01fa82c0(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x740) = 0;
    *(undefined8 *)(param_1 + 0x748) = 0;
    *(undefined8 *)(param_1 + 0x750) = 0;
    do {
      *puVar4 = 0xffffffff;
      *(undefined1 *)(puVar4 + 1) = 0;
      *(undefined4 *)((long)puVar4 + 6) = 0xffffffff;
      *(undefined1 *)((long)puVar4 + 10) = 0;
      puVar4[3] = 0xffffffff;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined4 *)((long)puVar4 + 0x12) = 0xffffffff;
      *(undefined1 *)((long)puVar4 + 0x16) = 0;
      puVar4[6] = 0xffffffff;
      *(undefined1 *)(puVar4 + 7) = 0;
      *(undefined4 *)((long)puVar4 + 0x1e) = 0xffffffff;
      *(undefined1 *)((long)puVar4 + 0x22) = 0;
      puVar4 = puVar4 + 9;
    } while (puVar4 != (undefined4 *)(param_1 + 0x735));
    plVar5 = (long *)(param_1 + 0x7e8);
    plVar1 = (long *)(param_1 + 0xcf0);
    plVar6 = plVar5;
    do {
      for (lVar7 = *plVar6; lVar7 != plVar6[1]; lVar7 = lVar7 + 0xa0) {
        if (*(int *)(lVar7 + 0x10) == 1) {
          *(undefined1 *)(lVar7 + 0x98) = 0;
          if (*(long *)(lVar7 + 0x70) != 0) {
            *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xd1) = 1;
          }
        }
      }
      plVar6 = plVar6 + 7;
    } while (plVar6 != plVar1);
    plVar6 = plVar5;
    do {
      for (lVar7 = *plVar6; lVar7 != plVar6[1]; lVar7 = lVar7 + 0xa0) {
        if (*(int *)(lVar7 + 0x10) == 2) {
          *(undefined1 *)(lVar7 + 0x98) = 0;
          if (*(long *)(lVar7 + 0x70) != 0) {
            *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xd1) = 1;
          }
        }
      }
      plVar6 = plVar6 + 7;
    } while (plVar6 != plVar1);
    do {
      for (lVar7 = *plVar5; lVar7 != plVar5[1]; lVar7 = lVar7 + 0xa0) {
        if (*(int *)(lVar7 + 0x10) == 3) {
          *(undefined1 *)(lVar7 + 0x98) = 0;
          if (*(long *)(lVar7 + 0x70) != 0) {
            *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xd1) = 1;
          }
        }
      }
      plVar5 = plVar5 + 7;
    } while (plVar5 != plVar1);
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar7 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar7;
    plVar1 = *(long **)(lVar7 + 0x1c8);
    plVar6 = *(long **)(lVar7 + 0x1c0);
    do {
      if (plVar6 == plVar1) {
        return;
      }
      lVar7 = *plVar6;
      uVar3 = FUN_00f280dc(lVar7 + 0x28);
      plVar6 = plVar6 + 1;
    } while ((uVar3 & 1) == 0);
    uVar3 = FUN_01fa84d8(lVar7);
    if ((uVar3 & 1) != 0) {
      FUN_01fa821c(*(undefined8 *)(param_1 + 8),"RaidGemForceLottery");
      return;
    }
  }
  return;
}


