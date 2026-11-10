/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336a218; name: FUN_0336a218
 */


undefined8 FUN_0336a218(int *param_1,undefined8 param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  ulong extraout_x1;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  short *psVar19;
  ulong local_90 [2];
  int *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  
  local_80 = param_1;
  FUN_03361080(param_2,&local_80);
  if ((extraout_x1 & 1) == 0) {
    return 0x80040200;
  }
  puVar7 = *(ulong **)(param_1 + 0x14);
  while( true ) {
    uVar18 = (uint)*puVar7;
    if ((uVar18 >> 0x14 & 1) != 0) break;
    if (((*puVar7 & 1) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
    goto LAB_0336a2a4;
  }
  if ((puVar7 != (ulong *)0x0) &&
     (uVar14 = CONCAT44(uVar18,uVar18) & 0xfffff000fffff,
     (short)puVar7[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                                POPCOUNT((char)(uVar14 >> 0x10))) + 2] != 0)) goto LAB_0336a81c;
LAB_0336a2a4:
  local_80 = (int *)0x0;
  local_78 = -0x8000000000000000;
  local_70 = &DAT_03d7702c;
  local_68 = 0;
  local_90[0] = local_90[0] & 0xffffffff00000000;
  if (0 < param_1[0xc]) {
    iVar5 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 10) + (long)iVar5 * 8);
      if ((*(int *)(lVar8 + 0x1c) == 3) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
        (**(code **)(**(long **)param_1 + 0x38))(*(long **)param_1,lVar8);
        iVar5 = FUN_0336a218(lVar8,param_2);
        if (iVar5 < 0) {
          FUN_0336059c(&local_80,local_90);
          puVar7 = *(ulong **)(param_1 + 0x14);
          if (puVar7 != (ulong *)0x0) {
            uVar14 = **(ulong **)(*(long *)(param_1 + 10) + (long)(int)local_90[0] * 8);
            do {
              puVar11 = puVar7;
              do {
                uVar18 = (uint)*puVar11;
                if ((uVar18 >> 0x17 & 1) != 0) {
                  uVar18 = uVar18 & 0x7fffff;
                  psVar19 = (short *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                           POPCOUNT((char)(uVar18 >> 8)) +
                                                          POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                  goto LAB_0336a39c;
                }
              } while (((*puVar11 & 1) == 0) &&
                      (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0));
              psVar19 = (short *)0x0;
LAB_0336a39c:
              sVar2 = *psVar19;
              sVar3 = psVar19[1];
              if (0 < (int)sVar3 + (int)sVar2) {
                uVar16 = 0;
LAB_0336a3b4:
                puVar11 = *(ulong **)(psVar19 + uVar16 * 4 + 4);
                if (puVar11 != (ulong *)0x0) {
                  puVar10 = puVar11;
                  while( true ) {
                    uVar18 = (uint)*puVar10;
                    if ((uVar18 >> 0x10 & 1) != 0) break;
                    if (((*puVar10 & 1) != 0) ||
                       (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0)) goto LAB_0336a448;
                  }
                  uVar18 = uVar18 & 0xffff;
                  if (puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)))
                              + 2] != 0) goto LAB_0336a400;
                }
                goto LAB_0336a448;
              }
LAB_0336a454:
              puVar7 = (ulong *)puVar7[1];
            } while (puVar7 != (ulong *)0x0);
          }
        }
        else if ((char)param_1[0x26] == '\0') {
          bVar4 = FUN_0336a884(lVar8);
          *(byte *)(param_1 + 0x26) = bVar4 & 1;
        }
      }
