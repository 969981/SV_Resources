/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e36038; name: FUN_01e36038
 */


undefined8 FUN_01e36038(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 local_98;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    local_98 = *(undefined8 *)(param_1 + 8);
    FUN_0109af10(&local_90,local_98,&local_98);
    lVar8 = local_90;
    local_90 = 0;
    lVar11 = *(long *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = lVar8;
    if (lVar11 == 0) {
      *(long *)(param_1 + 0x1a8) = local_80;
      *(undefined8 *)(param_1 + 0x1b0) = local_78;
      *(long **)(param_1 + 0x1a0) = local_88;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar4 = *(int *)(lVar8 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
        *(int *)(lVar8 + 0x12cc) = iVar1;
      }
      lVar8 = *(long *)(lVar11 + 0x100);
      if (lVar8 != 0) {
        plVar15 = *(long **)(lVar11 + 0x118);
        *(long *)(lVar11 + 0x108) = lVar8;
        lVar12 = *(long *)(lVar11 + 0x110) - lVar8;
        uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,lVar12,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar8,lVar12,8);
        }
      }
      lVar8 = *(long *)(lVar11 + 200);
      if (lVar8 != 0) {
        plVar15 = *(long **)(lVar11 + 0xe0);
        *(long *)(lVar11 + 0xd0) = lVar8;
        lVar12 = *(long *)(lVar11 + 0xd8) - lVar8;
        uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,lVar12,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar8,lVar12,8);
        }
      }
      FUN_0109b460(lVar11 + 8);
      plVar15 = *(long **)(param_1 + 0x1a0);
      uVar7 = *(undefined8 *)(param_1 + 0x1a8);
      uVar13 = *(undefined8 *)(param_1 + 0x1b0);
      uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar11,uVar7,uVar13);
      }
      else {
        FUN_00c48fe8(plVar15,lVar11,uVar7,uVar13);
      }
      lVar8 = FUN_00c4e600();
      iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_70 = plVar15 + plVar15[600] * 3;
          plStack_68 = plVar15;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar14 = (long *)*plVar15;
          plVar3 = plVar15;
          if (plVar15[600] != 0) {
            plVar3 = plVar15 + plVar15[600] * 3;
          }
          if (plVar3 == plVar15) {
            uVar16 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
              plVar14 = (long *)*plVar15;
            }
            plVar2 = plVar15 + 3;
            if (plVar3 == plVar2) {
              uVar16 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar14;
              if (bVar6) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
                plVar14 = (long *)plVar15[3];
              }
              uVar16 = (ulong)bVar6;
              plVar2 = plVar15 + 6;
              if (plVar3 == plVar2) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 6);
                  plVar14 = (long *)plVar15[6];
                  uVar16 = 2;
                }
                plVar2 = plVar15 + 9;
                if (plVar3 == plVar2) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 9);
                    plVar14 = (long *)plVar15[9];
                    uVar16 = 3;
                  }
                  plVar2 = plVar15 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 0xc);
                      plVar14 = (long *)plVar15[0xc];
                      uVar16 = 4;
                    }
                    plVar2 = plVar15 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 0xf);
                        plVar14 = (long *)plVar15[0xf];
                        uVar16 = 5;
                      }
                      uVar9 = 6;
                      for (plVar2 = plVar15 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar2);
                          plVar14 = (long *)*plVar2;
                          uVar16 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + uVar9 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
      lVar8 = local_90;
      *(long **)(param_1 + 0x1a0) = local_88;
      *(long *)(param_1 + 0x1a8) = local_80;
      *(undefined8 *)(param_1 + 0x1b0) = local_78;
      local_90 = 0;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar11 = FUN_00c4e600();
        iVar4 = *(int *)(lVar11 + 0x12c8);
        iVar1 = iVar4 + 1;
        *(int *)(lVar11 + 0x12c8) = iVar1;
        if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
          *(int *)(lVar11 + 0x12cc) = iVar1;
        }
        lVar11 = *(long *)(lVar8 + 0x100);
        if (lVar11 != 0) {
          plVar15 = *(long **)(lVar8 + 0x118);
          *(long *)(lVar8 + 0x108) = lVar11;
          lVar12 = *(long *)(lVar8 + 0x110) - lVar11;
          uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar11,lVar12,8);
          }
          else {
            FUN_00c48fe8(plVar15,lVar11,lVar12,8);
          }
        }
        lVar11 = *(long *)(lVar8 + 200);
        if (lVar11 != 0) {
          plVar15 = *(long **)(lVar8 + 0xe0);
          *(long *)(lVar8 + 0xd0) = lVar11;
          lVar12 = *(long *)(lVar8 + 0xd8) - lVar11;
          uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar11,lVar12,8);
          }
          else {
            FUN_00c48fe8(plVar15,lVar11,lVar12,8);
          }
        }
        FUN_0109b460(lVar8 + 8);
        uVar9 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,lVar8,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,lVar8,local_80,local_78);
        }
        lVar8 = FUN_00c4e600();
        iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar15 = (long *)FUN_00c4e600();
          if (plVar15[600] != 0) {
            local_70 = plVar15 + plVar15[600] * 3;
            plStack_68 = plVar15;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar14 = (long *)*plVar15;
            plVar3 = plVar15;
            if (plVar15[600] != 0) {
              plVar3 = plVar15 + plVar15[600] * 3;
            }
            if (plVar3 == plVar15) {
              uVar16 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
                plVar14 = (long *)*plVar15;
              }
              plVar2 = plVar15 + 3;
              if (plVar3 == plVar2) {
                uVar16 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar6 = (long *)*plVar2 != plVar14;
                if (bVar6) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
                  plVar14 = (long *)plVar15[3];
                }
                uVar16 = (ulong)bVar6;
                plVar2 = plVar15 + 6;
                if (plVar3 == plVar2) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 6);
                    plVar14 = (long *)plVar15[6];
                    uVar16 = 2;
                  }
                  plVar2 = plVar15 + 9;
                  if (plVar3 == plVar2) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 9);
                      plVar14 = (long *)plVar15[9];
                      uVar16 = 3;
                    }
                    plVar2 = plVar15 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + 0xc);
                        plVar14 = (long *)plVar15[0xc];
                        uVar16 = 4;
                      }
                      plVar2 = plVar15 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))
                                    (plVar14,plVar15 + uVar16 * 3,plVar15 + 0xf);
                          plVar14 = (long *)plVar15[0xf];
                          uVar16 = 5;
                        }
                        uVar9 = 6;
                        for (plVar2 = plVar15 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar14) {
                            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar2);
                            plVar14 = (long *)*plVar2;
                            uVar16 = uVar9;
                          }
                          uVar9 = uVar9 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar16 * 3,plVar15 + uVar9 * 3);
            plVar15[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
    }
  }
  local_90 = -0x100000000;
  uVar7 = FUN_0103b2e0(param_1 + 0xe8,&local_90);
  plVar15 = (long *)(param_1 + 0x48);
  lVar11 = *plVar15;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar11) {
    plVar15 = (long *)0x0;
    bVar6 = true;
LAB_01e360b0:
    local_90 = param_1;
    local_88 = (long *)uVar7;
    local_80 = param_1;
    local_78 = param_2;
    FUN_01e37818(param_1 + 0x60,&local_90);
    if (!bVar6) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    return uVar7;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01e360ac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar15 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01e360ac;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *plVar15 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01e360ac:
  bVar6 = false;
  goto LAB_01e360b0;
}


