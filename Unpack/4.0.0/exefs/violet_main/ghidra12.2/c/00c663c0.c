/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c663c0; name: FUN_00c663c0
 */


void FUN_00c663c0(long param_1,undefined4 param_2)

{
  long lVar1;
  uint *puVar2;
  short sVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar4 = FUN_00c66694();
  if ((uVar4 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
    uVar4 = (ulong)(short)param_2;
    sVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
    if (sVar3 < 1) {
      plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
      uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
      plVar5 = (long *)(lVar8 + uVar4 * 0x140 + 0xb8);
      if ((uVar6 & 1) == 0) {
        lVar8 = lVar8 + uVar4 * 0x140;
        memset((void *)*plVar5,0,*(long *)(lVar8 + 0x88) - *(long *)(lVar8 + 0x80));
      }
      else {
        puVar12 = (undefined8 *)*plVar5;
        lVar10 = *(long *)(lVar8 + uVar4 * 0x140 + 0xc0) - (long)puVar12;
        if (lVar10 != 0) {
          lVar8 = lVar8 + uVar4 * 0x140;
          uVar6 = lVar10 >> 4;
          plVar9 = (long *)(lVar8 + 0x80);
          puVar14 = (undefined8 *)*plVar9;
          pfVar11 = (float *)(lVar8 + 0x130);
          fVar16 = *pfVar11;
          uVar18 = puVar14[1];
          uVar17 = *puVar14;
          puVar12[1] = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16,(float)uVar18 * fVar16);
          *puVar12 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar16,(float)uVar17 * fVar16);
          if (1 < uVar6) {
            uVar13 = 1;
            do {
              puVar12 = (undefined8 *)(*plVar9 + uVar13 * 0x10);
              uVar18 = puVar12[1];
              uVar17 = *puVar12;
              fVar16 = *pfVar11;
              puVar12 = (undefined8 *)(*plVar5 + uVar13 * 0x10);
              puVar12[1] = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16,(float)uVar18 * fVar16);
              *puVar12 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar16,(float)uVar17 * fVar16);
              uVar13 = uVar13 + 1;
            } while (uVar6 != uVar13);
          }
        }
      }
    }
    else {
      lVar8 = lVar8 + uVar4 * 0x140;
      memcpy(*(void **)(lVar8 + 0xb8),*(void **)(lVar8 + 0x80),
             *(long *)(lVar8 + 0x88) - (long)*(void **)(lVar8 + 0x80));
    }
    lVar8 = *(long *)(param_1 + 0x38);
    lVar10 = lVar8 + uVar4 * 0x140;
    puVar15 = *(uint **)(lVar10 + 0xf0);
    puVar2 = *(uint **)(lVar10 + 0xf8);
    if (puVar15 != puVar2) {
      lVar8 = lVar8 + uVar4 * 0x140;
      uVar6 = uVar4;
      do {
        FUN_00c663c0(param_1,(short)*puVar15);
        plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x30);
        sVar3 = (**(code **)(*plVar5 + 0x68))
                          (plVar5,(short)*puVar15,*(undefined2 *)((long)puVar15 + 2));
        if (sVar3 < 1) {
          lVar10 = *(long *)(lVar8 + 0xc0) - *(long *)(lVar8 + 0xb8);
          if (lVar10 != 0) {
            uVar13 = lVar10 >> 4;
            if (uVar13 < 2) {
              uVar13 = 1;
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                lVar10 = *(long *)(param_1 + 0x38) + uVar4 * 0x140;
                fVar16 = *(float *)(lVar10 + 0x130);
                puVar12 = (undefined8 *)
                          (*(long *)(*(long *)(param_1 + 0x38) + (long)(short)*puVar15 * 0x140 +
                                    0xb8) + uVar7 * 0x10);
                uVar18 = puVar12[1];
                uVar17 = *puVar12;
                lVar10 = *(long *)(lVar10 + 0xb8);
                puVar12 = (undefined8 *)(lVar10 + uVar7 * 0x10);
                uVar20 = puVar12[1];
                uVar19 = *puVar12;
                puVar12 = (undefined8 *)(lVar10 + uVar7 * 0x10);
                puVar12[1] = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16 +
                                      (float)((ulong)uVar20 >> 0x20),
                                      (float)uVar18 * fVar16 + (float)uVar20);
                *puVar12 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar16 +
                                    (float)((ulong)uVar19 >> 0x20),
                                    (float)uVar17 * fVar16 + (float)uVar19);
                lVar10 = *(long *)(param_1 + 0x38) + uVar4 * 0x140;
                fVar16 = *(float *)(lVar10 + 0x130);
                lVar1 = *(long *)(*(long *)(param_1 + 0x38) + (long)(short)*puVar15 * 0x140 + 0xb8)
                        + uVar7 * 0x10;
                uVar18 = *(undefined8 *)(lVar1 + 0x18);
                uVar17 = *(undefined8 *)(lVar1 + 0x10);
                lVar10 = *(long *)(lVar10 + 0xb8) + uVar7 * 0x10;
                uVar7 = uVar7 + 2;
                *(ulong *)(lVar10 + 0x18) =
                     CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16 +
                              (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20),
                              (float)uVar18 * fVar16 + (float)*(undefined8 *)(lVar10 + 0x18));
                *(ulong *)(lVar10 + 0x10) =
                     CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar16 +
                              (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20),
                              (float)uVar17 * fVar16 + (float)*(undefined8 *)(lVar10 + 0x10));
              } while ((uVar13 & 0xfffffffffffffffe) != uVar7);
            }
            if ((uVar13 & 1) != 0) {
              lVar10 = *(long *)(param_1 + 0x38) + uVar4 * 0x140;
              fVar16 = *(float *)(lVar10 + 0x130);
              puVar12 = (undefined8 *)
                        (*(long *)(*(long *)(param_1 + 0x38) + (long)(short)*puVar15 * 0x140 + 0xb8)
                        + uVar7 * 0x10);
              uVar18 = puVar12[1];
              uVar17 = *puVar12;
              lVar10 = *(long *)(lVar10 + 0xb8);
              puVar12 = (undefined8 *)(lVar10 + uVar7 * 0x10);
              uVar20 = puVar12[1];
              uVar19 = *puVar12;
              puVar12 = (undefined8 *)(lVar10 + uVar7 * 0x10);
              puVar12[1] = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar16 +
                                    (float)((ulong)uVar20 >> 0x20),
                                    (float)uVar18 * fVar16 + (float)uVar20);
              *puVar12 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar16 +
                                  (float)((ulong)uVar19 >> 0x20),
                                  (float)uVar17 * fVar16 + (float)uVar19);
            }
          }
        }
        else {
          uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*puVar15;
          FUN_00c67618(param_1,param_2,uVar6);
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar2);
      lVar8 = *(long *)(param_1 + 0x38);
    }
    *(undefined1 *)(lVar8 + uVar4 * 0x140 + 0x139) = 1;
  }
  return;
}


