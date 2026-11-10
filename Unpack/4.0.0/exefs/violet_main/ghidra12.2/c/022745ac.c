/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022745ac; name: FUN_022745ac
 */


void FUN_022745ac(long param_1,undefined8 *param_2)

{
  undefined1 **ppuVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  code *pcVar15;
  short sVar16;
  long *plVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  long local_80;
  long lStack_78;
  long *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  long *local_50;
  undefined1 **local_48;
  undefined1 *local_38;
  
  lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  plVar14 = DAT_0485a0e0;
  lVar10 = *(long *)(lVar10 + 8);
  lStack_78 = *(long *)(param_1 + 0x1a8);
  local_80 = *(long *)(param_1 + 0x1a0);
  if (*(char *)(param_1 + 0x1b4) != '\0') {
    if (DAT_0485a0e0 != (long *)0x0) {
      plVar17 = DAT_0485a0e0 + 5;
      do {
        lVar9 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = (int)lVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar18 = plVar14[0x2f];
    plVar17 = (long *)plVar14[0x32];
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    uVar11 = plVar14[0xf];
    if ((uVar11 & uVar11 - 1) == 0) {
      plVar12 = *(long **)(plVar14[0xe] + (uVar11 - 1 & uVar18) * 8);
      do {
        do {
          plVar12 = (long *)*plVar12;
        } while (plVar12[1] != uVar18);
      } while (plVar12[2] != uVar18);
    }
    else {
      if (uVar18 < uVar11) {
        uVar11 = uVar18;
      }
      else {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar18 / uVar11;
        }
        uVar11 = uVar18 - uVar8 * uVar11;
      }
      plVar12 = *(long **)(plVar14[0xe] + uVar11 * 8);
      do {
        do {
          plVar12 = (long *)*plVar12;
        } while (plVar12[1] != uVar18);
      } while (plVar12[2] != uVar18);
    }
    lVar13 = *(long *)(plVar14[7] + (long)*(int *)((long)plVar12 + 0x30) * 0x20);
    lVar9 = 0;
    if (*(char *)(lVar13 + 0xd0) != '\0') {
      lVar9 = lVar13;
    }
    uVar22 = *(undefined8 *)(lVar9 + 0x48);
    uVar21 = *(undefined8 *)(lVar9 + 0x40);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) + (float)((ulong)uVar21 >> 0x20),
                        (float)local_80 + (float)uVar21);
    lStack_78 = CONCAT44((float)((ulong)lStack_78 >> 0x20) + (float)((ulong)uVar22 >> 0x20),
                         (float)lStack_78 + (float)uVar22);
    plVar17 = plVar14 + 5;
    do {
      lVar9 = *plVar17;
      iVar6 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar9 == 0) goto LAB_02274b80;
  }
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  plVar14 = (long *)local_48[9];
  plVar14[0x1d] = lStack_78;
  plVar14[0x1c] = local_80;
  if (*(char *)((long)plVar14 + 0xf4) == '\0') {
    *(undefined1 *)((long)plVar14 + 0xf4) = 1;
    (**(code **)(*plVar14 + 0x78))(plVar14);
  }
  if (local_48 != (undefined1 **)0x0) {
    ppuVar1 = local_48 + 5;
    do {
      iVar6 = *(int *)ppuVar1;
      iVar7 = iVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar5) {
        *(int *)ppuVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if (iVar6 == 0) {
LAB_02274b80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  fVar23 = (float)((double)lVar10 / 1000000000.0);
  iVar6 = *(int *)(param_1 + 0x1d0);
  if (iVar6 == 2) {
    fVar19 = *(float *)(param_1 + 0x1dc);
    if ((*(float *)(param_1 + 0x1d8) < fVar19) && (1.1920929e-07 < fVar19)) {
      fVar23 = *(float *)(param_1 + 0x1d8) + fVar23;
      lVar10 = *(long *)(param_1 + 0x1c0);
      *(float *)(param_1 + 0x1d8) = fVar23;
      if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
        uVar20 = NEON_fminnm(fVar23 / fVar19,0x3f800000);
        psVar2 = (short *)(lVar10 + 0x1a);
        sVar16 = *(short *)(lVar10 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar16) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_02274904;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02274904:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar10 + 0x10) != 0) {
              plVar14 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
              lVar10 = FUN_00c41638(plVar14);
              if (lVar10 != 0) {
                FUN_00c41638(plVar14);
                FUN_01a40a18(uVar20);
                lVar10 = FUN_00c41638(plVar14);
                *(ulong *)(lVar10 + 0x108) = CONCAT44(uVar20,(int)*(undefined8 *)(lVar10 + 0x108));
                *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(lVar10 + 0x100);
              }
              (**(code **)(*plVar14 + 0x60))(plVar14);
            }
            break;
          }
          sVar16 = sVar3;
        } while (sVar3 != 0);
      }
    }
    if (*(char *)(param_1 + 0x1d4) == '\0') {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x1c0);
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar10 + 0x1a);
      sVar16 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02274a44;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02274a44:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar10 + 0x10) != 0) {
            plVar14 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
            FUN_013e0f3c(plVar14);
            *(undefined4 *)(param_1 + 0x1d8) = 0;
            uVar20 = 3;
            goto LAB_02274a74;
          }
          break;
        }
        sVar16 = sVar3;
      } while (sVar3 != 0);
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 != 3) {
        return;
      }
      lVar10 = *(long *)(param_1 + 0x1c0);
      if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar10 + 0x1a);
        sVar16 = *(short *)(lVar10 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar16) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_0227494c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0227494c:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar10 + 0x10) != 0) {
              plVar14 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
              lVar10 = FUN_00c41638(plVar14);
              if (lVar10 != 0) {
                fVar23 = *(float *)(param_1 + 0x1d8) + fVar23;
                fVar19 = *(float *)(param_1 + 0x1e0);
                *(float *)(param_1 + 0x1d8) = fVar23;
                if ((fVar23 < fVar19) && (1.1920929e-07 < fVar19)) {
                  fVar23 = (float)NEON_fminnm(fVar23 / fVar19,0x3f800000);
                  FUN_00c41638(plVar14);
                  FUN_01a40a18(1.0 - fVar23);
                  lVar10 = FUN_00c41638(plVar14);
                  *(ulong *)(lVar10 + 0x108) =
                       CONCAT44(1.0 - fVar23,(int)*(undefined8 *)(lVar10 + 0x108));
                  *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(lVar10 + 0x100);
                  fVar23 = *(float *)(param_1 + 0x1d8);
                  fVar19 = *(float *)(param_1 + 0x1e0);
                }
                if (fVar23 < fVar19 + *(float *)(param_1 + 0x1b0)) goto LAB_022749f4;
              }
              FUN_010b70f8(plVar14);
              FUN_00c9e664(&local_68,param_1 + 0xe8);
              lVar10 = 0;
              if (local_60 != (long *)0x0) {
                lVar10 = local_60[9];
              }
              local_38 = auStack_58;
              local_50 = (long *)(lVar10 + 0x108);
              local_48 = &local_38;
              FUN_018e39b4(local_50,&local_50);
              if (local_60 != (long *)0x0) {
                plVar17 = local_60 + 5;
                do {
                  lVar10 = *plVar17;
                  iVar6 = (int)lVar10 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar5) {
                    *(int *)plVar17 = iVar6;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*local_60 + 0x10))();
                }
                else if ((int)lVar10 == 0) goto LAB_02274b80;
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x60))();
              }
              *(undefined4 *)(param_1 + 0x1d0) = 4;
