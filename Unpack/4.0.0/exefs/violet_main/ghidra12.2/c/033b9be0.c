/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b9be0; name: FUN_033b9be0
 */


undefined8 FUN_033b9be0(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ThreadType *pTVar8;
  size_t sVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  bool bVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  ulong *local_218;
  char *local_210;
  ulong *puStack_208;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  char local_1c0 [256];
  ulong *local_c0;
  long local_b8;
  long lStack_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  uStack_78 = *(undefined8 *)PTR_DAT_047ddc48;
  local_80 = -0x8000000000000000;
  local_70 = 0;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  local_90 = &PTR_FUN_047b4650;
  local_88 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_a0);
  puVar4 = PTR_PTR_047d1a50;
  if (0 < (int)local_98) {
    uVar17 = 0;
    iVar6 = (int)local_98;
    do {
      if (*(char *)(local_a0 + uVar17 * 0x18 + 0x10) == '\x02') {
        puVar10 = (undefined8 *)(local_a0 + uVar17 * 0x18);
        local_210 = (char *)*puVar10;
        puStack_208 = (ulong *)puVar10[1];
        local_200 = (undefined8 *)0x0;
        puVar11 = puStack_208;
        if (puStack_208 != (ulong *)0x0) {
          do {
            uVar13 = *puVar11;
            if (((uint)uVar13 >> 2 & 1) != 0) {
              local_200 = (undefined8 *)puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
              goto LAB_033b9ca8;
            }
            puVar11 = (ulong *)puVar11[1];
          } while (puVar11 != (ulong *)0x0);
          local_200 = (undefined8 *)0x0;
        }
LAB_033b9ca8:
        if (((ulong)local_200 & 1) != 0) {
          piVar19 = (int *)(((ulong)local_200 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar16) {
              *piVar19 = *piVar19 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_0320b0e8(&local_b8,param_2,&local_210,&local_90);
        if (((ulong)local_200 & 1) != 0) {
          plVar7 = (long *)((ulong)local_200 & 0xfffffffffffffffe);
          plVar14 = plVar7 + 1;
          do {
            lVar12 = *plVar14;
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar16) {
              *(int *)plVar14 = (int)lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        if (local_b8 == 0) {
          if (DAT_0488e610 < 2) {
            if (DAT_046aaf68 == '\0') goto LAB_033b9fc8;
          }
          else if (DAT_046aaf68 == '\0') {
            local_210 = (char *)0x0;
            local_200 = &DAT_0488e5c0;
            uStack_1f8 = 2;
            pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
            local_1f0 = nn::os::GetThreadId(pTVar8);
            local_1e8 = (char *)0x0;
            local_1e0 = 0;
            local_1d8 = (char *)0x0;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_c0 = *(ulong **)(local_a0 + (uVar17 & 0xffffffff) * 0x18 + 8);
            if (local_c0 == (ulong *)0x0) goto LAB_033b9f28;
            puVar11 = local_c0;
            goto LAB_033b9f18;
          }
          local_200 = &DAT_0488e5c0;
          uStack_1f8 = 2;
          pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
          local_1f0 = nn::os::GetThreadId(pTVar8);
          local_1e0 = 0;
          local_1d8 = (char *)0x0;
          puStack_208 = (ulong *)0x10000000000;
          local_1d0 = 0;
          uStack_1c8 = 0;
          local_1c0[0] = '\0';
          local_218 = *(ulong **)(local_a0 + (uVar17 & 0xffffffff) * 0x18 + 8);
          if (local_218 == (ulong *)0x0) goto LAB_033ba18c;
          puVar11 = local_218;
          goto LAB_033ba17c;
        }
        if (*(char *)(local_a0 + uVar17 * 0x18 + 0x10) == '\x02') {
          iVar6 = *(int *)(local_a0 + uVar17 * 0x18 + 0x14);
        }
        else {
          iVar6 = 0;
        }
        if (iVar6 < (int)local_98) {
          puVar11 = (ulong *)(local_a0 + (long)iVar6 * 0x18);
          local_c0 = (ulong *)*puVar11;
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == (ulong *)0x0) {
              uVar13 = 0;
              goto LAB_033b9dac;
            }
            uVar13 = *puVar11;
          } while (((uint)uVar13 >> 2 & 1) == 0);
          uVar13 = puVar11[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
          if ((uVar13 & 1) != 0) {
            piVar19 = (int *)((uVar13 & 0xfffffffffffffffe) + 8);
            do {
              cVar2 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar16) {
                *piVar19 = *piVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        else {
          local_c0 = (ulong *)0x0;
          uVar13 = 0;
        }
LAB_033b9dac:
        local_210 = (char *)0x0;
        puStack_208 = (ulong *)0x8000000000000000;
        iVar6 = FUN_033baae8(param_3,&local_c0,&local_210);
        lVar18 = *param_3 + (long)iVar6 * 0x18;
        piVar19 = (int *)(lVar18 + 0x10);
        iVar6 = *piVar19;
        lVar12 = (long)iVar6;
        if ((int)(*(uint *)(lVar18 + 0x14) & 0x7fffffff) <= iVar6) {
          FUN_031bc0f4((long *)(lVar18 + 8),puVar4,lVar12 + 1);
          iVar6 = *piVar19;
        }
        plVar14 = (long *)(*(long *)(lVar18 + 8) + (long)iVar6 * 0x18);
        *plVar14 = local_b8;
        plVar14[1] = lStack_b0;
        plVar14[2] = local_a8;
        if ((local_a8 & 1) != 0) {
          piVar1 = (int *)((local_a8 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar16) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *piVar19 = (int)(lVar12 + 1);
        if ((uVar13 & 1) != 0) {
          plVar7 = (long *)(uVar13 & 0xfffffffffffffffe);
          plVar14 = plVar7 + 1;
          do {
            lVar12 = *plVar14;
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar16) {
              *(int *)plVar14 = (int)lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        if ((local_a8 & 1) != 0) {
          plVar7 = (long *)(local_a8 & 0xfffffffffffffffe);
          plVar14 = plVar7 + 1;
          do {
            lVar12 = *plVar14;
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar16) {
              *(int *)plVar14 = (int)lVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        iVar6 = (int)local_98;
      }
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)iVar6);
  }
  uVar15 = 0;
  goto LAB_033ba008;
LAB_033b9f18:
  uVar17 = *puVar11;
  if (((uint)uVar17 >> 2 & 1) == 0) goto code_r0x033b9f20;
  uVar17 = puVar11[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
  if ((uVar17 & 1) != 0) {
    piVar19 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar16) {
        *piVar19 = *piVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar16 = false;
    goto LAB_033b9f30;
  }
  goto LAB_033b9f2c;
code_r0x033b9f20:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto LAB_033b9f28;
  goto LAB_033b9f18;
LAB_033b9f28:
  uVar17 = 0;
LAB_033b9f2c:
  bVar16 = true;
LAB_033b9f30:
  FUN_0322c554(&local_210,"Failed to clone note of type \'{}\'",PTR_DAT_047e5e48,&local_c0);
  local_1d8 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
  ;
  local_1d0 = 0x6a;
  if (!bVar16) {
    plVar7 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar14 = plVar7 + 1;
    do {
      lVar12 = *plVar14;
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_0322c8e0(&local_210);
  goto LAB_033b9f9c;
LAB_033ba17c:
  uVar17 = *puVar11;
  if (((uint)uVar17 >> 2 & 1) == 0) goto code_r0x033ba184;
  uVar17 = puVar11[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
  if ((uVar17 & 1) != 0) {
    piVar19 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
    do {
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar16) {
        *piVar19 = *piVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar16 = false;
    goto LAB_033ba1b0;
  }
  goto LAB_033ba1ac;
code_r0x033ba184:
  puVar11 = (ulong *)puVar11[1];
  if (puVar11 == (ulong *)0x0) goto LAB_033ba18c;
  goto LAB_033ba17c;
LAB_033ba18c:
  uVar17 = 0;
LAB_033ba1ac:
  bVar16 = true;
LAB_033ba1b0:
  local_210 = local_1c0;
  local_1e8 = local_1c0;
  FUN_0322c554(&local_210,"Failed to clone note of type \'{}\'",PTR_DAT_047e5e48,&local_218);
  local_1d8 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
  ;
  local_1d0 = 0x6a;
  if (!bVar16) {
    plVar7 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar14 = plVar7 + 1;
    do {
      lVar12 = *plVar14;
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if (local_1c0[0] != '\0') {
    sVar9 = strlen(local_1c0);
    (local_1c0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = '\n';
    (local_1c0 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = '\0';
    printf("%s",local_1c0);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_033b9f9c:
  if (((ulong)local_1e8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1e8 + -1,0);
  }
LAB_033b9fc8:
  if ((local_a8 & 1) != 0) {
    plVar7 = (long *)(local_a8 & 0xfffffffffffffffe);
    plVar14 = plVar7 + 1;
    do {
      lVar12 = *plVar14;
      cVar2 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar16) {
        *(int *)plVar14 = (int)lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar12 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  uVar15 = 0x80040200;
LAB_033ba008:
  uVar5 = local_98._4_4_;
  uVar17 = (ulong)local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (int)uVar5) && (local_a0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a0,uVar17 * 0x18);
  }
  lVar12 = local_88;
  local_90 = (undefined **)(PTR_DAT_047e5b98 + 0x10);
  if ((int)local_80 != 0) {
    lVar18 = local_88 + (long)(int)local_80 * 0x18;
    do {
      puVar11 = (ulong *)(lVar18 + -8);
      lVar18 = lVar18 + -0x18;
      if ((*puVar11 & 1) != 0) {
        plVar7 = (long *)(*puVar11 & 0xfffffffffffffffe);
        plVar14 = plVar7 + 1;
        do {
          lVar3 = *plVar14;
          cVar2 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar16) {
            *(int *)plVar14 = (int)lVar3 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar3 == 1)) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    } while (lVar18 != lVar12);
  }
  lVar12 = local_80;
  uVar17 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar17 * 0x18);
  }
  return uVar15;
}


