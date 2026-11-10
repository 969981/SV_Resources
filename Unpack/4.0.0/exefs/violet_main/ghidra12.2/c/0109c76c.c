/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109c76c; name: FUN_0109c76c
 */


void FUN_0109c76c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  ushort *puVar17;
  short *psVar18;
  ulong uVar19;
  ulong local_50;
  undefined8 local_48;
  
  psVar18 = *(short **)(param_2 + 0x30);
  local_50 = 0;
  local_48 = 0;
  do {
    do {
      while( true ) {
        for (; *psVar18 != 0x10; psVar18 = psVar18 + 1) {
          if (*psVar18 == 0) {
            return;
          }
        }
        uVar3 = psVar18[2];
        if ((uVar3 & 0xff00) != 0x1000) break;
        psVar18 = (short *)FUN_0109e358(psVar18,&local_48,&local_50);
      }
      switch(uVar3) {
      case 0x109:
        if ((ushort)psVar18[1] < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulong)(ushort)psVar18[3];
        }
        if ((local_50 & 0x1c0000) == 0) {
          lVar5 = param_1[0x14];
          bVar4 = *(int *)(lVar5 + uVar19 * 8 + 4) != 0;
        }
        else {
          bVar4 = (local_48._2_1_ & 0x1c) == 4;
          lVar5 = param_1[0x14];
        }
        uVar7 = *(undefined4 *)(lVar5 + uVar19 * 8);
        uVar8 = 0;
        break;
      case 0x10a:
        if ((ushort)psVar18[1] < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulong)(ushort)psVar18[3];
        }
        if ((local_50 & 0x1c0000) == 0) {
          lVar5 = param_1[0x14];
          bVar4 = *(int *)(lVar5 + uVar19 * 8 + 4) != 0;
        }
        else {
          bVar4 = (local_48._2_1_ & 0x1c) == 4;
          lVar5 = param_1[0x14];
        }
        uVar7 = *(undefined4 *)(lVar5 + uVar19 * 8);
        uVar8 = 1;
        break;
      case 0x10b:
        if ((ushort)psVar18[1] < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulong)(ushort)psVar18[3];
        }
        if ((local_50 & 0x1c0000) == 0) {
          lVar5 = param_1[0x14];
          bVar4 = *(int *)(lVar5 + uVar19 * 8 + 4) != 0;
        }
        else {
          bVar4 = (local_48._2_1_ & 0x1c) == 4;
          lVar5 = param_1[0x14];
        }
        uVar7 = *(undefined4 *)(lVar5 + uVar19 * 8);
        uVar8 = 2;
        break;
      case 0x10c:
      case 0x10d:
      case 0x10e:
      case 0x10f:
