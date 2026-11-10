/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c4fc4; name: FUN_018c4fc4
 */


undefined4 FUN_018c4fc4(long param_1)

{
  short *psVar1;
  int *piVar2;
  ulong uVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  short sVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_28;
  
  plVar10 = (long *)FUN_01400aa8();
  if ((((*plVar10 == 0) || (*(short *)(*plVar10 + 0x1a) == 0)) || (lVar12 = *plVar10, lVar12 == 0))
     || (*(short *)(lVar12 + 0x1a) == 0)) {
LAB_018c5004:
    return *(undefined4 *)(param_1 + 0x40);
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar16 = *(short *)(lVar12 + 0x1a);
LAB_018c5030:
  sVar4 = *psVar1;
  if (sVar4 == sVar16) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar16 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_018c5054;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_018c5054:
    bVar7 = false;
  }
  if (!bVar7) {
    sVar16 = sVar4;
    if (sVar4 == 0) goto LAB_018c5004;
    goto LAB_018c5030;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) goto LAB_018c5004;
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (puVar17 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar17 + 3);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_28 = *puVar17;
        FUN_00c44438(lVar13 + 0x8040,&local_28);
      }
    }
    else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  fVar22 = *(float *)(param_1 + 0xbc) + 0.0 + *(float *)(param_1 + 0xc0);
  if (((*(long *)(param_1 + 0x88) != 0) && (*(short *)(*(long *)(param_1 + 0x88) + 0x1a) != 0)) &&
     ((lVar13 = *(long *)(param_1 + 0x88), lVar13 != 0 && (*(short *)(lVar13 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar16 = *(short *)(lVar13 + 0x1a);
LAB_018c5698:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_018c56bc;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_018c56bc:
      bVar7 = false;
    }
    if (!bVar7) goto code_r0x018c56c4;
    lVar13 = *(long *)(lVar13 + 0x10);
    if (lVar13 == 0) goto LAB_018c50d4;
    lVar14 = *(long *)(lVar13 + 0x1c0);
    if (lVar14 == 0) {
      uVar11 = 1;
    }
    else {
      if (*(char *)(lVar14 + 0x728) == '\0') {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)(lVar14 + 0x14d4);
      }
      uVar11 = FUN_01e1d84c(param_1,uVar18);
      uVar11 = uVar11 & 0xffffffff;
    }
    lVar14 = *(long *)(lVar13 + 0x70);
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
    }
    else if (sVar16 == 0) goto LAB_018c5264;
    if ((uVar11 & 1) != 0) goto LAB_018c50d4;
    goto LAB_018c50dc;
  }
LAB_018c50d4:
  fVar22 = fVar22 + *(float *)(param_1 + 0xc4);
LAB_018c50dc:
  if ((((*(long *)(param_1 + 0x88) != 0) && (*(short *)(*(long *)(param_1 + 0x88) + 0x1a) != 0)) &&
      (lVar13 = *(long *)(param_1 + 0x88), lVar13 != 0)) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar16 = *(short *)(lVar13 + 0x1a);
LAB_018c56e0:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_018c5704;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_018c5704:
      bVar7 = false;
    }
    if (!bVar7) goto code_r0x018c570c;
    lVar13 = *(long *)(lVar13 + 0x10);
    if (lVar13 == 0) goto LAB_018c50fc;
    lVar14 = *(long *)(lVar13 + 0x1c0);
    if (lVar14 == 0) {
      uVar11 = 1;
    }
    else {
      if (*(char *)(lVar14 + 0x728) == '\0') {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)(lVar14 + 0x14d8);
      }
      uVar11 = FUN_01e1d84c(param_1,uVar18);
      uVar11 = uVar11 & 0xffffffff;
    }
    lVar14 = *(long *)(lVar13 + 0x70);
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
    }
    else if (sVar16 == 0) goto LAB_018c5264;
    if ((uVar11 & 1) != 0) goto LAB_018c50fc;
    goto LAB_018c5104;
  }
LAB_018c50fc:
  fVar22 = fVar22 + *(float *)(param_1 + 200);
