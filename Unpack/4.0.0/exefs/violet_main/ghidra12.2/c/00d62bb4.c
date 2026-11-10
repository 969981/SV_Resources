/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d62bb4; name: FUN_00d62bb4
 */


void FUN_00d62bb4(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  ulong uVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 extraout_x1;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  short sVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  long *local_118;
  undefined8 *local_110;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  long *local_e8;
  long alStack_e0 [14];
  
  if ((*(long *)(param_2 + 0xb0) == 0) || (*(short *)(*(long *)(param_2 + 0xb0) + 0x1a) == 0)) {
    plVar13 = (long *)FUN_00d63ba4(param_2);
    if ((*plVar13 != 0) &&
       (((*(short *)(*plVar13 + 0x1a) != 0 && (lVar17 = *plVar13, lVar17 != 0)) &&
        (*(short *)(lVar17 + 0x1a) != 0)))) {
      psVar1 = (short *)(lVar17 + 0x1a);
      sVar21 = *(short *)(lVar17 + 0x1a);
LAB_00d62c20:
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00d62c44;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d62c44:
        bVar7 = false;
      }
      if (!bVar7) goto code_r0x00d62c4c;
      lVar17 = *(long *)(lVar17 + 0x10);
      if (lVar17 != 0) {
        plVar13 = (long *)(lVar17 + -0x28);
        local_100 = &LAB_00ef7ac8;
        local_f8 = FUN_00a955a4;
        local_f0 = &LAB_00a955a8;
        local_e8 = (long *)&LAB_00a955b4;
        alStack_e0[0] = param_2;
        FUN_01e0cdb0(plVar13,&local_100);
        pcVar10 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (undefined1 *)0x0;
          local_e8 = (long *)0x0;
          local_100 = (undefined1 *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar10)(alStack_e0);
        }
        local_100 = &LAB_01e196d8;
        local_f8 = FUN_00a955c0;
        local_f0 = &LAB_00a955c4;
        local_e8 = (long *)&LAB_00a955d0;
        alStack_e0[0] = param_2;
        FUN_01e0ce28(plVar13,&local_100);
        pcVar10 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (undefined1 *)0x0;
          local_e8 = (long *)0x0;
          local_100 = (undefined1 *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar10)(alStack_e0);
        }
        lVar17 = *(long *)(lVar17 + 8);
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar21 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar21 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar21 == 0) goto LAB_00d63174;
      }
    }
  }
