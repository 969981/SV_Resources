/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e66c8; name: FUN_031e66c8
 */


void FUN_031e66c8(undefined8 param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  uint uVar18;
  ulong *puVar19;
  bool bVar20;
  short *psVar21;
  short *psVar22;
  long local_88;
  ulong *local_80;
  ulong local_78;
  ulong local_70;
  ulong *local_68;
  undefined8 local_60;
  ulong local_58;
  
  puVar19 = (ulong *)param_2[1];
  puVar11 = puVar19;
  if ((*puVar19 & 1) == 0) {
    do {
      puVar11 = (ulong *)puVar11[1];
    } while ((*puVar11 & 1) == 0);
  }
  switch((uint)puVar11[2] & 0x1f) {
  case 0:
  case 1:
  case 6:
    return;
  case 2:
    puVar11 = puVar19;
    while( true ) {
      uVar10 = (uint)*puVar11;
      if ((uVar10 >> 0xc & 1) != 0) break;
      if ((*puVar11 & 1) != 0) {
        return;
      }
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) {
        return;
      }
    }
    if (puVar11 == (ulong *)0x0) {
      return;
    }
    uVar10 = uVar10 & 0xfff;
    pvVar6 = (void *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) +
                             2];
    if (pvVar6 == (void *)0x0) {
      return;
    }
    if (puVar19 != (ulong *)0x0) {
      puVar11 = puVar19;
LAB_031e6c40:
      uVar14 = *puVar11;
      if (((uint)uVar14 >> 2 & 1) == 0) goto code_r0x031e6c48;
      uVar14 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      if ((uVar14 & 1) != 0) {
        piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar20) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar19 = (ulong *)param_2[1];
        bVar20 = false;
        goto LAB_031e6c58;
      }
      goto LAB_031e6c54;
    }
LAB_031e6c50:
    uVar14 = 0;
LAB_031e6c54:
    bVar20 = true;
LAB_031e6c58:
    while( true ) {
      uVar10 = (uint)*puVar19;
      if ((uVar10 >> 0x14 & 1) != 0) break;
      if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
      goto LAB_031e71c0;
    }
    if (puVar19 != (ulong *)0x0) {
      uVar10 = uVar10 & 0xfffff;
      sVar7 = (size_t)(ushort)puVar19[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                    POPCOUNT((char)(uVar10 >> 8)) +
                                                   POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      goto LAB_031e71c4;
    }
LAB_031e71c0:
    sVar7 = 0;
LAB_031e71c4:
    memcpy((void *)*param_2,pvVar6,sVar7);
    if (bVar20) {
      return;
    }
    plVar5 = (long *)(uVar14 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      iVar9 = (int)*plVar4;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar20) {
        *(int *)plVar4 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 3:
    puVar11 = puVar19;
    while( true ) {
      uVar10 = (uint)*puVar11;
      if ((uVar10 >> 0xc & 1) != 0) break;
      if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
      goto LAB_031e6cbc;
    }
    if (puVar11 != (ulong *)0x0) {
      uVar14 = CONCAT44(uVar10,uVar10) & 0xfff00000fff;
      local_70 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2];
      puVar11 = puVar19;
      if (local_70 != 0) goto joined_r0x031e6ca0;
    }
LAB_031e6cbc:
    local_68 = (ulong *)0x0;
    local_60 = 0;
    local_70 = 0;
    goto LAB_031e6cc4;
  case 4:
    puVar11 = puVar19;
    while( true ) {
      uVar10 = (uint)*puVar11;
      if ((uVar10 >> 0xc & 1) != 0) break;
      if ((*puVar11 & 1) != 0) {
        return;
      }
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) {
        return;
      }
    }
    if (puVar11 == (ulong *)0x0) {
      return;
    }
    uVar10 = uVar10 & 0xfff;
    pvVar6 = (void *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) +
                             2];
    if (pvVar6 == (void *)0x0) {
      return;
    }
    if (puVar19 != (ulong *)0x0) {
      puVar11 = puVar19;
LAB_031e6d18:
      uVar14 = *puVar11;
      if (((uint)uVar14 >> 2 & 1) == 0) goto code_r0x031e6d20;
      uVar14 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      if ((uVar14 & 1) != 0) {
        piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar20) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar19 = (ulong *)param_2[1];
        bVar20 = false;
        goto LAB_031e6d30;
      }
      goto LAB_031e6d2c;
    }
