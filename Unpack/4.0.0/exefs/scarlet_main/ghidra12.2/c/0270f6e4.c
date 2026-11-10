/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270f6e4; name: FUN_0270f6e4
 */


void FUN_0270f6e4(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *local_90;
  ulong local_88;
  long *local_70;
  long *plStack_68;
  
  nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x168));
  plVar13 = (long *)(param_1 + 0x148);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar10) {
      *plVar13 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_0270f730;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
        while (*plVar13 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar10) {
            *plVar13 = lVar11;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_0270f730;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar10) {
      *plVar13 = lVar11;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_0270f730:
  uVar4 = 0;
  if (*(int *)(param_1 + 0x140) + 1U < 4) {
    uVar4 = *(int *)(param_1 + 0x140) + 1;
  }
  lVar11 = param_1 + (ulong)uVar4 * 0x38;
  puVar15 = (undefined8 *)(lVar11 + 0x28);
  puVar16 = (undefined8 *)*puVar15;
  puVar14 = (undefined8 *)(lVar11 + 0x30);
  puVar19 = (undefined8 *)*puVar14;
  if (puVar16 != puVar19) {
    do {
      puVar18 = (undefined8 *)*puVar16;
      plVar13 = (long *)puVar18[1];
      uVar5 = puVar18[2];
      uVar7 = *(undefined2 *)(puVar18 + 3);
      uVar8 = *(undefined2 *)((long)puVar18 + 0x1a);
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar6 = *(int *)(lVar11 + 0x12c8);
      iVar1 = iVar6 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
        *(int *)(lVar11 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar18)(puVar18);
      uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar5,uVar7,uVar8);
      }
      else {
        FUN_00c48fe8(plVar13,uVar5,uVar7,uVar8);
      }
      lVar11 = FUN_00c4e600();
      iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar13 = (long *)FUN_00c4e600();
        if (plVar13[600] != 0) {
          local_70 = plVar13 + plVar13[600] * 3;
          plStack_68 = plVar13;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar17 = (long *)*plVar13;
          plVar3 = plVar13;
          if (plVar13[600] != 0) {
            plVar3 = plVar13 + plVar13[600] * 3;
          }
          if (plVar3 == plVar13) {
            local_88 = 0;
            uVar12 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar13,plVar13);
              plVar17 = (long *)*plVar13;
            }
            plVar2 = plVar13 + 3;
            if (plVar3 == plVar2) {
              local_88 = 0;
              uVar12 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar10 = (long *)*plVar2 != plVar17;
              if (bVar10) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar13,plVar13 + 3);
                plVar17 = (long *)plVar13[3];
              }
              local_88 = (ulong)bVar10;
              plVar2 = plVar13 + 6;
              if (plVar3 == plVar2) {
                uVar12 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + local_88 * 3,plVar13 + 6);
                  plVar17 = (long *)plVar13[6];
                  local_88 = 2;
                }
                plVar2 = plVar13 + 9;
                if (plVar3 == plVar2) {
                  uVar12 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + local_88 * 3,plVar13 + 9);
                    plVar17 = (long *)plVar13[9];
                    local_88 = 3;
                  }
                  plVar2 = plVar13 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar12 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + local_88 * 3,plVar13 + 0xc);
                      plVar17 = (long *)plVar13[0xc];
                      local_88 = 4;
                    }
                    plVar2 = plVar13 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar12 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))
                                  (plVar17,plVar13 + local_88 * 3,plVar13 + 0xf);
                        plVar17 = (long *)plVar13[0xf];
                        local_88 = 5;
                      }
                      local_90 = plVar13 + 0x12;
                      if (plVar3 == local_90) {
                        uVar12 = 6;
                      }
                      else {
                        uVar12 = 6;
                        do {
                          (**(code **)(*(long *)*local_90 + 0xd0))();
                          if ((long *)*local_90 != plVar17) {
                            (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + local_88 * 3,local_90)
                            ;
                            plVar17 = (long *)*local_90;
                            local_88 = uVar12;
                          }
                          local_90 = local_90 + 3;
                          uVar12 = uVar12 + 1;
                        } while (plVar3 != local_90);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + local_88 * 3,plVar13 + uVar12 * 3);
          plVar13[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar19);
    puVar16 = (undefined8 *)*puVar15;
  }
  *puVar14 = puVar16;
  if (*(long *)(param_1 + 0x108) != *(long *)(param_1 + 0x110)) {
    FUN_00e665d0(puVar15,puVar16);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x108);
  }
  *(uint *)(param_1 + 0x140) = uVar4;
  nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x168));
  *(undefined8 *)(param_1 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
  return;
}


