/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342a1d4; name: FUN_0342a1d4
 */


void FUN_0342a1d4(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *pcVar8;
  size_t sVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined4 *puVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  undefined1 auStack_64 [4];
  
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = PTR_DAT_047e2fd0;
  if ((int)param_1[1] != 0) {
    puVar26 = (undefined4 *)*param_1;
    do {
      lVar29 = *(long *)(*(long *)(param_2 + 8) + 0x58);
      lVar28 = *(long *)(lVar29 + 0x68);
      lVar25 = *(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x58) + 0x68);
      if ((lVar28 == lVar25) && (puVar26[8] != 0)) {
        uVar22 = (ulong)(uint)puVar26[8] * 0x50 - 0x50;
        lVar13 = *(long *)(puVar26 + 6);
        uVar7 = uVar22 / 0x50 + 1;
        uVar16 = uVar7 & 3;
        if (uVar22 < 0xf0) {
          iVar27 = 0;
        }
        else {
          iVar27 = 0;
          lVar17 = -(uVar7 & 0x7fffffffffffffc);
          do {
            if (*(long *)(lVar13 + 8) == lVar28) {
              iVar27 = iVar27 + 1;
            }
            plVar14 = (long *)(lVar13 + 0xa8);
            if (*(long *)(lVar13 + 0x58) == lVar28) {
              iVar27 = iVar27 + 1;
            }
            plVar1 = (long *)(lVar13 + 0xf8);
            lVar13 = lVar13 + 0x140;
            if (*plVar14 == lVar28) {
              iVar27 = iVar27 + 1;
            }
            if (*plVar1 == lVar28) {
              iVar27 = iVar27 + 1;
            }
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0);
        }
        if (uVar16 != 0) {
          lVar17 = -uVar16;
          plVar14 = (long *)(lVar13 + 8);
          do {
            if (*plVar14 == lVar28) {
              iVar27 = iVar27 + 1;
            }
            bVar5 = lVar17 != -1;
            lVar17 = lVar17 + 1;
            plVar14 = plVar14 + 10;
          } while (bVar5);
        }
      }
      else {
        iVar27 = 0;
      }
      uVar7 = FUN_03429b9c(puVar26,iVar27);
      if ((((uVar7 & 1) != 0) && (iVar27 != 0)) && (uVar11 = puVar26[8], uVar11 != 0)) {
        puVar18 = *(undefined4 **)(puVar26 + 6);
        uVar7 = 0;
        puVar20 = puVar18;
        do {
          if (*(long *)(puVar20 + 2) == lVar28 && *(long *)(puVar20 + 2) == lVar25) {
            *(undefined4 *)(*(long *)(puVar26 + 2) + uVar7 * 0x48 + 0x10) = *puVar20;
            uVar24 = *(undefined8 *)(puVar20 + 8);
            uVar19 = *(undefined8 *)(puVar20 + 4);
            uVar23 = *(undefined8 *)(puVar20 + 6);
            lVar13 = *(long *)(puVar26 + 2) + uVar7 * 0x48;
            *(undefined2 *)(lVar13 + 0x2c) = *(undefined2 *)(puVar20 + 10);
            *(undefined8 *)(lVar13 + 0x24) = uVar24;
            *(undefined8 *)(lVar13 + 0x1c) = uVar23;
            *(undefined8 *)(lVar13 + 0x14) = uVar19;
            uVar19 = *(undefined8 *)(puVar20 + 0xb);
            uVar23 = *(undefined8 *)(puVar20 + 0xd);
            lVar13 = *(long *)(puVar26 + 2) + uVar7 * 0x48;
            *(undefined4 *)(lVar13 + 0x40) = puVar20[0xf];
            *(undefined8 *)(lVar13 + 0x30) = uVar19;
            *(undefined8 *)(lVar13 + 0x38) = uVar23;
            lVar13 = *(long *)(puVar26 + 2);
            pcVar8 = *(char **)(puVar20 + 0x10);
            *(char **)(lVar13 + uVar7 * 0x48 + 0x50) = pcVar8;
            uVar6 = 0;
            if (pcVar8 != (char *)0x0) {
              sVar9 = strlen(pcVar8);
              uVar6 = (undefined4)sVar9;
            }
            *(undefined4 *)(lVar13 + uVar7 * 0x48 + 0x48) = uVar6;
            puVar18 = *(undefined4 **)(puVar26 + 6);
            uVar11 = puVar26[8];
            uVar7 = (ulong)((int)uVar7 + 1);
          }
          puVar20 = puVar20 + 0x14;
        } while (puVar20 != puVar18 + (ulong)uVar11 * 0x14);
      }
      uVar19 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x78);
      puVar10 = *(undefined8 **)(puVar26 + 2);
      if (puVar10 == (undefined8 *)0x0) {
        iVar27 = 0;
      }
      else {
        iVar27 = 0x58;
        if (*(int *)(puVar10 + 1) != 0) {
          iVar27 = *(int *)(puVar10 + 1) * 0x48 + 0x10;
        }
        *puVar10 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x78);
      }
      FUN_034785cc(puVar26[4],uVar19,3,0,0xab,puVar10,iVar27,0);
      if (*(long *)(puVar26 + 2) == 0) {
        uVar11 = puVar26[4];
LAB_0342a460:
        uVar12 = *(uint *)(lVar29 + 0x38);
        if (uVar12 != 0) {
          lVar25 = *(long *)(lVar29 + 0x30);
          iVar27 = 0;
          uVar21 = uVar12;
LAB_0342a474:
          iVar2 = iVar27 + (uVar21 >> 1);
          uVar3 = *(uint *)(lVar25 + (long)iVar2 * 4);
          if (uVar3 != uVar11) goto code_r0x0342a488;
          puVar20 = (undefined4 *)(lVar25 + (long)iVar2 * 4);
          puVar18 = (undefined4 *)(lVar25 + (ulong)uVar12 * 4 + -4);
          if (puVar20 < puVar18) {
            do {
              puVar15 = puVar20 + 1;
              *puVar20 = *puVar15;
              puVar20 = puVar15;
            } while (puVar15 < puVar18);
            uVar12 = *(uint *)(lVar29 + 0x38);
          }
          *(uint *)(lVar29 + 0x38) = uVar12 - 1;
        }
      }
      else {
        uVar11 = puVar26[4];
        if (*(int *)(*(long *)(puVar26 + 2) + 8) == 0) goto LAB_0342a460;
        FUN_0342a7e0(lVar29 + 0x30,uVar11,auStack_64);
      }
