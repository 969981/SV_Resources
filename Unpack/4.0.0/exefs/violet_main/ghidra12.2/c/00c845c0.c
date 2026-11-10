/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c845c0; name: FUN_00c845c0
 */


void FUN_00c845c0(float param_1,float param_2,undefined8 *param_3,long param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  undefined4 uVar8;
  int *piVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 *puVar15;
  float fVar16;
  float fVar17;
  
  piVar9 = (int *)*param_3;
  fVar16 = 0.0;
  fVar17 = 0.0;
  if (0x16 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
    uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xb];
    fVar17 = 0.0;
    if (uVar10 != 0) {
      puVar1 = (uint *)((long)piVar9 + uVar10);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      uVar4 = *puVar1;
      fVar17 = 0.0;
      if (uVar4 != 0) {
        uVar10 = 0;
        do {
          piVar2 = (int *)((long)(puVar1 + uVar10 + 1) + (ulong)puVar1[uVar10 + 1]);
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
            lVar14 = 0;
          }
          else {
            uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
            lVar14 = 0;
            if (uVar12 != 0) {
              puVar3 = (uint *)((long)piVar2 + uVar12);
              lVar14 = (long)puVar3 + (ulong)*puVar3;
            }
          }
          bVar5 = *(byte *)(lVar14 + 4);
          if (bVar5 != 0) {
            puVar15 = &DAT_cbf29ce484222645;
            pbVar13 = (byte *)(lVar14 + 5);
            do {
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar5 != 0);
            if (puVar15 == (undefined1 *)0x90f6eeecedcf1fc5) {
              fVar17 = 0.0;
              if ((uint)uVar10 < uVar4) {
                piVar2 = (int *)((long)(puVar1 + (uVar10 & 0xffffffff) + 1) +
                                (ulong)puVar1[(uVar10 & 0xffffffff) + 1]);
                puVar1 = (uint *)((long)piVar2 +
                                 (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
                piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
                fVar17 = 0.0;
                if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
                  uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
                  fVar17 = 0.0;
                  if (uVar10 != 0) {
                    fVar17 = *(float *)((long)piVar2 + uVar10);
                  }
                }
              }
              goto LAB_00c846c0;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar4);
        fVar17 = 0.0;
      }
    }
  }
LAB_00c846c0:
  if (1.1920929e-07 < param_2) {
    fVar16 = *(float *)((long)param_3 + 0x1c4);
    bVar7 = false;
    if ((1.1920929e-07 < fVar16) && (bVar7 = false, !NAN(fVar16) && !NAN(fVar17))) {
      bVar7 = fVar16 < fVar17;
    }
    if (!bVar7) goto LAB_00c846e8;
    fVar16 = fVar16 + param_2;
  }
  *(float *)((long)param_3 + 0x1c4) = fVar16;
LAB_00c846e8:
  puVar11 = (ushort *)((long)piVar9 - (long)*piVar9);
  uVar6 = *puVar11;
  fVar16 = 0.0;
  if ((8 < uVar6) && ((ulong)puVar11[4] != 0)) {
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar9 + (ulong)puVar11[4]));
  }
  if (param_1 < fVar16) {
    *(undefined4 *)(param_3 + 0x2a) = 0;
  }
  else {
    fVar16 = 0.0;
    if ((10 < uVar6) && ((ulong)puVar11[5] != 0)) {
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar9 + (ulong)puVar11[5]));
    }
    if (param_1 < fVar16) {
      if (*(int *)(param_3 + 0x2a) == 3) {
        return;
      }
      uVar8 = 1;
    }
    else if ((((((uVar6 < 0xf) || ((ulong)puVar11[7] == 0)) ||
               (*(int *)((long)piVar9 + (ulong)puVar11[7]) != 1)) ||
              ((param_4 == 0 || (*(int *)(param_3 + 0x2a) == 3)))) ||
             ((*(code **)(param_4 + 0x1b0) == (code *)0x0 ||
              (uVar10 = (**(code **)(param_4 + 0x1b0))(param_4 + 0x1d0,param_3), (uVar10 & 1) != 0))
             )) || ((fVar16 = *(float *)((long)param_3 + 0x1c4), 1.1920929e-07 < fVar17 &&
                    (fVar17 <= fVar16)))) {
      uVar8 = 3;
    }
    else {
      if (fVar16 <= 1.1920929e-07) {
        *(float *)((long)param_3 + 0x1c4) = fVar16 + param_2;
      }
      uVar8 = 2;
    }
    *(undefined4 *)(param_3 + 0x2a) = uVar8;
  }
  return;
}


