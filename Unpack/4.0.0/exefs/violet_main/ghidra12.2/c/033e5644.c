/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e5644; name: FUN_033e5644
 */


void FUN_033e5644(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined1 auStack_6c [4];
  int local_68 [2];
  
  puVar10 = (undefined8 *)param_1[3];
  if (puVar10 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    do {
      iVar2 = *(int *)((long)puVar10 + 0x74);
      if (iVar2 == 1) {
        iVar2 = (**(code **)(*(long *)puVar10[1] + 0x68))();
        if (iVar2 == 2) {
          iVar3 = 1;
LAB_033e5740:
          iVar2 = *(int *)((long)puVar10 + 0x74);
          goto LAB_033e5744;
        }
        if (iVar2 != 1) {
          iVar3 = 2;
          goto LAB_033e5740;
        }
        uVar5 = *(uint *)(puVar10 + 3);
        if (uVar5 != 0) {
          if (puVar10[5] != 0) {
            (**(code **)(*(long *)*DAT_048aec30 + 0x18))();
            uVar5 = *(uint *)(puVar10 + 3);
          }
          puVar6 = (undefined8 *)puVar10[2];
          puVar10[5] = *puVar6;
          puVar14 = puVar6 + ((ulong)uVar5 - 1);
          if (puVar6 < puVar14) {
            uVar8 = (ulong)uVar5 * 8 - 9;
            uVar5 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
            if ((uVar5 & 7) != 0) {
              lVar9 = -((ulong)uVar5 & 7);
              puVar7 = puVar6;
              do {
                puVar6 = puVar7 + 1;
                *puVar7 = *puVar6;
                bVar1 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                puVar7 = puVar6;
              } while (bVar1);
            }
            if (0x37 < uVar8) {
              do {
                *puVar6 = puVar6[1];
                puVar6[1] = puVar6[2];
                puVar6[2] = puVar6[3];
                puVar6[3] = puVar6[4];
                puVar6[4] = puVar6[5];
                puVar6[5] = puVar6[6];
                puVar6[6] = puVar6[7];
                puVar7 = puVar6 + 8;
                puVar6[7] = *puVar7;
                puVar6 = puVar7;
              } while (puVar7 < puVar14);
            }
            uVar5 = *(uint *)(puVar10 + 3);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(puVar10 + 3) = uVar5;
          if (uVar5 == 0) goto LAB_033e57ac;
LAB_033e5840:
          *(undefined4 *)((long)puVar10 + 0x74) = 0;
          iVar3 = 1;
          goto LAB_033e5848;
        }
LAB_033e57ac:
        uVar5 = 0;
        if (*(char *)(puVar10 + 0xf) == '\0') goto LAB_033e5840;
        (**(code **)(*(long *)puVar10[1] + 0x50))((long *)puVar10[1],0,0,local_68);
        fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar10 + 0x4c));
        uVar4 = 0x44;
        if (*(short *)((long)puVar10 + 0x7a) != 0) {
          uVar4 = 0x34;
        }
        iVar3 = (**(code **)(*(long *)puVar10[1] + 0x40))
                          (1.31072e+08 / fVar15,(long *)puVar10[1],puVar10 + 6,uVar4,0,0x32,
                           auStack_6c);
        *(undefined4 *)((long)puVar10 + 0x74) = 2;
LAB_033e5824:
        iVar2 = (**(code **)(*(long *)puVar10[1] + 0x68))();
        if (iVar2 == 2) goto LAB_033e58bc;
LAB_033e58d0:
        puVar14 = (undefined8 *)*puVar10;
        puVar6 = param_1 + 3;
        if ((undefined8 *)param_1[3] != puVar10) {
          puVar6 = puVar13;
        }
        *puVar6 = puVar14;
        plVar11 = (long *)*param_1;
        plVar12 = (long *)*DAT_048aec30;
        if (*(int *)(puVar10 + 3) != 0) {
          uVar8 = 0;
          do {
            (**(code **)(*plVar12 + 0x18))(plVar12,*(undefined8 *)(puVar10[2] + uVar8 * 8));
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(puVar10 + 3));
        }
        if (puVar10[2] != 0) {
          *(undefined4 *)(puVar10 + 3) = 0;
          (**(code **)(*(long *)*DAT_048aec30 + 0x18))();
          puVar10[2] = 0;
          *(undefined4 *)((long)puVar10 + 0x1c) = 0;
        }
        if (puVar10[5] != 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        if ((long *)puVar10[1] != (long *)0x0) {
          (**(code **)(*(long *)puVar10[1] + 0x10))();
        }
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar10);
        puVar10 = puVar14;
      }
      else {
        iVar3 = 1;
LAB_033e5744:
        if (iVar2 == 2) goto LAB_033e5824;
        if (iVar2 == 0) {
          uVar5 = *(uint *)(puVar10 + 3);
LAB_033e5848:
          if (uVar5 < 2) {
            if ((uVar5 != 1) || (*(char *)(puVar10 + 0xf) == '\0')) goto LAB_033e58bc;
            local_68[0] = 0x20000;
            if (*(int *)(puVar10 + 4) != 0) {
              local_68[0] = *(int *)(puVar10 + 4);
            }
          }
          else {
            local_68[0] = 0x20000;
          }
          fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)puVar10 + 0x4c));
          iVar3 = (**(code **)(*(long *)puVar10[1] + 0x40))
                            (1.31072e+08 / fVar15,(long *)puVar10[1],*(undefined8 *)puVar10[2],
                             local_68[0],0,0x32,local_68);
          *(undefined4 *)((long)puVar10 + 0x74) = 1;
        }
LAB_033e58bc:
        if (iVar3 != 1) goto LAB_033e58d0;
        puVar13 = puVar10;
        puVar10 = (undefined8 *)*puVar10;
      }
    } while (puVar10 != (undefined8 *)0x0);
  }
  return;
}


