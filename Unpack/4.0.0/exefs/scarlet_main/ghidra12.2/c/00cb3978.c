/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb3978; name: FUN_00cb3978
 */


void FUN_00cb3978(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong *extraout_x1;
  ulong *extraout_x1_00;
  char *pcVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ulong *puVar15;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  puVar2 = PTR_DAT_047d1a08;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_a0 = 0;
  local_48 = (long *)0x8;
  plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar9,"Cloner");
  }
  local_48 = (long *)0xc0;
  lVar10 = (**(code **)puVar2)(0,&local_48,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(lVar10,"CloneImpl");
  }
  FUN_00cb44e4(lVar10);
  *plVar9 = lVar10;
  uStack_80 = 0;
  local_70 = 0;
  *(undefined1 *)(lVar10 + 0x5d) = 0;
  local_78 = 0;
  local_88 = plVar9;
  FUN_00cb42bc(&local_68,&local_a0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0
              );
  plVar9 = local_88;
  if (local_88 != (long *)0x0) {
    lVar10 = *local_88;
    if (lVar10 != 0) {
      FUN_00cb4718(lVar10);
      (**(code **)(puVar2 + 8))(0,lVar10,0);
    }
    (**(code **)(puVar2 + 8))(0,plVar9,0);
  }
  if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
    plVar9 = local_90 + 2;
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))();
    }
  }
  if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
    plVar9 = local_98 + 2;
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_98 + 0x18))();
    }
  }
  if (local_68 == (long *)0x0) {
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    local_a0 = 0;
    local_48 = (long *)0x8;
    plVar9 = (long *)(**(code **)puVar2)(0,&local_48,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar9,"Cloner");
    }
    local_48 = (long *)&DAT_000000c0;
    lVar10 = (**(code **)puVar2)(0,&local_48,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(lVar10,"CloneImpl");
    }
    FUN_00cb44e4(lVar10);
    *plVar9 = lVar10;
    uStack_80 = 0;
    local_78 = 1;
    local_70 = 0;
    *(undefined1 *)(lVar10 + 0x5d) = 0;
    local_88 = plVar9;
    FUN_00cb42bc(&local_48,&local_a0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38)
                 ,0);
    local_68 = local_48;
    plVar9 = local_88;
    local_48 = (long *)0x0;
    if (local_88 != (long *)0x0) {
      lVar10 = *local_88;
      if (lVar10 != 0) {
        FUN_00cb4718(lVar10);
        (**(code **)(puVar2 + 8))(0,lVar10,0);
      }
      (**(code **)(puVar2 + 8))(0,plVar9,0);
    }
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar9 = local_90 + 2;
      do {
        lVar10 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))();
      }
    }
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar9 = local_98 + 2;
      do {
        lVar10 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_98 + 0x18))();
      }
    }
    if (local_68 != (long *)0x0) goto LAB_00cb3b04;