LAB_018c5104:
  fVar22 = fVar22 + *(float *)(param_1 + 0xcc) + *(float *)(param_1 + 0xd0) +
           *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xdc);
  if (((*(long *)(param_1 + 0x98) != 0) && (*(short *)(*(long *)(param_1 + 0x98) + 0x1a) != 0)) &&
     ((lVar13 = *(long *)(param_1 + 0x98), lVar13 != 0 && (*(short *)(lVar13 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar16 = *(short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar16) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_018c55fc;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018c55fc:
        bVar7 = false;
      }
      if (bVar7) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 != 0) {
          if ((((*(long *)(lVar13 + 0x118) == 0) || (*(int *)(*(long *)(lVar13 + 0x118) + 0xd4) < 1)
               ) && ((*(long **)(lVar13 + 0x120) == (long *)0x0 ||
                     (uVar11 = (**(code **)(**(long **)(lVar13 + 0x120) + 0x68))(),
                     (uVar11 & 1) == 0)))) &&
             ((*(long **)(lVar13 + 0x128) == (long *)0x0 ||
              (uVar11 = (**(code **)(**(long **)(lVar13 + 0x128) + 0x68))(), (uVar11 & 1) == 0)))) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          lVar14 = *(long *)(lVar13 + 0x70);
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
          }
          else if (sVar16 == 0) goto LAB_018c5264;
          if (bVar7) {
            fVar22 = fVar22 + *(float *)(param_1 + 0xe0);
          }
        }
        break;
      }
      sVar16 = sVar4;
    } while (sVar4 != 0);
  }
  fVar22 = nextafterf(fVar22,3.4028235e+38);
  uVar11 = *(ulong *)(param_1 + 0xf0);
  uVar3 = *(ulong *)(param_1 + 0xf8);
  uVar15 = uVar3 ^ uVar11;
  fVar21 = 0.0;
  *(ulong *)(param_1 + 0xf0) = uVar15 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar15 << 0x10;
  *(ulong *)(param_1 + 0xf8) = uVar15 >> 0x1b | uVar15 << 0x25;
  if (*(char *)(lVar12 + 0x130) != '\0') {
    fVar21 = *(float *)(lVar12 + 0x138);
  }
  fVar20 = *(float *)(param_1 + 0xbc);
  if (1.1920929e-07 <= ABS(fVar20 - fVar21)) {
    fVar19 = *(float *)(param_1 + 0xc0);
    if (ABS(fVar19 - fVar21) < 1.1920929e-07) {
LAB_018c51c0:
      uVar18 = 2;
      goto LAB_018c51cc;
    }
    if (ABS(*(float *)(param_1 + 0xc4) - fVar21) < 1.1920929e-07) {
LAB_018c51f0:
      uVar8 = FUN_01e1d714(param_1);
      uVar18 = 3;
      goto LAB_018c522c;
    }
    if (ABS(*(float *)(param_1 + 200) - fVar21) < 1.1920929e-07) {
LAB_018c521c:
      uVar8 = FUN_01e1d9c8(param_1);
      uVar18 = 4;
      goto LAB_018c522c;
    }
    if (ABS(*(float *)(param_1 + 0xcc) - fVar21) < 1.1920929e-07) {
LAB_018c52a4:
      uVar18 = 5;
    }
    else if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0xd0) - fVar21)) {
      if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0xd4) - fVar21)) {
        if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0xd8) - fVar21)) {
          if (ABS(*(float *)(param_1 + 0xdc) - fVar21) < 1.1920929e-07) {
LAB_018c5344:
            uVar18 = 9;
          }
          else if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0xe0) - fVar21)) {
            if (ABS(*(float *)(param_1 + 0xe4) - fVar21) < 1.1920929e-07) {
              uVar18 = 0xb;
            }
            else {
              if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0xe8) - fVar21)) {
                fVar22 = fVar22 * (float)(uVar3 + uVar11) * 5.421011e-20 + 0.0;
                if ((1.1920929e-07 < fVar20) && (fVar22 <= fVar20)) goto LAB_018c5194;
                fVar22 = fVar22 - fVar20;
                if ((1.1920929e-07 < fVar19) && (fVar22 <= fVar19)) goto LAB_018c51c0;
                fVar22 = fVar22 - fVar19;
                if ((((*(long *)(param_1 + 0x88) != 0) &&
                     (*(short *)(*(long *)(param_1 + 0x88) + 0x1a) != 0)) &&
                    (lVar13 = *(long *)(param_1 + 0x88), lVar13 != 0)) &&
                   (*(short *)(lVar13 + 0x1a) != 0)) {
                  psVar1 = (short *)(lVar13 + 0x1a);
                  sVar16 = *(short *)(lVar13 + 0x1a);
LAB_018c58a8:
                  sVar4 = *psVar1;
                  if (sVar4 == sVar16) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar7) {
                      *psVar1 = sVar16 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 != '\0') goto LAB_018c58cc;
                    bVar7 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_018c58cc:
                    bVar7 = false;
                  }
                  if (!bVar7) goto code_r0x018c58d4;
                  lVar13 = *(long *)(lVar13 + 0x10);
                  if (lVar13 == 0) goto LAB_018c54a0;
                  lVar14 = *(long *)(lVar13 + 0x1c0);
                  if (lVar14 == 0) {
                    uVar11 = 1;
                  }
                  else {
                    if (*(char *)(lVar14 + 0x728) == '\0') {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = *(undefined4 *)(lVar14 + 0x14d4);
                    }
                    uVar11 = FUN_01e1d84c(param_1,uVar18);
                    uVar11 = uVar11 & 0xffffffff;
                  }
                  lVar14 = *(long *)(lVar13 + 0x70);
                  psVar1 = (short *)(lVar14 + 0x1a);
                  do {
                    sVar16 = *psVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar7) {
                      *psVar1 = sVar16 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar16 == 1) {
                    *(undefined8 *)(lVar14 + 0x10) = 0;
                    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
                  }
                  else if (sVar16 == 0) goto LAB_018c5264;
                  if ((uVar11 & 1) != 0) goto LAB_018c54a0;
                  goto LAB_018c54c0;
                }
