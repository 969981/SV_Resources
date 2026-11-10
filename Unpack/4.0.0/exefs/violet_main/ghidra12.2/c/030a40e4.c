/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a40e4; name: FUN_030a40e4
 */


void FUN_030a40e4(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_28;
  
  if ((-1 < (int)param_2) && ((int)param_2 <= *(int *)(param_1 + 0x70) + -2)) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)param_2 * 8);
    lVar11 = *(long *)(*(long *)(param_1 + 0x68) + (long)(int)(param_2 + 1) * 8);
    piVar6 = *(int **)(lVar10 + 0x30);
    if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
      if (*(long *)(piVar6 + 6) == lVar11) {
        return;
      }
      FUN_030a43d4(param_1 + 0x50);
      **(undefined4 **)(lVar10 + 0x30) = 0xffffffff;
    }
    puVar4 = PTR_DAT_047d1a08;
    piVar6 = *(int **)(lVar10 + 0x28);
    if (((piVar6 != *(int **)(lVar11 + 0x28)) || (*piVar6 != 3)) ||
       (*(long *)(param_1 + 0x18) + (long)piVar6[1] * 0x38 != lVar10)) {
      puVar7 = *(uint **)(lVar10 + 0x30);
      if (puVar7 == (uint *)0x0) {
LAB_030a41e8:
        fVar15 = *(float *)(lVar10 + 0x18);
        fVar17 = fVar15 - *(float *)(lVar11 + 0x18);
        if (0.0 < fVar17) {
          fVar16 = *(float *)(lVar10 + 0xc);
          fVar17 = ((*(float *)(lVar11 + 0xc) - fVar16) -
                   *(float *)(lVar11 + 0x18) * (*(float *)(lVar11 + 8) - *(float *)(lVar10 + 8))) /
                   fVar17;
          fVar18 = *(float *)(lVar10 + 8) + fVar17;
          if ((fVar18 < *(float *)(lVar10 + 0x10)) && (fVar18 < *(float *)(lVar11 + 0x10))) {
            local_28 = 0x28;
            puVar7 = (uint *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
            if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
              (**(code **)(puVar4 + 0x10))(puVar7,"CrossEvent");
            }
            puVar7[1] = (uint)fVar18;
            puVar7[2] = (uint)(fVar16 + fVar15 * fVar17);
            *puVar7 = 0xffffffff;
            *(long *)(puVar7 + 4) = lVar10;
            *(long *)(puVar7 + 6) = lVar11;
            *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar10 + 0x30);
            *(uint **)(lVar10 + 0x30) = puVar7;
            uVar12 = *(uint *)(param_1 + 0x58);
            *puVar7 = uVar12;
            iVar5 = *(int *)(param_1 + 0x58);
            lVar10 = (long)iVar5;
            if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar5) {
              FUN_030a513c((long *)(param_1 + 0x50),lVar10 + 1);
              iVar5 = *(int *)(param_1 + 0x58);
            }
            *(uint **)(*(long *)(param_1 + 0x50) + (long)iVar5 * 8) = puVar7;
            *(int *)(param_1 + 0x58) = (int)(lVar10 + 1);
            if (0 < (int)uVar12) {
              do {
                lVar10 = *(long *)(param_1 + 0x50);
                uVar2 = (int)(uVar12 - 1) >> 1;
                lVar11 = *(long *)(lVar10 + (ulong)uVar2 * 8);
                puVar8 = *(undefined4 **)(lVar10 + (long)(int)uVar12 * 8);
                if (*(float *)(lVar11 + 4) < (float)puVar8[1]) {
                  return;
                }
                *(long *)(lVar10 + (long)(int)uVar12 * 8) = lVar11;
                *(undefined4 **)(lVar10 + (ulong)uVar2 * 8) = puVar8;
                puVar9 = *(undefined4 **)(lVar10 + (long)(int)uVar12 * 8);
                uVar3 = *puVar9;
                *puVar9 = *puVar8;
                *puVar8 = uVar3;
                bVar1 = 2 < (int)uVar12;
                uVar12 = uVar2;
              } while (bVar1);
            }
          }
        }
      }
      else {
        if (*(long *)(puVar7 + 6) != lVar11) {
          puVar14 = puVar7;
          do {
            puVar13 = puVar14;
            puVar14 = *(uint **)(puVar13 + 8);
            if (puVar14 == (uint *)0x0) goto LAB_030a41e8;
          } while (*(long *)(puVar14 + 6) != lVar11);
          *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(puVar14 + 8);
          *(uint **)(puVar14 + 8) = puVar7;
          *(uint **)(lVar10 + 0x30) = puVar14;
          puVar7 = puVar14;
        }
        uVar12 = *(uint *)(param_1 + 0x58);
        *puVar7 = uVar12;
        iVar5 = *(int *)(param_1 + 0x58);
        lVar10 = (long)iVar5;
        if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar5) {
          FUN_030a513c((long *)(param_1 + 0x50),lVar10 + 1);
          iVar5 = *(int *)(param_1 + 0x58);
        }
        *(uint **)(*(long *)(param_1 + 0x50) + (long)iVar5 * 8) = puVar7;
        *(int *)(param_1 + 0x58) = (int)(lVar10 + 1);
        if (0 < (int)uVar12) {
          do {
            lVar10 = *(long *)(param_1 + 0x50);
            uVar2 = (int)(uVar12 - 1) >> 1;
            lVar11 = *(long *)(lVar10 + (ulong)uVar2 * 8);
            puVar8 = *(undefined4 **)(lVar10 + (long)(int)uVar12 * 8);
            if (*(float *)(lVar11 + 4) < (float)puVar8[1]) {
              return;
            }
            *(long *)(lVar10 + (long)(int)uVar12 * 8) = lVar11;
            *(undefined4 **)(lVar10 + (ulong)uVar2 * 8) = puVar8;
            puVar9 = *(undefined4 **)(lVar10 + (long)(int)uVar12 * 8);
            uVar3 = *puVar9;
            *puVar9 = *puVar8;
            *puVar8 = uVar3;
            bVar1 = 2 < (int)uVar12;
            uVar12 = uVar2;
          } while (bVar1);
        }
      }
    }
  }
  return;
}


