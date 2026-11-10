/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03483d98; name: FUN_03483d98
 */


void FUN_03483d98(uint param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (DAT_048afd88 != 0) {
    lVar8 = 0;
    lVar6 = DAT_048afd88;
    do {
      lVar7 = 0;
      if (*(long *)(lVar6 + 8) != 0) {
        lVar7 = *(long *)(lVar6 + 8) + -0x18;
      }
      if (((*(uint *)(lVar7 + 699) >> 0xc & 1) == 0) || (*(int *)(lVar7 + 0x318) != -1)) {
        if (((*(uint *)(lVar7 + 699) >> 0xe & 1) == 0) && (-1 < *(int *)(lVar7 + 0x2d8))) {
          fVar10 = *(float *)(lVar7 + 0x264) * (float)param_1;
          fVar11 = 0.5;
          if (fVar10 <= 0.0) {
            fVar11 = -0.5;
          }
          *(int *)(lVar7 + 0x2d8) = *(int *)(lVar7 + 0x2d8) - (int)(fVar11 + fVar10);
        }
        lVar7 = *(long *)(lVar6 + 0x60);
        lVar8 = lVar6;
      }
      else {
        if (DAT_048afd98 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          puVar5 = DAT_048afd98;
          do {
            puVar3 = (undefined8 *)*puVar5;
            lVar7 = 0;
            if (puVar5[1] != 0) {
              lVar7 = puVar5[1] + 0x18;
            }
            if (lVar7 == *(long *)(lVar6 + 8)) {
              puVar1 = &DAT_048afd98;
              if (DAT_048afd98 != puVar5) {
                puVar1 = puVar9;
              }
              *puVar1 = puVar3;
              if (DAT_048afda0 == puVar5) {
                DAT_048afda0 = puVar9;
              }
              if ((puVar5 < DAT_048afdb0) || (DAT_048afdb0 + (ulong)DAT_048afdb8 * 3 <= puVar5)) {
                (**(code **)(puVar4 + 0x30))(5);
              }
              else {
                *puVar5 = DAT_048afda8;
                DAT_048afda8 = puVar5;
              }
              DAT_048afdbc = DAT_048afdbc + -1;
            }
            else {
              puVar9 = puVar5;
            }
            puVar5 = puVar3;
          } while (puVar3 != (undefined8 *)0x0);
        }
        lVar7 = *(long *)(lVar6 + 0x60);
        plVar2 = &DAT_048afd88;
        if (DAT_048afd88 != lVar6) {
          plVar2 = (long *)(lVar8 + 0x60);
        }
        *plVar2 = lVar7;
        if (DAT_048afd80 == lVar6) {
          DAT_048afd80 = lVar8;
        }
        FUN_03483f78(lVar6,0);
      }
      lVar6 = lVar7;
    } while (lVar6 != 0);
  }
  return;
}


