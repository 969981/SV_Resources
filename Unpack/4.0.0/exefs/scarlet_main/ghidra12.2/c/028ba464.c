/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ba464; name: FUN_028ba464
 */


void FUN_028ba464(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar2 = FUN_008f1228(*(undefined8 *)(param_1 + 0x1e98));
  memset((void *)(lVar2 + *(long *)(param_1 + 0x1ea0)),0,
         (ulong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)));
  FUN_008f123c(*(undefined8 *)(param_1 + 0x1e98));
  plVar4 = *(long **)(param_1 + 0x58);
  while (plVar4 != (long *)(param_1 + 0x50)) {
    plVar7 = (long *)plVar4[1];
    lVar2 = *plVar7;
    *(long **)(*plVar4 + 8) = plVar7;
    *plVar7 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x58);
  }
  plVar4 = *(long **)(param_1 + 0x68);
  while (plVar4 != (long *)(param_1 + 0x60)) {
    plVar7 = (long *)plVar4[1];
    lVar2 = *plVar7;
    *(long **)(*plVar4 + 8) = plVar7;
    *plVar7 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x68);
  }
  plVar4 = *(long **)(param_1 + 0x78);
  while (plVar4 != (long *)(param_1 + 0x70)) {
    plVar7 = (long *)plVar4[1];
    lVar2 = *plVar7;
    *(long **)(*plVar4 + 8) = plVar7;
    *plVar7 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x78);
  }
  uVar5 = *(uint *)(param_1 + 0x1880);
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      lVar2 = param_1 + uVar3 * 0x18;
      puVar6 = (undefined8 *)(lVar2 + 0x88);
      plVar7 = (long *)*puVar6;
      plVar4 = (long *)(lVar2 + 0x80);
      if (plVar7 != plVar4) {
        do {
          plVar1 = (long *)plVar7[1];
          lVar2 = *plVar1;
          *(long **)(*plVar7 + 8) = plVar1;
          *plVar1 = *plVar7;
          *(long **)(lVar2 + 8) = plVar7;
          *plVar7 = lVar2;
          plVar7 = (long *)*puVar6;
        } while (plVar7 != plVar4);
        uVar5 = *(uint *)(param_1 + 0x1880);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  *(undefined4 *)(param_1 + 0x1880) = 0;
  FUN_008898a8(param_1 + 0x30);
  return;
}