LAB_031e6d28:
    uVar14 = 0;
LAB_031e6d2c:
    bVar20 = true;
LAB_031e6d30:
    while( true ) {
      uVar10 = (uint)*puVar19;
      if ((uVar10 >> 0x14 & 1) != 0) break;
      if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
      goto LAB_031e7210;
    }
    if (puVar19 != (ulong *)0x0) {
      uVar10 = uVar10 & 0xfffff;
      sVar7 = (size_t)(ushort)puVar19[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                    POPCOUNT((char)(uVar10 >> 8)) +
                                                   POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      goto LAB_031e7214;
    }
LAB_031e7210:
    sVar7 = 0;
LAB_031e7214:
    memcpy((void *)*param_2,pvVar6,sVar7);
    if (bVar20) {
      return;
    }
    plVar5 = (long *)(uVar14 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      iVar9 = (int)*plVar4;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar20) {
        *(int *)plVar4 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 5:
    puVar11 = puVar19;
    while( true ) {
      uVar10 = (uint)*puVar11;
      if ((uVar10 >> 0xc & 1) != 0) break;
      if ((*puVar11 & 1) != 0) {
        return;
      }
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) {
        return;
      }
    }
    if (puVar11 == (ulong *)0x0) {
      return;
    }
    uVar10 = uVar10 & 0xfff;
    pvVar6 = (void *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) +
                             2];
    if (pvVar6 == (void *)0x0) {
      return;
    }
    if (puVar19 != (ulong *)0x0) {
      puVar11 = puVar19;
LAB_031e6d7c:
      uVar14 = *puVar11;
      if (((uint)uVar14 >> 2 & 1) == 0) goto code_r0x031e6d84;
      uVar14 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      if ((uVar14 & 1) != 0) {
        piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar20) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar19 = (ulong *)param_2[1];
        bVar20 = false;
        goto LAB_031e6d94;
      }
      goto LAB_031e6d90;
    }
LAB_031e6d8c:
    uVar14 = 0;
LAB_031e6d90:
    bVar20 = true;
LAB_031e6d94:
    while( true ) {
      uVar10 = (uint)*puVar19;
      if ((uVar10 >> 0x14 & 1) != 0) break;
      if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
      goto LAB_031e7260;
    }
    if (puVar19 != (ulong *)0x0) {
      uVar10 = uVar10 & 0xfffff;
      sVar7 = (size_t)(ushort)puVar19[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                    POPCOUNT((char)(uVar10 >> 8)) +
                                                   POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      goto LAB_031e7264;
    }
LAB_031e7260:
    sVar7 = 0;
LAB_031e7264:
    memcpy((void *)*param_2,pvVar6,sVar7);
    if (bVar20) {
      return;
    }
    plVar5 = (long *)(uVar14 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      iVar9 = (int)*plVar4;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar20) {
        *(int *)plVar4 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 7:
    if ((param_3 & 1) != 0) {
LAB_031e67e4:
      puVar11 = puVar19;
      while( true ) {
        uVar10 = (uint)*puVar11;
        if ((uVar10 >> 0xc & 1) != 0) break;
        if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
        goto LAB_031e6848;
      }
      if ((puVar11 != (ulong *)0x0) &&
         (uVar14 = CONCAT44(uVar10,uVar10) & 0xfff00000fff,
         local_70 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) +
                            2], local_70 != 0)) {
        if (puVar19 == (ulong *)0x0) {
          local_60 = 0;
          goto LAB_031e6a84;
        }
        puVar11 = puVar19;
        goto LAB_031e6834;
      }
LAB_031e6848:
      local_68 = (ulong *)0x0;
      local_60 = 0;
      local_70 = 0;
      puVar11 = puVar19;
      while( true ) {
        uVar10 = (uint)*puVar11;
        if ((uVar10 >> 0x17 & 1) != 0) break;
        if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
        goto LAB_031e68a4;
      }
      if (puVar11 != (ulong *)0x0) {
        uVar14 = CONCAT44(uVar10,uVar10) & 0x7fffff007fffff;
        psVar22 = (short *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar14) +
                                                 POPCOUNT((char)(uVar14 >> 8)) +
                                                POPCOUNT((char)(uVar14 >> 0x10))) + 2];
        if (psVar22 != (short *)0x0) {
          psVar21 = psVar22 + 4;
          psVar22 = psVar21 + (long)*psVar22 * 4;
          goto LAB_031e68a8;
        }
      }
