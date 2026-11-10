/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01236b8c; name: FUN_01236b8c
 */


void FUN_01236b8c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_68;
  
  plVar20 = (long *)(param_1 + 0x300);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar20 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01236bcc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
  do {
    if (*plVar20 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x308));
        while (*plVar20 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01236bcc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01236bcc:
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  lVar10 = *(long *)(param_1 + 0x48);
  lVar19 = *(long *)(param_1 + 0x50);
  if (lVar19 != lVar10) {
    pbVar15 = PTR_DAT_047d3908;
    do {
      puVar16 = *(undefined8 **)(lVar19 + -0x10);
      if (puVar16 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar16 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar16 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*pbVar15 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)
               ) {
              FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)puVar6;
            *(long *)puVar7 = lVar18;
            local_68 = *puVar16;
            FUN_00c44438(lVar18 + 0x8040,&local_68);
            pbVar15 = PTR_DAT_047d3908;
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      plVar20 = (long *)(lVar19 + -0x18);
      lVar19 = lVar19 + -0x30;
      if ((long *)*plVar20 != (long *)0x0) {
        (**(code **)(*(long *)*plVar20 + 0x20))();
      }
    } while (lVar19 != lVar10);
  }
  lVar19 = *(long *)(param_1 + 0x80);
  lVar18 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x50) = lVar10;
  if (lVar18 != lVar19) {
    FUN_00f0e57c(lVar18 + -0x38);
    if (*(long **)(lVar18 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar18 + -0x40) + 0x20))();
    }
    if (lVar18 + -0x58 != lVar19) {
      FUN_00f0e57c(lVar18 + -0x90);
      if (*(long **)(lVar18 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar18 + -0x98) + 0x20))();
      }
      if (lVar18 + -0xb0 != lVar19) {
        FUN_00f0e57c(lVar18 + -0xe8);
        if (*(long **)(lVar18 + -0xf0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar18 + -0xf0) + 0x20))();
        }
        if (lVar18 + -0x108 != lVar19) {
          FUN_00f0e57c(lVar18 + -0x140);
          if (*(long **)(lVar18 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar18 + -0x148) + 0x20))();
          }
          if (lVar18 + -0x160 != lVar19) {
            FUN_00f0e57c(lVar18 + -0x198);
            if (*(long **)(lVar18 + -0x1a0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar18 + -0x1a0) + 0x20))();
            }
            if (lVar18 + -0x1b8 != lVar19) {
              do {
                FUN_00f0e57c(lVar18 + -0x1f0);
                if (*(long **)(lVar18 + -0x1f8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar18 + -0x1f8) + 0x20))();
                }
                lVar18 = lVar18 + -0x58;
              } while (lVar19 + 0x1b8 != lVar18);
            }
          }
        }
      }
    }
  }
  *(long *)(param_1 + 0x88) = lVar19;
  lVar10 = *(long *)(param_1 + 0xb8);
  lVar19 = *(long *)(param_1 + 0xc0);
  if (lVar19 != lVar10) {
    FUN_00f0e57c(lVar19 + -0x38);
    if (*(long **)(lVar19 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar19 + -0x40) + 0x20))();
    }
    if (lVar19 + -0x58 != lVar10) {
      FUN_00f0e57c(lVar19 + -0x90);
      if (*(long **)(lVar19 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar19 + -0x98) + 0x20))();
      }
      if (lVar19 + -0xb0 != lVar10) {
        FUN_00f0e57c(lVar19 + -0xe8);
        if (*(long **)(lVar19 + -0xf0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar19 + -0xf0) + 0x20))();
        }
        if (lVar19 + -0x108 != lVar10) {
          FUN_00f0e57c(lVar19 + -0x140);
          if (*(long **)(lVar19 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar19 + -0x148) + 0x20))();
          }
          if (lVar19 + -0x160 != lVar10) {
            FUN_00f0e57c(lVar19 + -0x198);
            if (*(long **)(lVar19 + -0x1a0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar19 + -0x1a0) + 0x20))();
            }
            if (lVar19 + -0x1b8 != lVar10) {
              do {
                FUN_00f0e57c(lVar19 + -0x1f0);
                if (*(long **)(lVar19 + -0x1f8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar19 + -0x1f8) + 0x20))();
                }
                lVar19 = lVar19 + -0x58;
              } while (lVar10 + 0x1b8 != lVar19);
            }
          }
        }
      }
    }
  }
  *(long *)(param_1 + 0xc0) = lVar10;
  lVar10 = *(long *)(param_1 + 0xf0);
  lVar19 = *(long *)(param_1 + 0xf8);
  if (lVar19 != lVar10) {
    FUN_00f0e57c(lVar19 + -0x38);
    if (*(long **)(lVar19 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar19 + -0x40) + 0x20))();
    }
    if (lVar19 + -0x58 != lVar10) {
      FUN_00f0e57c(lVar19 + -0x90);
      if (*(long **)(lVar19 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar19 + -0x98) + 0x20))();
      }
      if (lVar19 + -0xb0 != lVar10) {
        FUN_00f0e57c(lVar19 + -0xe8);
        if (*(long **)(lVar19 + -0xf0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar19 + -0xf0) + 0x20))();
        }
        if (lVar19 + -0x108 != lVar10) {
          FUN_00f0e57c(lVar19 + -0x140);
          if (*(long **)(lVar19 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar19 + -0x148) + 0x20))();
          }
          if (lVar19 + -0x160 != lVar10) {
            FUN_00f0e57c(lVar19 + -0x198);
            if (*(long **)(lVar19 + -0x1a0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar19 + -0x1a0) + 0x20))();
            }
            if (lVar19 + -0x1b8 != lVar10) {
              do {
                FUN_00f0e57c(lVar19 + -0x1f0);
                if (*(long **)(lVar19 + -0x1f8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar19 + -0x1f8) + 0x20))();
                }
                lVar19 = lVar19 + -0x58;
              } while (lVar10 + 0x1b8 != lVar19);
            }
          }
        }
      }
    }
  }
  *(long *)(param_1 + 0xf8) = lVar10;
  lVar10 = *(long *)(param_1 + 0x128);
  lVar19 = *(long *)(param_1 + 0x130);
  if (lVar19 != lVar10) {
    FUN_00f0e57c(lVar19 + -0x38);
    if (*(long **)(lVar19 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar19 + -0x40) + 0x20))();
    }
    if (lVar19 + -0x58 != lVar10) {
      FUN_00f0e57c(lVar19 + -0x90);
      if (*(long **)(lVar19 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar19 + -0x98) + 0x20))();
      }
      if (lVar19 + -0xb0 != lVar10) {
        FUN_00f0e57c(lVar19 + -0xe8);
        if (*(long **)(lVar19 + -0xf0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar19 + -0xf0) + 0x20))();
        }
        if (lVar19 + -0x108 != lVar10) {
          FUN_00f0e57c(lVar19 + -0x140);
          if (*(long **)(lVar19 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar19 + -0x148) + 0x20))();
          }
          if (lVar19 + -0x160 != lVar10) {
            FUN_00f0e57c(lVar19 + -0x198);
            if (*(long **)(lVar19 + -0x1a0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar19 + -0x1a0) + 0x20))();
            }
            if (lVar19 + -0x1b8 != lVar10) {
              do {
                FUN_00f0e57c(lVar19 + -0x1f0);
                if (*(long **)(lVar19 + -0x1f8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar19 + -0x1f8) + 0x20))();
                }
                lVar19 = lVar19 + -0x58;
              } while (lVar10 + 0x1b8 != lVar19);
            }
          }
        }
      }
    }
  }
  *(long *)(param_1 + 0x130) = lVar10;
  if (*(long *)(param_1 + 0x1b8) != 0) {
    plVar20 = *(long **)(param_1 + 400);
    if (plVar20 != (long *)0x0) {
      plVar17 = (long *)*plVar20;
      pcVar12 = (code *)plVar20[7];
      if (pcVar12 != (code *)0x0) {
        plVar20[8] = 0;
        plVar20[9] = 0;
        plVar20[6] = 0;
        plVar20[7] = 0;
        (*pcVar12)(plVar20 + 10);
      }
      if ((long *)plVar20[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar20[5] + 0x20))();
      }
      plVar21 = *(long **)(param_1 + 0x198);
      uVar14 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,0xb0,0x10);
      }
      else {
        FUN_00c48fe8(plVar21,plVar20,0xb0,0x10);
      }
      while (plVar17 != (long *)0x0) {
        plVar20 = (long *)*plVar17;
        pcVar12 = (code *)plVar17[7];
        if (pcVar12 != (code *)0x0) {
          plVar17[8] = 0;
          plVar17[9] = 0;
          plVar17[6] = 0;
          plVar17[7] = 0;
          (*pcVar12)(plVar17 + 10);
        }
        if ((long *)plVar17[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar17[5] + 0x20))();
        }
        plVar21 = *(long **)(param_1 + 0x198);
        uVar14 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,plVar17,0xb0,0x10);
          plVar17 = plVar20;
        }
        else {
          FUN_00c48fe8(plVar21,plVar17,0xb0,0x10);
          plVar17 = plVar20;
        }
      }
    }
    uVar14 = *(ulong *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 400) = 0;
    if (uVar14 != 0) {
      uVar11 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x160) + uVar13 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x160) + uVar13 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x160) + uVar13 * 8 + 0x10) = 0;
          lVar10 = uVar13 * 8;
          uVar13 = uVar13 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x160) + lVar10 + 0x18) = 0;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar13);
      }
      if (uVar11 != 0) {
        lVar10 = uVar13 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x160) + lVar10) = 0;
          uVar11 = uVar11 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar11 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    plVar20 = *(long **)(param_1 + 0x1f8);
    if (plVar20 != (long *)0x0) {
      plVar17 = (long *)*plVar20;
      pcVar12 = (code *)plVar20[7];
      if (pcVar12 != (code *)0x0) {
        plVar20[8] = 0;
        plVar20[9] = 0;
        plVar20[6] = 0;
        plVar20[7] = 0;
        (*pcVar12)(plVar20 + 10);
      }
      if ((long *)plVar20[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar20[5] + 0x20))();
      }
      plVar21 = *(long **)(param_1 + 0x200);
      uVar14 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,0xb0,0x10);
      }
      else {
        FUN_00c48fe8(plVar21,plVar20,0xb0,0x10);
      }
      while (plVar17 != (long *)0x0) {
        plVar20 = (long *)*plVar17;
        pcVar12 = (code *)plVar17[7];
        if (pcVar12 != (code *)0x0) {
          plVar17[8] = 0;
          plVar17[9] = 0;
          plVar17[6] = 0;
          plVar17[7] = 0;
          (*pcVar12)(plVar17 + 10);
        }
        if ((long *)plVar17[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar17[5] + 0x20))();
        }
        plVar21 = *(long **)(param_1 + 0x200);
        uVar14 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,plVar17,0xb0,0x10);
          plVar17 = plVar20;
        }
        else {
          FUN_00c48fe8(plVar21,plVar17,0xb0,0x10);
          plVar17 = plVar20;
        }
      }
    }
    uVar14 = *(ulong *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    if (uVar14 != 0) {
      uVar11 = uVar14 & 3;
      if (uVar14 - 1 < 3) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + uVar13 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + uVar13 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + uVar13 * 8 + 0x10) = 0;
          lVar10 = uVar13 * 8;
          uVar13 = uVar13 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar10 + 0x18) = 0;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar13);
      }
      if (uVar11 != 0) {
        lVar10 = uVar13 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar10) = 0;
          uVar11 = uVar11 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar11 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  FUN_012375d0(param_1 + 0x230);
  FUN_012375d0(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x300) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x308));
  return;
}