LAB_0336a468:
      iVar5 = (int)local_90[0] + 1;
      local_90[0] = CONCAT44(local_90[0]._4_4_,iVar5);
    } while (iVar5 < param_1[0xc]);
  }
  if (param_1[0x10] != 0) {
    if (param_1[0x10] < 1) {
      lVar8 = *(long *)(param_1 + 0x14);
    }
    else {
      lVar9 = *(long *)(param_1 + 0xe);
      uVar16 = 0xffffffff;
      uVar14 = 0;
      bVar4 = 0;
      uVar18 = 0xffffffff;
      do {
        if (*(long *)(lVar9 + uVar14 * 8) != 0) {
          (**(code **)(**(long **)param_1 + 0x38))();
          iVar5 = FUN_0336a218(*(undefined8 *)(*(long *)(param_1 + 0xe) + uVar14 * 8),param_2);
          lVar9 = *(long *)(param_1 + 0xe);
          lVar8 = *(long *)(lVar9 + uVar14 * 8);
          if (iVar5 < 0) {
            uVar18 = 0x400;
            bVar4 = 1;
LAB_0336a580:
            uVar16 = uVar14 & 0xffffffff;
          }
          else {
            puVar11 = *(ulong **)(lVar8 + 0x50);
            puVar7 = puVar11;
            do {
              uVar13 = (uint)*puVar7;
              if ((uVar13 >> 0x14 & 1) != 0) {
                uVar12 = 0;
                if (puVar7 != (ulong *)0x0) {
                  uVar13 = uVar13 & 0xfffff;
                  uVar12 = (uint)(ushort)puVar7[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                              POPCOUNT((char)(uVar13 >> 8)) +
                                                             POPCOUNT((char)(uVar13 >> 0x10))) + 2];
                }
                goto LAB_0336a534;
              }
              if ((*puVar7 & 1) != 0) {
                uVar12 = 0;
                goto LAB_0336a534;
              }
              puVar7 = (ulong *)puVar7[1];
            } while (puVar7 != (ulong *)0x0);
            uVar12 = 0;
LAB_0336a534:
            if ((int)uVar18 < (int)uVar12) {
              while( true ) {
                uVar18 = (uint)*puVar11;
                if ((uVar18 >> 0x14 & 1) != 0) break;
                if (((*puVar11 & 1) != 0) ||
                   (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0)) goto LAB_0336a57c;
              }
              if (puVar11 != (ulong *)0x0) {
                uVar18 = uVar18 & 0xfffff;
                uVar18 = (uint)(ushort)puVar11[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                             POPCOUNT((char)(uVar18 >> 8)) +
                                                            POPCOUNT((char)(uVar18 >> 0x10))) + 2];
                goto LAB_0336a580;
              }
LAB_0336a57c:
              uVar18 = 0;
              goto LAB_0336a580;
            }
          }
          if (*(char *)(lVar8 + 0x98) != '\0') {
            *(undefined1 *)(param_1 + 0x26) = 1;
          }
        }
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)param_1[0x10]);
      lVar8 = *(long *)(param_1 + 0x14);
      if (!(bool)(bVar4 | (int)uVar16 == -1)) {
        *(undefined8 *)(lVar8 + 8) =
             *(undefined8 *)(*(long *)(lVar9 + (long)(int)uVar16 * 8) + 0x50);
        goto LAB_0336a5cc;
      }
    }
    *(undefined **)(lVar8 + 8) = &DAT_047ad668;
  }
LAB_0336a5cc:
  local_90[0] = 0x400000008;
  local_90[1] = 0x801000000;
  FUN_031d9d10(*(undefined8 *)(param_1 + 0x14),local_90);
  if ((param_1[0x10] == 0) || (**(long **)(param_1 + 0xe) == 0)) {
    *(undefined8 *)(*(long *)(param_1 + 0x14) + 8) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x14) + 8) =
         *(undefined8 *)(**(long **)(param_1 + 0xe) + 0x50);
  }
  if (param_1[0x10] != 0) {
    param_1[0x27] = 0;
  }
  if ((int)local_78 != 0) {
    piVar1 = local_80 + (int)local_78;
    piVar15 = local_80;
    do {
      puVar7 = *(ulong **)(param_1 + 0x14);
      if (puVar7 != (ulong *)0x0) {
        puVar11 = *(ulong **)(*(long *)(param_1 + 10) + (long)*piVar15 * 8);
        uVar14 = *puVar11;
        uVar17 = *(undefined8 *)(puVar11[2] + 0x50);
        do {
          puVar11 = puVar7;
          do {
            uVar18 = (uint)*puVar11;
            if ((uVar18 >> 0x17 & 1) != 0) {
              uVar18 = uVar18 & 0x7fffff;
              psVar19 = (short *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                       POPCOUNT((char)(uVar18 >> 8)) +
                                                      POPCOUNT((char)(uVar18 >> 0x10))) + 2];
              goto LAB_0336a698;
            }
          } while (((*puVar11 & 1) == 0) && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0)
                  );
          psVar19 = (short *)0x0;
LAB_0336a698:
          sVar2 = *psVar19;
          sVar3 = psVar19[1];
          if (0 < (int)sVar3 + (int)sVar2) {
            uVar16 = 0;
LAB_0336a6b0:
            puVar11 = *(ulong **)(psVar19 + uVar16 * 4 + 4);
            if (puVar11 != (ulong *)0x0) {
              puVar10 = puVar11;
              while( true ) {
                uVar18 = (uint)*puVar10;
                if ((uVar18 >> 0x10 & 1) != 0) break;
                if (((*puVar10 & 1) != 0) ||
                   (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0)) goto LAB_0336a744;
              }
              uVar18 = uVar18 & 0xffff;
              if (puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))) + 2]
                  != 0) goto LAB_0336a6fc;
            }
            goto LAB_0336a744;
          }