switchD_0109c7dc_caseD_10c:
        if (((uVar3 >> 8) - 1 & 0xff) < 2) goto LAB_0109c7fc;
        goto LAB_0109c834;
      case 0x110:
        if ((ushort)psVar18[1] < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulong)(ushort)psVar18[3];
        }
        if ((local_50 & 0x1c0000) == 0) {
          lVar5 = param_1[0x14];
          bVar4 = *(int *)(lVar5 + uVar19 * 8 + 4) != 0;
        }
        else {
          bVar4 = (local_48._2_1_ & 0x1c) == 4;
          lVar5 = param_1[0x14];
        }
        uVar7 = *(undefined4 *)(lVar5 + uVar19 * 8);
        uVar8 = 3;
        break;
      default:
        if (uVar3 != 0x1d3) goto switchD_0109c7dc_caseD_10c;
        if ((ushort)psVar18[1] < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = (ulong)(ushort)psVar18[3];
        }
        if ((*(byte *)(param_1[0xc] + uVar19 * 0x18 + 0x12) & 1) != 0) {
          uVar7 = *(undefined4 *)(param_1[0x14] + uVar19 * 8);
          lVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
          if (lVar5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_00e388b8(lVar5,uVar7,param_1[8]);
            uVar6 = uVar6 & 0xffff;
          }
          if ((uint)uVar19 < *(uint *)(param_1 + 0xb)) {
            lVar12 = param_1[8];
            *(ulong *)(param_1[0xc] + uVar19 * 0x18 + 8) = uVar6 | 0x20000;
            lVar10 = param_1[0xc];
            lVar5 = *(long *)(lVar10 + uVar19 * 0x18);
            if (*(char *)(lVar5 + 0x54) != '\0') {
              uVar11 = (uint)*(ushort *)(lVar5 + 0x50);
              if (*(ushort *)(lVar5 + 0x50) == 0) {
                iVar9 = 0;
              }
              else {
                puVar15 = *(ushort **)(lVar12 + 0x30);
                iVar9 = 0;
                puVar13 = *(ushort **)(lVar5 + 0x30);
                do {
                  uVar3 = *puVar15;
                  *puVar13 = uVar3;
                  if (uVar3 == 0) goto LAB_0109cb84;
                  if (uVar3 == 0x10) {
                    puVar17 = puVar15 + 1;
                    uVar3 = *puVar17;
                    uVar1 = uVar3 + 2;
                    bVar4 = uVar11 < uVar1;
                    uVar11 = uVar11 - uVar1;
                    if (bVar4 || uVar11 == 0) {
                      *puVar13 = 0;
                      goto LAB_0109cb84;
                    }
                    uVar16 = uVar3 + 1;
                    uVar2 = uVar16 & 7;
                    puVar14 = puVar13 + 1;
                    *puVar14 = uVar3;
                    if (uVar2 != 0) {
                      lVar10 = 0;
                      do {
                        lVar12 = lVar10;
                        uVar16 = uVar16 - 1;
                        uVar2 = uVar2 - 1;
                        *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                             *(undefined2 *)((long)puVar15 + lVar12 + 4);
                        lVar10 = lVar12 + 2;
                      } while (uVar2 != 0);
                      puVar13 = (ushort *)((long)puVar13 + lVar12 + 4);
                      puVar15 = (ushort *)((long)puVar15 + lVar12 + 2);
                      puVar17 = puVar15 + 1;
                      puVar14 = puVar13;
                    }
                    if (6 < uVar3) {
                      do {
                        puVar14[1] = puVar15[2];
                        puVar14[2] = puVar17[2];
                        puVar14[3] = puVar17[3];
                        puVar14[4] = puVar17[4];
                        puVar14[5] = puVar17[5];
                        puVar14[6] = puVar17[6];
                        puVar15 = puVar17 + 7;
                        puVar14[7] = *puVar15;
                        puVar17 = puVar17 + 8;
                        uVar16 = uVar16 - 8;
                        puVar14 = puVar14 + 8;
                        *puVar14 = *puVar17;
                        puVar13 = puVar14;
                      } while (uVar16 != 0);
                    }
                    puVar15 = puVar17;
                    iVar9 = uVar1 + iVar9;
                  }
                  else {
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                    iVar9 = iVar9 + 1;
                    uVar11 = uVar11 - 1;
                  }
                } while (uVar11 != 0);
                if (iVar9 != 0) {
                  iVar9 = iVar9 + -1;
                  puVar13[-1] = 0;
                }
              }
LAB_0109cb84:
              *(short *)(lVar5 + 0x52) = (short)iVar9;
              lVar10 = param_1[0xc];
            }
            *(undefined2 *)(lVar10 + uVar19 * 0x18 + 0x10) = 0;
            lVar5 = param_1[0xc] + uVar19 * 0x18;
            *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
          }
        }
        goto LAB_0109c7fc;
      }
      FUN_0109d998(param_1,uVar19,uVar7,bVar4,uVar8);
LAB_0109c7fc:
      local_48 = local_48 & 0xffffffff00000000;
      local_50 = local_50 & 0xffffffff00000000;
    } while (*psVar18 != 0x10);
LAB_0109c834:
    psVar18 = psVar18 + (ulong)(ushort)psVar18[1] + 2;
  } while( true );
}


