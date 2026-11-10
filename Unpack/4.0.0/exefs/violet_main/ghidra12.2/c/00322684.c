/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00322684; name: FUN_00322684
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00322684(long param_1)

{
  undefined8 *******pppppppuVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *******pppppppuVar27;
  long lVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  long lVar31;
  undefined8 ******ppppppuVar32;
  ulong local_f8;
  undefined8 *******local_f0;
  ulong local_e8;
  
  lVar21 = *(long *)(param_1 + 0x10);
  lVar6 = FUN_0033a31c(*(undefined8 *)(lVar21 + 0x120));
  local_f8 = 0;
  if (*(char *)(lVar21 + 0x2b4) == '\0') {
LAB_00322708:
    lVar7 = 0;
    uVar14 = *(ulong *)(lVar6 + 0x518);
    uVar18 = *(ulong *)(lVar21 + 0x3b8);
    if (uVar14 < uVar18 >> 1) {
LAB_00322734:
      if ((uVar14 == *(ulong *)(lVar6 + 0x520)) && ((*(byte *)(lVar21 + 0x240) >> 1 & 1) == 0)) {
        if (lVar7 == 0) {
          lVar7 = FUN_0032354c(param_1,1,1);
          uVar14 = *(ulong *)(lVar6 + 0x518);
          if ((*(ulong *)(lVar21 + 0x3b8) & 1) != 0) goto LAB_00322778;
LAB_00322750:
          lVar15 = lVar21 + 0x3c0;
        }
        else {
          if ((uVar18 & 1) == 0) goto LAB_00322750;
LAB_00322778:
          lVar15 = *(long *)(lVar21 + 0x3c0);
        }
        uVar12 = *(undefined8 *)(lVar15 + uVar14 * 8);
        *(ulong *)(lVar6 + 0x518) = uVar14 + 1;
        FUN_00374d24(lVar6 + 0x188,uVar12);
        *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) | 4;
        puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x20) + 0x28);
        *(long *)(*(long *)(lVar7 + 0x20) + 0x28) = lVar6 + 0x188;
        if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 003227b8 to 003227bb has its CatchHandler @ 00323510 */
          (**(code **)*puVar8)();
        }
      }
    }
  }
  else if ((*(byte *)(lVar6 + 0x538) & 1) == 0) {
    if ((*(byte *)(lVar21 + 0x240) & 1) != 0) goto LAB_00322708;
                    /* try { // try from 003226d0 to 00322793 has its CatchHandler @ 00323518 */
    lVar7 = FUN_0032354c(param_1,1,1);
    FUN_00323654(lVar21,lVar6,lVar7);
    uVar14 = *(ulong *)(lVar6 + 0x518);
    uVar18 = *(ulong *)(lVar21 + 0x3b8);
    if (uVar14 < uVar18 >> 1) goto LAB_00322734;
  }
  else {
    lVar7 = 0;
    uVar14 = *(ulong *)(lVar6 + 0x518);
    uVar18 = *(ulong *)(lVar21 + 0x3b8);
    if (uVar14 < uVar18 >> 1) goto LAB_00322734;
  }
  if ((((*(char *)(lVar21 + 0x3d8) == '\0') ||
       (*(ulong *)(lVar6 + 0x518) != *(ulong *)(lVar21 + 0x3b8) >> 1)) ||
      ((*(byte *)(lVar6 + 0x538) >> 2 & 1) != 0)) || ((*(byte *)(lVar21 + 0x240) >> 2 & 1) != 0)) {
    if (lVar7 == 0) goto LAB_003229b0;
  }
  else {
    if (lVar7 == 0) {
                    /* try { // try from 003227e8 to 0032282f has its CatchHandler @ 00323518 */
      lVar7 = FUN_0032354c(param_1,1,1);
    }
    uVar14 = (ulong)(uint)(*(int *)(lVar21 + 1000) << 5);
    plVar9 = *(long **)(lVar21 + 0xc0);
    do {
      lVar15 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar15 + uVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((ulong)plVar9[1] < uVar14 + lVar15) {
      lVar15 = FUN_0038e7c0();
    }
    else {
      lVar15 = (long)plVar9 + lVar15 + 0x20;
    }
    *(long *)(lVar6 + 0x1b8) = lVar15;
    FUN_00377b00(lVar21 + 1000,lVar6 + 0x1c0);
    *(byte *)(lVar6 + 0x538) = *(byte *)(lVar6 + 0x538) | 4;
    *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) | 2;
    *(long *)(*(long *)(lVar7 + 0x20) + 0x18) = lVar6 + 0x1c0;
  }
  uVar14 = local_f8;
  uVar12 = *(undefined8 *)(lVar21 + 0x120);
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x30) = uVar12;
  *(undefined1 **)(lVar7 + 0x40) = &LAB_00323f78;
  *(long *)(lVar7 + 0x48) = lVar7 + 0x18;
  bVar5 = (local_f8 & 1) != 0;
  pppppppuVar27 = &local_f0;
  if (bVar5) {
    pppppppuVar27 = local_f0;
  }
  uVar18 = 6;
  if (bVar5) {
    uVar18 = local_e8;
  }
  uVar22 = local_f8 >> 1;
  if (uVar22 == uVar18) {
    uVar25 = uVar18 * 2;
    pppppppuVar10 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar18 * 0x30);
    pppppppuVar17 = pppppppuVar10;
  }
  else {
    pppppppuVar10 = (undefined8 *******)0x0;
    uVar25 = 0;
    pppppppuVar17 = pppppppuVar27;
  }
  pppppppuVar17 = pppppppuVar17 + uVar22 * 3;
  *pppppppuVar17 = (undefined8 ******)(lVar7 + 0x38);
  pppppppuVar17[1] = (undefined8 ******)0x0;
  pppppppuVar17[2] = (undefined8 ******)"start_subchannel_batch";
  if (pppppppuVar10 == (undefined8 *******)0x0) {
    iVar13 = *(int *)(lVar21 + 0x2b0);
  }
  else {
    if (uVar22 != 0) {
      if (uVar22 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        pppppppuVar17 = pppppppuVar10;
        do {
          ppppppuVar30 = pppppppuVar27[1];
          ppppppuVar29 = *pppppppuVar27;
          uVar18 = uVar18 + 2;
          pppppppuVar17[2] = pppppppuVar27[2];
          pppppppuVar17[1] = ppppppuVar30;
          *pppppppuVar17 = ppppppuVar29;
          ppppppuVar30 = pppppppuVar27[4];
          ppppppuVar29 = pppppppuVar27[3];
          pppppppuVar1 = pppppppuVar27 + 5;
          pppppppuVar27 = pppppppuVar27 + 6;
          pppppppuVar17[5] = *pppppppuVar1;
          pppppppuVar17[4] = ppppppuVar30;
          pppppppuVar17[3] = ppppppuVar29;
          pppppppuVar17 = pppppppuVar17 + 6;
        } while ((uVar22 & 0x7ffffffffffffffe) != uVar18);
      }
      if (((uint)uVar14 >> 1 & 1) != 0) {
        ppppppuVar30 = pppppppuVar27[1];
        ppppppuVar29 = *pppppppuVar27;
        pppppppuVar17 = pppppppuVar10 + uVar18 * 3;
        pppppppuVar17[2] = pppppppuVar27[2];
        pppppppuVar17[1] = ppppppuVar30;
        *pppppppuVar17 = ppppppuVar29;
      }
    }
    if ((local_f8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    local_f8 = local_f8 | 1;
    local_f0 = pppppppuVar10;
    local_e8 = uVar25;
    iVar13 = *(int *)(lVar21 + 0x2b0);
  }
  local_f8 = local_f8 + 2;
  if (iVar13 == 0) {
    plVar9 = *(long **)(lVar21 + 200);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar13 = *(int *)(lVar21 + 0x2b0);
  }
  *(int *)(lVar21 + 0x2b0) = iVar13 + 1;
LAB_003229b0:
  ppppppuVar29 = (undefined8 ******)(lVar6 + 0x4f8);
  lVar15 = lVar6 + _DAT_03cab720;
  lVar31 = lVar6 + _UNK_03cab728;
  puVar8 = (undefined8 *)(lVar21 + 0x3c0);
  lVar7 = 0;
  do {
    uVar14 = local_f8;
    lVar26 = lVar21 + lVar7 * 0x10;
    lVar28 = *(long *)(lVar26 + 0x1e0);
    if ((((((lVar28 != 0) &&
           ((bVar2 = *(byte *)(lVar28 + 0x10), (bVar2 & 1) == 0 ||
            ((*(byte *)(lVar6 + 0x538) & 1) == 0)))) &&
          (((bVar2 >> 2 & 1) == 0 || (*(ulong *)(lVar6 + 0x518) <= *(ulong *)(lVar6 + 0x520))))) &&
         (((bVar2 >> 1 & 1) == 0 ||
          ((*(ulong *)(lVar21 + 0x3b8) >> 1 <= *(long *)(lVar6 + 0x518) + ((ulong)(bVar2 >> 2) & 1)
           && ((*(byte *)(lVar6 + 0x538) >> 2 & 1) == 0)))))) &&
        (((bVar2 >> 3 & 1) == 0 || ((*(byte *)(lVar6 + 0x538) >> 4 & 1) == 0)))) &&
       (((bVar2 >> 4 & 1) == 0 || (*(ulong *)(lVar6 + 0x528) <= *(ulong *)(lVar6 + 0x530))))) {
      if (((bVar2 >> 5 & 1) == 0) || (((uint)(int)*(char *)(lVar6 + 0x538) >> 6 & 1) == 0)) {
        plVar9 = (long *)(lVar26 + 0x1e0);
        if (((*(long *)(lVar21 + 0xe8) == 0) || (*(long *)(*(long *)(lVar21 + 0xe8) + 0x18) == 0))
           || ((*(byte *)(lVar21 + 0x240) >> 4 & 1) != 0)) {
          *(undefined8 *)(lVar28 + 0x18) = *(undefined8 *)(lVar21 + 0x120);
          *(undefined1 **)(lVar28 + 0x28) = &LAB_00323f78;
          *(long *)(lVar28 + 0x30) = lVar28;
          *(undefined8 *)(lVar28 + 0x38) = 0;
          bVar5 = (local_f8 & 1) != 0;
          pppppppuVar27 = &local_f0;
          if (bVar5) {
            pppppppuVar27 = local_f0;
          }
          uVar18 = 6;
          if (bVar5) {
            uVar18 = local_e8;
          }
          uVar22 = local_f8 >> 1;
          if (uVar22 == uVar18) {
            uVar25 = uVar18 * 2;
            pppppppuVar10 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar18 * 0x30);
            pppppppuVar17 = pppppppuVar10;
          }
          else {
            pppppppuVar10 = (undefined8 *******)0x0;
            uVar25 = 0;
            pppppppuVar17 = pppppppuVar27;
          }
          pppppppuVar17 = pppppppuVar17 + uVar22 * 3;
          *pppppppuVar17 = (undefined8 ******)(lVar28 + 0x20);
          pppppppuVar17[1] = (undefined8 ******)0x0;
          pppppppuVar17[2] = (undefined8 ******)"start_subchannel_batch";
          if (pppppppuVar10 == (undefined8 *******)0x0) {
            bVar2 = *(byte *)(lVar21 + 0x240);
          }
          else {
            if (uVar22 != 0) {
              uVar14 = uVar14 >> 1 & 3;
              if (uVar22 - 1 < 3) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                pppppppuVar17 = pppppppuVar10 + 6;
                do {
                  ppppppuVar32 = pppppppuVar27[1];
                  ppppppuVar30 = *pppppppuVar27;
                  uVar18 = uVar18 + 4;
                  pppppppuVar17[-4] = pppppppuVar27[2];
                  pppppppuVar17[-5] = ppppppuVar32;
                  pppppppuVar17[-6] = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[4];
                  ppppppuVar30 = pppppppuVar27[3];
                  pppppppuVar17[-1] = pppppppuVar27[5];
                  pppppppuVar17[-2] = ppppppuVar32;
                  pppppppuVar17[-3] = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[7];
                  ppppppuVar30 = pppppppuVar27[6];
                  pppppppuVar17[2] = pppppppuVar27[8];
                  pppppppuVar17[1] = ppppppuVar32;
                  *pppppppuVar17 = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[10];
                  ppppppuVar30 = pppppppuVar27[9];
                  pppppppuVar1 = pppppppuVar27 + 0xb;
                  pppppppuVar27 = pppppppuVar27 + 0xc;
                  pppppppuVar17[5] = *pppppppuVar1;
                  pppppppuVar17[4] = ppppppuVar32;
                  pppppppuVar17[3] = ppppppuVar30;
                  pppppppuVar17 = pppppppuVar17 + 0xc;
                } while ((uVar22 & 0x7ffffffffffffffc) != uVar18);
              }
              if (uVar14 != 0) {
                pppppppuVar17 = pppppppuVar10 + uVar18 * 3;
                do {
                  ppppppuVar32 = pppppppuVar27[1];
                  ppppppuVar30 = *pppppppuVar27;
                  uVar14 = uVar14 - 1;
                  pppppppuVar17[2] = pppppppuVar27[2];
                  pppppppuVar17[1] = ppppppuVar32;
                  *pppppppuVar17 = ppppppuVar30;
                  pppppppuVar17 = pppppppuVar17 + 3;
                  pppppppuVar27 = pppppppuVar27 + 3;
                } while (uVar14 != 0);
              }
            }
            if ((local_f8 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_f0);
            }
            local_f8 = local_f8 | 1;
            local_f0 = pppppppuVar10;
            local_e8 = uVar25;
            bVar2 = *(byte *)(lVar21 + 0x240);
          }
          local_f8 = local_f8 + 2;
          if ((bVar2 >> 3 & 1) != 0) {
            bVar3 = *(byte *)(*plVar9 + 0x10);
            if ((bVar3 & 1) != 0) {
              bVar2 = bVar2 & 0xfe;
              *(byte *)(lVar21 + 0x240) = bVar2;
              bVar3 = *(byte *)(*plVar9 + 0x10);
            }
            if ((bVar3 >> 2 & 1) != 0) {
              bVar2 = bVar2 & 0xfd;
              *(byte *)(lVar21 + 0x240) = bVar2;
              bVar3 = *(byte *)(*plVar9 + 0x10);
            }
            if ((bVar3 >> 1 & 1) != 0) {
              *(byte *)(lVar21 + 0x240) = bVar2 & 0xfb;
            }
          }
          *plVar9 = 0;
        }
        else {
          bVar5 = (bVar2 & 7) != 0;
          bVar3 = bVar2 >> 3 & 1;
          if (bVar5) {
            bVar3 = bVar3 + 1;
          }
                    /* try { // try from 00322ad4 to 00322f9b has its CatchHandler @ 0032351c */
          lVar11 = FUN_0032354c(param_1,bVar3 + (bVar2 >> 4 & 1) + (bVar2 >> 5 & 1),bVar5);
          if (*(char *)(lVar26 + 0x1e8) == '\0') {
            *(undefined1 *)(lVar26 + 0x1e8) = 1;
            lVar26 = *plVar9;
            bVar2 = *(byte *)(lVar26 + 0x10);
            if ((bVar2 & 1) != 0) {
              *(undefined1 *)(lVar21 + 0x2b4) = 1;
              if (*(long *)(lVar21 + 0x2b8) != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              piVar24 = (int *)**(undefined8 **)(lVar26 + 8);
              plVar9 = *(long **)(lVar21 + 0xc0);
              uVar14 = (ulong)(uint)(*piVar24 << 5);
              do {
                lVar16 = *plVar9;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = lVar16 + uVar14;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((ulong)plVar9[1] < uVar14 + lVar16) {
                lVar16 = FUN_0038e7c0();
              }
              else {
                lVar16 = (long)plVar9 + lVar16 + 0x20;
              }
              *(long *)(lVar21 + 0x2b8) = lVar16;
              FUN_00377b00(piVar24,lVar21 + 0x2c0);
              lVar16 = *(long *)(lVar26 + 8);
              *(undefined4 *)(lVar21 + 0x3a8) = *(undefined4 *)(lVar16 + 8);
              *(undefined8 *)(lVar21 + 0x3b0) = *(undefined8 *)(lVar16 + 0x10);
              bVar2 = *(byte *)(lVar26 + 0x10);
            }
            if ((bVar2 >> 2 & 1) != 0) {
              uVar12 = FUN_00323f84(*(undefined8 *)(lVar21 + 0xc0),*(long *)(lVar26 + 8) + 0x28);
              uVar14 = *(ulong *)(lVar21 + 0x3b8);
              if ((uVar14 & 1) == 0) {
                uVar18 = 3;
                puVar20 = puVar8;
                if (uVar14 >> 1 != 3) goto LAB_00322dc0;
LAB_00322ddc:
                lVar16 = FUN_0049e770(PTR_FUN_047cba38,uVar18 << 4);
                *(undefined8 *)(lVar16 + uVar18 * 8) = uVar12;
                if (lVar16 == 0) {
                  uVar14 = *(ulong *)(lVar21 + 0x3b8);
                }
                else {
                  if (uVar18 != 0) {
                    uVar14 = uVar18 & 7;
                    if (uVar18 - 1 < 7) {
                      uVar22 = 0;
                    }
                    else {
                      uVar22 = 0;
                      puVar19 = (undefined8 *)(lVar16 + 0x20);
                      puVar23 = puVar20;
                      do {
                        puVar20 = puVar23 + 8;
                        puVar19[-4] = *puVar23;
                        puVar19[-3] = puVar23[1];
                        puVar19[-2] = puVar23[2];
                        puVar19[-1] = puVar23[3];
                        *puVar19 = puVar23[4];
                        puVar19[1] = puVar23[5];
                        puVar19[2] = puVar23[6];
                        uVar22 = uVar22 + 8;
                        puVar19[3] = puVar23[7];
                        puVar19 = puVar19 + 8;
                        puVar23 = puVar20;
                      } while ((uVar18 & 0xfffffffffffffff8) != uVar22);
                    }
                    if (uVar14 != 0) {
                      puVar19 = (undefined8 *)(lVar16 + uVar22 * 8);
                      do {
                        uVar14 = uVar14 - 1;
                        *puVar19 = *puVar20;
                        puVar19 = puVar19 + 1;
                        puVar20 = puVar20 + 1;
                      } while (uVar14 != 0);
                    }
                  }
                  uVar14 = *(ulong *)(lVar21 + 0x3b8);
                  if ((uVar14 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar21 + 0x3c0));
                    uVar14 = *(ulong *)(lVar21 + 0x3b8);
                  }
                  uVar14 = uVar14 | 1;
                  *(long *)(lVar21 + 0x3c0) = lVar16;
                  *(ulong *)(lVar21 + 0x3c8) = uVar18 << 1;
                  *(ulong *)(lVar21 + 0x3b8) = uVar14;
                }
              }
              else {
                puVar20 = *(undefined8 **)(lVar21 + 0x3c0);
                uVar18 = *(ulong *)(lVar21 + 0x3c8);
                if (uVar14 >> 1 == uVar18) goto LAB_00322ddc;
LAB_00322dc0:
                puVar20[uVar14 >> 1] = uVar12;
              }
              *(ulong *)(lVar21 + 0x3b8) = uVar14 + 2;
              bVar2 = *(byte *)(lVar26 + 0x10);
            }
            if ((bVar2 >> 1 & 1) != 0) {
              *(undefined1 *)(lVar21 + 0x3d8) = 1;
              if (*(long *)(lVar21 + 0x3e0) != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              piVar24 = *(int **)(*(long *)(lVar26 + 8) + 0x18);
              plVar9 = *(long **)(lVar21 + 0xc0);
              uVar14 = (ulong)(uint)(*piVar24 << 5);
              do {
                lVar26 = *plVar9;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = lVar26 + uVar14;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((ulong)plVar9[1] < uVar14 + lVar26) {
                lVar26 = FUN_0038e7c0();
              }
              else {
                lVar26 = (long)plVar9 + lVar26 + 0x20;
              }
              *(long *)(lVar21 + 0x3e0) = lVar26;
              FUN_00377b00(piVar24,lVar21 + 1000);
            }
          }
          bVar2 = *(byte *)(lVar28 + 0x10);
          if ((bVar2 & 1) != 0) {
            FUN_00323654(lVar21,lVar6,lVar11);
            bVar2 = *(byte *)(lVar28 + 0x10);
          }
          if ((bVar2 >> 2 & 1) != 0) {
            puVar20 = puVar8;
            if ((*(byte *)(lVar21 + 0x3b8) & 1) != 0) {
              puVar20 = *(undefined8 **)(lVar21 + 0x3c0);
            }
            uVar12 = puVar20[*(long *)(lVar6 + 0x518)];
            *(long *)(lVar6 + 0x518) = *(long *)(lVar6 + 0x518) + 1;
            FUN_00374d24(lVar6 + 0x188,uVar12);
            *(byte *)(lVar11 + 0x28) = *(byte *)(lVar11 + 0x28) | 4;
            puVar20 = *(undefined8 **)(*(long *)(lVar11 + 0x20) + 0x28);
            *(long *)(*(long *)(lVar11 + 0x20) + 0x28) = lVar6 + 0x188;
            if (puVar20 != (undefined8 *)0x0) {
                    /* try { // try from 00322fc4 to 00322fc7 has its CatchHandler @ 00323514 */
              (**(code **)*puVar20)();
            }
          }
          bVar2 = *(byte *)(lVar28 + 0x10);
          if ((bVar2 >> 1 & 1) != 0) {
            uVar14 = (ulong)(uint)(*(int *)(lVar21 + 1000) << 5);
            plVar9 = *(long **)(lVar21 + 0xc0);
            do {
              lVar26 = *plVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar26 + uVar14;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((ulong)plVar9[1] < uVar14 + lVar26) {
                    /* try { // try from 00322ffc to 0032311f has its CatchHandler @ 0032351c */
              lVar26 = FUN_0038e7c0();
            }
            else {
              lVar26 = (long)plVar9 + lVar26 + 0x20;
            }
            *(long *)(lVar6 + 0x1b8) = lVar26;
            FUN_00377b00(lVar21 + 1000,lVar6 + 0x1c0);
            *(byte *)(lVar6 + 0x538) = *(byte *)(lVar6 + 0x538) | 4;
            *(byte *)(lVar11 + 0x28) = *(byte *)(lVar11 + 0x28) | 2;
            *(long *)(*(long *)(lVar11 + 0x20) + 0x18) = lVar6 + 0x1c0;
            bVar2 = *(byte *)(lVar28 + 0x10);
          }
          if ((bVar2 >> 3 & 1) != 0) {
            if (*(long *)(*(long *)(lVar28 + 8) + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(byte *)(lVar6 + 0x538) = *(byte *)(lVar6 + 0x538) | 0x10;
            *(byte *)(lVar11 + 0x28) = *(byte *)(lVar11 + 0x28) | 8;
            FUN_00377130(lVar6 + 0x2a8);
            lVar26 = *(long *)(lVar11 + 0x20);
            *(long *)(lVar26 + 0x38) = lVar6 + 0x2a8;
            *(long *)(lVar26 + 0x50) = lVar6 + 0x3b0;
            *(undefined1 **)(lVar6 + 0x398) = &LAB_00324030;
            *(long *)(lVar6 + 0x3a0) = lVar11;
            *(undefined8 *)(lVar6 + 0x3a8) = 0;
            *(long *)(*(long *)(lVar11 + 0x20) + 0x48) = lVar6 + 0x390;
            bVar2 = *(byte *)(lVar28 + 0x10);
          }
          if ((bVar2 >> 4 & 1) != 0) {
            *(long *)(lVar6 + 0x528) = *(long *)(lVar6 + 0x528) + 1;
            *(byte *)(lVar11 + 0x28) = *(byte *)(lVar11 + 0x28) | 0x10;
            *(long *)(*(long *)(lVar11 + 0x20) + 0x60) = lVar6 + 0x3d8;
            *(code **)(lVar6 + 0x3c0) = FUN_003244dc;
            *(long *)(lVar6 + 0x3c8) = lVar11;
            *(undefined8 *)(lVar6 + 0x3d0) = 0;
            *(long *)(*(long *)(lVar11 + 0x20) + 0x68) = lVar6 + 0x3b8;
            bVar2 = *(byte *)(lVar28 + 0x10);
          }
          if ((bVar2 >> 5 & 1) != 0) {
            *(byte *)(lVar6 + 0x538) = *(byte *)(lVar6 + 0x538) | 0x40;
            *(byte *)(lVar11 + 0x28) = *(byte *)(lVar11 + 0x28) | 0x20;
            FUN_00377130(lVar15);
            lVar26 = *(long *)(lVar11 + 0x20);
            *(long *)(lVar26 + 0x78) = lVar31;
            *(long *)(lVar26 + 0x70) = lVar15;
            *(undefined1 **)(lVar6 + 0x500) = &LAB_00324874;
            *(long *)(lVar6 + 0x508) = lVar11;
            *(undefined8 *)(lVar6 + 0x510) = 0;
            lVar26 = *(long *)(lVar11 + 0x20);
            *(undefined8 *******)(lVar26 + 0x80) = ppppppuVar29;
            if (*(long *)(lVar21 + 0x170) != 0) {
              *(undefined8 *)(lVar21 + 0x1a8) = *(undefined8 *)(lVar26 + 0x70);
              *(code **)(lVar21 + 0x1b8) = FUN_0032234c;
              *(long *)(lVar21 + 0x1c0) = lVar21;
              *(undefined8 *)(lVar21 + 0x1c8) = 0;
              *(undefined8 *******)(lVar21 + 0x1d0) = ppppppuVar29;
              *(long *)(*(long *)(lVar11 + 0x20) + 0x80) = lVar21 + 0x1b0;
            }
          }
          uVar14 = local_f8;
          uVar12 = *(undefined8 *)(lVar21 + 0x120);
          *(undefined8 *)(lVar11 + 0x50) = 0;
          *(undefined8 *)(lVar11 + 0x30) = uVar12;
          *(undefined1 **)(lVar11 + 0x40) = &LAB_00323f78;
          *(long *)(lVar11 + 0x48) = lVar11 + 0x18;
          bVar5 = (local_f8 & 1) != 0;
          pppppppuVar27 = &local_f0;
          if (bVar5) {
            pppppppuVar27 = local_f0;
          }
          uVar18 = 6;
          if (bVar5) {
            uVar18 = local_e8;
          }
          uVar22 = local_f8 >> 1;
          if (uVar22 == uVar18) {
            uVar25 = uVar18 * 2;
            pppppppuVar10 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar18 * 0x30);
            pppppppuVar17 = pppppppuVar10;
          }
          else {
            pppppppuVar10 = (undefined8 *******)0x0;
            uVar25 = 0;
            pppppppuVar17 = pppppppuVar27;
          }
          pppppppuVar17 = pppppppuVar17 + uVar22 * 3;
          *pppppppuVar17 = (undefined8 ******)(lVar11 + 0x38);
          pppppppuVar17[1] = (undefined8 ******)0x0;
          pppppppuVar17[2] = (undefined8 ******)"start_subchannel_batch";
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if (uVar22 != 0) {
              uVar14 = uVar14 >> 1 & 3;
              if (uVar22 - 1 < 3) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                pppppppuVar17 = pppppppuVar10 + 6;
                do {
                  ppppppuVar32 = pppppppuVar27[1];
                  ppppppuVar30 = *pppppppuVar27;
                  uVar18 = uVar18 + 4;
                  pppppppuVar17[-4] = pppppppuVar27[2];
                  pppppppuVar17[-5] = ppppppuVar32;
                  pppppppuVar17[-6] = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[4];
                  ppppppuVar30 = pppppppuVar27[3];
                  pppppppuVar17[-1] = pppppppuVar27[5];
                  pppppppuVar17[-2] = ppppppuVar32;
                  pppppppuVar17[-3] = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[7];
                  ppppppuVar30 = pppppppuVar27[6];
                  pppppppuVar17[2] = pppppppuVar27[8];
                  pppppppuVar17[1] = ppppppuVar32;
                  *pppppppuVar17 = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[10];
                  ppppppuVar30 = pppppppuVar27[9];
                  pppppppuVar1 = pppppppuVar27 + 0xb;
                  pppppppuVar27 = pppppppuVar27 + 0xc;
                  pppppppuVar17[5] = *pppppppuVar1;
                  pppppppuVar17[4] = ppppppuVar32;
                  pppppppuVar17[3] = ppppppuVar30;
                  pppppppuVar17 = pppppppuVar17 + 0xc;
                } while ((uVar22 & 0x7ffffffffffffffc) != uVar18);
              }
              if (uVar14 != 0) {
                pppppppuVar17 = pppppppuVar10 + uVar18 * 3;
                do {
                  ppppppuVar32 = pppppppuVar27[1];
                  ppppppuVar30 = *pppppppuVar27;
                  uVar14 = uVar14 - 1;
                  pppppppuVar17[2] = pppppppuVar27[2];
                  pppppppuVar17[1] = ppppppuVar32;
                  *pppppppuVar17 = ppppppuVar30;
                  pppppppuVar17 = pppppppuVar17 + 3;
                  pppppppuVar27 = pppppppuVar27 + 3;
                } while (uVar14 != 0);
              }
            }
            if ((local_f8 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_f0);
            }
            local_f8 = local_f8 | 1;
            local_f0 = pppppppuVar10;
            local_e8 = uVar25;
          }
          local_f8 = local_f8 + 2;
          if ((*(byte *)(lVar28 + 0x10) & 7) != 0) {
            iVar13 = *(int *)(lVar21 + 0x2b0);
            if (iVar13 == 0) {
              plVar9 = *(long **)(lVar21 + 200);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar5) {
                  *plVar9 = *plVar9 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              iVar13 = *(int *)(lVar21 + 0x2b0);
            }
            *(int *)(lVar21 + 0x2b0) = iVar13 + 1;
          }
        }
      }
      else if (*(long *)(lVar6 + 0x560) != 0) {
        if (*(char *)(lVar6 + 0x538) < 0) {
          bVar5 = (local_f8 & 1) != 0;
          uVar18 = local_f8 >> 1;
          pppppppuVar27 = &local_f0;
          if (bVar5) {
            pppppppuVar27 = local_f0;
          }
          uVar22 = 6;
          if (bVar5) {
            uVar22 = local_e8;
          }
          if (uVar18 == uVar22) {
            uVar25 = uVar22 * 2;
            pppppppuVar10 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar22 * 0x30);
            pppppppuVar17 = pppppppuVar10;
          }
          else {
            pppppppuVar10 = (undefined8 *******)0x0;
            uVar25 = 0;
            pppppppuVar17 = pppppppuVar27;
          }
          pppppppuVar17 = pppppppuVar17 + uVar18 * 3;
          *pppppppuVar17 = ppppppuVar29;
          pppppppuVar17[1] = (undefined8 ******)0x0;
          pppppppuVar17[2] =
               (undefined8 ******)
               "re-executing recv_trailing_metadata_ready to propagate internally triggered result";
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if (uVar18 != 0) {
              uVar14 = uVar14 >> 1 & 3;
              if (uVar18 - 1 < 3) {
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                pppppppuVar17 = pppppppuVar10 + 6;
                do {
                  ppppppuVar32 = pppppppuVar27[1];
                  ppppppuVar30 = *pppppppuVar27;
                  uVar22 = uVar22 + 4;
                  pppppppuVar17[-4] = pppppppuVar27[2];
                  pppppppuVar17[-5] = ppppppuVar32;
                  pppppppuVar17[-6] = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[4];
                  ppppppuVar30 = pppppppuVar27[3];
                  pppppppuVar17[-1] = pppppppuVar27[5];
                  pppppppuVar17[-2] = ppppppuVar32;
                  pppppppuVar17[-3] = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[7];
                  ppppppuVar30 = pppppppuVar27[6];
                  pppppppuVar17[2] = pppppppuVar27[8];
                  pppppppuVar17[1] = ppppppuVar32;
                  *pppppppuVar17 = ppppppuVar30;
                  ppppppuVar32 = pppppppuVar27[10];
                  ppppppuVar30 = pppppppuVar27[9];
                  pppppppuVar1 = pppppppuVar27 + 0xb;
                  pppppppuVar27 = pppppppuVar27 + 0xc;
                  pppppppuVar17[5] = *pppppppuVar1;
                  pppppppuVar17[4] = ppppppuVar32;
                  pppppppuVar17[3] = ppppppuVar30;
                  pppppppuVar17 = pppppppuVar17 + 0xc;
                } while ((uVar18 & 0x7ffffffffffffffc) != uVar22);
              }
              if (uVar14 != 0) {
                pppppppuVar17 = pppppppuVar10 + uVar22 * 3;
                do {
                  ppppppuVar32 = pppppppuVar27[1];
                  ppppppuVar30 = *pppppppuVar27;
                  uVar14 = uVar14 - 1;
                  pppppppuVar17[2] = pppppppuVar27[2];
                  pppppppuVar17[1] = ppppppuVar32;
                  *pppppppuVar17 = ppppppuVar30;
                  pppppppuVar17 = pppppppuVar17 + 3;
                  pppppppuVar27 = pppppppuVar27 + 3;
                } while (uVar14 != 0);
              }
            }
            if ((local_f8 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_f0);
            }
            local_f8 = local_f8 | 1;
            local_f0 = pppppppuVar10;
            local_e8 = uVar25;
          }
          local_f8 = local_f8 + 2;
          *(undefined8 *)(lVar6 + 0x560) = 0;
        }
        else {
          FUN_00323eb8();
          *(undefined8 *)(lVar6 + 0x560) = 0;
        }
      }
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 6) {
                    /* try { // try from 00323484 to 0032350f has its CatchHandler @ 00323518 */
      FUN_0032226c(&local_f8,*(undefined8 *)(lVar21 + 0xd0));
      if ((local_f8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      return;
    }
  } while( true );
}


