/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b924c; name: FUN_033b924c
 */


void FUN_033b924c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  size_t sVar13;
  void *__dest;
  ThreadType *pTVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  char *__s;
  long lVar22;
  long lVar23;
  long *plVar24;
  ulong *puVar25;
  char *local_2d8;
  ulong *puStack_2d0;
  undefined8 *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  char *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  char local_288 [256];
  long local_188;
  long lStack_180;
  ulong local_178;
  undefined1 auStack_170 [168];
  undefined8 *local_c8;
  int local_c0;
  undefined8 *local_b8;
  int local_b0;
  long local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  long local_78;
  long *local_70;
  
  lVar20 = tpidr_el0;
  lVar15 = *(long *)(lVar20 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar15;
  }
  plVar24 = *(long **)(lVar15 + 0x3e0);
  if (plVar24 != (long *)0x0) {
    lVar20 = *plVar24;
    if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
      (**(code **)(lVar20 + 0x18))
                ("Clone to native (hkObjectResource)",0x22,*(undefined8 *)(lVar20 + 0x28));
    }
    puVar21 = (undefined8 *)plVar24[2];
    uVar16 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar24[3]) && (plVar24[2] = uVar16, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TtClone to native (hkObjectResource)";
      uVar9 = nn::os::GetSystemTick();
      puVar21[1] = uVar9;
    }
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar21 = (undefined8 *)plVar24[2];
      uVar16 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar24[3]) && (plVar24[2] = uVar16, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        puVar21[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
  }
  local_70 = plVar24;
  FUN_0320afbc(param_2[3]);
  puVar7 = PTR_DAT_047d1a08;
  local_2d8 = &DAT_000000c0;
  lVar20 = (**(code **)PTR_DAT_047d1a08)(0,&local_2d8,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(lVar20,"CloneImpl");
  }
  FUN_00cb44e4(lVar20);
  local_88 = &DAT_03d7702c;
  local_80 = 0;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  local_78 = lVar20;
  iVar8 = FUN_033b9be0(param_3,&local_78,&local_98);
  if (iVar8 < 0) {
    *param_1 = 0;
    goto LAB_033b98e4;
  }
  FUN_033ba284(auStack_170,param_3,param_2[4],*param_2,&local_78,&local_98,param_2[6],
               *(undefined1 *)(param_2 + 5));
  uVar9 = param_2[3];
  (**(code **)(*param_3 + 0x10))(&local_2d8,param_3);
  FUN_0320b0e8(&local_188,uVar9,&local_2d8,auStack_170);
  if (((ulong)local_2c8 & 1) != 0) {
    plVar10 = (long *)((ulong)local_2c8 & 0xfffffffffffffffe);
    plVar11 = plVar10 + 1;
    do {
      lVar20 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  if (local_188 == 0) {
    if (DAT_0488e610 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_033b9b00;
    }
    else if (DAT_046aaf68 == '\0') {
      local_2d8 = (char *)0x0;
      local_2c8 = &DAT_0488e5c0;
      uStack_2c0 = 2;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_2b8 = nn::os::GetThreadId(pTVar14);
      local_2b0 = (char *)0x0;
      local_2a8 = 0;
      local_2a0 = (char *)0x0;
      local_298 = 0;
      uStack_290 = 0;
      FUN_0322c554(&local_2d8,"Unable to create native objects",PTR_DAT_047d1b38);
      local_2a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
      ;
      local_298 = 0x2b7;
      FUN_0322c8e0(&local_2d8);
      if (((ulong)local_2b0 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2b0 + -1,0);
      }
    }
    else {
LAB_033b9b00:
      local_2d8 = (char *)0x0;
      local_2c8 = &DAT_0488e5c0;
      uStack_2c0 = 2;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_2b8 = nn::os::GetThreadId(pTVar14);
      local_2a8 = 0;
      local_2a0 = (char *)0x0;
      local_298 = 0;
      uStack_290 = 0;
      local_288[0] = '\0';
      puStack_2d0 = (ulong *)0x10000000000;
      local_2d8 = local_288;
      local_2b0 = local_288;
      FUN_0322c554(&local_2d8,"Unable to create native objects",PTR_DAT_047d1b38);
      local_2a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/hkSerialize.cpp"
      ;
      local_298 = 0x2b7;
      if (local_288[0] != '\0') {
        sVar13 = strlen(local_288);
        (local_288 + (int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))[0] = '\n';
        (local_288 + (int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))[1] = '\0';
        printf("%s",local_288);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
      if (((ulong)local_2b0 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2b0 + -1,0);
      }
    }
    *param_1 = 0;
  }
  else {
    local_2d8 = &DAT_00000050;
    plVar11 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_2d8,0);
    if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
      (**(code **)(puVar7 + 0x10))(plVar11,"hkObjectResource");
    }
    plVar11[2] = 1;
    *plVar11 = (long)(PTR_DAT_047e6918 + 0x10);
    plVar11[1] = 0xffffffff;
    plVar11[3] = local_188;
    plVar11[4] = lStack_180;
    plVar11[5] = local_178;
    if ((local_178 & 1) != 0) {
      piVar2 = (int *)((local_178 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *plVar11 = (long)&PTR_LAB_047b4788;
    plVar10 = plVar11 + 6;
    *plVar10 = 0;
    plVar11[7] = -0x8000000000000000;
    plVar11[8] = 0;
    plVar11[9] = -0x8000000000000000;
    if (local_b0 != 0) {
      iVar8 = 0;
      uVar19 = 0;
      puVar21 = local_b8;
      while( true ) {
        uVar16 = puVar21[3];
        iVar1 = iVar8 + 1;
        if ((int)(uVar19 & 0x7fffffff) <= iVar8) {
          FUN_03379778(plVar11 + 8,PTR_PTR_047d1a50,(long)iVar1);
          iVar8 = (int)plVar11[9];
        }
        __s = (char *)(uVar16 & 0xfffffffffffffffe);
        lVar20 = plVar11[8];
        puVar17 = (undefined8 *)(lVar20 + (long)iVar8 * 0x28);
        *(int *)(plVar11 + 9) = iVar1;
        puVar25 = puVar17 + 2;
        *puVar25 = 0;
        puVar17[3] = 0;
        uVar9 = puVar21[1];
        *puVar17 = *puVar21;
        puVar17[1] = uVar9;
        if ((puVar21[2] & 1) != 0) {
          piVar2 = (int *)((puVar21[2] & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((*puVar25 & 1) != 0) {
            plVar12 = (long *)(*puVar25 & 0xfffffffffffffffe);
            plVar3 = plVar12 + 1;
            do {
              lVar15 = *plVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = (int)lVar15 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar12 != (long *)0x0) && ((int)lVar15 == 1)) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        *puVar25 = puVar21[2];
        puVar25 = (ulong *)(lVar20 + (long)iVar8 * 0x28 + 0x18);
        uVar16 = *puVar25;
        if ((char *)(uVar16 & 0xfffffffffffffffe) != __s) {
          if (__s == (char *)0x0) {
            uVar18 = 0;
          }
          else {
            sVar13 = strlen(__s);
            sVar13 = (size_t)((int)sVar13 + 1);
            __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                       (PTR_PTR_047d1a50,sVar13);
            memcpy(__dest,__s,sVar13);
            uVar18 = (ulong)__dest | 1;
          }
          *puVar25 = uVar18;
          if ((uVar16 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16 - 1,0);
          }
        }
        puVar21 = puVar21 + 5;
        *(undefined4 *)(lVar20 + (long)iVar8 * 0x28 + 0x20) = 0;
        if (puVar21 == local_b8 + (long)local_b0 * 5) break;
        iVar8 = (int)plVar11[9];
        uVar19 = *(uint *)((long)plVar11 + 0x4c);
      }
    }
    puVar7 = PTR_PTR_047d1a50;
    if (local_c0 != 0) {
      puVar21 = local_c8;
      do {
        if (*(char *)(puVar21 + 5) == '\x02') {
          local_2d8 = (char *)puVar21[6];
        }
        else if (*(char *)(puVar21 + 5) == '\x01') {
          local_2d8 = (char *)(puVar21 + 6);
        }
        else {
          local_2d8 = (char *)0x0;
        }
        puStack_2d0 = (ulong *)puVar21[4];
        local_2c8 = (undefined8 *)0x0;
        puVar25 = puStack_2d0;
        if (puStack_2d0 != (ulong *)0x0) {
          do {
            uVar16 = *puVar25;
            if (((uint)uVar16 >> 2 & 1) != 0) {
              local_2c8 = (undefined8 *)puVar25[(uVar16 >> 1 & 1) + (uVar16 & 1) + 2];
              goto LAB_033b9708;
            }
            puVar25 = (ulong *)puVar25[1];
          } while (puVar25 != (ulong *)0x0);
          local_2c8 = (undefined8 *)0x0;
        }
LAB_033b9708:
        if (((ulong)local_2c8 & 1) != 0) {
          piVar2 = (int *)(((ulong)local_2c8 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iVar8 = (int)plVar11[7];
        lVar20 = (long)iVar8;
        if ((int)(*(uint *)((long)plVar11 + 0x3c) & 0x7fffffff) <= iVar8) {
          FUN_03379588(plVar10,puVar7,lVar20 + 1);
          iVar8 = (int)plVar11[7];
        }
        puVar17 = (undefined8 *)(*plVar10 + (long)iVar8 * 0x40);
        uVar9 = puVar21[1];
        *puVar17 = *puVar21;
        puVar17[1] = uVar9;
        uVar16 = puVar21[2];
        puVar17[2] = uVar16;
        if ((uVar16 & 1) != 0) {
          piVar2 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar17[4] = 0;
        *(undefined1 *)(puVar17 + 5) = 0;
        FUN_0320a3e8(puVar17 + 4,&local_2d8);
        *(int *)(plVar11 + 7) = (int)(lVar20 + 1);
        if (((ulong)local_2c8 & 1) != 0) {
          plVar12 = (long *)((ulong)local_2c8 & 0xfffffffffffffffe);
          plVar3 = plVar12 + 1;
          do {
            lVar20 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = (int)lVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar20 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
        puVar21 = puVar21 + 8;
      } while (puVar21 != local_c8 + (long)local_c0 * 8);
    }
    *param_1 = plVar11;
  }
  if ((local_178 & 1) != 0) {
    plVar10 = (long *)(local_178 & 0xfffffffffffffffe);
    plVar11 = plVar10 + 1;
    do {
      lVar20 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  FUN_033ba3f0(auStack_170);
LAB_033b98e4:
  if ((local_88 != (undefined *)0x0) && (*(int *)(local_88 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_88,0);
    local_88 = &DAT_03d7702c;
    local_80 = 0;
  }
  lVar20 = local_98;
  puVar7 = PTR_PTR_047d1a50;
  if ((int)local_90 != 0) {
    lVar15 = local_98 + (long)(int)local_90 * 0x18;
    do {
      if (*(int *)(lVar15 + -8) != 0) {
        lVar22 = *(long *)(lVar15 + -0x10);
        lVar23 = lVar22 + (long)*(int *)(lVar15 + -8) * 0x18;
        do {
          puVar25 = (ulong *)(lVar23 + -8);
          lVar23 = lVar23 + -0x18;
          if ((*puVar25 & 1) != 0) {
            plVar10 = (long *)(*puVar25 & 0xfffffffffffffffe);
            plVar11 = plVar10 + 1;
            do {
              lVar6 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *(int *)plVar11 = (int)lVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        } while (lVar23 != lVar22);
      }
      lVar22 = lVar15 + -0x18;
      *(undefined4 *)(lVar15 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar15 + -4)) && (*(long *)(lVar15 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))
                  (puVar7,*(long *)(lVar15 + -0x10),(ulong)*(uint *)(lVar15 + -4) * 0x18);
      }
      *(undefined8 *)(lVar15 + -0x10) = 0;
      *(undefined4 *)(lVar15 + -4) = 0x80000000;
      lVar15 = lVar22;
    } while (lVar22 != lVar20);
  }
  lVar20 = local_90;
  uVar16 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar20) && (local_98 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar16 * 0x18);
  }
  lVar20 = local_78;
  if (local_78 != 0) {
    FUN_00cb4718(local_78);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar20,0);
  }
  if (plVar24 != (long *)0x0) {
    lVar20 = *plVar24;
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar21 = (undefined8 *)plVar24[2];
      uVar16 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar24[3]) && (plVar24[2] = uVar16, puVar21 != (undefined8 *)0x0)) {
        *puVar21 = &DAT_03c4e575;
        puVar21[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar21 = (undefined8 *)plVar24[2];
    uVar16 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar24[3]) && (plVar24[2] = uVar16, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar21[1] = uVar9;
    }
    if (*(code **)(lVar20 + 0x20) != (code *)0x0) {
      (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
    }
  }
  return;
}


