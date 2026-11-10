/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a76afc; name: FUN_00a76afc
 */


void FUN_00a76afc(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x40) != '\x01') {
    if (*(char *)(param_1 + 0x40) != '\0') {
      return;
    }
    uVar11 = FUN_01dd9798(*(undefined8 *)(param_1 + 0x30));
    if ((uVar11 & 1) == 0) {
      return;
    }
    FUN_0129e8c0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
    return;
  }
  lVar12 = *(long *)(param_1 + 0x30);
  iVar10 = *(int *)(lVar12 + 0x108);
  if (iVar10 == 3) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00f3e8f8(&local_40,lVar12 + 0x78);
    puVar8 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      if (*(short *)((long)local_40 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_40 + 0x1a);
        sVar15 = *(short *)((long)local_40 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar15) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_00a76e00;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a76e00:
            bVar9 = false;
          }
          if (bVar9) {
            plVar16 = (long *)0x0;
            if (local_40[2] != 0) {
              plVar16 = (long *)(local_40[2] + -0x28);
            }
            goto LAB_00a76eb8;
          }
          sVar15 = sVar3;
        } while (sVar3 != 0);
      }
      plVar16 = (long *)0x0;
LAB_00a76eb8:
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar15 = *psVar1;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_18 = *puVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_18);
        }
      }
      else if (sVar15 == 0) {
LAB_00a7731c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar16 != (long *)0x0) {
        lVar12 = plVar16[0x95];
        iVar10 = *(int *)(lVar12 + 8);
        if (*(int *)(lVar12 + 0x1c) == 0) {
          iVar13 = *(int *)(lVar12 + 0xc);
          iVar4 = 0;
          if (iVar13 != 0) {
            iVar4 = iVar10 / iVar13;
          }
          iVar13 = iVar10 - iVar4 * iVar13;
        }
        else {
          iVar13 = 0;
          if (*(int *)(lVar12 + 0x10) != 0) {
            iVar13 = iVar10 / *(int *)(lVar12 + 0x10);
          }
        }
        bVar9 = iVar13 == 0;
        lVar12 = plVar16[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
          goto LAB_00a76bfc;
        }
LAB_00a77260:
        if (sVar15 == 0) {
LAB_00a77364:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_00a76bfc;
      }
    }
LAB_00a76bf8:
    bVar9 = false;
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 == 0) {
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        FUN_00f3e8f8(&local_40,lVar12 + 0x38);
        puVar8 = local_40;
        if (local_40 != (undefined8 *)0x0) {
          if (*(short *)((long)local_40 + 0x1a) != 0) {
            psVar1 = (short *)((long)local_40 + 0x1a);
            sVar15 = *(short *)((long)local_40 + 0x1a);
            do {
              sVar3 = *psVar1;
              if (sVar3 == sVar15) {
                cVar7 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar9) {
                  *psVar1 = sVar15 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 != '\0') goto LAB_00a76bb8;
                bVar9 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00a76bb8:
                bVar9 = false;
              }
              if (bVar9) {
                plVar16 = (long *)0x0;
                if (local_40[2] != 0) {
                  plVar16 = (long *)(local_40[2] + -0x28);
                }
                goto LAB_00a76f48;
              }
              sVar15 = sVar3;
            } while (sVar3 != 0);
          }
          plVar16 = (long *)0x0;
LAB_00a76f48:
          psVar1 = (short *)(local_40 + 3);
          do {
            sVar15 = *psVar1;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar15 == 1) {
            piVar2 = (int *)((long)local_40 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_18 = *puVar8;
              FUN_00c44438(lVar12 + 0x8040,&local_18);
            }
          }
          else if (sVar15 == 0) goto LAB_00a7731c;
          bVar9 = false;
          if (plVar16 == (long *)0x0) goto LAB_00a76bfc;
          lVar12 = plVar16[0x95];
          iVar10 = *(int *)(lVar12 + 8);
          if (*(int *)(lVar12 + 0x1c) == 0) {
            iVar13 = 0;
            if (*(int *)(lVar12 + 0xc) != 0) {
              iVar13 = iVar10 / *(int *)(lVar12 + 0xc);
            }
            if (iVar13 == 0) goto LAB_00a77238;
LAB_00a76f88:
            lVar12 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
            bVar9 = lVar12 != 0;
          }
          else {
            iVar13 = *(int *)(lVar12 + 0x10);
            iVar4 = 0;
            if (iVar13 != 0) {
              iVar4 = iVar10 / iVar13;
            }
            if (iVar10 != iVar4 * iVar13) goto LAB_00a76f88;
LAB_00a77238:
            bVar9 = false;
          }
          lVar12 = plVar16[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar15 != 1) goto LAB_00a77260;
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
          goto LAB_00a76bfc;
        }
      }
      goto LAB_00a76bf8;
    }
    lVar12 = FUN_0119579c();
    bVar9 = lVar12 != 0;
  }
