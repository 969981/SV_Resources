/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031eec90; name: FUN_031eec90
 */


/* WARNING: Removing unreachable block (ram,0x031eed88) */

int FUN_031eec90(long *param_1,long *param_2,undefined8 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  size_t sVar10;
  long *plVar11;
  undefined8 uVar12;
  char *pcVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  short *psVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  short *psVar24;
  int iVar25;
  char *pcVar26;
  byte *pbVar27;
  long lVar28;
  undefined8 *puVar29;
  int iVar30;
  long *plVar31;
  long *plVar32;
  ulong *puVar33;
  long *plVar34;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  long local_98;
  byte *pbStack_90;
  ulong local_88;
  long local_80;
  byte *local_78;
  undefined8 local_70;
  ulong local_68;
  
  plVar31 = (long *)0x0;
  plVar32 = (long *)0x0;
  iVar30 = 0;
  puVar29 = (undefined8 *)0x0;
LAB_031eecec:
  do {
    do {
      puVar6 = PTR_DAT_047e5c88;
      plVar32 = plVar32 + 1;
      puVar15 = puVar29;
      if (plVar31 <= plVar32) {
        if (puVar29 == param_3) {
          return iVar30;
        }
        psVar18 = (short *)0x0;
        puVar15 = (undefined8 *)0x0;
        puVar20 = param_3;
        do {
          uVar14 = (uint)*puVar20;
          if ((uVar14 >> 0x17 & 1) != 0) {
            uVar16 = CONCAT44(uVar14,uVar14) & 0x7fffff007fffff;
            psVar24 = (short *)puVar20[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                     POPCOUNT((char)(uVar16 >> 8)) +
                                                    POPCOUNT((char)(uVar16 >> 0x10))) + 2];
            if (psVar24 != (short *)0x0) {
              if ((int)psVar24[1] + (int)*psVar24 != 0) {
                psVar18 = psVar24;
                puVar15 = puVar20;
              }
            }
          }
          puVar20 = (undefined8 *)puVar20[1];
        } while (puVar20 != puVar29);
        if (puVar15 == (undefined8 *)0x0) {
          return iVar30;
        }
        plVar32 = (long *)(psVar18 + 4);
        plVar31 = plVar32 + (long)psVar18[1] + (long)*psVar18;
      }
      uVar14 = (uint)*(undefined8 *)*plVar32;
      puVar29 = puVar15;
    } while (((uVar14 >> 0x11 & 1) == 0) ||
            (uVar16 = CONCAT44(uVar14,uVar14) & 0x1ffff0001ffff,
            (*(ushort *)
              (*plVar32 +
              (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                           POPCOUNT((char)(uVar16 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
    puVar33 = (ulong *)*plVar32;
    uVar16 = *puVar33;
    uVar14 = (uint)uVar16;
    puVar22 = puVar33;
    if ((uVar16 & 1) == 0) {
      puVar21 = puVar33;
      do {
        puVar21 = (ulong *)puVar21[1];
      } while ((*puVar21 & 1) == 0);
      if ((puVar33 != (ulong *)0x0) && ((puVar21[2] & 0x1f) == 8)) goto LAB_031eee20;
      if ((uVar16 & 1) == 0) {
        do {
          puVar22 = (ulong *)puVar22[1];
        } while ((*puVar22 & 1) == 0);
      }
    }
    else if ((puVar33 != (ulong *)0x0) && ((puVar33[2] & 0x1f) == 8)) {
LAB_031eee20:
      do {
        puVar21 = puVar33;
        if ((*puVar22 & 1) != 0) {
          if ((puVar22 != (ulong *)0x0) && (0 < (int)(puVar22[2] >> 8))) goto LAB_031eecec;
          break;
        }
        puVar22 = (ulong *)puVar22[1];
      } while (puVar22 != (ulong *)0x0);
      do {
        if ((uVar14 >> 0x10 & 1) != 0) goto LAB_031eee74;
        if (((uVar16 & 1) != 0) || (puVar21 = (ulong *)puVar21[1], puVar21 == (ulong *)0x0)) {
          pcVar26 = (char *)0x0;
          goto LAB_031eef1c;
        }
        uVar16 = *puVar21;
        uVar14 = (uint)uVar16;
      } while( true );
    }
    if ((puVar33 != (ulong *)0x0) && ((puVar22[2] & 0x1f) == 7)) {
      puVar22 = puVar33;
      while (FUN_031dbdbc(&local_80,puVar22,puVar6), local_80 == 0) {
        if ((local_70 & 1) != 0) {
          plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
          plVar34 = plVar9 + 1;
          do {
            lVar28 = *plVar34;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar4) {
              *(int *)plVar34 = (int)lVar28 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar28 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
        puVar22 = (ulong *)puVar22[1];
        if (puVar22 == (ulong *)0x0) goto LAB_031eecec;
      }
      if ((local_70 & 1) != 0) {
        plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar34 = plVar9 + 1;
        do {
          lVar28 = *plVar34;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar4) {
            *(int *)plVar34 = (int)lVar28 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar28 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      puVar22 = puVar33;
      do {
        uVar14 = (uint)*puVar22;
        if ((uVar14 >> 0x10 & 1) != 0) {
          uVar16 = CONCAT44(uVar14,uVar14) & 0xffff0000ffff;
          pcVar26 = (char *)puVar22[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                 POPCOUNT((char)(uVar16 >> 8))) + 2];
          goto LAB_031ef064;
        }
      } while (((*puVar22 & 1) == 0) && (puVar22 = (ulong *)puVar22[1], puVar22 != (ulong *)0x0));
      pcVar26 = (char *)0x0;
LAB_031ef064:
      if (*param_2 == 0) {
LAB_031ef2cc:
        local_a8 = 0;
        local_a0 = 0;
        local_b0 = 0;
      }
      else {
        lVar28 = param_2[1];
        if (pcVar26 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          sVar10 = strlen(pcVar26);
          pcVar13 = pcVar26 + sVar10;
        }
        uVar16 = FUN_031e198c(lVar28,pcVar26,pcVar13,1);
        if (uVar16 < 2) goto LAB_031ef2cc;
        FUN_031e32f0(&local_b0,param_2,uVar16);
      }
      uVar14 = (uint)*puVar33;
      if ((uVar14 >> 0x11 & 1) == 0) {
        uVar14 = 0;
      }
      else {
        uVar16 = CONCAT44(uVar14,uVar14) & 0x1ffff0001ffff;
        uVar14 = (uint)(ushort)puVar33[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                     POPCOUNT((char)(uVar16 >> 8)) +
                                                    POPCOUNT((char)(uVar16 >> 0x10))) + 2];
      }
      iVar7 = FUN_031eec90(param_1,&local_b0,puVar33,uVar14 + param_4,param_5);
      iVar30 = iVar7 + iVar30;
      if ((local_a0 & 1) != 0) {
        plVar9 = (long *)(local_a0 & 0xfffffffffffffffe);
        plVar34 = plVar9 + 1;
        do {
          lVar28 = *plVar34;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar4) {
            *(int *)plVar34 = (int)lVar28 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar28 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
  } while( true );
LAB_031eee74:
  uVar16 = CONCAT44(uVar14,uVar14) & 0xffff0000ffff;
  pcVar26 = (char *)puVar21[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) +
                            2];
LAB_031eef1c:
  if (*param_2 == 0) {
LAB_031ef024:
    uVar16 = 0;
    pbVar27 = (byte *)0x0;
    local_80 = 0;
    lVar28 = 0;
    local_78 = (byte *)0x0;
    local_70 = 0;
  }
  else {
    lVar28 = param_2[1];
    if (pcVar26 == (char *)0x0) {
      pcVar13 = (char *)0x0;
    }
    else {
      sVar10 = strlen(pcVar26);
      pcVar13 = pcVar26 + sVar10;
    }
    uVar16 = FUN_031e198c(lVar28,pcVar26,pcVar13,1);
    if (uVar16 < 2) goto LAB_031ef024;
    FUN_031e32f0(&local_80,param_2,uVar16);
    pbVar27 = local_78;
    if (local_78 == (byte *)0x0) {
LAB_031ef090:
      uVar16 = 0;
      lVar28 = 0;
    }
    else {
      pbVar17 = local_78;
      if ((*local_78 & 1) == 0) {
        do {
          pbVar17 = *(byte **)(pbVar17 + 8);
        } while ((*pbVar17 & 1) == 0);
      }
      if ((*(ulong *)(pbVar17 + 0x10) & 0x1f) != 8) {
        pbVar27 = (byte *)0x0;
        goto LAB_031ef090;
      }
      lVar28 = local_80;
      uVar16 = local_70;
      if ((local_70 & 1) != 0) {
        piVar1 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  if ((local_70 & 1) != 0) {
    plVar9 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar34 = plVar9 + 1;
    do {
      lVar5 = *plVar34;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar4) {
        *(int *)plVar34 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = (byte *)0x0;
  plVar34 = (long *)(uVar16 & 0xfffffffffffffffe);
  (**(code **)(*plVar34 + 0x50))(plVar34,lVar28,pbVar27,&local_80);
  iVar7 = (int)local_70;
  if ((local_68 & 1) != 0) {
    plVar11 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar9 = plVar11 + 1;
    do {
      lVar5 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if (iVar7 < 1) {
LAB_031ef424:
    if ((uVar16 & 1) != 0) {
      plVar9 = plVar34 + 1;
      do {
        lVar28 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar28 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar34 != (long *)0x0) && ((int)lVar28 == 1)) {
        (**(code **)(*plVar34 + 8))(plVar34);
      }
    }
    goto LAB_031eecec;
  }
  iVar7 = *(int *)((long)param_1 + 0x114);
  puVar22 = puVar33;
  do {
    uVar19 = *puVar22;
    if (((uint)uVar19 >> 2 & 1) != 0) {
      uVar19 = puVar22[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
      goto LAB_031ef190;
    }
    puVar22 = (ulong *)puVar22[1];
  } while (puVar22 != (ulong *)0x0);
  uVar19 = 0;
LAB_031ef190:
  puVar22 = (ulong *)PTR_DAT_047e5c90;
  do {
    uVar23 = *puVar22;
    if (((uint)uVar23 >> 2 & 1) != 0) {
      uVar23 = puVar22[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
      goto LAB_031ef1c0;
    }
    puVar22 = (ulong *)puVar22[1];
  } while (puVar22 != (ulong *)0x0);
  uVar23 = 0;
LAB_031ef1c0:
  if (uVar23 == uVar19) {
    puVar22 = puVar33;
    do {
      uVar14 = (uint)*puVar22;
      if ((uVar14 >> 0x10 & 1) != 0) {
        uVar19 = CONCAT44(uVar14,uVar14) & 0xffff0000ffff;
        uVar19 = puVar22[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2];
        goto LAB_031ef28c;
      }
    } while (((*puVar22 & 1) == 0) && (puVar22 = (ulong *)puVar22[1], puVar22 != (ulong *)0x0));
    uVar19 = 0;
LAB_031ef28c:
    uVar12 = 0;
  }
  else {
    puVar22 = puVar33;
    do {
      uVar19 = *puVar22;
      if (((uint)uVar19 >> 2 & 1) != 0) {
        uVar19 = puVar22[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
        goto LAB_031ef214;
      }
      puVar22 = (ulong *)puVar22[1];
    } while (puVar22 != (ulong *)0x0);
    uVar19 = 0;
LAB_031ef214:
    puVar22 = (ulong *)PTR_DAT_047e5c98;
    do {
      uVar23 = *puVar22;
      if (((uint)uVar23 >> 2 & 1) != 0) {
        uVar23 = puVar22[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
        goto LAB_031ef244;
      }
      puVar22 = (ulong *)puVar22[1];
    } while (puVar22 != (ulong *)0x0);
    uVar23 = 0;
LAB_031ef244:
    if (uVar23 != uVar19) goto LAB_031ef424;
    puVar22 = puVar33;
    do {
      uVar14 = (uint)*puVar22;
      if ((uVar14 >> 0x10 & 1) != 0) {
        uVar19 = CONCAT44(uVar14,uVar14) & 0xffff0000ffff;
        uVar19 = puVar22[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2];
        goto LAB_031ef380;
      }
    } while (((*puVar22 & 1) == 0) && (puVar22 = (ulong *)puVar22[1], puVar22 != (ulong *)0x0));
    uVar19 = 0;
LAB_031ef380:
    uVar12 = 1;
  }
  FUN_031c57bc(param_1,uVar12,param_2,param_3,uVar19,param_5 + param_4);
  iVar30 = iVar30 + 1;
  do {
    if (((byte)*puVar33 >> 1 & 1) != 0) {
      uVar19 = puVar33[3];
      goto LAB_031ef3bc;
    }
    puVar33 = (ulong *)puVar33[1];
  } while (puVar33 != (ulong *)0x0);
  uVar19 = 0;
LAB_031ef3bc:
  uVar23 = uVar19;
LAB_031ef3c0:
  FUN_031dbdbc(&local_80,uVar23,PTR_DAT_047e5c88);
  if (local_80 == 0) goto code_r0x031ef3e0;
  if ((local_70 & 1) != 0) {
    plVar11 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar9 = plVar11 + 1;
    do {
      lVar5 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11,lVar28);
    }
  }
  iVar2 = *(int *)(*param_1 + (long)(int)param_1[1] * 0x10 + -8);
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = (byte *)0x0;
  (**(code **)(*plVar34 + 0x50))(plVar34,lVar28,pbVar27,&local_80);
  if (0 < (int)local_70) {
    iVar25 = 0;
    do {
      local_98 = local_80 + (long)local_70._4_4_ * (long)iVar25;
      pbStack_90 = local_78;
      local_88 = local_68;
      if ((local_68 & 1) != 0) {
        piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar8 = FUN_031eec90(param_1,&local_98,uVar19,0,iVar7);
      iVar30 = iVar8 + iVar30;
      if ((local_88 & 1) != 0) {
        plVar11 = (long *)(local_88 & 0xfffffffffffffffe);
        plVar9 = plVar11 + 1;
        do {
          lVar28 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *(int *)plVar9 = (int)lVar28 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar28 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      iVar25 = iVar25 + 1;
      iVar7 = iVar7 + iVar2;
    } while (iVar25 < (int)local_70);
  }
  if ((local_68 & 1) != 0) {
    plVar11 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar9 = plVar11 + 1;
    do {
      lVar28 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar28 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar28 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  goto LAB_031ef424;
code_r0x031ef3e0:
  if ((local_70 & 1) != 0) {
    plVar11 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar9 = plVar11 + 1;
    do {
      lVar5 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  uVar23 = *(ulong *)(uVar23 + 8);
  if (uVar23 == 0) goto LAB_031ef424;
  goto LAB_031ef3c0;
}