LAB_018c54a0:
                fVar21 = *(float *)(param_1 + 0xc4);
                if ((1.1920929e-07 < fVar21) && (fVar22 <= fVar21)) goto LAB_018c51f0;
                fVar22 = fVar22 - fVar21;
LAB_018c54c0:
                if (((*(long *)(param_1 + 0x88) != 0) &&
                    (*(short *)(*(long *)(param_1 + 0x88) + 0x1a) != 0)) &&
                   ((lVar13 = *(long *)(param_1 + 0x88), lVar13 != 0 &&
                    (*(short *)(lVar13 + 0x1a) != 0)))) {
                  psVar1 = (short *)(lVar13 + 0x1a);
                  sVar16 = *(short *)(lVar13 + 0x1a);
LAB_018c5960:
                  sVar4 = *psVar1;
                  if (sVar4 == sVar16) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar7) {
                      *psVar1 = sVar16 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 != '\0') goto LAB_018c5984;
                    bVar7 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_018c5984:
                    bVar7 = false;
                  }
                  if (!bVar7) goto code_r0x018c598c;
                  lVar13 = *(long *)(lVar13 + 0x10);
                  if (lVar13 == 0) goto LAB_018c54e0;
                  lVar14 = *(long *)(lVar13 + 0x1c0);
                  if (lVar14 == 0) {
                    uVar11 = 1;
                  }
                  else {
                    if (*(char *)(lVar14 + 0x728) == '\0') {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = *(undefined4 *)(lVar14 + 0x14d8);
                    }
                    uVar11 = FUN_01e1d84c(param_1,uVar18);
                    uVar11 = uVar11 & 0xffffffff;
                  }
                  lVar14 = *(long *)(lVar13 + 0x70);
                  psVar1 = (short *)(lVar14 + 0x1a);
                  do {
                    sVar16 = *psVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar7) {
                      *psVar1 = sVar16 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar16 == 1) {
                    *(undefined8 *)(lVar14 + 0x10) = 0;
                    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
                  }
                  else if (sVar16 == 0) goto LAB_018c5264;
                  if ((uVar11 & 1) != 0) goto LAB_018c54e0;
                  goto LAB_018c5500;
                }
LAB_018c54e0:
                fVar21 = *(float *)(param_1 + 200);
                if ((1.1920929e-07 < fVar21) && (fVar22 <= fVar21)) goto LAB_018c521c;
                fVar22 = fVar22 - fVar21;
