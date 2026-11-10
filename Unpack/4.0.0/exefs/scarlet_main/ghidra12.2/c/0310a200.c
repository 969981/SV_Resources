/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310a200; name: FUN_0310a200
 */


void FUN_0310a200(undefined8 *param_1,long param_2,long param_3,long param_4,uint param_5,
                 undefined4 param_6,long *param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  void *__src;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar19 = tpidr_el0;
  lVar9 = *(long *)(lVar19 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar9;
  }
  plVar18 = *(long **)(lVar9 + 0x3e0);
  if (plVar18 != (long *)0x0) {
    lVar19 = *plVar18;
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))
                ("hkaiUpdateNavDataTasks::MakeContext",0x23,*(undefined8 *)(lVar19 + 0x28));
    }
    puVar20 = (undefined8 *)plVar18[2];
    uVar10 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar18[3]) && (plVar18[2] = uVar10, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "TthkaiUpdateNavDataTasks::MakeContext";
      uVar4 = nn::os::GetSystemTick();
      puVar20[1] = uVar4;
    }
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar20 = (undefined8 *)plVar18[2];
      uVar10 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar18[3]) && (plVar18[2] = uVar10, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
  }
  puVar20 = (undefined8 *)PTR_DAT_047d1a08;
  local_68 = 0x1b0;
  local_70 = plVar18;
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)((long)puVar20 + 0x10) != (code *)0x0) {
    (**(code **)((long)puVar20 + 0x10))(puVar5,"Context");
  }
  memset(puVar5 + 3,0,0x198);
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  *puVar5 = &PTR_LAB_0464e9a0;
  puVar21 = puVar5 + 8;
  *puVar21 = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *(undefined8 *)((long)puVar5 + 0x4c) = 0x80000000;
  puVar5[0xe] = 0x8000000000000000;
  plVar13 = puVar5 + 0xb;
  *plVar13 = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  plVar18 = puVar5 + 0xf;
  *plVar18 = 0;
  *(undefined4 *)(puVar5 + 0x14) = 0;
  puVar5[0x13] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x8000000000000000;
  plVar7 = puVar5 + 0x12;
  *plVar7 = 0;
  *(undefined8 *)((long)puVar5 + 0xa4) = 0x80000000;
  puVar5[0x1a] = 0x8000000000000000;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x1b] = &DAT_03d7702c;
  *(undefined4 *)(puVar5 + 0x1c) = 0;
  puVar5[0x1d] = puVar5 + 0x1f;
  puVar5[0x1e] = 0x8000000100000000;
  *(undefined4 *)(puVar5 + 0x25) = 0;
  *(undefined4 *)(puVar5 + 0x2d) = 0;
  puVar5[0x2a] = 0;
  *(undefined4 *)((long)puVar5 + 0x16c) = 0x80000000;
  puVar5[0x23] = 0x8000000000000000;
  puVar5[0x24] = &DAT_03d7702c;
  puVar5[0x21] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = puVar5 + 0x28;
  puVar5[0x27] = 0x8000000100000000;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0x8000000000000000;
  puVar5[0x30] = 0;
  puVar5[0x31] = 0x8000000000000000;
  puVar5[0x32] = 0;
  puVar5[0x33] = 0x8000000000000000;
  puVar5[0x34] = 0;
  puVar5[0x35] = 0x8000000000000000;
  *param_1 = puVar5;
  *(undefined4 *)(puVar5 + 3) = param_6;
  puVar5[4] = param_2;
  lVar19 = *(long *)(param_2 + 0x4c8);
  if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
    plVar6 = (long *)(lVar19 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)puVar5[5];
  puVar5[5] = lVar19;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar11 = plVar6 + 2;
    do {
      lVar19 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  uVar4 = FUN_030d4988(param_2);
  plVar6 = (long *)puVar5[6];
  puVar5[6] = uVar4;
  if (plVar6 != (long *)0x0) {
    if (*plVar6 != 0) {
      uVar8 = *(uint *)(plVar6 + 3);
      if (*(char *)((long)plVar6 + 0xc) != '\0') {
        plVar11 = (long *)plVar6[2];
        if ((int)uVar8 < 1) {
          plVar14 = plVar11;
        }
        else {
          plVar14 = plVar11;
          if (uVar8 != 1) {
            iVar15 = -(uVar8 & 0xfffffffe);
            do {
              plVar12 = plVar11;
              if (*plVar14 != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = *plVar14;
              }
              plVar11 = plVar12;
              if (plVar14[1] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar14[1];
              }
              plVar14 = plVar14 + 2;
              iVar15 = iVar15 + 2;
            } while (iVar15 != 0);
          }
          plVar12 = plVar11;
          if (((uVar8 & 1) != 0) && (*plVar14 != 0)) {
            plVar12 = plVar11 + 1;
            *plVar11 = *plVar14;
          }
          plVar11 = plVar12;
          plVar14 = (long *)plVar6[2];
        }
        uVar8 = (uint)((ulong)((long)plVar11 - (long)plVar14) >> 3);
        *(undefined1 *)((long)plVar6 + 0xc) = 0;
      }
      if (uVar8 != 0) {
        (**(code **)(*(long *)*plVar6 + 0x28))((long *)*plVar6,plVar6[2]);
      }
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)(plVar6 + 1) = 0;
    }
    *(undefined4 *)(plVar6 + 3) = 0;
    if ((-1 < (int)*(uint *)((long)plVar6 + 0x1c)) && (plVar6[2] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,plVar6[2],(ulong)*(uint *)((long)plVar6 + 0x1c) << 3);
    }
    plVar6[2] = 0;
    *(undefined4 *)((long)plVar6 + 0x1c) = 0x80000000;
    (**(code **)((long)puVar20 + 8))(0,plVar6,0);
  }
  *(bool *)(puVar5 + 7) = *(char *)(param_2 + 0x230) != '\0';
  if ((undefined8 *)(param_3 + 8) != puVar21) {
    iVar15 = *(int *)(param_3 + 0x10);
    __src = *(void **)(param_3 + 8);
    if ((int)(*(uint *)((long)puVar5 + 0x4c) & 0x7fffffff) < iVar15) {
      FUN_02eb1edc(puVar21,PTR_PTR_047d1a50,(long)iVar15);
    }
    memcpy((void *)puVar5[8],__src,(long)iVar15 << 2);
    *(int *)(puVar5 + 9) = iVar15;
    puVar20 = (undefined8 *)PTR_DAT_047d1a08;
  }
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(param_3 + 0x18);
  lVar19 = *(long *)(param_2 + 0x248);
  if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
    plVar6 = (long *)(lVar19 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)*plVar13;
  *plVar13 = lVar19;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar13 = plVar6 + 2;
    do {
      lVar19 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  plVar6 = (long *)puVar5[0xc];
  plVar13 = *(long **)(param_2 + 0x170);
  if (plVar6 != plVar13) {
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar13 = plVar13 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)puVar5[0xc];
      plVar13 = *(long **)(param_2 + 0x170);
    }
    puVar5[0xc] = plVar13;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar13 = plVar6 + 2;
      do {
        lVar19 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_2 + 0x170);
  }
  *(undefined8 *)(param_2 + 0x170) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar13 = plVar6 + 2;
    do {
      lVar19 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  if ((param_5 & 1) == 0) {
    lVar19 = *(long *)(param_2 + 0x130);
    if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
      plVar13 = (long *)(lVar19 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar13 = (long *)*plVar18;
    *plVar18 = lVar19;
    if ((plVar13 == (long *)0x0) || (plVar13[1] == 0)) goto LAB_0310a870;
    plVar6 = plVar13 + 2;
    do {
      lVar19 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar19;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x130);
    local_68 = 0xf0;
    lVar19 = (*(code *)*puVar20)(0,&local_68,0);
    if ((code *)puVar20[2] != (code *)0x0) {
      (*(code *)puVar20[2])(lVar19,"hkaiStreamingCollection");
    }
    FUN_03078e48(lVar19,uVar4);
    *(undefined1 *)(lVar19 + 0x18) = 2;
    iVar15 = *(int *)(lVar19 + 0x40);
    if (iVar15 != 0) {
      lVar16 = *(long *)(lVar19 + 0x38);
      uVar10 = (long)iVar15 * 0x100 - 0x100;
      uVar8 = ((uint)(uVar10 >> 8) & 0xffffff) + 1;
      lVar9 = lVar16;
      if ((uVar8 & 7) != 0) {
        lVar17 = -((ulong)uVar8 & 7);
        do {
          *(undefined4 *)(lVar9 + 0x24) = 0;
          lVar9 = lVar9 + 0x100;
          bVar3 = lVar17 != -1;
          lVar17 = lVar17 + 1;
        } while (bVar3);
      }
      if (0x6ff < uVar10) {
        do {
          *(undefined4 *)(lVar9 + 0x24) = 0;
          *(undefined4 *)(lVar9 + 0x124) = 0;
          *(undefined4 *)(lVar9 + 0x224) = 0;
          *(undefined4 *)(lVar9 + 0x324) = 0;
          *(undefined4 *)(lVar9 + 0x424) = 0;
          *(undefined4 *)(lVar9 + 0x524) = 0;
          *(undefined4 *)(lVar9 + 0x624) = 0;
          *(undefined4 *)(lVar9 + 0x724) = 0;
          lVar9 = lVar9 + 0x800;
        } while (lVar16 + (long)iVar15 * 0x100 != lVar9);
      }
    }
    plVar13 = (long *)*plVar18;
    *plVar18 = lVar19;
    if ((plVar13 == (long *)0x0) || (plVar13[1] == 0)) goto LAB_0310a870;
    plVar6 = plVar13 + 2;
    do {
      lVar19 = *plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar19;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar19 == 0) {
    (**(code **)(*plVar13 + 0x18))();
  }
LAB_0310a870:
  plVar6 = (long *)*plVar7;
  plVar13 = *(long **)(param_2 + 0x138);
  if (plVar6 != plVar13) {
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar13 = plVar13 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)*plVar7;
      plVar13 = *(long **)(param_2 + 0x138);
    }
    *plVar7 = (long)plVar13;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar13 = plVar6 + 2;
      do {
        lVar19 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_2 + 0x138);
  }
  *(undefined8 *)(param_2 + 0x138) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar13 = plVar6 + 2;
    do {
      lVar19 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar19 = *plVar7;
  lVar9 = *plVar18;
  iVar15 = *(int *)(lVar19 + 0x28);
  if (iVar15 != 0) {
    plVar13 = *(long **)(lVar19 + 0x20);
    lVar16 = (long)iVar15 * 8 + -8;
    plVar7 = plVar13;
    if (((uint)lVar16 >> 3 & 1) == 0) {
      if (*plVar13 != 0) {
        *(long *)(*plVar13 + 0x18) = lVar9;
      }
      plVar7 = plVar13 + 1;
    }
    if (lVar16 != 0) {
      do {
        if (*plVar7 != 0) {
          *(long *)(*plVar7 + 0x18) = lVar9;
        }
        if (plVar7[1] != 0) {
          *(long *)(plVar7[1] + 0x18) = lVar9;
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar13 + iVar15);
    }
  }
  if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
    plVar7 = (long *)(lVar9 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = *(long **)(lVar19 + 0x18);
  *(long *)(lVar19 + 0x18) = lVar9;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar13 = plVar7 + 2;
    do {
      lVar19 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x438) + 0x20);
  iVar15 = *(int *)(*(long *)(param_2 + 0x438) + 0x28);
  lVar19 = (long)iVar15;
  if ((int)(*(uint *)((long)puVar5 + 0xd4) & 0x7fffffff) < iVar15) {
    FUN_03113688(puVar5 + 0x19,lVar19);
  }
  iVar1 = *(int *)(puVar5 + 0x1c);
  uVar10 = (lVar19 + 1) * 3;
  if (((((uint)((long)iVar1 << 1) < (uint)uVar10 && -2 < iVar15) && uVar10 >> 0x20 == 0) &&
      (-1 < iVar1)) && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(puVar5 + 0x1b);
  }
  if ((int)(*(uint *)((long)puVar5 + 0xf4) & 0x7fffffff) < iVar15) {
    FUN_030b0564(puVar5 + 0x1d,PTR_PTR_047d1a50,lVar19);
  }
  if (*(int *)(puVar5 + 0x1e) != iVar15) {
    *(int *)(puVar5 + 0x1e) = iVar15;
  }
  if (iVar15 != 0) {
    plVar13 = plVar7 + iVar15;
    do {
      local_68 = *plVar7;
      plVar6 = *(long **)(local_68 + 0x228);
      if (plVar6 != (long *)0x0) {
        if (*(int *)(local_68 + 0x40) == 1) {
          *(undefined1 *)(plVar6 + 6) = 1;
          lVar19 = *(long *)(local_68 + 0x30);
          plVar6[5] = *(long *)(local_68 + 0x38);
          plVar6[4] = lVar19;
          *(undefined4 *)(*(long *)(local_68 + 0x228) + 0x60) = *(undefined4 *)(local_68 + 0x234);
          plVar6 = *(long **)(local_68 + 0x228);
          if (plVar6 == (long *)0x0) goto LAB_0310ab1c;
        }
        if (plVar6[1] != 0) {
          plVar11 = plVar6 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = *plVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_78 = plVar6;
        FUN_0310ada0(puVar5 + 0x19,&local_68,&local_78);
        if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
          plVar6 = local_78 + 2;
          do {
            lVar19 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar19 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar19 + -1 == 0) {
            (**(code **)(*local_78 + 0x18))();
          }
        }
      }
LAB_0310ab1c:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar13);
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x478) + 0x20);
  iVar15 = *(int *)(*(long *)(param_2 + 0x478) + 0x28);
  lVar19 = (long)iVar15;
  if ((int)(*(uint *)((long)puVar5 + 0x11c) & 0x7fffffff) < iVar15) {
    FUN_03113b44(puVar5 + 0x22,lVar19);
  }
  iVar1 = *(int *)(puVar5 + 0x25);
  uVar10 = (lVar19 + 1) * 3;
  if (((((uint)((long)iVar1 << 1) < (uint)uVar10 && -2 < iVar15) && uVar10 >> 0x20 == 0) &&
      (-1 < iVar1)) && (((long)iVar1 & 0x7fffffffffffffffU) >> 0x1f == 0)) {
    FUN_02e8d9d0(puVar5 + 0x24);
  }
  if ((int)(*(uint *)((long)puVar5 + 0x13c) & 0x7fffffff) < iVar15) {
    FUN_03103324(puVar5 + 0x26,PTR_PTR_047d1a50,lVar19);
  }
  if (*(int *)(puVar5 + 0x27) != iVar15) {
    *(int *)(puVar5 + 0x27) = iVar15;
  }
  if (iVar15 != 0) {
    plVar13 = plVar7 + iVar15;
    do {
      local_68 = *plVar7;
      lVar19 = *(long *)(local_68 + 0x178);
      if (lVar19 != 0) {
        uVar4 = *(undefined8 *)(local_68 + 0x30);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(local_68 + 0x38);
        *(undefined8 *)(lVar19 + 0x20) = uVar4;
        *(undefined4 *)(*(long *)(local_68 + 0x178) + 0x58) = *(undefined4 *)(local_68 + 400);
        plVar6 = *(long **)(local_68 + 0x178);
        if (plVar6 != (long *)0x0) {
          if (plVar6[1] != 0) {
            plVar11 = plVar6 + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          local_78 = plVar6;
          FUN_0310ae7c(puVar5 + 0x22,&local_68,&local_78);
          if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
            plVar6 = local_78 + 2;
            do {
              lVar19 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar19 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar19 + -1 == 0) {
              (**(code **)(*local_78 + 0x18))();
            }
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar13);
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 8) != 0)) {
    plVar7 = (long *)(param_4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)puVar5[0x2b];
  puVar5[0x2b] = param_4;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar13 = plVar7 + 2;
    do {
      lVar19 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar19 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar19 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_7 = *plVar18;
  if (local_70 != (long *)0x0) {
    lVar19 = *local_70;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (local_70[6] != 0)) {
      puVar20 = (undefined8 *)local_70[2];
      uVar10 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)local_70[3]) && (local_70[2] = uVar10, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(local_70[6] + 8);
      }
    }
    puVar20 = (undefined8 *)local_70[2];
    uVar10 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)local_70[3]) && (local_70[2] = uVar10, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar20[1] = uVar4;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
    }
  }
  return;
}


