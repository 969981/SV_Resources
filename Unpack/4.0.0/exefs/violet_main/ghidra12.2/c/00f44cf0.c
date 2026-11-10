/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f44cf0; name: FUN_00f44cf0
 */


void FUN_00f44cf0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar3 != *(undefined8 **)(param_1 + 0x1d0)) {
    do {
      uVar2 = FUN_00f457cc(param_1,puVar3,puVar3 + 1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x1d0);
      if (puVar3 + 0x1a == puVar4) {
        *(undefined8 **)(param_1 + 0x1d0) = puVar3;
        break;
      }
      *puVar3 = puVar3[0x1a];
      memcpy(puVar3 + 1,puVar3 + 0x1b,0xc6);
      puVar5 = puVar3 + 0x1a;
      if (puVar3 + 0x34 != puVar4) {
        puVar3[0x1a] = puVar3[0x34];
        memcpy(puVar3 + 0x1b,puVar3 + 0x35,0xc6);
        puVar5 = puVar3 + 0x34;
        if (puVar3 + 0x4e != puVar4) {
          puVar1 = puVar3;
          do {
            puVar5 = puVar1;
            puVar5[0x34] = puVar5[0x4e];
            memcpy(puVar5 + 0x35,puVar5 + 0x4f,0xc6);
            puVar1 = puVar5 + 0x1a;
          } while (puVar4 + -0x4e != puVar5 + 0x1a);
          puVar5 = puVar5 + 0x4e;
        }
      }
      *(undefined8 **)(param_1 + 0x1d0) = puVar5;
    } while (puVar3 != puVar5);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x200);
  if (puVar3 != *(undefined8 **)(param_1 + 0x208)) {
    do {
      uVar2 = FUN_00f45740(param_1,puVar3 + 1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x208);
      if (puVar3 + 0x15 == puVar4) {
        *(undefined8 **)(param_1 + 0x208) = puVar3;
        break;
      }
      *puVar3 = puVar3[0x15];
      memcpy(puVar3 + 1,puVar3 + 0x16,0xa0);
      puVar5 = puVar3 + 0x15;
      if (puVar3 + 0x2a != puVar4) {
        puVar3[0x15] = puVar3[0x2a];
        memcpy(puVar3 + 0x16,puVar3 + 0x2b,0xa0);
        puVar5 = puVar3 + 0x2a;
        if (puVar3 + 0x3f != puVar4) {
          puVar1 = puVar3;
          do {
            puVar5 = puVar1;
            puVar5[0x2a] = puVar5[0x3f];
            memcpy(puVar5 + 0x2b,puVar5 + 0x40,0xa0);
            puVar1 = puVar5 + 0x15;
          } while (puVar4 + -0x3f != puVar5 + 0x15);
          puVar5 = puVar5 + 0x3f;
        }
      }
      *(undefined8 **)(param_1 + 0x208) = puVar5;
    } while (puVar3 != puVar5);
  }
  lVar8 = *(long *)(param_1 + 0x238);
  if (lVar8 != *(long *)(param_1 + 0x240)) {
    do {
      uVar2 = FUN_00f460bc(param_1,lVar8 + 8);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x240);
      if (lVar8 + 0x10 == lVar7) {
        *(long *)(param_1 + 0x240) = lVar8;
        break;
      }
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar8 + lVar6);
        lVar6 = lVar6 + 0x10;
        *puVar3 = puVar3[2];
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar3 + 3);
      } while ((lVar7 - lVar8) + -0x10 != lVar6);
      *(long *)(param_1 + 0x240) = lVar8 + lVar6;
    } while (lVar6 != 0);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x270);
  if (puVar3 != *(undefined8 **)(param_1 + 0x278)) {
    do {
      uVar2 = FUN_00f454ec(param_1,puVar3 + 1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x278);
      if (puVar3 + 3 == puVar4) {
        *(undefined8 **)(param_1 + 0x278) = puVar3;
        break;
      }
      puVar3[2] = puVar3[5];
      *puVar3 = puVar3[3];
      puVar3[1] = puVar3[4];
      puVar5 = puVar3 + 3;
      if (puVar3 + 6 != puVar4) {
        puVar3[3] = puVar3[6];
        puVar3[4] = puVar3[7];
        puVar3[5] = puVar3[8];
        puVar5 = puVar3 + 6;
        if (puVar3 + 9 != puVar4) {
          puVar1 = puVar3;
          do {
            puVar5 = puVar1;
            puVar5[6] = puVar5[9];
            puVar5[7] = puVar5[10];
            puVar5[8] = puVar5[0xb];
            puVar1 = puVar5 + 3;
          } while (puVar4 + -9 != puVar5 + 3);
          puVar5 = puVar5 + 9;
        }
      }
      *(undefined8 **)(param_1 + 0x278) = puVar5;
    } while (puVar3 != puVar5);
  }
  lVar8 = *(long *)(param_1 + 0x2a8);
  if (lVar8 != *(long *)(param_1 + 0x2b0)) {
    do {
      uVar2 = FUN_00f46148(param_1,lVar8 + 8);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x2b0);
      if (lVar8 + 0x18 == lVar7) {
        *(long *)(param_1 + 0x2b0) = lVar8;
        break;
      }
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar8 + lVar6);
        lVar6 = lVar6 + 0x18;
        *puVar3 = puVar3[3];
        puVar3[1] = puVar3[4];
        puVar3[2] = puVar3[5];
      } while ((lVar7 - lVar8) + -0x18 != lVar6);
      *(long *)(param_1 + 0x2b0) = lVar8 + lVar6;
    } while (lVar6 != 0);
  }
  lVar8 = *(long *)(param_1 + 0x2e0);
  if (lVar8 != *(long *)(param_1 + 0x2e8)) {
    do {
      uVar2 = FUN_00f461d4(param_1,lVar8 + 8);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x2e8);
      if (lVar8 + 0x10 == lVar7) {
        *(long *)(param_1 + 0x2e8) = lVar8;
        break;
      }
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar8 + lVar6);
        lVar6 = lVar6 + 0x10;
        *puVar3 = puVar3[2];
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar3 + 3);
      } while ((lVar7 - lVar8) + -0x10 != lVar6);
      *(long *)(param_1 + 0x2e8) = lVar8 + lVar6;
    } while (lVar6 != 0);
  }
  lVar8 = *(long *)(param_1 + 0x318);
  if (lVar8 != *(long *)(param_1 + 800)) {
    do {
      uVar2 = FUN_00f46260(param_1,lVar8 + 8);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 800);
      if (lVar8 + 0x18 == lVar7) {
        *(long *)(param_1 + 800) = lVar8;
        break;
      }
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar8 + lVar6);
        lVar6 = lVar6 + 0x18;
        *puVar3 = puVar3[3];
        puVar3[1] = puVar3[4];
        puVar3[2] = puVar3[5];
      } while ((lVar7 - lVar8) + -0x18 != lVar6);
      *(long *)(param_1 + 800) = lVar8 + lVar6;
    } while (lVar6 != 0);
  }
  lVar8 = *(long *)(param_1 + 0x350);
  if (lVar8 != *(long *)(param_1 + 0x358)) {
    do {
      uVar2 = FUN_00f46c30(param_1,lVar8,lVar8 + 8);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x358);
      if (lVar8 + 0x10 == lVar7) {
        *(long *)(param_1 + 0x358) = lVar8;
        return;
      }
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar8 + lVar6);
        lVar6 = lVar6 + 0x10;
        *puVar3 = puVar3[2];
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar3 + 3);
      } while ((lVar7 - lVar8) + -0x10 != lVar6);
      *(long *)(param_1 + 0x358) = lVar8 + lVar6;
    } while (lVar6 != 0);
  }
  return;
}