LAB_031e68a4:
      psVar21 = (short *)0x0;
      psVar22 = (short *)0x0;
LAB_031e68a8:
      do {
        if (psVar21 == psVar22) goto LAB_031e6b48;
        lVar12 = *param_2;
        puVar11 = *(ulong **)psVar21;
        if (lVar12 == 0 || puVar11 < (ulong *)0x2) {
LAB_031e68c4:
          local_80 = (ulong *)0x0;
          local_78 = 0;
          local_88 = 0;
        }
        else {
          uVar14 = *puVar11;
          uVar10 = (uint)uVar14;
          if ((uVar10 >> 0x11 & 1) == 0) goto LAB_031e68c4;
          uVar13 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
          uVar13 = (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                POPCOUNT((char)(uVar13 >> 0x10)));
          if ((puVar11[uVar13 + 2] & 0x300000) == 0) goto LAB_031e68c4;
          if (((param_2[2] & 1U) == 0) &&
             (((puVar16 = (undefined8 *)param_2[1], puVar16 < (undefined8 *)0x2 ||
               (uVar18 = (uint)*puVar16, (uVar18 >> 0x11 & 1) == 0)) ||
              (uVar15 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff,
              (puVar16[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                    POPCOUNT((char)(uVar15 >> 0x10))) + 2] & 0x300000) == 0 ||
              (puVar16[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                    POPCOUNT((char)(uVar15 >> 0x10))) + 2] & 0x500000) == 0)))) {
            puVar17 = puVar11;
            if ((uVar10 >> 2 & 1) == 0) {
              do {
                puVar17 = (ulong *)puVar17[1];
                if (puVar17 == (ulong *)0x0) {
                  uVar14 = 0;
                  goto LAB_031e6a2c;
                }
                uVar14 = *puVar17;
              } while (((uint)uVar14 >> 2 & 1) == 0);
            }
            uVar14 = puVar17[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
LAB_031e6a2c:
            uVar15 = 0;
LAB_031e6a30:
            uVar13 = (ulong)(ushort)puVar11[uVar13 + 2];
          }
          else {
            plVar4 = (long *)(param_2[2] & 0xfffffffffffffffe);
            uVar14 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2,puVar11);
            lVar12 = *param_2;
            uVar10 = (uint)*puVar11;
            if ((uVar10 >> 0x11 & 1) != 0) {
              uVar13 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
              uVar13 = (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                    POPCOUNT((char)(uVar13 >> 0x10)));
              uVar15 = 1;
              goto LAB_031e6a30;
            }
            uVar13 = 0;
            uVar15 = 1;
          }
          local_88 = uVar13 + lVar12;
          local_78 = uVar15 | uVar14;
          local_80 = puVar11;
          if (uVar15 != 0 || (uVar14 & 1) != 0) {
            piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar20) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        FUN_031e66c8(param_1,&local_88,1);
        if ((local_78 & 1) != 0) {
          plVar5 = (long *)(local_78 & 0xfffffffffffffffe);
          plVar4 = plVar5 + 1;
          do {
            lVar12 = *plVar4;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar20) {
              *(int *)plVar4 = (int)lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        psVar21 = psVar21 + 4;
      } while( true );
    }
    puVar11 = puVar19;
    while( true ) {
      uVar10 = (uint)*puVar11;
      if ((uVar10 >> 0xc & 1) != 0) break;
      if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
      goto LAB_031e6df8;
    }
    if ((puVar11 != (ulong *)0x0) &&
       (uVar14 = CONCAT44(uVar10,uVar10) & 0xfff00000fff,
       local_70 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2]
       , local_70 != 0)) {
      if (puVar19 == (ulong *)0x0) {
        local_60 = 0;
        goto LAB_031e73c8;
      }
      puVar11 = puVar19;
      goto LAB_031e6de4;
    }
