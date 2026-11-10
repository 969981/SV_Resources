/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea34a4; name: FUN_00ea34a4
 */


void FUN_00ea34a4(float param_1,float param_2,long param_3,ulong param_4)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  short sVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  short sVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  ulong *local_80;
  undefined8 uStack_78;
  ulong *local_70;
  undefined4 local_64;
  
  if ((param_4 & 1) == 0) {
    lVar14 = FUN_00da75d8();
  }
  else {
    lVar14 = FUN_00d3ccd4();
  }
  if (lVar14 == 0) {
    return;
  }
  puVar4 = (undefined8 *)(param_3 + 0x290);
  if ((param_4 & 1) == 0) {
    puVar4 = (undefined8 *)(param_3 + 0x260);
  }
  fVar26 = -6.2831855;
  if (6.2831855 < param_1) {
LAB_00ea352c:
    param_1 = param_1 + fVar26;
  }
  else if (param_1 < -6.2831855) {
    fVar26 = 6.2831855;
    goto LAB_00ea352c;
  }
  *(float *)(lVar14 + 0xc0) = param_1;
  *(float *)(lVar14 + 0xc4) = param_2;
  FUN_00e06ff0(&local_80,param_3);
  puVar12 = local_80;
  if (local_80 == (ulong *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_80 + 0x1a);
    sVar19 = *(short *)((long)local_80 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar19) {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar19 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_00ea35a0;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00ea35a0:
        bVar10 = false;
      }
      if (bVar10) {
        plVar21 = (long *)0x0;
        if (local_80[2] != 0) {
          plVar21 = (long *)(local_80[2] - 0x28);
        }
        goto LAB_00ea35c8;
      }
      sVar19 = sVar7;
    } while (sVar7 != 0);
  }
  plVar21 = (long *)0x0;
LAB_00ea35c8:
  puVar2 = local_80 + 3;
  do {
    sVar19 = (short)*puVar2;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *(short *)puVar2 = sVar19 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar19 == 1) {
    piVar3 = (int *)((long)local_80 + 0x1c);
    do {
      iVar13 = *piVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar10) {
        *piVar3 = -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar13 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar15 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar15;
      local_70 = (ulong *)*puVar12;
      FUN_00c44438(lVar15 + 0x8040,&local_70);
    }
  }
  else if (sVar19 == 0) goto LAB_00ea3bcc;
  if (plVar21 == (long *)0x0) {
    return;
  }
  uVar25 = plVar21[0x90];
  if (*(ulong *)(lVar14 + 0x580) != uVar25) {
    *(ulong *)(lVar14 + 0x580) = uVar25;
    local_80 = (ulong *)0x0;
    uStack_78 = 0;
    FUN_00cbb698(&local_80,param_3 + 0x120);
    puVar12 = local_80;
    if (local_80 != (ulong *)0x0) {
      if (*(short *)((long)local_80 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_80 + 0x1a);
        sVar19 = *(short *)((long)local_80 + 0x1a);
        do {
          sVar7 = *psVar1;
          if (sVar7 == sVar19) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar19 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_00ea3958;
            bVar10 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00ea3958:
            bVar10 = false;
          }
          if (bVar10) {
            plVar23 = (long *)0x0;
            if (local_80[2] != 0) {
              plVar23 = (long *)(local_80[2] - 0x28);
            }
            goto LAB_00ea3980;
          }
          sVar19 = sVar7;
        } while (sVar7 != 0);
      }
      plVar23 = (long *)0x0;
LAB_00ea3980:
      puVar2 = local_80 + 3;
      do {
        sVar19 = (short)*puVar2;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar10) {
          *(short *)puVar2 = sVar19 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar19 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar13 = *piVar3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_70 = (ulong *)*puVar12;
          FUN_00c44438(lVar15 + 0x8040,&local_70);
        }
      }
      else if (sVar19 == 0) goto LAB_00ea3bcc;
      if (plVar23 != (long *)0x0) {
        local_80 = (ulong *)0x0;
        uStack_78 = 0;
        FUN_01bd5e08(&local_80,plVar23 + 0x1b3);
        puVar12 = local_80;
        if (local_80 != (ulong *)0x0) {
          if (*(short *)((long)local_80 + 0x1a) != 0) {
            psVar1 = (short *)((long)local_80 + 0x1a);
            sVar19 = *(short *)((long)local_80 + 0x1a);
            do {
              sVar7 = *psVar1;
              if (sVar7 == sVar19) {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar10) {
                  *psVar1 = sVar19 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 != '\0') goto LAB_00ea3acc;
                bVar10 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00ea3acc:
                bVar10 = false;
              }
              if (bVar10) {
                plVar24 = (long *)0x0;
                if (local_80[2] != 0) {
                  plVar24 = (long *)(local_80[2] - 0x28);
                }
                goto LAB_00ea3af4;
              }
              sVar19 = sVar7;
            } while (sVar7 != 0);
          }
          plVar24 = (long *)0x0;
LAB_00ea3af4:
          puVar2 = local_80 + 3;
          do {
            sVar19 = (short)*puVar2;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar10) {
              *(short *)puVar2 = sVar19 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar19 == 1) {
            piVar3 = (int *)((long)local_80 + 0x1c);
            do {
              iVar13 = *piVar3;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar10) {
                *piVar3 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_70 = (ulong *)*puVar12;
              FUN_00c44438(lVar15 + 0x8040,&local_70);
            }
          }
          else if (sVar19 == 0) {
LAB_00ea3bcc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
          if (plVar24 != (long *)0x0) {
            uVar16 = plVar24[0x49];
            uVar28 = 0;
            if (uVar16 != 0) {
              uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
              uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar17 < 2) {
                uVar18 = uVar16 - 1 & uVar25;
              }
              else {
                uVar18 = uVar25;
                if (uVar16 <= uVar25) {
                  uVar18 = 0;
                  if (uVar16 != 0) {
                    uVar18 = uVar25 / uVar16;
                  }
                  uVar18 = uVar25 - uVar18 * uVar16;
                }
              }
              plVar20 = *(long **)(plVar24[0x48] + uVar18 * 8);
              if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0))
              {
                if (uVar17 < 2) {
                  do {
                    if (plVar20[1] == uVar25) {
                      if (plVar20[2] == uVar25) goto LAB_00ea3cd0;
                    }
                    else if ((plVar20[1] & uVar16 - 1) != uVar18) break;
                    plVar20 = (long *)*plVar20;
                  } while (plVar20 != (long *)0x0);
                }
                else {
                  do {
                    uVar17 = plVar20[1];
                    if (uVar17 == uVar25) {
                      if (plVar20[2] == uVar25) goto LAB_00ea3cd0;
                    }
                    else {
                      if (uVar16 <= uVar17) {
                        uVar11 = 0;
                        if (uVar16 != 0) {
                          uVar11 = uVar17 / uVar16;
                        }
                        uVar17 = uVar17 - uVar11 * uVar16;
                      }
                      if (uVar17 != uVar18) break;
                    }
                    plVar20 = (long *)*plVar20;
                  } while (plVar20 != (long *)0x0);
                }
              }
            }
            goto LAB_00ea3cd4;
          }
        }
        goto LAB_00ea39bc;
      }
    }
  }