LAB_00d62c68:
  if (*(char *)(param_2 + 0x1c1) == '\0') {
    FUN_00d63684(param_2);
  }
  fVar24 = (float)param_1;
  if (*(char *)(param_2 + 0x378) != '\0') {
    if (0.0 < *(float *)(param_2 + 0x37c)) {
      *(float *)(param_2 + 0x37c) = *(float *)(param_2 + 0x37c) - fVar24;
    }
    else {
      local_100 = (undefined1 *)0x13ee4f04b1568f34;
      local_f8 = (code *)0x3c5d235;
      local_f0 = (undefined1 *)0xf;
      local_e8 = (long *)0x0;
      iVar11 = FUN_00d93250(param_2,&local_100);
      local_100 = (undefined1 *)0x7060a834bf10ce7f;
      local_f8 = (code *)0x3c777c3;
      local_f0 = (undefined1 *)0x10;
      local_e8 = (long *)0x0;
      uVar14 = FUN_00d93028(param_2,&local_100);
      if ((iVar11 == 1) && ((uVar14 & 1) != 0)) {
        local_100 = (undefined1 *)CONCAT44(local_100._4_4_,1);
        FUN_00d70cac(param_2,&local_100,0);
        *(undefined1 *)(param_2 + 0x378) = 0;
      }
    }
  }
  if (*(int *)(param_2 + 0x1c4) == -1) {
    FUN_00d64758(param_2);
  }
  if (*(char *)(param_2 + 0x1c0) != '\0') {
    local_100 = (undefined1 *)0xbe9738c4a8c8e3ba;
    local_f8 = (code *)0x3c84c6b;
    local_f0 = (undefined1 *)0xd;
    local_e8 = (long *)0x0;
    uVar14 = FUN_00d63848(param_2,&local_100);
    if (((uVar14 & 1) == 0) && (iVar11 = *(int *)(param_2 + 0x1c4), 0 < iVar11)) {
      fVar23 = *(float *)(param_2 + 0x1c8) - fVar24;
      *(float *)(param_2 + 0x1c8) = fVar23;
      if (fVar23 < 0.0) {
        uVar14 = *(ulong *)(param_2 + 0x48);
        uVar3 = *(ulong *)(param_2 + 0x50);
        uVar19 = uVar3 ^ uVar14;
        *(ulong *)(param_2 + 0x48) = uVar19 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar19 << 0x10;
        *(ulong *)(param_2 + 0x50) = uVar19 >> 0x1b | uVar19 << 0x25;
        *(float *)(param_2 + 0x1c8) = (float)(uVar3 + uVar14) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
        FUN_00d6b608(param_2,0);
        iVar11 = *(int *)(param_2 + 0x1c4);
      }
      if (1 < iVar11) {
        fVar23 = *(float *)(param_2 + 0x1e8) - fVar24;
        *(float *)(param_2 + 0x1e8) = fVar23;
        if (fVar23 < 0.0) {
          uVar14 = *(ulong *)(param_2 + 0x48);
          uVar3 = *(ulong *)(param_2 + 0x50);
          uVar19 = uVar3 ^ uVar14;
          *(ulong *)(param_2 + 0x48) = uVar19 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar19 << 0x10;
          *(ulong *)(param_2 + 0x50) = uVar19 >> 0x1b | uVar19 << 0x25;
          *(float *)(param_2 + 0x1e8) = (float)(uVar3 + uVar14) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
          FUN_00d6b608(param_2,1);
          iVar11 = *(int *)(param_2 + 0x1c4);
        }
        if (2 < iVar11) {
          uVar14 = 2;
          lVar17 = 0x208;
          do {
            fVar23 = *(float *)(param_2 + lVar17) - fVar24;
            *(float *)(param_2 + lVar17) = fVar23;
            if (fVar23 < 0.0) {
              if (uVar14 < 6) {
                uVar3 = *(ulong *)(param_2 + 0x48);
                uVar19 = *(ulong *)(param_2 + 0x50);
                uVar20 = uVar19 ^ uVar3;
                *(ulong *)(param_2 + 0x48) =
                     uVar20 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar20 << 0x10;
                *(ulong *)(param_2 + 0x50) = uVar20 >> 0x1b | uVar20 << 0x25;
                *(float *)(param_2 + lVar17) =
                     (float)(uVar19 + uVar3) * 5.421011e-20 * 4.0 + 0.0 + 1.0;
              }
              FUN_00d6b608(param_2,uVar14 & 0xffffffff);
              iVar11 = *(int *)(param_2 + 0x1c4);
            }
            uVar14 = uVar14 + 1;
            lVar17 = lVar17 + 0x20;
          } while ((long)uVar14 < (long)iVar11);
        }
      }
    }
  }
  if (*(char *)(param_2 + 0x1c2) != '\0') {
    FUN_00d6d820(param_2);
  }
  if (*(char *)(param_2 + 0x28c) != '\0') {
    FUN_00d63508(param_1,param_2);
  }
  if (*(char *)(param_2 + 0x28d) != '\0') {
    FUN_00d6b874(param_1,param_2);
  }
  lVar17 = *(long *)(param_2 + 0xa0);
  if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar21 = *(short *)(lVar17 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00d63020;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d63020:
        bVar7 = false;
      }
      if (bVar7) {
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 != 0) {
          plVar13 = (long *)(lVar17 + -0x28);
          local_f0 = (undefined1 *)0x7;
          local_e8 = (long *)0x0;
          local_100 = &DAT_afc4d6c05abef19e;
          local_f8 = (code *)0x3c7b602;
          FUN_00f425a4(&local_118,plVar13,&local_100);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
          if (((local_118 != (long *)0x0) && (local_110 != (undefined8 *)0x0)) &&
             (*(short *)((long)local_110 + 0x1a) != 0)) {
            iVar11 = (**(code **)(*local_118 + 0x20))();
            puVar9 = PTR_DAT_047d3e30;
            puVar8 = PTR_DAT_047d3e28;
            if (iVar11 != 0) {
              iVar22 = 0;
              uVar16 = extraout_x1;
              goto LAB_00d630d8;
            }
          }
          uVar16 = 1;
          goto LAB_00d63128;
        }
        break;
      }
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_00d62d08;
code_r0x00d62c4c:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_00d62c68;
  goto LAB_00d62c20;
  while( true ) {
    iVar22 = iVar22 + 1;
    uVar16 = 1;
    if (iVar11 == iVar22) break;
LAB_00d630d8:
    if (((local_118 == (long *)0x0) || (local_110 == (undefined8 *)0x0)) ||
       (*(short *)((long)local_110 + 0x1a) == 0)) {
      plVar15 = (long *)puVar9;
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8,uVar16), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar8);
      }
    }
    else {
      plVar15 = (long *)(**(code **)(*local_118 + 0x28))(local_118,iVar22);
    }
    if (*plVar15 == 0x7ab4a1e742c57ea) {
      uVar16 = 0;
      break;
    }
  }