LAB_031e6df8:
    local_68 = (ulong *)0x0;
    local_60 = 0;
    local_70 = 0;
    while( true ) {
      uVar10 = (uint)*puVar19;
      if ((uVar10 >> 0x17 & 1) != 0) break;
      if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
      goto LAB_031e7484;
    }
    if (puVar19 != (ulong *)0x0) {
      uVar14 = CONCAT44(uVar10,uVar10) & 0x7fffff007fffff;
      psVar22 = (short *)puVar19[(ulong)(byte)(POPCOUNT((char)uVar14) +
                                               POPCOUNT((char)(uVar14 >> 8)) +
                                              POPCOUNT((char)(uVar14 >> 0x10))) + 2];
      if ((psVar22 != (short *)0x0) && (sVar2 = *psVar22, (long)sVar2 != 0)) {
        psVar21 = psVar22 + 4;
        goto LAB_031e6e58;
      }
    }
    goto LAB_031e7484;
  case 8:
    puVar11 = puVar19;
    while ((*puVar11 & 1) == 0) {
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) {
        return;
      }
    }
    if (puVar11 == (ulong *)0x0) {
      return;
    }
    if ((int)(puVar11[2] >> 8) < 1) {
      return;
    }
    puVar11 = puVar19;
    while( true ) {
      uVar10 = (uint)*puVar11;
      if ((uVar10 >> 0xc & 1) != 0) break;
      if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
      goto LAB_031e7060;
    }
    if ((puVar11 != (ulong *)0x0) &&
       (uVar14 = CONCAT44(uVar10,uVar10) & 0xfff00000fff,
       pvVar6 = (void *)puVar11[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))
                                             ) + 2], pvVar6 != (void *)0x0)) {
      if (puVar19 == (ulong *)0x0) goto LAB_031e7058;
      puVar11 = puVar19;
      goto LAB_031e7048;
    }
