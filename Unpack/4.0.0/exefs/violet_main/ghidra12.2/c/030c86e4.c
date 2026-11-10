/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c86e4; name: FUN_030c86e4
 */


void FUN_030c86e4(long *param_1,long *param_2,long param_3,uint param_4,long param_5,uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *(uint *)(param_1 + 0x2e) = param_4;
  uVar3 = param_6;
  if (0xf < (int)param_6) {
    uVar3 = 0x10;
  }
  uVar4 = (ulong)uVar3;
  *(uint *)(param_1 + 4) = uVar3;
  *param_1 = (long)param_2;
  param_1[1] = param_3;
  param_1[0x44] = param_5;
  if (0 < (int)param_6) {
    lVar5 = 0;
    do {
      uVar3 = *(uint *)(param_5 + lVar5 * 4);
      uVar2 = uVar3 >> 0x16;
      if (*param_2 == 0) {
        param_2[2] = param_2[1];
      }
      else if (*(uint *)((long)param_2 + 0x74) != uVar2) {
        param_2[2] = *(long *)(*(long *)(*param_2 + 0x38) + (ulong)uVar2 * 0x100 + 0x10);
        *(uint *)((long)param_2 + 0x74) = uVar2;
      }
      *(uint *)((long)param_2 + 0x74) = uVar2;
      param_2 = (long *)*param_1;
      lVar8 = param_2[2];
      uVar14 = *(undefined8 *)(lVar8 + 0x40);
      uVar15 = *(undefined8 *)(lVar8 + 0x50);
      uVar16 = *(undefined8 *)(lVar8 + 0x60);
      uVar17 = *(undefined8 *)(lVar8 + 0x70);
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(lVar8 + 0x20) + 0x38) + ((ulong)uVar3 & 0x3fffff) * 0x10);
      uVar11 = *puVar1;
      fVar10 = (float)uVar11;
      fVar12 = (float)((ulong)uVar11 >> 0x20);
      fVar13 = (float)puVar1[1];
      (param_1 + lVar5 * 2 + 0x46)[1] =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x78) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20) * fVar13 +
                    (float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20) * fVar10 +
                    (float)((ulong)*(undefined8 *)(lVar8 + 0x58) >> 0x20) * fVar12,
                    (float)*(undefined8 *)(lVar8 + 0x78) +
                    (float)*(undefined8 *)(lVar8 + 0x68) * fVar13 +
                    (float)*(undefined8 *)(lVar8 + 0x48) * fVar10 +
                    (float)*(undefined8 *)(lVar8 + 0x58) * fVar12);
      param_1[lVar5 * 2 + 0x46] =
           CONCAT44((float)((ulong)uVar17 >> 0x20) +
                    (float)((ulong)uVar16 >> 0x20) * fVar13 +
                    (float)((ulong)uVar14 >> 0x20) * fVar10 +
                    (float)((ulong)uVar15 >> 0x20) * fVar12,
                    (float)uVar17 +
                    (float)uVar16 * fVar13 + (float)uVar14 * fVar10 + (float)uVar15 * fVar12);
      uVar4 = (ulong)(int)param_1[4];
      lVar5 = lVar5 + 1;
    } while (lVar5 < (long)uVar4);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  if (param_3 != 0) {
    if (0 < (int)uVar4) {
      bVar7 = 0;
      lVar5 = 0;
      do {
        uVar3 = *(uint *)(param_5 + lVar5 * 4);
        uVar2 = uVar3 >> 0x16;
        if (*(uint *)(param_2 + 0xf) != uVar2) {
          param_2[3] = *(long *)(*(long *)(*param_2 + 0x38) + (ulong)uVar2 * 0x100 + 0x10);
          *(uint *)(param_2 + 0xf) = uVar2;
          param_2 = (long *)*param_1;
          bVar7 = *(byte *)((long)param_1 + 0x24);
          uVar4 = (ulong)*(uint *)(param_1 + 4);
        }
        uVar3 = *(uint *)(*(long *)(*(long *)(param_2[3] + 0x20) + 0x40) +
                         (long)(int)(*(int *)(*(long *)(param_2[3] + 0x20) + 0x48) *
                                    (uVar3 & 0x3fffff)) * 4) | uVar3 & 0xffc00000;
        *(uint *)((long)param_1 + lVar5 * 4 + 0x2c) = uVar3;
        lVar5 = lVar5 + 1;
        bVar7 = bVar7 | uVar3 != 0xffffffff;
        *(byte *)((long)param_1 + 0x24) = bVar7;
      } while (lVar5 < (int)uVar4);
    }
    if (*(uint *)(param_2 + 0xf) != param_4 >> 0x16) {
      param_2[3] = *(long *)(*(long *)(*param_2 + 0x38) + (ulong)(param_4 >> 0x16) * 0x100 + 0x10);
      *(uint *)(param_2 + 0xf) = param_4 >> 0x16;
      param_2 = (long *)*param_1;
    }
    uVar3 = *(uint *)(*(long *)(*(long *)(param_2[3] + 0x20) + 0x40) +
                     (long)(int)(*(int *)(*(long *)(param_2[3] + 0x20) + 0x48) *
                                (param_4 & 0x3fffff)) * 4) | param_4 & 0xffc00000;
    *(uint *)(param_1 + 5) = uVar3;
    if ((uVar3 != 0xffffffff) && (*(char *)((long)param_1 + 0x24) != '\0')) {
      FUN_030bf7b0(param_1 + 0x30,param_1[1],(long)param_1 + 0x2c,(int)param_1[4]);
    }
    iVar6 = (int)param_1[4];
    if (0 < iVar6) {
      lVar5 = 0;
      do {
        uVar3 = *(uint *)((long)param_1 + lVar5 * 4 + 0x2c);
        if (uVar3 != 0xffffffff) {
          plVar9 = (long *)param_1[1];
          uVar2 = uVar3 >> 0x16;
          if (*(uint *)(plVar9 + 0xf) != uVar2) {
            plVar9[3] = *(long *)(*(long *)(*plVar9 + 0x38) + (ulong)uVar2 * 0x100 + 0x10);
            *(uint *)(plVar9 + 0xf) = uVar2;
            plVar9 = (long *)param_1[1];
            iVar6 = (int)param_1[4];
          }
          lVar8 = plVar9[3];
          uVar14 = *(undefined8 *)(lVar8 + 0x40);
          uVar15 = *(undefined8 *)(lVar8 + 0x50);
          uVar16 = *(undefined8 *)(lVar8 + 0x60);
          uVar17 = *(undefined8 *)(lVar8 + 0x70);
          puVar1 = (undefined8 *)
                   (*(long *)(*(long *)(lVar8 + 0x20) + 0x38) + (ulong)(uVar3 & 0x3fffff) * 0x10);
          uVar11 = *puVar1;
          fVar10 = (float)uVar11;
          fVar12 = (float)((ulong)uVar11 >> 0x20);
          fVar13 = (float)puVar1[1];
          (param_1 + lVar5 * 2 + 0xe)[1] =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20) * fVar13 +
                        (float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(lVar8 + 0x58) >> 0x20) * fVar12,
                        (float)*(undefined8 *)(lVar8 + 0x78) +
                        (float)*(undefined8 *)(lVar8 + 0x68) * fVar13 +
                        (float)*(undefined8 *)(lVar8 + 0x48) * fVar10 +
                        (float)*(undefined8 *)(lVar8 + 0x58) * fVar12);
          param_1[lVar5 * 2 + 0xe] =
               CONCAT44((float)((ulong)uVar17 >> 0x20) +
                        (float)((ulong)uVar16 >> 0x20) * fVar13 +
                        (float)((ulong)uVar14 >> 0x20) * fVar10 +
                        (float)((ulong)uVar15 >> 0x20) * fVar12,
                        (float)uVar17 +
                        (float)uVar16 * fVar13 + (float)uVar14 * fVar10 + (float)uVar15 * fVar12);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar6);
    }
  }
  return;
}