LAB_018c5500:
                fVar21 = *(float *)(param_1 + 0xcc);
                if ((1.1920929e-07 < fVar21) && (fVar22 <= fVar21)) goto LAB_018c52a4;
                fVar20 = *(float *)(param_1 + 0xd0);
                if ((1.1920929e-07 < fVar20) && (fVar22 - fVar21 <= fVar20)) goto LAB_018c52cc;
                fVar20 = (fVar22 - fVar21) - fVar20;
                fVar22 = *(float *)(param_1 + 0xd4);
                if ((1.1920929e-07 < fVar22) && (fVar20 <= fVar22)) goto LAB_018c52f4;
                fVar20 = fVar20 - fVar22;
                fVar22 = *(float *)(param_1 + 0xd8);
                if ((1.1920929e-07 < fVar22) && (fVar20 <= fVar22)) goto LAB_018c531c;
                fVar20 = fVar20 - fVar22;
                fVar22 = *(float *)(param_1 + 0xdc);
                if ((1.1920929e-07 < fVar22) && (fVar20 <= fVar22)) goto LAB_018c5344;
                if ((((*(long *)(param_1 + 0x98) != 0) &&
                     (*(short *)(*(long *)(param_1 + 0x98) + 0x1a) != 0)) &&
                    (lVar13 = *(long *)(param_1 + 0x98), lVar13 != 0)) &&
                   (*(short *)(lVar13 + 0x1a) != 0)) {
                  psVar1 = (short *)(lVar13 + 0x1a);
                  sVar16 = *(short *)(lVar13 + 0x1a);
                  do {
                    sVar4 = *psVar1;
                    if (sVar4 == sVar16) {
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                      if (bVar7) {
                        *psVar1 = sVar16 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 != '\0') goto LAB_018c5a28;
                      bVar7 = true;
                    }
                    else {
                      ClearExclusiveLocal();
LAB_018c5a28:
                      bVar7 = false;
                    }
                    if (bVar7) {
                      lVar13 = *(long *)(lVar13 + 0x10);
                      if (lVar13 != 0) {
                        if ((((*(long *)(lVar13 + 0x118) == 0) ||
                             (*(int *)(*(long *)(lVar13 + 0x118) + 0xd4) < 1)) &&
                            ((*(long **)(lVar13 + 0x120) == (long *)0x0 ||
                             (uVar11 = (**(code **)(**(long **)(lVar13 + 0x120) + 0x68))(),
                             (uVar11 & 1) == 0)))) &&
                           ((*(long **)(lVar13 + 0x128) == (long *)0x0 ||
                            (uVar11 = (**(code **)(**(long **)(lVar13 + 0x128) + 0x68))(),
                            (uVar11 & 1) == 0)))) {
                          bVar7 = false;
                        }
                        else {
                          bVar7 = true;
                        }
                        lVar14 = *(long *)(lVar13 + 0x70);
                        psVar1 = (short *)(lVar14 + 0x1a);
                        do {
                          sVar16 = *psVar1;
                          cVar6 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                          if (bVar5) {
                            *psVar1 = sVar16 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (sVar16 == 1) {
                          *(undefined8 *)(lVar14 + 0x10) = 0;
                          (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
                        }
                        else if (sVar16 == 0) goto LAB_018c5264;
                        if (((bVar7) && (1.1920929e-07 < *(float *)(param_1 + 0xe0))) &&
                           (fVar20 - fVar22 <= *(float *)(param_1 + 0xe0))) goto LAB_018c53dc;
                      }
                      break;
                    }
                    sVar16 = sVar4;
                  } while (sVar4 != 0);
                }
                uVar8 = *(undefined4 *)(param_1 + 0x40);
                uVar18 = 0;
                goto LAB_018c522c;
              }
              uVar18 = 0xc;
            }
          }
          else {
LAB_018c53dc:
            uVar18 = 10;
          }
        }
        else {
LAB_018c531c:
          uVar18 = 8;
        }
      }
      else {
LAB_018c52f4:
        uVar18 = 7;
      }
    }
    else {
LAB_018c52cc:
      uVar18 = 6;
    }
LAB_018c51cc:
    uVar8 = FUN_01e1d5bc(param_1,uVar18);
  }
  else {
LAB_018c5194:
    uVar8 = FUN_01e1c7f4(param_1);
    uVar18 = 1;
  }
LAB_018c522c:
  *(undefined4 *)(param_1 + 0xb4) = uVar18;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = 1;
  lVar13 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar16 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
    return uVar8;
  }
  if (sVar16 != 0) {
    return uVar8;
  }
LAB_018c5264:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x018c56c4:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_018c50d4;
  goto LAB_018c5698;
code_r0x018c570c:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_018c50fc;
  goto LAB_018c56e0;
code_r0x018c58d4:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_018c54a0;
  goto LAB_018c58a8;
code_r0x018c598c:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_018c54e0;
  goto LAB_018c5960;
}