LAB_00a76bfc:
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),4,bVar9);
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),7,bVar9);
  lVar12 = FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
  FUN_015d82d8(*(undefined8 *)(param_1 + 0x38),0xc,lVar12 != 0);
  lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
  if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) {
LAB_00a76c68:
    lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0xb0);
    if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) goto LAB_00a76cfc;
    lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0xb0);
    cVar7 = DAT_00000381;
    if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar15 = *(short *)(lVar12 + 0x1a);
LAB_00a76e28:
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00a76e4c;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a76e4c:
        bVar9 = false;
      }
      cVar7 = DAT_00000381;
      if (!bVar9) goto code_r0x00a76e54;
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 != 0) {
        cVar7 = *(char *)(lVar12 + 0x359);
        lVar14 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
          goto joined_r0x00a771e4;
        }
        if (sVar15 == 0) goto LAB_00a77364;
        if (cVar7 != '\0') goto LAB_00a76c98;
        goto LAB_00a76cfc;
      }
    }
joined_r0x00a771e4:
    if (cVar7 == '\0') goto LAB_00a76cfc;
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
    cVar7 = DAT_00000381;
    if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar15 = *(short *)(lVar12 + 0x1a);
LAB_00a76d54:
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00a76d78;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a76d78:
        bVar9 = false;
      }
      cVar7 = DAT_00000381;
      if (!bVar9) goto code_r0x00a76d80;
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 != 0) {
        cVar7 = *(char *)(lVar12 + 0x359);
        lVar14 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
        }
        else if (sVar15 == 0) goto LAB_00a77364;
      }
    }
joined_r0x00a771cc:
    if (cVar7 == '\0') goto LAB_00a76c68;
  }
LAB_00a76c98:
  lVar12 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar12 + 0x108) == 3) {
    if (*(long *)(lVar12 + 0x1b8) != 0) {
      *(undefined4 *)(lVar12 + 0x170) = 0x20;
      *(undefined4 *)(*(long *)(lVar12 + 0x1b8) + 0x30) = 0x20;
    }
  }
  else {
    uVar11 = FUN_01dd8af4();
    lVar12 = *(long *)(param_1 + 0x30);
    if ((uVar11 & 1) == 0) {
      FUN_0129e8c0(*(undefined8 *)(lVar12 + 0x150));
LAB_00a76cfc:
      lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
      if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
        cVar7 = DAT_00000381;
        if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar12 + 0x1a);
          sVar15 = *(short *)(lVar12 + 0x1a);
LAB_00a76e70:
          sVar3 = *psVar1;
          if (sVar3 == sVar15) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_00a76e94;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a76e94:
            bVar9 = false;
          }
          cVar7 = DAT_00000381;
          if (!bVar9) goto code_r0x00a76e9c;
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 != 0) {
            cVar7 = *(char *)(lVar12 + 0x359);
            lVar14 = *(long *)(lVar12 + 8);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar15 = *psVar1;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar15 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
            }
            else if (sVar15 == 0) goto LAB_00a77364;
          }
        }
joined_r0x00a771fc:
        if (cVar7 != '\0') {
          FUN_01dd8eec(*(undefined8 *)(param_1 + 0x30));
          return;
        }
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
      if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
        cVar7 = DAT_00000381;
        if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar12 + 0x1a);
          sVar15 = *(short *)(lVar12 + 0x1a);
LAB_00a77074:
          sVar3 = *psVar1;
          if (sVar3 == sVar15) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_00a77098;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a77098:
            bVar9 = false;
          }
          cVar7 = DAT_00000381;
          if (!bVar9) goto code_r0x00a770a0;
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 != 0) {
            cVar7 = *(char *)(lVar12 + 0x359);
            lVar14 = *(long *)(lVar12 + 8);
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar15 = *psVar1;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar15 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
            }
            else if (sVar15 == 0) goto LAB_00a77364;
          }
        }
joined_r0x00a77214:
        if (cVar7 != '\0') {
          FUN_01dd58b8(*(undefined8 *)(param_1 + 0x30));
          FUN_0129e8c0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
          return;
        }
      }
      FUN_012977e0(param_1);
      return;
    }
    if (*(long *)(lVar12 + 0x1b8) != 0) {
      *(undefined4 *)(lVar12 + 0x170) = 0x13;
      *(undefined4 *)(*(long *)(lVar12 + 0x1b8) + 0x30) = 0x13;
    }
  }
  return;
code_r0x00a76d80:
  sVar15 = sVar3;
  if (sVar3 == 0) goto joined_r0x00a771cc;
  goto LAB_00a76d54;
code_r0x00a76e54:
  sVar15 = sVar3;
  if (sVar3 == 0) goto joined_r0x00a771e4;
  goto LAB_00a76e28;
code_r0x00a76e9c:
  sVar15 = sVar3;
  if (sVar3 == 0) goto joined_r0x00a771fc;
  goto LAB_00a76e70;
code_r0x00a770a0:
  sVar15 = sVar3;
  if (sVar3 == 0) goto joined_r0x00a77214;
  goto LAB_00a77074;
}


