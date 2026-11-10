/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd4ce8; name: FUN_00dd4ce8
 */


void FUN_00dd4ce8(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long **pplVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  long *local_40;
  undefined8 uStack_38;
  
  pplVar12 = &local_40;
  plVar6 = (long *)(param_1 + 0x188);
  uVar7 = (uint)((ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110)) >> 3);
  if (3 < uVar7) {
    uVar7 = 4;
  }
  local_40 = plVar6;
  FUN_00dd52a0(*(long *)(param_1 + 0x110),*(long *)(param_1 + 0x118),&local_40);
  if (uVar7 == 0) {
    pcVar8 = *(char **)(param_1 + 0x110);
  }
  else {
    pcVar8 = *(char **)(param_1 + 0x110);
    uVar11 = 0;
    do {
      if (*(float *)(*(long *)(*(long *)(param_1 + 0x188) +
                              (ulong)*(uint *)(pcVar8 + uVar11 * 8 + 4) * 8) + 0x90) != 0.0) {
        pcVar10 = *(char **)(param_1 + 0xd8);
        pcVar2 = *(char **)(param_1 + 0xe0);
        if (pcVar10 != pcVar2) {
          cVar3 = *pcVar10;
          bVar4 = cVar3 == '\0';
          if ((*(ulong *)(pcVar8 + uVar11 * 8) & 0xff) == 0) {
            if ((((cVar3 != '\0') && (pcVar10 + 8 != pcVar2)) &&
                (bVar4 = cVar3 == '\0' || pcVar10[8] == '\0', pcVar10[8] != '\0')) &&
               (pcVar10 + 0x10 != pcVar2)) {
              pcVar10 = pcVar10 + 0x18;
              do {
                pcVar1 = pcVar10 + -8;
                bVar4 = (bool)(bVar4 | *pcVar1 == '\0');
                bVar5 = pcVar2 != pcVar10;
                pcVar10 = pcVar10 + 8;
              } while (*pcVar1 != '\0' && bVar5);
            }
          }
          else {
            iVar19 = (int)(*(ulong *)(pcVar8 + uVar11 * 8) >> 0x20);
            if (cVar3 == '\0') {
              bVar4 = false;
            }
            else {
              bVar4 = *(int *)(pcVar10 + 4) == iVar19;
            }
            if ((pcVar10 + 8 != pcVar2) && (!bVar4)) {
              bVar4 = false;
              if (pcVar10[8] != '\0') {
                bVar4 = *(int *)(pcVar10 + 0xc) == iVar19;
              }
              if ((pcVar10 + 0x10 != pcVar2) && (!bVar4)) {
                pcVar10 = pcVar10 + 0x18;
                bVar4 = false;
                do {
                  bVar5 = false;
                  if (pcVar10[-8] != '\0') {
                    bVar5 = *(int *)(pcVar10 + -4) == iVar19;
                  }
                  bVar4 = (bool)(bVar4 | bVar5);
                } while ((pcVar2 != pcVar10) && (pcVar10 = pcVar10 + 8, !bVar5));
              }
            }
          }
          if (bVar4) goto LAB_00dd4d54;
        }
        *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 1;
        break;
      }
LAB_00dd4d54:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  uVar7 = (uint)((ulong)(*(long *)(param_1 + 0x118) - (long)pcVar8) >> 3);
  if (3 < uVar7) {
    uVar7 = 4;
  }
  if ((*(byte *)(param_1 + 0x1c4) & 1) == 0) {
LAB_00dd4e0c:
    if (uVar7 == 0) goto LAB_00dd50b8;
  }
  else {
    if (uVar7 == 0) goto LAB_00dd50b8;
    pcVar10 = *(char **)(param_1 + 0xd8);
    uVar11 = *(long *)(param_1 + 0xe0) - (long)pcVar10;
    if ((int)(uVar11 >> 3) != 0) {
      uVar11 = uVar11 >> 3 & 0xffffffff;
      lVar17 = 0;
      do {
        if ((pcVar10[lVar17] == '\0') && (*pcVar8 == '\0')) {
          if ((lVar17 != 0) && (*pcVar10 != '\0')) {
            *(undefined4 *)(pcVar10 + lVar17 + 4) = *(undefined4 *)(pcVar10 + 4);
            pcVar10[lVar17] = '\x01';
            *pcVar10 = '\0';
          }
          break;
        }
        lVar17 = lVar17 + 8;
      } while (uVar11 * 8 != lVar17);
      if (uVar7 != 1) {
        pcVar10 = *(char **)(param_1 + 0xd8);
        uVar18 = 0;
        pcVar8 = pcVar10;
        do {
          if ((*pcVar8 == '\0') && (*(char *)(*(long *)(param_1 + 0x110) + 8) == '\0')) {
            if (((uVar18 & 0xffffffff) != 1) && (pcVar10[8] != '\0')) {
              *(undefined4 *)(pcVar10 + (uVar18 & 0xffffffff) * 8 + 4) =
                   *(undefined4 *)(pcVar10 + 0xc);
              *pcVar8 = '\x01';
              pcVar10[8] = '\0';
            }
            break;
          }
          uVar18 = uVar18 + 1;
          pcVar8 = pcVar8 + 8;
        } while (uVar11 != uVar18);
        if (uVar7 != 2) {
          pcVar10 = *(char **)(param_1 + 0xd8);
          uVar18 = 0;
          pcVar8 = pcVar10;
          do {
            if ((*pcVar8 == '\0') && (*(char *)(*(long *)(param_1 + 0x110) + 0x10) == '\0')) {
              if (((uVar18 & 0xffffffff) != 2) && (pcVar10[0x10] != '\0')) {
                *(undefined4 *)(pcVar10 + (uVar18 & 0xffffffff) * 8 + 4) =
                     *(undefined4 *)(pcVar10 + 0x14);
                *pcVar8 = '\x01';
                pcVar10[0x10] = '\0';
              }
              break;
            }
            uVar18 = uVar18 + 1;
            pcVar8 = pcVar8 + 8;
          } while (uVar11 != uVar18);
          if (uVar7 != 3) {
            pcVar10 = *(char **)(param_1 + 0xd8);
            uVar18 = 0;
            pcVar8 = pcVar10;
            do {
              if ((*pcVar8 == '\0') && (*(char *)(*(long *)(param_1 + 0x110) + 0x18) == '\0')) {
                if (((uVar18 & 0xffffffff) != 3) && (pcVar10[0x18] != '\0')) {
                  *(undefined4 *)(pcVar10 + (uVar18 & 0xffffffff) * 8 + 4) =
                       *(undefined4 *)(pcVar10 + 0x1c);
                  *pcVar8 = '\x01';
                  pcVar10[0x18] = '\0';
                }
                break;
              }
              uVar18 = uVar18 + 1;
              pcVar8 = pcVar8 + 8;
            } while (uVar11 != uVar18);
            goto LAB_00dd4e0c;
          }
        }
      }
    }
  }
  lVar9 = 0;
  lVar17 = -(ulong)uVar7;
  do {
    lVar15 = *(long *)(param_1 + 0xd8);
    if ((*(byte *)(param_1 + 0x1c4) & 1) != 0) {
      lVar16 = *(long *)(param_1 + 0x110);
      if (*(char *)(lVar15 + lVar9) == '\0' || *(char *)(lVar16 + lVar9) == '\0') {
        if (*(char *)(lVar16 + lVar9) != '\0' || *(char *)(lVar15 + lVar9) != '\0')
        goto LAB_00dd4ee8;
      }
      else if (*(int *)(lVar15 + lVar9 + 4) != *(int *)(lVar16 + lVar9 + 4)) {
LAB_00dd4ee8:
        uVar11 = *(ulong *)(lVar16 + lVar9);
        *(ulong *)(lVar15 + lVar9) = uVar11;
        uVar18 = uVar11 >> 0x23 & 0x1ffffff8;
        *(ulong *)(*(long *)(param_1 + 0x148) + uVar18) =
             *(ulong *)(*(long *)(param_1 + 0x148) + uVar18) &
             (1L << (uVar11 >> 0x20 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    if (*(char *)(lVar15 + lVar9) != '\0') {
      uVar7 = *(uint *)(lVar15 + lVar9 + 4);
      uVar11 = (ulong)(uVar7 >> 6);
      uVar18 = 1L << ((ulong)uVar7 & 0x3f);
      fVar20 = *(float *)(*(long *)(*(long *)(param_1 + 0x188) + (ulong)uVar7 * 8) + 0x90);
      lVar16 = *(long *)(param_1 + 0x148);
      if ((fVar20 != 0.0) != ((*(ulong *)(lVar16 + uVar11 * 8) & uVar18) != 0)) {
        *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 4;
        uVar7 = *(uint *)(lVar15 + lVar9 + 4);
        uVar11 = (ulong)(uVar7 >> 6);
        uVar18 = 1L << ((ulong)uVar7 & 0x3f);
      }
      if (fVar20 == 0.0) {
        uVar18 = *(ulong *)(lVar16 + uVar11 * 8) & (uVar18 ^ 0xffffffffffffffff);
      }
      else {
        uVar18 = *(ulong *)(lVar16 + uVar11 * 8) | uVar18;
      }
      *(ulong *)(lVar16 + uVar11 * 8) = uVar18;
    }
    bVar4 = lVar17 != -1;
    lVar17 = lVar17 + 1;
    lVar9 = lVar9 + 8;
  } while (bVar4);
LAB_00dd50b8:
  local_40 = (long *)0x0;
  uStack_38 = 0;
  pcVar8 = *(char **)(param_1 + 0xd8);
  pcVar10 = *(char **)(param_1 + 0xe0);
  if (pcVar8 != pcVar10) {
    if (*pcVar8 != '\0') {
      pplVar12 = (long **)((ulong)&local_40 | 4);
      local_40 = (long *)(ulong)*(uint *)(*(long *)(*plVar6 + (ulong)*(uint *)(pcVar8 + 4) * 8) +
                                         0x90);
    }
    if (pcVar8 + 8 != pcVar10) {
      puVar14 = (undefined4 *)pplVar12;
      if (pcVar8[8] != '\0') {
        puVar14 = (undefined4 *)((long)pplVar12 + 4);
        *(undefined4 *)pplVar12 =
             *(undefined4 *)(*(long *)(*plVar6 + (ulong)*(uint *)(pcVar8 + 0xc) * 8) + 0x90);
      }
      if (pcVar8 + 0x10 != pcVar10) {
        puVar13 = puVar14;
        if (pcVar8[0x10] != '\0') {
          puVar13 = puVar14 + 1;
          *puVar14 = *(undefined4 *)
                      (*(long *)(*plVar6 + (ulong)*(uint *)(pcVar8 + 0x14) * 8) + 0x90);
        }
        if (pcVar8 + 0x18 != pcVar10) {
          puVar14 = puVar13;
          if (pcVar8[0x18] != '\0') {
            puVar14 = puVar13 + 1;
            *puVar13 = *(undefined4 *)
                        (*(long *)(*plVar6 + (ulong)*(uint *)(pcVar8 + 0x1c) * 8) + 0x90);
          }
          if (pcVar8 + 0x20 != pcVar10) {
            puVar13 = puVar14;
            if (pcVar8[0x20] != '\0') {
              puVar13 = puVar14 + 1;
              *puVar14 = *(undefined4 *)
                          (*(long *)(*plVar6 + (ulong)*(uint *)(pcVar8 + 0x24) * 8) + 0x90);
            }
            for (pcVar8 = pcVar8 + 0x28; pcVar8 != pcVar10; pcVar8 = pcVar8 + 8) {
              puVar14 = puVar13;
              if (*pcVar8 != '\0') {
                puVar14 = puVar13 + 1;
                *puVar13 = *(undefined4 *)
                            (*(long *)(*plVar6 + (ulong)*(uint *)(pcVar8 + 4) * 8) + 0x90);
              }
              puVar13 = puVar14;
            }
          }
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x180) + 0x30);
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40,4);
  }
  return;
}


