/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fd6220; name: FUN_02fd6220
 */


void FUN_02fd6220(long param_1,undefined8 param_2,long *param_3,uint param_4,long *param_5,
                 long *param_6,undefined8 param_7,int param_8,int *param_9)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined2 uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined2 local_64;
  undefined1 local_62;
  
  do {
    iVar6 = *param_9;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_9,0x10);
    if (bVar5) {
      *param_9 = iVar6 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 < param_8) {
    do {
      lVar18 = (long)iVar6;
      lVar13 = *param_3;
      puVar14 = *(undefined4 **)
                 (*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
      uVar2 = *puVar14;
      uVar3 = *puVar14;
      *(undefined4 **)(param_1 + 0x740) = puVar14;
      iVar6 = *(int *)(param_1 + 0x538);
      iVar10 = -iVar6;
      lVar13 = lVar13 + lVar18 * 0x20;
      *(short *)(param_1 + 0x748) = (short)((uint)uVar2 >> 0x10);
      *(short *)(param_1 + 0x74a) = (short)uVar3;
      *(int *)(param_1 + 0x74c) = iVar10;
      if (*(int *)(lVar13 + 0xc) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x500);
        uVar15 = (undefined2)param_6[3];
        uVar19 = *(uint *)((long)param_6 + 0x1c);
        iVar6 = *(int *)(*param_6 + 8);
        *(undefined4 *)(param_6 + 5) = 0;
        puVar17 = (uint *)param_6[2];
        FUN_02f6ca04(param_1,param_2,param_4 & 1,lVar8 + 0x9a0,lVar13,param_7);
        uVar7 = *(uint *)((long)param_6 + 0x1c);
        iVar6 = (*(int *)(*param_6 + 8) - (iVar6 + uVar19)) + uVar7;
        if (iVar6 != 0) {
          puVar11 = (uint *)param_6[2];
          if (puVar17 != puVar11) {
            if ((uVar19 & 0xffff) == (*puVar17 & 0xffff)) {
              puVar17 = *(uint **)(puVar17 + 2);
              uVar15 = 0;
              uVar19 = 0;
            }
            if (puVar17 == puVar11) {
              puVar17 = puVar11;
            }
            else {
              uVar7 = *puVar17;
            }
          }
          lVar13 = param_6[5];
          if ((int)param_6[3] < 0xf81) {
            puVar16 = (undefined8 *)((long)puVar11 + (long)(int)param_6[3] + 0x20);
          }
          else {
            puVar16 = (undefined8 *)FUN_031c36f4(param_6);
          }
          *puVar16 = puVar17;
          *(undefined2 *)(puVar16 + 1) = uVar15;
          *(short *)((long)puVar16 + 10) = (short)uVar7 - (short)uVar19;
          *(int *)((long)puVar16 + 0xc) = iVar6;
          *(undefined1 *)(puVar16 + 3) = 0;
          *(undefined1 *)((long)puVar16 + 0x1b) = local_62;
          *(undefined2 *)((long)puVar16 + 0x19) = local_64;
          *(int *)((long)puVar16 + 0x1c) = (int)lVar13;
          puVar16[2] = 0;
          *(int *)(param_6 + 3) = (int)param_6[3] + 0x20;
          *(int *)((long)param_6 + 0x1c) = *(int *)((long)param_6 + 0x1c) + 1;
          puVar20 = (undefined8 *)(*param_5 + lVar18 * 0x20);
          if (*(int *)((long)puVar20 + 0xc) == 0) {
            uVar12 = puVar16[3];
            puVar20[1] = puVar16[1];
            puVar20[3] = uVar12;
            uVar12 = *puVar16;
            puVar20[2] = puVar16[2];
            *puVar20 = uVar12;
          }
          else {
            *(int *)((long)puVar16 + 0x1c) =
                 *(int *)((long)puVar16 + 0x1c) +
                 *(int *)(*(long *)(param_5[2] + lVar18 * 8) + 0x1c);
            *(undefined8 **)(*(long *)(param_5[2] + lVar18 * 8) + 0x10) = puVar16;
            *(undefined8 **)(param_5[2] + lVar18 * 8) = puVar16;
          }
        }
        iVar6 = *(int *)(param_1 + 0x538);
        iVar10 = *(int *)(param_1 + 0x74c);
      }
      if (iVar10 + iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x74c) = 0;
      }
      else {
        puVar17 = *(uint **)(param_1 + 0x740);
        if ((puVar17 !=
             *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8)) &&
           ((uint)*(ushort *)(param_1 + 0x74a) == (*puVar17 & 0xffff))) {
          puVar17 = *(uint **)(puVar17 + 2);
          *(undefined4 *)(param_1 + 0x748) = 0;
        }
        uVar19 = *puVar17;
        *(uint **)(param_1 + 0x740) = puVar17;
        *(int *)(param_1 + 0x74c) = iVar10 + iVar6;
        lVar13 = *(long *)(param_1 + 0x730);
        *(short *)(param_1 + 0x74a) = (short)uVar19 - *(short *)(param_1 + 0x74a);
        puVar16 = *(undefined8 **)(*(long *)(lVar13 + 0x10) + lVar18 * 8);
        if (*(int *)((long)puVar16 + 0xc) == 0) {
          puVar16[1] = *(undefined8 *)(param_1 + 0x748);
          uVar12 = *(undefined8 *)(param_1 + 0x740);
          puVar16[2] = *(undefined8 *)(param_1 + 0x750);
          *puVar16 = uVar12;
        }
        else {
          puVar17 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8
                              );
          puVar20 = *(undefined8 **)(param_1 + 0x4e0);
          uVar19 = *puVar17;
          if (0x1e < uVar19 >> 0x17) {
            puVar11 = puVar17;
            do {
              uVar19 = *(int *)(puVar20 + 0xb) - 1;
              if (*(int *)(puVar20 + 0xb) < 1) {
                lVar8 = puVar20[1];
                (**(code **)(*(long *)*puVar20 + 0x20))((long *)*puVar20,lVar8,6);
                *(undefined4 *)(puVar20 + 0xb) = 5;
                puVar9 = (undefined8 *)(lVar8 + 0x28);
              }
              else {
                *(uint *)(puVar20 + 0xb) = uVar19;
                puVar9 = (undefined8 *)(puVar20[1] + (ulong)uVar19 * 8);
              }
              puVar17 = (uint *)*puVar9;
              puVar17[4] = 0;
              puVar17[5] = 0;
              puVar17[6] = 0;
              puVar17[7] = 0;
              puVar17[0] = 0;
              puVar17[1] = 0;
              puVar17[2] = 0;
              puVar17[3] = 0;
              puVar17[1] = *(uint *)(param_1 + 0x548);
              iVar6 = *(int *)(param_1 + 0x548);
              lVar8 = (long)iVar6;
              if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar6) {
                FUN_031c25b4(param_1 + 0x540,PTR_PTR_047d1a50,lVar8 + 1);
                iVar6 = *(int *)(param_1 + 0x548);
              }
              *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar6 * 8) = puVar17;
              *(int *)(param_1 + 0x548) = (int)(lVar8 + 1);
              *(uint **)(puVar11 + 2) = puVar17;
              uVar19 = *puVar17;
              puVar11 = puVar17;
            } while (0x1e < uVar19 >> 0x17);
          }
          uVar19 = uVar19 >> 0x10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar17,0x10);
            if (bVar5) {
              *puVar17 = *puVar17 + 0x200001;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
          uVar12 = *(undefined8 *)(param_1 + 0x748);
          uVar1 = *(undefined8 *)(param_1 + 0x750);
          puVar20 = (undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x20);
          *puVar20 = *(undefined8 *)(param_1 + 0x740);
          *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x28) = uVar12;
          *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x30) = uVar1;
          if (*(int *)((long)puVar16 + 0xc) == 0) {
            puVar16[1] = *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x28);
            uVar12 = *puVar20;
            puVar16[2] = *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x30);
            *puVar16 = uVar12;
          }
          else {
            *(undefined8 *)((long)puVar17 + (ulong)uVar19 + 0x30) = puVar16[2];
            puVar16[2] = puVar20;
          }
          *(undefined8 **)(*(long *)(lVar13 + 0x10) + lVar18 * 8) = puVar20;
        }
      }
      puVar14 = *(undefined4 **)
                 (*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
      uVar2 = *puVar14;
      uVar3 = *puVar14;
      *(undefined4 **)(param_1 + 0x740) = puVar14;
      *(short *)(param_1 + 0x748) = (short)((uint)uVar2 >> 0x10);
      *(short *)(param_1 + 0x74a) = (short)uVar3;
      *(int *)(param_1 + 0x74c) = -*(int *)(param_1 + 0x538);
      do {
        iVar6 = *param_9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(param_9,0x10);
        if (bVar5) {
          *param_9 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    } while (iVar6 < param_8);
  }
  return;
}


