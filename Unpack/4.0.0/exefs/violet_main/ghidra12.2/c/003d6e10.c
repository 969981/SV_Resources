/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d6e10; name: FUN_003d6e10
 */


undefined8 FUN_003d6e10(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  short *psVar9;
  long lVar10;
  short *psVar11;
  
  FUN_00452f80(*(undefined8 *)(param_1 + 0x1980),"external/openssl/ssl/t1_lib.c",0x4e5);
  lVar7 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined4 *)(lVar7 + 0x330) = 0;
  *(undefined8 *)(lVar7 + 0x318) = 0;
  *(undefined8 *)(lVar7 + 0x310) = 0;
  *(undefined8 *)(lVar7 + 0x328) = 0;
  *(undefined8 *)(lVar7 + 800) = 0;
  if ((*(long *)(lVar7 + 0x2f0) != 0) || (*(long *)(lVar7 + 0x2e8) != 0)) {
    iVar2 = FUN_003d7270(param_1);
    if (iVar2 == 0) {
      uVar4 = 0x50;
      uVar5 = 0x44;
      uVar6 = 0x507;
    }
    else {
      if (*(long *)(param_1 + 0x1980) != 0) {
        return 1;
      }
      uVar4 = 0x28;
      uVar5 = 0x178;
      uVar6 = 0x50f;
    }
    FUN_003c3950(param_1,uVar4,0x14f,uVar5,"external/openssl/ssl/t1_lib.c",uVar6);
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x550);
  uVar1 = *(uint *)(lVar7 + 0x1c) & 0x30000;
  if (uVar1 == 0x30000) {
    lVar7 = 2;
    psVar11 = &DAT_03cdd17e;
  }
  else if (uVar1 == 0x20000) {
    lVar7 = 1;
    psVar11 = &DAT_03cdd180;
  }
  else if (uVar1 == 0x10000) {
    lVar7 = 1;
    psVar11 = &DAT_03cdd17e;
  }
  else {
    if ((*(int *)(param_1 + 0x38) == 1) &&
       (psVar11 = *(short **)(lVar7 + 0x1a8), psVar11 != (short *)0x0)) {
      plVar8 = (long *)(lVar7 + 0x1b0);
    }
    else {
      psVar11 = *(short **)(lVar7 + 0x198);
      if (psVar11 == (short *)0x0) {
        lVar7 = 0x1a;
        psVar11 = &DAT_03cdd182;
        goto LAB_003d6fe4;
      }
      plVar8 = (long *)(lVar7 + 0x1a0);
    }
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      FUN_003d5f10(param_1,0);
      FUN_003d5f10(param_1,1);
      FUN_003d5f10(param_1,2);
      FUN_003d5f10(param_1,3);
      FUN_003d5f10(param_1,4);
      FUN_003d5f10(param_1,5);
      FUN_003d5f10(param_1,6);
      FUN_003d5f10(param_1,7);
      FUN_003d5f10(param_1,8);
      return 1;
    }
  }
LAB_003d6fe4:
  lVar3 = FUN_003d5f10(param_1,0);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x310) = 2;
        break;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,1);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x314) = 2;
        break;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,2);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x318) = 2;
        break;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,3);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x31c) = 2;
        break;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,4);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 800) = 2;
        break;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,5);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x324) = 2;
        break;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,6);
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x328) = 2;
        lVar3 = FUN_003d5f10(param_1,7);
        goto joined_r0x003d71dc;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,7);
joined_r0x003d71dc:
  if (lVar3 != 0) {
    psVar9 = psVar11;
    lVar10 = lVar7;
    do {
      if (*(short *)(lVar3 + 8) == *psVar9) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x32c) = 2;
        lVar3 = FUN_003d5f10(param_1,8);
        if (lVar3 == 0) {
          return 1;
        }
        goto LAB_003d7234;
      }
      lVar10 = lVar10 + -1;
      psVar9 = psVar9 + 1;
    } while (lVar10 != 0);
  }
  lVar3 = FUN_003d5f10(param_1,8);
  if (lVar3 != 0) {
LAB_003d7234:
    do {
      if (*(short *)(lVar3 + 8) == *psVar11) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x330) = 2;
        return 1;
      }
      lVar7 = lVar7 + -1;
      psVar11 = psVar11 + 1;
    } while (lVar7 != 0);
  }
  return 1;
}