LAB_00ea361c:
  bVar8 = *(byte *)((long)plVar21 + 0xd1) |
          1.1920929e-07 < ABS(param_1 - *(float *)(plVar21 + 0x22));
  bVar10 = 1.1920929e-07 < *(float *)(plVar21 + 0x86) &&
           1.1920929e-07 < *(float *)(plVar21 + 0x86) - *(float *)((long)plVar21 + 0x434);
  *(byte *)((long)plVar21 + 0xd1) = bVar8;
  *(float *)(plVar21 + 0x22) = param_1;
  if (bVar10) {
    fVar26 = *(float *)(plVar21 + 0x76);
    *(float *)(plVar21 + 0x76) = param_1;
    *(byte *)((long)plVar21 + 0x371) =
         *(byte *)((long)plVar21 + 0x371) | 1.1920929e-07 < ABS(param_1 - fVar26);
  }
  *(undefined1 *)(plVar21 + 0x5a) = 1;
  *(byte *)((long)plVar21 + 0xd1) =
       bVar8 | 1.1920929e-07 < ABS(param_2 - *(float *)((long)plVar21 + 0x114));
  ppuVar5 = (ulong **)&local_64;
  if (param_2 <= 1.0) {
    ppuVar5 = &local_80;
  }
  local_64 = 0x3f800000;
  ppuVar6 = &local_70;
  if (0.0 <= param_2) {
    ppuVar6 = ppuVar5;
  }
  *(undefined4 *)((long)plVar21 + 0x114) = *(undefined4 *)ppuVar6;
  if (bVar10) {
    *(byte *)((long)plVar21 + 0x371) =
         *(byte *)((long)plVar21 + 0x371) |
         1.1920929e-07 < ABS(param_2 - *(float *)((long)plVar21 + 0x3b4));
    local_64 = 0x3f800000;
    ppuVar5 = (ulong **)&local_64;
    if (param_2 <= 1.0) {
      ppuVar5 = &local_80;
    }
    ppuVar6 = &local_70;
    if (0.0 <= param_2) {
      ppuVar6 = ppuVar5;
    }
    *(undefined4 *)((long)plVar21 + 0x3b4) = *(undefined4 *)ppuVar6;
  }
  local_70 = (ulong *)((ulong)local_70 & 0xffffffff00000000);
  local_80 = (ulong *)CONCAT44(local_80._4_4_,param_2);
  local_64 = 0x3f800000;
  *(undefined1 *)(plVar21 + 0x5a) = 1;
  FUN_00d8fea0(plVar21);
  FUN_00d8fbd8(plVar21);
  *(long *)(lVar14 + 0xd8) = plVar21[0x3f];
  *(long *)(lVar14 + 0xd0) = plVar21[0x3e];
  fVar27 = (float)*(undefined8 *)(lVar14 + 0x70);
  fVar26 = (float)plVar21[0x3e] + fVar27;
  fVar32 = (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20);
  fVar29 = (float)((ulong)plVar21[0x3e] >> 0x20) + fVar32;
  uVar35 = CONCAT44(fVar29,fVar26);
  fVar33 = (float)*(undefined8 *)(lVar14 + 0x78);
  fVar30 = (float)plVar21[0x3f] + fVar33;
  fVar34 = (float)((ulong)*(undefined8 *)(lVar14 + 0x78) >> 0x20);
  fVar31 = (float)((ulong)plVar21[0x3f] >> 0x20) + fVar34;
  uVar36 = CONCAT44(fVar31,fVar30);
  puVar22 = (undefined8 *)(lVar14 + 0xe0);
  *(undefined8 *)(lVar14 + 0xe8) = uVar36;
  *puVar22 = uVar35;
  *(long *)(lVar14 + 0xf8) = plVar21[0x41];
  *(long *)(lVar14 + 0xf0) = plVar21[0x40];
  *(long *)(lVar14 + 0x108) = plVar21[0x47];
  *(long *)(lVar14 + 0x100) = plVar21[0x46];
  *(long *)(lVar14 + 0x118) = plVar21[0x45];
  *(long *)(lVar14 + 0x110) = plVar21[0x44];
  lVar15 = plVar21[0x44];
  *(ulong *)(lVar14 + 0x128) =
       CONCAT44(fVar34 + (float)((ulong)plVar21[0x45] >> 0x20),fVar33 + (float)plVar21[0x45]);
  *(ulong *)(lVar14 + 0x120) =
       CONCAT44(fVar32 + (float)((ulong)lVar15 >> 0x20),fVar27 + (float)lVar15);
  *(int *)(lVar14 + 0x130) = (int)plVar21[0x4a];
  *(undefined8 *)(lVar14 + 0x538) = *(undefined8 *)(lVar14 + 0xe8);
  *(undefined8 *)(lVar14 + 0x548) = *(undefined8 *)(lVar14 + 0xf8);
  *(undefined8 *)(lVar14 + 0x530) = *puVar22;
  *(undefined8 *)(lVar14 + 0x540) = *(undefined8 *)(lVar14 + 0xf0);
  *(undefined8 *)(lVar14 + 0x550) = *(undefined8 *)(lVar14 + 0x120);
  *(undefined8 *)(lVar14 + 0x558) = *(undefined8 *)(lVar14 + 0x128);
  if ((0.0 < *(float *)((long)puVar4 + 0x24)) && (0.0 < *(float *)(puVar4 + 5))) {
    puVar4[3] = uVar36;
    puVar4[2] = uVar35;
    uVar36 = puVar4[1];
    uVar35 = *puVar4;
    fVar27 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(puVar4 + 4) * 8))
                              (1.0 - *(float *)(puVar4 + 5) / *(float *)((long)puVar4 + 0x24));
    fVar27 = fVar27 + 0.0;
    fVar32 = (float)uVar35;
    fVar33 = (float)((ulong)uVar35 >> 0x20);
    fVar34 = (float)uVar36;
    fVar37 = (float)((ulong)uVar36 >> 0x20);
    *(ulong *)(lVar14 + 0xe8) =
         CONCAT44(fVar37 + (fVar31 - fVar37) * fVar27,fVar34 + (fVar30 - fVar34) * fVar27);
    *(ulong *)(lVar14 + 0xe0) =
         CONCAT44(fVar33 + (fVar29 - fVar33) * fVar27,fVar32 + (fVar26 - fVar32) * fVar27);
    *(undefined8 *)(lVar14 + 0x530) = *puVar22;
    *(undefined8 *)(lVar14 + 0x538) = *(undefined8 *)(lVar14 + 0xe8);
  }
  lVar14 = plVar21[6];
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar19 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))(plVar21);
  }
  else if (sVar19 == 0) {
LAB_00ea37ac:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
LAB_00ea3cd0:
  uVar28 = (undefined4)plVar20[3];
LAB_00ea3cd4:
  *(undefined4 *)(lVar14 + 0x588) = uVar28;
  (**(code **)(*plVar24 + 0x60))(plVar24);
LAB_00ea39bc:
  lVar15 = plVar23[0x13];
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar19 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*plVar23 + 0x50))(plVar23);
  }
  else if (sVar19 == 0) goto LAB_00ea37ac;
  goto LAB_00ea361c;
}


