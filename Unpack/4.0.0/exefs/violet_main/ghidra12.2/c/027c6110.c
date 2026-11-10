/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027c6110; name: FUN_027c6110
 */


void FUN_027c6110(undefined8 *param_1,ulong param_2,long param_3,char *param_4)

{
  long *plVar1;
  short *psVar2;
  ulong *puVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  short sVar14;
  long *plVar15;
  long lVar16;
  undefined1 auStack_2d0 [32];
  undefined1 auStack_2b0 [32];
  undefined1 auStack_290 [104];
  undefined1 local_228;
  undefined8 local_220;
  long lStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  char *pcStack_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  char *pcStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  long *local_1c0;
  long *local_1b8;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [104];
  undefined1 local_108;
  undefined8 local_100;
  long lStack_f8;
  ulong *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  long *local_d8;
  long *local_d0;
  ulong local_c8;
  undefined8 local_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  ulong local_48;
  
  pbVar13 = *(byte **)(param_3 + 8);
  if (pbVar13 == (byte *)0x0) {
    *param_1 = 0;
  }
  else {
    if ((*pbVar13 & 1) == 0) {
      pbVar13 = pbVar13 + 1;
    }
    else {
      pbVar13 = *(byte **)(pbVar13 + 0x10);
    }
    memset(&local_f0,0,0x68);
    FUN_027c1cd0(&local_f0);
    FUN_027c6838(auStack_1b0,pbVar13,&local_f0);
    FUN_027c2bd0(auStack_a8,local_a0);
    if ((local_c8 & 1) != 0) {
      (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,local_c8 & 0xfffffffffffffffe,1);
    }
    FUN_01cfa410(&local_d0);
    if (((ulong)local_f0 & 1) != 0) {
      (**(code **)(*local_d8 + 0x18))(local_d8,local_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
    }
    if (*param_4 != '\0') {
      FUN_027c3f5c(&local_f0,param_4 + 4);
      FUN_01d0e1a8(auStack_190,&local_f0);
      if (((ulong)local_f0 & 1) != 0) {
        (**(code **)(*local_d8 + 0x18))(local_d8,local_e0,(ulong)local_f0 & 0xfffffffffffffffe,1);
      }
    }
    if (DAT_0485e9d8 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_027c2014();
    }
    FUN_027c6880(auStack_1b0,uVar12);
    local_1e0 = 0x5f3a9f86b611a6e;
    pcStack_1d8 = "StartupSession";
    local_1d0 = 0xe;
    local_1c8 = (long *)0x0;
    FUN_027c20b8(&local_1c0,&local_1e0,*(undefined8 *)(param_2 + 0x70));
    plVar15 = local_1c0;
    local_200 = 0xe1a3d887bca4131b;
    pcStack_1f8 = "JoinSession";
    local_1f0 = 0xb;
    local_1e8 = (long *)0x0;
    local_210 = 0;
    uStack_208 = 0;
    FUN_027c2138(&local_210,param_2 + 0x78);
    FUN_01cfa5b0(auStack_2d0,auStack_1b0);
    FUN_01cfa5b0(auStack_2b0,auStack_190);
    FUN_027c2388(auStack_290,auStack_170);
    local_228 = local_108;
    local_220 = local_100;
    lStack_218 = lStack_f8;
    if (lStack_f8 != 0) {
      plVar1 = (long *)(lStack_f8 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_027c6914(&local_1b8,plVar15,&local_200,&local_210,auStack_2d0);
    plVar1 = local_1b8;
    local_f0 = (ulong *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,local_1b8 + 6);
    local_68 = (undefined8 *)0x0;
    pcStack_60 = (char *)0x0;
    plVar15 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar15 = plVar1 + 5;
    }
    if ((long *)local_f0[2] == plVar15) {
      FUN_015d2a6c(&local_68,&local_f0);
    }
    puVar8 = local_f0;
    if (local_f0 != (ulong *)0x0) {
      puVar3 = local_f0 + 3;
      do {
        sVar14 = (short)*puVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *(short *)puVar3 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        piVar4 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar11 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_48 = *puVar8;
          FUN_00c44438(lVar16 + 0x8040,&local_48);
        }
      }
      else if (sVar14 == 0) goto LAB_027c6580;
    }
    puVar10 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_68 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_68 + 0x1a);
        sVar14 = *(short *)((long)local_68 + 0x1a);
        do {
          sVar5 = *psVar2;
          if (sVar5 == sVar14) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar14 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_027c6644;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_027c6644:
            bVar7 = false;
          }
          if (bVar7) {
            plVar15 = (long *)0x0;
            if (local_68[2] != 0) {
              plVar15 = (long *)(local_68[2] + -0x28);
            }
            goto LAB_027c666c;
          }
          sVar14 = sVar5;
        } while (sVar5 != 0);
      }
      plVar15 = (long *)0x0;
LAB_027c666c:
      psVar2 = (short *)(local_68 + 3);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        piVar4 = (int *)((long)local_68 + 0x1c);
        do {
          iVar11 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_f0 = (ulong *)*puVar10;
          FUN_00c44438(lVar16 + 0x8040,&local_f0);
        }
      }
      else if (sVar14 == 0) goto LAB_027c6580;
    }
    local_48 = local_48 & 0xffffffff00000000;
    local_68 = (undefined8 *)0xac19ec5dd305f32b;
    pcStack_60 = "RandomMatchingCancel";
    local_58 = 0x14;
    local_50 = (long *)0x0;
    if (plVar15 == (long *)0x0) {
      local_d0 = (long *)0x0;
    }
    else {
      lVar16 = plVar15[6];
      if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c6580;
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
        *(undefined8 *)(lVar16 + 8) = uVar12;
        *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_027c6580;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (long *)0x0;
      local_f0 = (ulong *)0x0;
      local_e8 = (code *)0x0;
      lVar16 = plVar15[6];
      local_d0 = plVar15;
      if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c6580;
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
        *(undefined8 *)(lVar16 + 8) = uVar12;
        *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_027c6580;
    }
    local_f0 = (ulong *)&LAB_02c266bc;
    local_e8 = FUN_02c28220;
    local_e0 = &LAB_02c32a70;
    local_d8 = (long *)&LAB_02c32b18;
    local_c8 = param_2;
    FUN_015d1ba8(param_1,&local_68,&local_48,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (long *)0x0;
      local_f0 = (ulong *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    if (plVar15 != (long *)0x0) {
      lVar16 = plVar15[6];
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_027c6580;
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (plVar15 != (long *)0x0) {
      lVar16 = plVar15[6];
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_027c6580;
    }
    if (local_1b8 != (long *)0x0) {
      lVar16 = local_1b8[6];
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*local_1b8 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_027c6580;
    }
    FUN_027c70c0(auStack_2d0);
    FUN_027bfe38(&local_210);
    if (local_1e8 != (long *)0x0) {
      (**(code **)(*local_1e8 + 0x20))();
    }
    if (local_1c0 != (long *)0x0) {
      lVar16 = local_1c0[6];
      psVar2 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*local_1c0 + 0x50))();
      }
      else if (sVar14 == 0) {
LAB_027c6580:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    if (local_1c8 != (long *)0x0) {
      (**(code **)(*local_1c8 + 0x20))();
    }
    FUN_027c70c0(auStack_1b0);
  }
  return;
}