LAB_031e7060:
    iVar9 = 0;
    do {
      puVar11 = puVar19;
      do {
        if ((*puVar11 & 1) != 0) {
          iVar8 = 0;
          if (puVar11 != (ulong *)0x0) {
            iVar8 = (int)(puVar11[2] >> 8);
          }
          goto LAB_031e708c;
        }
        puVar11 = (ulong *)puVar11[1];
      } while (puVar11 != (ulong *)0x0);
      iVar8 = 0;
LAB_031e708c:
      if (iVar8 <= iVar9) {
        return;
      }
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = (ulong *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffeU) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffeU),*param_2,puVar19,&local_70);
      if (iVar9 < (int)local_60) {
        local_88 = local_70 + (long)local_60._4_4_ * (long)iVar9;
        local_80 = local_68;
        local_78 = local_58;
        if ((local_58 & 1) != 0) {
          piVar1 = (int *)((local_58 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar20) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        local_80 = (ulong *)0x0;
        local_78 = 0;
        local_88 = 0;
      }
      if ((local_58 & 1) != 0) {
        plVar5 = (long *)(local_58 & 0xfffffffffffffffe);
        plVar4 = plVar5 + 1;
        do {
          lVar12 = *plVar4;
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar20) {
            *(int *)plVar4 = (int)lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      FUN_031e66c8(param_1,&local_88,1);
      if ((local_78 & 1) != 0) {
        plVar5 = (long *)(local_78 & 0xfffffffffffffffe);
        plVar4 = plVar5 + 1;
        do {
          lVar12 = *plVar4;
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar20) {
            *(int *)plVar4 = (int)lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      puVar19 = (ulong *)param_2[1];
      iVar9 = iVar9 + 1;
    } while( true );
  default:
    local_60 = 0;
    local_70 = 0;
    local_68 = (ulong *)PTR_DAT_047d1b38;
    FUN_01f9d9b0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_70);
    return;
  }
  if ((plVar5 == (long *)0x0) || (iVar9 != 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x031e72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))();
  return;
  while (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0) {
LAB_031e7048:
    uVar14 = *puVar11;
    if (((uint)uVar14 >> 2 & 1) != 0) {
      uVar14 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      if ((uVar14 & 1) != 0) {
        piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar20) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar19 = (ulong *)param_2[1];
      }
      goto LAB_031e750c;
    }
  }
LAB_031e7058:
  uVar14 = 0;
LAB_031e750c:
  while( true ) {
    uVar10 = (uint)*puVar19;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_031e7550;
  }
  if (puVar19 != (ulong *)0x0) {
    uVar10 = uVar10 & 0xfffff;
    sVar7 = (size_t)(ushort)puVar19[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                  POPCOUNT((char)(uVar10 >> 8)) +
                                                 POPCOUNT((char)(uVar10 >> 0x10))) + 2];
    goto LAB_031e7554;
  }
LAB_031e7550:
  sVar7 = 0;
LAB_031e7554:
  memcpy((void *)*param_2,pvVar6,sVar7);
  if ((uVar14 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(uVar14 & 0xfffffffffffffffe);
  plVar4 = plVar5 + 1;
  do {
    iVar9 = (int)*plVar4;
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar20) {
      *(int *)plVar4 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_031e74a4;
  while (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0) {
LAB_031e6834:
    uVar14 = *puVar11;
    if (((uint)uVar14 >> 2 & 1) != 0) {
      local_60 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      goto LAB_031e6a84;
    }
  }
  local_60 = 0;
LAB_031e6a84:
  if ((local_60 & 1) != 0) {
    piVar1 = (int *)((local_60 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = *param_2;
  if (puVar19 == (ulong *)0x0) {
    local_78 = 0;
  }
  else {
    puVar11 = puVar19;
    do {
      uVar14 = *puVar11;
      if (((uint)uVar14 >> 2 & 1) != 0) {
        local_78 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
        goto LAB_031e6ae4;
      }
      puVar11 = (ulong *)puVar11[1];
    } while (puVar11 != (ulong *)0x0);
    local_78 = 0;
  }
LAB_031e6ae4:
  if ((local_78 & 1) != 0) {
    piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = puVar19;
  local_68 = puVar19;
  FUN_031e7578(&local_88,&local_70);
  if ((local_78 & 1) != 0) {
    plVar5 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      lVar12 = *plVar4;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar20) {
        *(int *)plVar4 = (int)lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
LAB_031e6b48:
  if ((local_60 & 1) != 0) {
    plVar5 = (long *)(local_60 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      lVar12 = *plVar4;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar20) {
        *(int *)plVar4 = (int)lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  do {
    uVar14 = *puVar19;
    puVar19 = (ulong *)puVar19[1];
  } while ((uVar14 & 1) == 0);
  if (puVar19 == (ulong *)0x0) {
    return;
  }
  goto LAB_031e67e4;
  while (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0) {
LAB_031e6de4:
    uVar14 = *puVar11;
    if (((uint)uVar14 >> 2 & 1) != 0) {
      local_60 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      goto LAB_031e73c8;
    }
  }
  local_60 = 0;
LAB_031e73c8:
  if ((local_60 & 1) != 0) {
    piVar1 = (int *)((local_60 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_88 = *param_2;
  for (puVar11 = puVar19; puVar11 != (ulong *)0x0; puVar11 = (ulong *)puVar11[1]) {
    uVar14 = *puVar11;
    if (((uint)uVar14 >> 2 & 1) != 0) {
      local_78 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
      goto LAB_031e7420;
    }
  }
  local_78 = 0;
LAB_031e7420:
  if ((local_78 & 1) != 0) {
    piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = puVar19;
  local_68 = puVar19;
  FUN_031e7578(&local_88,&local_70);
  if ((local_78 & 1) != 0) {
    plVar5 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      lVar12 = *plVar4;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar20) {
        *(int *)plVar4 = (int)lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  goto LAB_031e7484;
code_r0x031e6d84:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto LAB_031e6d8c;
  goto LAB_031e6d7c;
code_r0x031e6d20:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto LAB_031e6d28;
  goto LAB_031e6d18;
joined_r0x031e6ca0:
  if (puVar11 == (ulong *)0x0) goto LAB_031e6cb4;
  uVar14 = *puVar11;
  if (((uint)uVar14 >> 2 & 1) != 0) {
    local_60 = puVar11[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
    goto LAB_031e7304;
  }
  puVar11 = (ulong *)puVar11[1];
  goto joined_r0x031e6ca0;
LAB_031e6cb4:
  local_60 = 0;
LAB_031e7304:
  if ((local_60 & 1) != 0) {
    piVar1 = (int *)((local_60 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = puVar19;
  FUN_031e7578(param_2,&local_70);
LAB_031e6cc4:
  if ((local_60 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(local_60 & 0xfffffffffffffffe);
  plVar4 = plVar5 + 1;
  do {
    iVar9 = (int)*plVar4;
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar20) {
      *(int *)plVar4 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_031e74a4;
code_r0x031e6c48:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto LAB_031e6c50;
  goto LAB_031e6c40;
  while( true ) {
    FUN_031e66c8(param_1,&local_88,1);
    if ((local_78 & 1) != 0) {
      plVar5 = (long *)(local_78 & 0xfffffffffffffffe);
      plVar4 = plVar5 + 1;
      do {
        lVar12 = *plVar4;
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar20) {
          *(int *)plVar4 = (int)lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar5 != (long *)0x0) && ((int)lVar12 == 1)) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    psVar21 = psVar21 + 4;
    if (psVar21 == psVar22 + (long)sVar2 * 4 + 4) break;
LAB_031e6e58:
    lVar12 = *param_2;
    puVar11 = *(ulong **)psVar21;
    if (lVar12 == 0 || puVar11 < (ulong *)0x2) {
LAB_031e6e6c:
      local_80 = (ulong *)0x0;
      local_78 = 0;
      local_88 = 0;
    }
    else {
      uVar14 = *puVar11;
      uVar10 = (uint)uVar14;
      if ((uVar10 >> 0x11 & 1) == 0) goto LAB_031e6e6c;
      uVar13 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
      uVar13 = (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                            POPCOUNT((char)(uVar13 >> 0x10)));
      if ((puVar11[uVar13 + 2] & 0x300000) == 0) goto LAB_031e6e6c;
      if (((param_2[2] & 1U) == 0) &&
         (((puVar16 = (undefined8 *)param_2[1], puVar16 < (undefined8 *)0x2 ||
           (uVar18 = (uint)*puVar16, (uVar18 >> 0x11 & 1) == 0)) ||
          (uVar15 = CONCAT44(uVar18,uVar18) & 0x1ffff0001ffff,
          (puVar16[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                POPCOUNT((char)(uVar15 >> 0x10))) + 2] & 0x300000) == 0 ||
          (puVar16[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                POPCOUNT((char)(uVar15 >> 0x10))) + 2] & 0x500000) == 0)))) {
        puVar19 = puVar11;
        if ((uVar10 >> 2 & 1) == 0) {
          do {
            puVar19 = (ulong *)puVar19[1];
            if (puVar19 == (ulong *)0x0) {
              uVar14 = 0;
              goto LAB_031e6fdc;
            }
            uVar14 = *puVar19;
          } while (((uint)uVar14 >> 2 & 1) == 0);
        }
        uVar14 = puVar19[(uVar14 >> 1 & 1) + (uVar14 & 1) + 2];
LAB_031e6fdc:
        uVar15 = 0;
LAB_031e6fe0:
        uVar13 = (ulong)(ushort)puVar11[uVar13 + 2];
      }
      else {
        plVar4 = (long *)(param_2[2] & 0xfffffffffffffffe);
        uVar14 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2,puVar11);
        lVar12 = *param_2;
        uVar10 = (uint)*puVar11;
        if ((uVar10 >> 0x11 & 1) != 0) {
          uVar13 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
          uVar13 = (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                POPCOUNT((char)(uVar13 >> 0x10)));
          uVar15 = 1;
          goto LAB_031e6fe0;
        }
        uVar13 = 0;
        uVar15 = 1;
      }
      local_88 = uVar13 + lVar12;
      local_78 = uVar15 | uVar14;
      local_80 = puVar11;
      if (uVar15 != 0 || (uVar14 & 1) != 0) {
        piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar20) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
LAB_031e7484:
  if ((local_60 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(local_60 & 0xfffffffffffffffe);
  plVar4 = plVar5 + 1;
  do {
    iVar9 = (int)*plVar4;
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar20) {
      *(int *)plVar4 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_031e74a4:
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (iVar9 == 1) {
    (**(code **)(*plVar5 + 8))();
    return;
  }
  return;
}