LAB_0336a750:
          puVar7 = (ulong *)puVar7[1];
        } while (puVar7 != (ulong *)0x0);
      }
LAB_0336a764:
      piVar15 = piVar15 + 1;
    } while (piVar15 != piVar1);
  }
  *(long *)(*(undefined4 **)(param_1 + 0x14) +
           (ulong)(byte)POPCOUNT((byte)**(undefined4 **)(param_1 + 0x14) & 0xf) * 2 + 4) =
       (long)param_1[8];
  *(ulong *)(*(undefined4 **)(param_1 + 0x14) +
            (ulong)(byte)POPCOUNT((byte)**(undefined4 **)(param_1 + 0x14) & 7) * 2 + 4) =
       *(ulong *)(param_1 + 6) & 0xfffffffffffffffe;
  if ((local_70 != (undefined *)0x0) && (*(int *)(local_70 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_70,0);
    local_70 = &DAT_03d7702c;
    local_68 = 0;
  }
  lVar8 = local_78;
  uVar14 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_80 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_80,uVar14 << 2);
  }
LAB_0336a81c:
  local_80 = param_1;
  lVar8 = FUN_03360ff8(param_2,&local_80);
  if (lVar8 != 0) {
    FUN_0336133c(param_2,lVar8);
  }
  return 0;
  while (((*puVar11 & 1) == 0 && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0))) {
LAB_0336a400:
    uVar18 = (uint)*puVar11;
    if ((uVar18 >> 0x10 & 1) != 0) {
      uVar18 = uVar18 & 0xffff;
      pcVar6 = (char *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)))
                               + 2];
      goto LAB_0336a43c;
    }
  }
  pcVar6 = (char *)0x0;
LAB_0336a43c:
  iVar5 = strcmp(pcVar6,(char *)(uVar14 & 0xfffffffffffffffe));
  if (iVar5 == 0) {
    *(undefined **)(psVar19 + (uVar16 & 0xffffffff) * 4 + 4) = &DAT_047ad668;
    goto LAB_0336a468;
  }
LAB_0336a448:
  uVar16 = uVar16 + 1;
  if (uVar16 == (uint)((int)sVar3 + (int)sVar2)) goto LAB_0336a454;
  goto LAB_0336a3b4;
  while (((*puVar11 & 1) == 0 && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0))) {
LAB_0336a6fc:
    uVar18 = (uint)*puVar11;
    if ((uVar18 >> 0x10 & 1) != 0) {
      uVar18 = uVar18 & 0xffff;
      pcVar6 = (char *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)))
                               + 2];
      goto LAB_0336a738;
    }
  }
  pcVar6 = (char *)0x0;
LAB_0336a738:
  iVar5 = strcmp(pcVar6,(char *)(uVar14 & 0xfffffffffffffffe));
  if (iVar5 == 0) {
    *(undefined8 *)(psVar19 + (uVar16 & 0xffffffff) * 4 + 4) = uVar17;
    goto LAB_0336a764;
  }
LAB_0336a744:
  uVar16 = uVar16 + 1;
  if (uVar16 == (uint)((int)sVar3 + (int)sVar2)) goto LAB_0336a750;
  goto LAB_0336a6b0;
}