LAB_022749f4:
              pcVar15 = *(code **)(*plVar14 + 0x60);
              goto LAB_02274a00;
            }
            break;
          }
          sVar16 = sVar3;
        } while (sVar3 != 0);
      }
      uVar20 = 4;
      goto LAB_022747b0;
    }
    if (*(long *)(param_1 + 0x128) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x128) + 0x1e8) & 1) == 0) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x1c0);
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar10 + 0x1a);
      sVar16 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar16) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar16 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02274884;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02274884:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar10 + 0x10) != 0) {
            plVar14 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
            FUN_010ff8f0(plVar14,param_1 + 0x120);
            FUN_00c705b8(plVar14,1);
            FUN_01101dbc(plVar14,1,0);
            *(undefined4 *)(param_1 + 0x1d8) = 0;
            if ((1.1920929e-07 < *(float *)(param_1 + 0x1dc)) &&
               (lVar10 = FUN_00c41638(plVar14), lVar10 != 0)) {
              FUN_00c41638(plVar14);
              FUN_01a40a18(0);
              lVar10 = FUN_00c41638(plVar14);
              *(ulong *)(lVar10 + 0x108) = *(ulong *)(lVar10 + 0x108) & 0xffffffff;
              *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(lVar10 + 0x100);
            }
            uVar20 = 2;
LAB_02274a74:
            *(undefined4 *)(param_1 + 0x1d0) = uVar20;
            pcVar15 = *(code **)(*plVar14 + 0x60);
LAB_02274a00:
            (*pcVar15)(plVar14);
            return;
          }
          break;
        }
        sVar16 = sVar3;
      } while (sVar3 != 0);
    }
  }
  uVar20 = 3;
LAB_022747b0:
  *(undefined4 *)(param_1 + 0x1d0) = uVar20;
  return;
}


