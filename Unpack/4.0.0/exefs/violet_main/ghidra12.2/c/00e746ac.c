/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e746ac; name: FUN_00e746ac
 */


/* WARNING: Removing unreachable block (ram,0x00e74934) */

void FUN_00e746ac(long param_1,long *param_2)

{
  short *psVar1;
  void *__src;
  short sVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar8 = (long *)(param_1 + 0x1d8);
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1e0));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00e746f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e746f0:
  puVar15 = *(undefined8 **)(param_1 + 0xf0);
  puVar18 = *(undefined8 **)(param_1 + 0xf8);
  if ((puVar15 != puVar18) && ((long *)*puVar15 != param_2)) {
    do {
      puVar15 = puVar15 + 1;
      if (puVar18 == puVar15) {
        puVar15 = puVar18;
        goto LAB_00e74794;
      }
    } while ((long *)*puVar15 != param_2);
  }
  if (puVar15 != puVar18) {
    puVar12 = puVar15 + 1;
    if (puVar12 != puVar18) {
      do {
        puVar16 = puVar15;
        if ((long *)*puVar12 != param_2) {
          puVar16 = puVar15 + 1;
          *puVar15 = (long *)*puVar12;
        }
        puVar12 = puVar12 + 1;
        puVar15 = puVar16;
      } while (puVar18 != puVar12);
      puVar18 = *(undefined8 **)(param_1 + 0xf8);
    }
  }
LAB_00e74794:
  if ((long)puVar18 - (long)puVar15 != 0) {
    __src = (void *)((long)puVar15 + ((long)puVar18 - (long)puVar15));
    __n = (long)puVar18 - (long)__src;
    if (__n != 0) {
      memmove(puVar15,__src,__n);
    }
    *(size_t *)(param_1 + 0xf8) = (long)puVar15 + __n;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x168);
  puVar18 = *(undefined8 **)(param_1 + 0x170);
  if ((puVar15 != puVar18) && ((long *)*puVar15 != param_2)) {
    do {
      if (puVar18 + -2 == puVar15) {
        puVar15 = puVar18;
        goto LAB_00e748a4;
      }
      puVar12 = puVar15 + 2;
      puVar15 = puVar15 + 2;
    } while ((long *)*puVar12 != param_2);
  }
  if (puVar15 != puVar18) {
    puVar12 = puVar15 + 2;
    puVar16 = puVar15;
    if (puVar15 + 2 != puVar18) {
      do {
        puVar10 = puVar12;
        if ((long *)*puVar10 != param_2) {
          plVar8 = (long *)puVar15[1];
          *puVar15 = (long *)*puVar10;
          puVar15[1] = 0;
          if (plVar8 != (long *)0x0) {
            lVar7 = plVar8[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar8 + 0x50))();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          uVar11 = puVar16[3];
          puVar16[3] = 0;
          puVar15[1] = uVar11;
          puVar15 = puVar15 + 2;
        }
        puVar12 = puVar10 + 2;
        puVar16 = puVar10;
      } while (puVar10 + 2 != puVar18);
      puVar18 = *(undefined8 **)(param_1 + 0x170);
    }
  }
LAB_00e748a4:
  FUN_02b4e3d8(param_1 + 0x168,puVar15,puVar18);
  puVar15 = *(undefined8 **)(param_1 + 0x130);
  puVar18 = *(undefined8 **)(param_1 + 0x138);
  if ((puVar15 != puVar18) && ((long *)*puVar15 != param_2)) {
    do {
      puVar15 = puVar15 + 1;
      if (puVar18 == puVar15) {
        puVar15 = puVar18;
        goto LAB_00e74924;
      }
    } while ((long *)*puVar15 != param_2);
  }
  if (puVar15 != puVar18) {
    puVar12 = puVar15 + 1;
    if (puVar12 != puVar18) {
      do {
        puVar16 = puVar15;
        if ((long *)*puVar12 != param_2) {
          puVar16 = puVar15 + 1;
          *puVar15 = (long *)*puVar12;
        }
        puVar12 = puVar12 + 1;
        puVar15 = puVar16;
      } while (puVar18 != puVar12);
      puVar18 = *(undefined8 **)(param_1 + 0x138);
    }
  }