LAB_00cb4048:
    local_a0 = 0;
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    local_48 = (long *)0x8;
    plVar9 = (long *)(**(code **)puVar2)(0,&local_48,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar9,"Cloner");
    }
    local_48 = (long *)0xc0;
    lVar10 = (**(code **)puVar2)(0,&local_48,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(lVar10,"CloneImpl");
    }
    FUN_00cb44e4(lVar10);
    *plVar9 = lVar10;
    uStack_80 = 0;
    local_78 = 1;
    local_70 = 0;
    *(undefined1 *)(*plVar9 + 0x5d) = 0;
    local_88 = plVar9;
    plVar11 = (long *)FUN_00cb6158(&local_a0,*(undefined8 *)(param_1 + 0x30),
                                   *(undefined8 *)(param_1 + 0x38));
    plVar9 = local_88;
    if (local_88 != (long *)0x0) {
      lVar10 = *local_88;
      if (lVar10 != 0) {
        FUN_00cb4718(lVar10);
        (**(code **)(puVar2 + 8))(0,lVar10,0);
      }
      (**(code **)(puVar2 + 8))(0,plVar9,0);
    }
    if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
      plVar9 = local_90 + 2;
      do {
        lVar10 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_90 + 0x18))();
      }
    }
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar9 = local_98 + 2;
      do {
        lVar10 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_98 + 0x18))();
      }
    }
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar9 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = (long *)*param_2;
    *param_2 = (long)plVar11;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar3 = plVar9 + 2;
      do {
        lVar10 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar9 = plVar11 + 2;
      do {
        lVar10 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if (param_3 == (long *)0x0) goto LAB_00cb3d58;
    local_a0 = 0x30;
    plVar9 = (long *)(**(code **)puVar2)(0,&local_a0,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar9,"hknpMaterialPalette");
    }
    plVar9[2] = 1;
    *(undefined2 *)(plVar9 + 3) = 0xf101;
    puVar2 = PTR_DAT_047ddb90 + 0x10;
    plVar9[4] = 0;
    plVar9[5] = 0;
    *plVar9 = (long)puVar2;
    plVar9[1] = 0xffffffff;
    plVar11 = (long *)*param_3;
    *param_3 = (long)plVar9;
    if ((plVar11 == (long *)0x0) || (plVar11[1] == 0)) goto LAB_00cb3d58;
    plVar9 = plVar11 + 2;
    do {
      lVar10 = *plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
LAB_00cb3b04:
    plVar9 = (long *)(**(code **)(*local_68 + 0x40))(local_68,PTR_DAT_047ddc18);
    puVar7 = PTR_DAT_047ddc28;
    if (plVar9 == (long *)0x0) goto LAB_00cb4048;
    if ((int)plVar9[1] < 2) goto LAB_00cb3d58;
    puVar15 = (ulong *)PTR_DAT_047ddc20;
    while (uVar16 = *puVar15, ((uint)uVar16 >> 3 & 1) == 0) {
      if (((uVar16 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
      goto LAB_00cb3b48;
    }
    if (puVar15 != (ulong *)0x0) {
      pcVar17 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
      goto LAB_00cb3b4c;
    }
LAB_00cb3b48:
    pcVar17 = (char *)0x0;
LAB_00cb3b4c:
    if (0 < (int)plVar9[1]) {
      lVar10 = 0;
      do {
        lVar18 = *plVar9;
        plVar11 = *(long **)(lVar18 + lVar10 * 0x18 + 0x10);
        if (plVar11 == (long *)0x0) {
LAB_00cb3ba0:
          pcVar12 = (char *)(*(ulong *)(lVar18 + lVar10 * 0x18 + 8) & 0xfffffffffffffffe);
joined_r0x00cb3bac:
          if ((pcVar12 != (char *)0x0) && (iVar8 = strcmp(pcVar17,pcVar12), iVar8 == 0)) {
            lVar10 = *(long *)(*plVar9 + lVar10 * 0x18 + 0x10);
            goto LAB_00cb3bfc;
          }
        }
        else {
          puVar13 = (undefined8 *)*plVar11;
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)puVar7;
            do {
              puVar15 = (ulong *)puVar7;
              if (((uint)*puVar13 >> 0xb & 1) != 0) {
                uVar4 = (uint)*puVar13 & 0x7ff;
                pcVar14 = (code *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                       POPCOUNT((char)(uVar4 >> 8))) + 2];
                if (pcVar14 != (code *)0x0) goto LAB_00cb3b80;
                break;
              }
              puVar13 = (undefined8 *)puVar13[1];
            } while (puVar13 != (undefined8 *)0x0);
          }
          else {
            pcVar14 = (code *)*puVar13;
LAB_00cb3b80:
            (*pcVar14)();
            puVar15 = extraout_x1;
            if (extraout_x1 == (ulong *)0x0) goto LAB_00cb3ba0;
          }
          do {
            uVar16 = *puVar15;
            if (((uint)uVar16 >> 3 & 1) != 0) {
              pcVar12 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
              goto joined_r0x00cb3bac;
            }
          } while (((uVar16 & 1) == 0) &&
                  (puVar1 = puVar15 + 1, puVar15 = (ulong *)*puVar1,
                  (ulong *)*puVar1 != (ulong *)0x0));
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)plVar9[1]);
    }
    lVar10 = 0;
LAB_00cb3bfc:
    puVar2 = PTR_DAT_047ddc28;
    puVar15 = (ulong *)PTR_DAT_047ddc30;
    while (uVar16 = *puVar15, ((uint)uVar16 >> 3 & 1) == 0) {
      if (((uVar16 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
      goto LAB_00cb3c18;
    }
    if (puVar15 != (ulong *)0x0) {
      pcVar17 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
      goto LAB_00cb3c1c;
    }
LAB_00cb3c18:
    pcVar17 = (char *)0x0;
LAB_00cb3c1c:
    if (0 < (int)plVar9[1]) {
      lVar18 = 0;
      do {
        lVar19 = *plVar9;
        plVar11 = *(long **)(lVar19 + lVar18 * 0x18 + 0x10);
        if (plVar11 == (long *)0x0) {
LAB_00cb3c74:
          pcVar12 = (char *)(*(ulong *)(lVar19 + lVar18 * 0x18 + 8) & 0xfffffffffffffffe);
joined_r0x00cb3cc4:
          if ((pcVar12 != (char *)0x0) && (iVar8 = strcmp(pcVar17,pcVar12), iVar8 == 0)) {
            lVar18 = *(long *)(*plVar9 + lVar18 * 0x18 + 0x10);
            goto LAB_00cb3cd0;
          }
        }
        else {
          puVar13 = (undefined8 *)*plVar11;
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)puVar2;
            do {
              puVar15 = (ulong *)puVar2;
              if (((uint)*puVar13 >> 0xb & 1) != 0) {
                uVar4 = (uint)*puVar13 & 0x7ff;
                pcVar14 = (code *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar4) +
                                                       POPCOUNT((char)(uVar4 >> 8))) + 2];
                if (pcVar14 != (code *)0x0) goto LAB_00cb3c54;
                break;
              }
              puVar13 = (undefined8 *)puVar13[1];
            } while (puVar13 != (undefined8 *)0x0);
          }
          else {
            pcVar14 = (code *)*puVar13;
LAB_00cb3c54:
            (*pcVar14)();
            puVar15 = extraout_x1_00;
            if (extraout_x1_00 == (ulong *)0x0) goto LAB_00cb3c74;
          }
          do {
            uVar16 = *puVar15;
            if (((uint)uVar16 >> 3 & 1) != 0) {
              pcVar12 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
              goto joined_r0x00cb3cc4;
            }
          } while (((uVar16 & 1) == 0) &&
                  (puVar1 = puVar15 + 1, puVar15 = (ulong *)*puVar1,
                  (ulong *)*puVar1 != (ulong *)0x0));
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)plVar9[1]);
    }
    lVar18 = 0;
LAB_00cb3cd0:
    if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
      plVar9 = (long *)(lVar10 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9 = (long *)*param_2;
    *param_2 = lVar10;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar11 = plVar9 + 2;
      do {
        lVar10 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    if (param_3 == (long *)0x0) goto LAB_00cb3d58;
    if ((lVar18 != 0) && (*(long *)(lVar18 + 8) != 0)) {
      plVar9 = (long *)(lVar18 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar11 = (long *)*param_3;
    *param_3 = lVar18;
    if ((plVar11 == (long *)0x0) || (plVar11[1] == 0)) goto LAB_00cb3d58;
    plVar9 = plVar11 + 2;
    do {
      lVar10 = *plVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x18))();
  }
LAB_00cb3d58:
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar9 = local_68 + 2;
    do {
      lVar10 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  return;
}


