/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a8e5c; name: FUN_008a8e5c
 */


void FUN_008a8e5c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_00896e98(*(undefined8 *)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar2 = *(long **)(param_1 + 0x138);
  while ((long *)(param_1 + 0x130) != plVar2) {
    plVar5 = (long *)plVar2[1];
    if ((long *)(param_1 + 0x130) != plVar2) {
      lVar3 = *plVar5;
      *(long **)(*plVar2 + 8) = plVar5;
      *plVar5 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    iVar4 = (int)plVar2[2];
    lVar3 = plVar2[3];
    if (0 < iVar4) {
      lVar6 = 0;
      lVar7 = 8;
      do {
        if (*(long *)(lVar3 + lVar7) != 0) {
          FUN_00896e98(*(long *)(lVar3 + lVar7));
          iVar4 = (int)plVar2[2];
          lVar3 = plVar2[3];
        }
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 < iVar4);
    }
    if (lVar3 != 0) {
      FUN_00896e98();
    }
    FUN_00896e98(plVar2);
    plVar2 = plVar5;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  while ((long *)(param_1 + 0x38) != plVar2) {
    plVar5 = (long *)plVar2[1];
    FUN_00896e98(plVar2[2]);
    lVar3 = plVar2[5];
    plVar2[2] = 0;
    if (0 < (int)plVar2[4]) {
      lVar6 = 0;
      lVar7 = 8;
      do {
        if (*(long *)(lVar3 + lVar7) != 0) {
          FUN_00896e98(*(long *)(lVar3 + lVar7));
          lVar3 = plVar2[5];
        }
        *(undefined8 *)(lVar3 + lVar7) = 0;
        lVar3 = plVar2[5];
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 < (int)plVar2[4]);
    }
    if (lVar3 != 0) {
      FUN_00896e98();
    }
    plVar2[5] = 0;
    if ((long *)(param_1 + 0x38) != plVar2) {
      plVar1 = (long *)plVar2[1];
      lVar3 = *plVar1;
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar1 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    FUN_00896e98(plVar2);
    plVar2 = plVar5;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  while ((long *)(param_1 + 0x70) != plVar2) {
    plVar5 = (long *)plVar2[1];
    FUN_008a90c4(plVar2);
    if ((long *)(param_1 + 0x70) != plVar2) {
      plVar1 = (long *)plVar2[1];
      lVar3 = *plVar1;
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar1 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    FUN_00896e98(plVar2);
    plVar2 = plVar5;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  while ((long *)(param_1 + 0x28) != plVar2) {
    plVar5 = (long *)plVar2[1];
    FUN_008a91b0(plVar2);
    if ((long *)(param_1 + 0x28) != plVar2) {
      plVar1 = (long *)plVar2[1];
      lVar3 = *plVar1;
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar1 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
    }
    FUN_00896e98(plVar2);
    plVar2 = plVar5;
  }
  lVar3 = FUN_008bd410(param_1 + 0x48);
  if ((lVar3 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    FUN_00896e98();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_008bd3b4(param_1 + 0x48);
  return;
}


