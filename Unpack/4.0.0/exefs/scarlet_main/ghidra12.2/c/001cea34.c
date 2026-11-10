/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cea34; name: FUN_001cea34
 */


void FUN_001cea34(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar10 = *(long *)(param_1 + 0xd8);
  if (lVar10 == 0) {
    return;
  }
  auVar13 = FUN_001e0dfc();
  lVar1 = auVar13._0_8_ + param_2 / 1000;
  uVar4 = auVar13._8_4_ + ((int)param_2 + (int)(param_2 / 1000) * -1000) * 1000;
  uVar3 = uVar4 - 1000000;
  if ((int)uVar4 < 1000000) {
    uVar3 = uVar4;
  }
  uVar8 = auVar13._8_8_ & 0xffffffff00000000 | (ulong)uVar3;
  if (999999 < (int)uVar4) {
    lVar1 = lVar1 + 1;
  }
  FUN_001d1464(param_1,(ulong)param_3);
  lVar12 = param_1 + (ulong)param_3 * 0x30;
  puVar2 = (undefined8 *)(param_1 + 0x12d8);
  *(long *)(lVar12 + 0x1310) = lVar1;
  *(ulong *)(lVar12 + 0x1318) = uVar8;
  *(uint *)(lVar12 + 0x1320) = param_3;
  lVar6 = FUN_001cb6d0(puVar2);
  if ((lVar6 != 0) && (plVar11 = (long *)*puVar2, plVar11 != (long *)0x0)) {
    iVar5 = FUN_001e0e28(*(undefined8 *)(*plVar11 + 0x18),*(undefined8 *)(*plVar11 + 0x20),
                         *(undefined8 *)(lVar12 + 0x1310),*(undefined8 *)(lVar12 + 0x1318));
    if (iVar5 < 1) {
      do {
        plVar9 = plVar11;
        plVar11 = (long *)plVar9[2];
        if (plVar11 == (long *)0x0) break;
        iVar5 = FUN_001e0e28(*(undefined8 *)(*plVar11 + 0x18),*(undefined8 *)(*plVar11 + 0x20),
                             *(undefined8 *)(lVar12 + 0x1310),*(undefined8 *)(lVar12 + 0x1318));
      } while (iVar5 < 1);
      goto LAB_001ceb30;
    }
  }
  plVar9 = (long *)0x0;
LAB_001ceb30:
  FUN_001cb588(puVar2,plVar9,lVar12 + 0x12f8,lVar12 + 0x12f8);
  if ((*(long *)(param_1 + 0x1290) != 0) || (*(int *)(param_1 + 0x1298) != 0)) {
    iVar5 = FUN_001e0e28(lVar1,uVar8,*(long *)(param_1 + 0x1290),*(undefined8 *)(param_1 + 0x1298));
    if (0 < iVar5) {
      return;
    }
    iVar5 = FUN_001e0880(*(undefined8 *)(lVar10 + 0xb0),param_1 + 0x12a0);
    if (iVar5 != 0) {
      FUN_001db818(param_1,"Internal error removing splay node = %d\n",iVar5);
    }
  }
  *(long *)(param_1 + 0x1290) = lVar1;
  *(ulong *)(param_1 + 0x1298) = uVar8;
  *(long *)(param_1 + 0x12d0) = param_1;
  uVar7 = FUN_001e06f4(lVar1,uVar8,*(undefined8 *)(lVar10 + 0xb0),param_1 + 0x12a0);
  *(undefined8 *)(lVar10 + 0xb0) = uVar7;
  return;
}


