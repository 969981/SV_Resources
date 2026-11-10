/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01896cc0; name: FUN_01896cc0
 */


undefined8 FUN_01896cc0(long param_1,uint *param_2)

{
  LightEventType *pLVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined4 *local_b8;
  uint *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  int local_78;
  undefined1 local_74;
  int local_6c;
  int local_68;
  int local_64;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  local_a0 = 0x4000000000;
  uStack_98 = 0xf424000000000;
  lStack_a8 = (ulong)*param_2 + 4;
  local_90 = 0;
  local_88 = 1;
  if (*param_2 != 0) {
    local_b0 = param_2;
    uVar9 = FUN_01897c10(&local_b0);
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)((long)(param_2 + 1) + (ulong)param_2[1]);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 == 0)) {
        local_b8 = (undefined4 *)0x0;
      }
      else {
        local_b8 = (undefined4 *)((long)piVar2 + uVar9);
      }
      plVar12 = (long *)(param_1 + 0x120);
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar12 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_01896d6c;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x128));
            while (*plVar12 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *plVar12 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01896d6c;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01896d6c:
      lVar10 = 0;
      pLVar1 = (LightEventType *)(param_1 + 0x128);
      do {
        plVar13 = *(long **)(param_1 + 0x138);
        plVar15 = *(long **)(param_1 + 0x140);
        plVar14 = plVar13;
        if ((plVar13 != plVar15) && (*(long *)(*plVar13 + 0x70) != (&DAT_045ed228)[lVar10 * 3])) {
          do {
            plVar14 = plVar14 + 1;
            if (plVar15 == plVar14) {
              plVar14 = plVar15;
              goto LAB_01896dc8;
            }
          } while (*(long *)(*plVar14 + 0x70) != (&DAT_045ed228)[lVar10 * 3]);
        }
LAB_01896dc8:
        if (plVar15 != plVar14) {
          uVar4 = local_b8[lVar10 + 3];
          lVar16 = *plVar12;
          lVar11 = nn::os::GetCurrentThread();
          uVar8 = (undefined4)((ulong)((long)plVar14 - (long)plVar13) >> 3);
          if (lVar11 != lVar16) {
            lVar11 = nn::os::GetCurrentThread();
LAB_01896dfc:
            if (*plVar12 == 0) goto code_r0x01896e04;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar1);
            do {
              if (*plVar12 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent(pLVar1);
                  while (*plVar12 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                    if (bVar7) {
                      *plVar12 = lVar11;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_01896e0c;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *plVar12 = lVar11;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_01896e0c:
            local_80 = CONCAT44(uVar4,uVar8);
            local_78 = CONCAT31(local_78._1_3_,1);
            local_74 = 1;
            FUN_014fb000(param_1,&local_80);
            *plVar12 = 0;
            nn::os::SignalLightEvent(pLVar1);
            goto LAB_01896e30;
          }
          local_80 = CONCAT44(uVar4,uVar8);
          local_78 = CONCAT31(local_78._1_3_,1);
          local_74 = 1;
          FUN_014fb000(param_1,&local_80);
        }
LAB_01896e30:
        lVar10 = lVar10 + 1;
      } while (lVar10 != 8);
      if ((*(long *)(param_1 + 0x520) == *(long *)(param_1 + 0x528)) &&
         (*(long *)(param_1 + 0x498) != 0)) {
        iVar5 = local_b8[0xb];
        plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12;
          do {
            if (plVar13[2] == -0x5ded90f6941543fc) {
              local_68 = (int)plVar13[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar13 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar13 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar13[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar13 + 0x7c) != *piVar3) {
                *(int *)((long)plVar13 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar13 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        iVar5 = local_b8[0xc];
        if (plVar12 == (long *)0x0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = plVar12;
          do {
            if (plVar13[2] == -0x29c9cc6699211de6) {
              local_68 = (int)plVar13[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar13 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar13 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar13[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar13 + 0x7c) != *piVar3) {
                *(int *)((long)plVar13 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar13 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
          plVar13 = plVar12;
        }
        iVar5 = local_b8[0xd];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == 0x9f348a9a6a8de1a) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0xe];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == 0x320968092c9f1a9a) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0xf];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == -0x779d955d28406c6c) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x10];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == 0x14b123ca0436bac0) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x11];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == 0x236e2c46bca7c58d) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x12];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == 0x47be5e4a33151278) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x13];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == -0x1b7d854a7b351234) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x14];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == 0x7dd7bc0956f28b42) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x15];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == -0x6f9e0d57cd0e555e) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        iVar5 = local_b8[0x16];
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13;
          do {
            if (plVar15[2] == -0x3b859442ba6778b2) {
              local_68 = (int)plVar15[0xe];
              local_64 = iVar5;
              local_6c = *(int *)((long)plVar15 + 0x74);
              piVar2 = &local_6c;
              if (iVar5 <= *(int *)((long)plVar15 + 0x74)) {
                piVar2 = &local_64;
              }
              piVar3 = &local_68;
              if ((int)plVar15[0xe] <= iVar5) {
                piVar3 = piVar2;
              }
              if (*(int *)((long)plVar15 + 0x7c) != *piVar3) {
                *(int *)((long)plVar15 + 0x7c) = *piVar3;
                *(undefined1 *)((long)plVar15 + 0x84) = 1;
                plVar12 = *(long **)(*(long *)(param_1 + 0x498) + 0x228);
              }
              plVar13 = plVar12;
              break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        local_80 = 0x5c463c353242eb3b;
        local_78 = local_b8[0x17];
        for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
          if (plVar13[2] == 0x5c463c353242eb3b) {
            local_68 = *(int *)(plVar13 + 0xe);
            local_64 = local_78;
            local_6c = *(int *)((long)plVar13 + 0x74);
            piVar2 = &local_6c;
            if (local_78 <= *(int *)((long)plVar13 + 0x74)) {
              piVar2 = &local_64;
            }
            piVar3 = &local_68;
            if (*(int *)(plVar13 + 0xe) <= local_78) {
              piVar3 = piVar2;
            }
            if (*(int *)((long)plVar13 + 0x7c) != *piVar3) {
              *(int *)((long)plVar13 + 0x7c) = *piVar3;
              *(undefined1 *)((long)plVar13 + 0x84) = 1;
            }
            break;
          }
        }
      }
      else {
        lVar10 = 0;
        puVar17 = &DAT_045ed0f0;
        do {
          local_80 = *puVar17;
          local_78 = *(int *)((long)local_b8 + lVar10 + 0x2c);
          FUN_01897760(param_1 + 0x590,&local_80);
          lVar10 = lVar10 + 4;
          puVar17 = puVar17 + 3;
        } while (lVar10 != 0x34);
      }
      *(undefined4 *)(param_1 + 0x394) = *local_b8;
      *(undefined4 *)(param_1 + 0x390) = local_b8[1];
      *(undefined4 *)(param_1 + 0x39c) = local_b8[2];
      *(undefined8 *)(param_1 + 0x120) = 0;
      nn::os::SignalLightEvent(pLVar1);
      return 1;
    }
  }
  return 0;
code_r0x01896e04:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar7) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01896e0c;
  goto LAB_01896dfc;
}