LAB_00d63128:
  local_100 = &DAT_afc4d6c05abef19e;
  local_f8 = (code *)0x3c7b602;
  local_f0 = (undefined1 *)0x7;
  local_e8 = (long *)0x0;
  FUN_00d5ea58(plVar13,uVar16,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_100 = (undefined1 *)*local_110;
        FUN_00c44438(lVar18 + 0x8040,&local_100);
      }
    }
    else if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar17 = *(long *)(lVar17 + 0x70);
  psVar1 = (short *)(lVar17 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar21 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  else if (sVar21 == 0) {
LAB_00d63174:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00d62d08:
  if (*(char *)(param_2 + 0x398) != '\0') {
    FUN_00d6e6d0(param_1,param_2);
  }
  if (*(char *)(param_2 + 0x3d4) != '\0') {
    plVar13 = (long *)FUN_00e704ec(param_2);
    lVar17 = *plVar13;
    if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar17 + 0x1a);
      sVar21 = *(short *)(lVar17 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar21) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar21 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00d62f5c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d62f5c:
          bVar7 = false;
        }
        if (bVar7) {
          lVar17 = *(long *)(lVar17 + 0x10);
          if (lVar17 == 0) {
            return;
          }
          cVar6 = *(char *)(lVar17 + 0x48);
          lVar18 = *(long *)(lVar17 + 8);
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar21 = *psVar1;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar21 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))();
          }
          else if (sVar21 == 0) goto LAB_00d63174;
          if (cVar6 == '\0') {
            return;
          }
          plVar13 = (long *)FUN_00e704ec(param_2);
          if (*plVar13 == 0) {
            return;
          }
          if (*(short *)(*plVar13 + 0x1a) == 0) {
            return;
          }
          lVar17 = *plVar13;
          if (lVar17 == 0) {
            return;
          }
          if (*(short *)(lVar17 + 0x1a) == 0) {
            return;
          }
          psVar1 = (short *)(lVar17 + 0x1a);
          sVar21 = *(short *)(lVar17 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar21) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar21 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_00d632a0;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00d632a0:
              bVar7 = false;
            }
            if (bVar7) {
              lVar17 = *(long *)(lVar17 + 0x10);
              if (lVar17 == 0) {
                return;
              }
              *(undefined1 *)(lVar17 + 0x49) = 0;
              lVar18 = *(long *)(lVar17 + 8);
              psVar1 = (short *)(lVar18 + 0x1a);
              do {
                sVar21 = *psVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar21 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar21 == 1) {
                *(undefined8 *)(lVar18 + 0x10) = 0;
                (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))();
                return;
              }
              if (sVar21 != 0) {
                return;
              }
              goto LAB_00d63174;
            }
            sVar21 = sVar4;
            if (sVar4 == 0) {
              return;
            }
          } while( true );
        }
        sVar21 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return;
}