LAB_00e74924:
  if (puVar18 == puVar15) {
    lVar19 = *param_2;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar19) {
      plVar8 = (long *)0x0;
      bVar5 = true;
    }
    else {
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*param_2 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 1));
            while (*param_2 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
              if (bVar5) {
                *param_2 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00e74974;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar5) {
          *param_2 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00e74974:
      bVar5 = false;
      plVar8 = param_2;
    }
    lVar7 = param_2[3];
    lVar19 = param_2[4];
    if (lVar7 != lVar19) {
      puVar15 = (undefined8 *)(param_1 + 0x1b8);
      do {
        uVar3 = *(ulong *)(param_1 + 0x1a8);
        if (uVar3 < *(ulong *)(param_1 + 0x1b0)) {
          FUN_0219d45c(puVar15,uVar3,lVar7);
          *(ulong *)(param_1 + 0x1a8) = uVar3 + 8;
        }
        else {
          uVar17 = *(ulong *)(param_1 + 0x1c0);
          lVar20 = (long)(uVar3 - *(long *)(param_1 + 0x1a0)) >> 3;
          uVar3 = lVar20 + 1;
          if (0x7ffffffffffffffe < uVar17) {
            uVar17 = 0x7fffffffffffffff;
          }
          if (uVar17 < uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar13 = *(ulong *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a0);
          uVar14 = lVar13 >> 2;
          local_70 = 0;
          if (uVar3 <= uVar14) {
            uVar3 = uVar14;
          }
          if (uVar17 >> 1 <= (ulong)(lVar13 >> 3)) {
            uVar3 = uVar17;
          }
          puStack_68 = puVar15;
          if (uVar3 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = (**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,uVar3 << 3,8);
            if (lVar13 == 0) {
              (**(code **)(*(long *)*puVar15 + 0xe8))();
            }
          }
          lVar20 = lVar13 + lVar20 * 8;
          lVar9 = lVar13 + uVar3 * 8;
          local_88 = lVar13;
          local_80 = lVar20;
          local_70 = lVar9;
          FUN_0219d45c(puVar15,lVar20,lVar7);
          local_78 = lVar20 + 8;
          lVar13 = *(long *)(param_1 + 0x1a0);
          lVar21 = *(long *)(param_1 + 0x1a8);
          if (lVar21 == lVar13) {
            lVar21 = lVar13;
          }
          else {
            do {
              uVar11 = *puVar15;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar9 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar9 == 0) {
                uVar11 = *(undefined8 *)(lVar21 + -8);
                *(undefined8 *)(lVar21 + -8) = 0;
                *(undefined8 *)(lVar20 + -8) = uVar11;
              }
              else {
                if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar11;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                uVar11 = *(undefined8 *)(lVar21 + -8);
                *(undefined8 *)(lVar21 + -8) = 0;
                *(undefined8 *)(lVar20 + -8) = uVar11;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              }
              lVar21 = lVar21 + -8;
              lVar20 = local_80 + -8;
              local_80 = lVar20;
            } while (lVar13 != lVar21);
            lVar13 = *(long *)(param_1 + 0x1a0);
            lVar21 = *(long *)(param_1 + 0x1a8);
            lVar9 = local_70;
          }
          *(long *)(param_1 + 0x1a0) = lVar20;
          *(long *)(param_1 + 0x1a8) = local_78;
          local_70 = *(undefined8 *)(param_1 + 0x1b0);
          *(long *)(param_1 + 0x1b0) = lVar9;
          local_88 = lVar13;
          local_80 = lVar13;
          local_78 = lVar21;
          FUN_0219d5d4(&local_88);
        }
        lVar7 = lVar7 + 8;
      } while (lVar7 != lVar19);
    }
    if (!bVar5) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
  }
  else {
    *(undefined8 **)(param_1 + 0x138) = puVar15;
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1e0));
  return;
}


