/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fea54; name: FUN_030fea54
 */


void FUN_030fea54(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  puVar4 = (undefined8 *)(*param_1 + (long)(int)param_2 * 0x50);
  puVar7 = (undefined8 *)(param_1[2] + ((long)param_2 >> 0x20) * 0x50);
  puVar1 = puVar4;
  if (*(char *)(puVar4 + 8) != '\0') {
    puVar1 = puVar4 + 4;
  }
  iVar10 = -(uint)((float)*puVar4 <= (float)puVar7[2]);
  iVar11 = -(uint)((float)((ulong)*puVar4 >> 0x20) <= (float)((ulong)puVar7[2] >> 0x20));
  iVar12 = -(uint)((float)puVar4[1] <= (float)puVar7[3]);
  puVar2 = puVar7;
  if (*(char *)(puVar7 + 8) != '\0') {
    puVar2 = puVar7 + 4;
  }
  iVar13 = -(uint)((float)*puVar7 <= (float)puVar4[2]);
  iVar14 = -(uint)((float)((ulong)*puVar7 >> 0x20) <= (float)((ulong)puVar4[2] >> 0x20));
  iVar15 = -(uint)((float)puVar7[1] <= (float)puVar4[3]);
  iVar10 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                    (byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar10 >> 0x18) &
                    (byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                    CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                             (byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar10 >> 0x10) &
                             (byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                             CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar11 >> 8) &
                                      (byte)((uint)iVar13 >> 8) & (byte)((uint)iVar10 >> 8) &
                                      (byte)((uint)iVar15 >> 8) & (byte)((uint)iVar12 >> 8),
                                      (byte)iVar14 & (byte)iVar11 & (byte)iVar13 & (byte)iVar10 &
                                      (byte)iVar15 & (byte)iVar12)));
  iVar11 = -(uint)((float)*puVar1 <= (float)puVar2[2]);
  iVar12 = -(uint)((float)((ulong)*puVar1 >> 0x20) <= (float)((ulong)puVar2[2] >> 0x20));
  iVar13 = -(uint)((float)puVar1[1] <= (float)puVar2[3]);
  iVar14 = -(uint)((float)*puVar2 <= (float)puVar1[2]);
  iVar15 = -(uint)((float)((ulong)*puVar2 >> 0x20) <= (float)((ulong)puVar1[2] >> 0x20));
  iVar16 = -(uint)((float)puVar2[1] <= (float)puVar1[3]);
  iVar11 = CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar12 >> 0x18) &
                    (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar11 >> 0x18) &
                    (byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                    CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar12 >> 0x10) &
                             (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar11 >> 0x10) &
                             (byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                             CONCAT11((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar12 >> 8) &
                                      (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar11 >> 8) &
                                      (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar13 >> 8),
                                      (byte)iVar15 & (byte)iVar12 & (byte)iVar14 & (byte)iVar11 &
                                      (byte)iVar16 & (byte)iVar13)));
  if (iVar10 == 0 || iVar11 != 0) {
    if (iVar10 == 0 && iVar11 != 0) {
      FUN_030fcb70(*param_3,param_2 & 0xffffffff);
      iVar10 = (int)param_1[0xd];
      lVar5 = (long)iVar10;
      if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) <= iVar10) {
        FUN_030fec08(param_1 + 0xc,lVar5 + 1);
        iVar10 = (int)param_1[0xd];
      }
      *(ulong *)(param_1[0xc] + (long)iVar10 * 8) = param_2;
      *(int *)(param_1 + 0xd) = (int)(lVar5 + 1);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xd);
    if (0 < (int)uVar3) {
      lVar6 = param_1[0xc];
      lVar8 = 0;
      lVar5 = 0;
      piVar9 = (int *)(lVar6 + 4);
      do {
        if ((piVar9[-1] == (int)param_2) && (*piVar9 == (int)(param_2 >> 0x20))) {
          if ((int)lVar8 == 1) {
            return;
          }
          *(uint *)(param_1 + 0xd) = uVar3 - 1;
          if (uVar3 + (int)lVar8 != 1) {
            *(undefined8 *)(lVar6 + (lVar5 >> 0x1d)) =
                 *(undefined8 *)(lVar6 + (long)(int)(uVar3 - 1) * 8);
          }
          FUN_030fcd74(*param_3,-lVar8 & 0xffffffff);
          FUN_030fcff8(*param_3,-lVar8 & 0xffffffff);
          return;
        }
        lVar8 = lVar8 + -1;
        lVar5 = lVar5 + 0x100000000;
        piVar9 = piVar9 + 2;
      } while ((ulong)uVar3 + lVar8 != 0);
    }
  }
  return;
}


