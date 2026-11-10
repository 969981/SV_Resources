/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8e440; name: FUN_00c8e440
 */


undefined8 FUN_00c8e440(long param_1,short *param_2,int *param_3)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  long lVar4;
  ushort *puVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 extraout_var;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *local_80;
  int *piStack_78;
  size_t local_70;
  long *local_68;
  
  if ((4 < *(ushort *)((long)param_3 - (long)*param_3)) &&
     (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar10 != 0)) {
    uVar11 = (ulong)*(uint *)((long)param_3 + uVar10);
    piVar1 = (int *)((long)((long)param_3 + uVar10) + uVar11);
    if (*piVar1 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      puVar9 = &DAT_cbf29ce484222645;
      local_70 = strlen((char *)(piVar1 + 1));
      bVar2 = *(byte *)(piVar1 + 1);
      local_80 = &DAT_cbf29ce484222645;
      if (bVar2 != 0) {
        local_80 = &DAT_cbf29ce484222645;
        pbVar6 = (byte *)((long)param_3 + uVar11 + uVar10 + 5);
        do {
          local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar2 != 0);
      }
      local_68 = (long *)0x0;
      piStack_78 = piVar1 + 1;
      sVar3 = FUN_00c8ea20(uVar8,&local_80);
      *param_2 = sVar3;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))(local_68);
        sVar3 = *param_2;
      }
      if (((-1 < sVar3) && (6 < *(ushort *)((long)param_3 - (long)*param_3))) &&
         (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar10 != 0)) {
        uVar11 = (ulong)*(uint *)((long)param_3 + uVar10);
        piVar1 = (int *)((long)((long)param_3 + uVar10) + uVar11);
        if (*piVar1 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x70);
          local_70 = strlen((char *)(piVar1 + 1));
          bVar2 = *(byte *)(piVar1 + 1);
          if (bVar2 != 0) {
            pbVar6 = (byte *)((long)param_3 + uVar11 + uVar10 + 5);
            do {
              puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar2 != 0);
          }
          local_68 = (long *)0x0;
          local_80 = puVar9;
          piStack_78 = piVar1 + 1;
          sVar3 = FUN_00c8ea20(uVar8,&local_80);
          param_2[1] = sVar3;
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))(local_68);
            sVar3 = param_2[1];
          }
          if (-1 < sVar3) {
            uVar12 = 0;
            uVar14 = 0;
            if (8 < *(ushort *)((long)param_3 - (long)*param_3)) {
              uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4];
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = *(undefined4 *)((long)param_3 + uVar10);
              }
            }
            *(undefined4 *)(param_2 + 0x30) = uVar14;
            uVar14 = 0;
            if (0x1a < *(ushort *)((long)param_3 - (long)*param_3)) {
              uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xd];
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = *(undefined4 *)((long)param_3 + uVar10);
              }
            }
            *(undefined4 *)(param_2 + 2) = uVar14;
            if ((0x1c < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xe], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 4) = uVar12;
            uVar12 = 0x3f000000;
            if ((0x1e < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xf], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 6) = uVar12;
            puVar5 = (ushort *)((long)param_3 - (long)*param_3);
            if (*puVar5 < 0xb) {
              uVar12 = 0x3d4ccccd;
              uVar14 = 0xbd4ccccd;
            }
            else {
              if ((ulong)puVar5[5] == 0) {
                uVar14 = 0xbd4ccccd;
              }
              else {
                uVar14 = *(undefined4 *)((long)param_3 + (ulong)puVar5[5]);
              }
              if ((*puVar5 < 0xd) || ((ulong)puVar5[6] == 0)) {
                uVar12 = 0x3d4ccccd;
              }
              else {
                uVar12 = *(undefined4 *)((long)param_3 + (ulong)puVar5[6]);
              }
            }
            uVar15 = 0;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            param_2[0xe] = 0;
            param_2[0xf] = 0;
            *(ulong *)(param_2 + 8) = CONCAT44(uVar12,uVar14);
            puVar5 = (ushort *)((long)param_3 - (long)*param_3);
            if (*puVar5 < 0xf) {
              uVar12 = 0x80000000;
            }
            else {
              if ((ulong)puVar5[7] == 0) {
                uVar12 = 0x80000000;
              }
              else {
                uVar12 = *(undefined4 *)((long)param_3 + (ulong)puVar5[7]);
              }
              if ((0x10 < *puVar5) && ((ulong)puVar5[8] != 0)) {
                uVar15 = *(undefined4 *)((long)param_3 + (ulong)puVar5[8]);
              }
            }
            param_2[0x14] = 0;
            param_2[0x15] = 0;
            param_2[0x16] = 0;
            param_2[0x17] = 0;
            *(ulong *)(param_2 + 0x10) = CONCAT44(uVar15,uVar12);
            puVar5 = (ushort *)((long)param_3 - (long)*param_3);
            if (*puVar5 < 0x13) {
              uVar14 = 0x3d4ccccd;
              uVar12 = 0xbd4ccccd;
            }
            else {
              if ((ulong)puVar5[9] == 0) {
                uVar12 = 0xbd4ccccd;
              }
              else {
                uVar12 = *(undefined4 *)((long)param_3 + (ulong)puVar5[9]);
              }
              if ((*puVar5 < 0x15) || ((ulong)puVar5[10] == 0)) {
                uVar14 = 0x3d4ccccd;
              }
              else {
                uVar14 = *(undefined4 *)((long)param_3 + (ulong)puVar5[10]);
              }
            }
            param_2[0x1c] = 0;
            param_2[0x1d] = 0;
            param_2[0x1e] = 0;
            param_2[0x1f] = 0;
            *(ulong *)(param_2 + 0x18) = CONCAT44(uVar14,uVar12);
            uVar12 = 0;
            uVar14 = 0;
            if (0x16 < *(ushort *)((long)param_3 - (long)*param_3)) {
              uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xb];
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = *(undefined4 *)((long)param_3 + uVar10);
              }
            }
            *(undefined4 *)(param_2 + 0x20) = uVar14;
            if ((0x18 < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xc], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 0x22) = uVar12;
            uVar12 = 0x40000000;
            if ((0x20 < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x10], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 0x24) = uVar12;
            uVar12 = 0x3f800000;
            if ((0x22 < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x11], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 0x26) = uVar12;
            uVar12 = 0x3e800000;
            if ((0x24 < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x12], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 0x28) = uVar12;
            uVar12 = 0xbe800000;
            uVar14 = 0xbe800000;
            if (0x26 < *(ushort *)((long)param_3 - (long)*param_3)) {
              uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x13];
              uVar14 = 0xbe800000;
              if (uVar10 != 0) {
                uVar14 = *(undefined4 *)((long)param_3 + uVar10);
              }
            }
            *(undefined4 *)(param_2 + 0x2a) = uVar14;
            if ((0x28 < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x14], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 0x2c) = uVar12;
            uVar12 = 0x3e800000;
            if ((0x2a < *(ushort *)((long)param_3 - (long)*param_3)) &&
               (uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x15], uVar10 != 0)) {
              uVar12 = *(undefined4 *)((long)param_3 + uVar10);
            }
            *(undefined4 *)(param_2 + 0x2e) = uVar12;
            uVar12 = 0;
            if (0x2c < *(ushort *)((long)param_3 - (long)*param_3)) {
              uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x16];
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = *(undefined4 *)((long)param_3 + uVar10);
              }
            }
            *(undefined4 *)(param_2 + 0x32) = uVar12;
            uVar12 = 0;
            if (0x2e < *(ushort *)((long)param_3 - (long)*param_3)) {
              uVar10 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0x17];
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = *(undefined4 *)((long)param_3 + uVar10);
              }
            }
            *(undefined4 *)(param_2 + 0x34) = uVar12;
            param_2[0x36] = 0;
            param_2[0x37] = 0;
            param_2[0x38] = 0;
            param_2[0x39] = 0;
            param_2[0x40] = 0;
            param_2[0x41] = 0;
            param_2[0x42] = 0;
            param_2[0x43] = 0;
            param_2[0x44] = 0;
            param_2[0x45] = 0;
            param_2[0x46] = 0;
            param_2[0x47] = 0;
            param_2[0x48] = 0;
            param_2[0x49] = 0;
            param_2[0x4a] = 0;
            param_2[0x4b] = 0;
            param_2[0x4c] = 0;
            param_2[0x4d] = 0;
            param_2[0x4e] = 0;
            param_2[0x4f] = 0;
            FUN_00c8ecec(*(undefined8 *)(param_1 + 0x70),*param_2);
            *(undefined4 *)(param_2 + 0x50) = extraout_var;
            auVar13 = FUN_00c8eb50(*(undefined8 *)(param_1 + 0x70),param_2[1]);
            *(undefined1 (*) [16])(param_2 + 0x58) = auVar13;
            lVar7 = *(long *)(param_1 + 0x70);
            lVar4 = FUN_00c4c40c(lVar7,param_2[1]);
            uVar20 = *(undefined8 *)(lVar7 + 0x3e0);
            fVar16 = (float)*(undefined8 *)(lVar4 + 0x30);
            uVar22 = *(undefined8 *)(lVar7 + 0x410);
            uVar21 = *(undefined8 *)(lVar7 + 0x3f0);
            uVar8 = *(undefined8 *)(lVar7 + 0x400);
            fVar17 = (float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20);
            fVar18 = (float)*(undefined8 *)(lVar4 + 0x38);
            fVar19 = (float)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20);
            *(ulong *)(param_2 + 100) =
                 (ulong)(uint)((float)*(undefined8 *)(lVar7 + 1000) * fVar16 +
                               (float)*(undefined8 *)(lVar7 + 0x3f8) * fVar17 +
                               (float)*(undefined8 *)(lVar7 + 0x408) * fVar18 +
                              (float)*(undefined8 *)(lVar7 + 0x418) * fVar19);
            *(ulong *)(param_2 + 0x60) =
                 CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar16 +
                          (float)((ulong)uVar21 >> 0x20) * fVar17 +
                          (float)((ulong)uVar8 >> 0x20) * fVar18 +
                          (float)((ulong)uVar22 >> 0x20) * fVar19,
                          (float)uVar20 * fVar16 + (float)uVar21 * fVar17 + (float)uVar8 * fVar18 +
                          (float)uVar22 * fVar19);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