LAB_0342a4d8:
      if (puVar26[8] == 0) {
        FUN_03429cc4(puVar26,param_2);
        lVar25 = *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28;
        puVar20 = puVar26;
        while (puVar20 < (undefined4 *)(lVar25 + -0x28)) {
          puVar18 = puVar20 + 10;
          uVar6 = puVar20[0xe];
          puVar20[0xe] = 0;
          *puVar20 = *puVar18;
          puVar20[4] = uVar6;
          uVar19 = *(undefined8 *)(puVar20 + 0xc);
          *(undefined8 *)(puVar20 + 0xc) = 0;
          *(undefined8 *)(puVar20 + 2) = uVar19;
          *puVar18 = 0;
          lVar28 = *(long *)(puVar20 + 6);
          if (lVar28 != 0) {
            if (puVar20[8] != 0) {
              lVar29 = (ulong)(uint)puVar20[8] * 0x50;
              pcVar8 = (char *)(lVar28 + 0x48);
              do {
                if ((*(long *)(pcVar8 + -8) != 0) && (*pcVar8 != '\0')) {
                  (**(code **)(puVar4 + 0x30))(9);
                  *pcVar8 = '\0';
                }
                pcVar8[-8] = '\0';
                pcVar8[-7] = '\0';
                pcVar8[-6] = '\0';
                pcVar8[-5] = '\0';
                pcVar8[-4] = '\0';
                pcVar8[-3] = '\0';
                pcVar8[-2] = '\0';
                pcVar8[-1] = '\0';
                lVar29 = lVar29 + -0x50;
                pcVar8 = pcVar8 + 0x50;
              } while (lVar29 != 0);
              lVar28 = *(long *)(puVar20 + 6);
            }
            puVar20[8] = 0;
            (**(code **)(puVar4 + 0x30))(9,lVar28);
            *(undefined8 *)(puVar20 + 6) = 0;
            puVar20[9] = 0;
          }
          *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar20 + 0x10);
          puVar20[8] = puVar20[0x12];
          puVar20[9] = puVar20[0x13];
          *(undefined8 *)(puVar20 + 0x10) = 0;
          *(undefined8 *)(puVar20 + 0x12) = 0;
          puVar20 = puVar18;
        }
        if (*(long *)(lVar25 + -0x20) != 0) {
          (**(code **)(puVar4 + 0x30))(9);
        }
        *(undefined8 *)(lVar25 + -0x20) = 0;
        *(undefined4 *)(lVar25 + -0x28) = 0;
        uVar11 = (int)param_1[1] - 1;
        *(uint *)(param_1 + 1) = uVar11;
      }
      else {
        if ((char)param_1[2] == '\0') {
          bVar5 = false;
          if (*(long *)(puVar26 + 2) != 0) {
            bVar5 = *(int *)(*(long *)(puVar26 + 2) + 8) != 0;
          }
        }
        else {
          bVar5 = true;
        }
        *(bool *)(param_1 + 2) = bVar5;
        uVar11 = *(uint *)(param_1 + 1);
        puVar26 = puVar26 + 10;
      }
    } while ((undefined4 *)(*param_1 + (ulong)uVar11 * 0x28) != puVar26);
  }
  return;
code_r0x0342a488:
  if (uVar3 < uVar11) {
    iVar27 = iVar2 + 1;
  }
  uVar21 = uVar21 - (uVar3 < uVar11) >> 1;
  if (uVar21 == 0) goto LAB_0342a4d8;
  goto LAB_0342a474;
}


