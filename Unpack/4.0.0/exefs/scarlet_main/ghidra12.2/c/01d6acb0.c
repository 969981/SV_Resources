/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d6acb0; name: FUN_01d6acb0
 */


undefined8 FUN_01d6acb0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *local_70;
  long *local_68;
  
  puVar8 = (undefined8 *)FUN_00c41a10(param_1,1);
  if (puVar8 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = (long *)*puVar8;
  }
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar17 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar17;
  if (plVar16 != (long *)0x0) {
    if ((char)*plVar16 == '\x01') {
      lVar12 = plVar16[1];
      plVar16[1] = 0;
      if (lVar12 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar3 = *(int *)(lVar13 + 0x12c8);
        iVar7 = iVar3 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar7;
        if (*(int *)(lVar13 + 0x12cc) <= iVar3) {
          *(int *)(lVar13 + 0x12cc) = iVar7;
        }
        plVar10 = (long *)plVar16[2];
        lVar13 = plVar16[3];
        lVar14 = plVar16[4];
        uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar13,lVar14);
        }
        else {
          FUN_00c48fe8(plVar10,lVar12,lVar13,lVar14);
        }
        lVar12 = FUN_00c4e600();
        iVar7 = *(int *)(lVar12 + 0x12c8) + -1;
        *(int *)(lVar12 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            local_68 = plVar10;
            FUN_00c4ea30(&local_68,&local_70);
            plVar15 = (long *)*plVar10;
            plVar2 = plVar10;
            if (plVar10[600] != 0) {
              plVar2 = plVar10 + plVar10[600] * 3;
            }
            if (plVar2 == plVar10) {
              uVar19 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar10 + 0xd0))();
              if ((long *)*plVar10 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10);
                plVar15 = (long *)*plVar10;
              }
              plVar1 = plVar10 + 3;
              if (plVar2 == plVar1) {
                uVar19 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar6 = (long *)*plVar1 != plVar15;
                if (bVar6) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar10,plVar10 + 3);
                  plVar15 = (long *)plVar10[3];
                }
                uVar19 = (ulong)bVar6;
                plVar1 = plVar10 + 6;
                if (plVar2 == plVar1) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar19 * 3,plVar10 + 6);
                    plVar15 = (long *)plVar10[6];
                    uVar19 = 2;
                  }
                  plVar1 = plVar10 + 9;
                  if (plVar2 == plVar1) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar19 * 3,plVar10 + 9);
                      plVar15 = (long *)plVar10[9];
                      uVar19 = 3;
                    }
                    plVar1 = plVar10 + 0xc;
                    if (plVar2 == plVar1) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar19 * 3,plVar10 + 0xc);
                        plVar15 = (long *)plVar10[0xc];
                        uVar19 = 4;
                      }
                      plVar1 = plVar10 + 0xf;
                      if (plVar2 == plVar1) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))
                                    (plVar15,plVar10 + uVar19 * 3,plVar10 + 0xf);
                          plVar15 = (long *)plVar10[0xf];
                          uVar19 = 5;
                        }
                        uVar9 = 6;
                        for (plVar1 = plVar10 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar15) {
                            (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar19 * 3,plVar1);
                            plVar15 = (long *)*plVar1;
                            uVar19 = uVar9;
                          }
                          uVar9 = uVar9 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar10 + uVar19 * 3,plVar10 + uVar9 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar12 + 0x12cc) = 0;
        }
      }
    }
    puVar5 = PTR_DAT_047d38f8;
    lVar13 = *(long *)PTR_DAT_047d38f8;
    lVar12 = nn::os::GetCurrentThread();
    if (lVar12 != lVar13) {
      uVar18 = nn::os::GetCurrentThread();
LAB_01d6ae74:
      if (*(long *)puVar5 == 0) goto code_r0x01d6ae7c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar6) {
                *(undefined8 *)puVar5 = uVar18;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01d6ae84;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar6) {
          *(undefined8 *)puVar5 = uVar18;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01d6ae84:
      bVar6 = false;
      goto LAB_01d6ad40;
    }
    bVar6 = true;
LAB_01d6ad40:
    puVar8 = *(undefined8 **)(lVar17 + 0x30);
    local_68 = plVar16;
    if (puVar8 < *(undefined8 **)(lVar17 + 0x38)) {
      uVar18 = *(undefined8 *)(lVar17 + 0x40);
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *puVar8 = plVar16;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar8 = local_68;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      *(undefined8 **)(lVar17 + 0x30) = puVar8 + 1;
    }
    else {
      FUN_01d6774c(lVar17 + 0x28,&local_68);
    }
    if (!bVar6) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
  }
  return 0;
code_r0x01d6ae7c:
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar6) {
    *(undefined8 *)puVar5 = uVar18;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01d6ae84;
  goto LAB_01d6ae74;
}


