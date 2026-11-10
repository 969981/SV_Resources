/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e76e6c; name: FUN_01e76e6c
 */


undefined8 FUN_01e76e6c(char *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  short sVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 local_2b0;
  char *pcStack_2a8;
  undefined8 local_2a0;
  long *local_298;
  char *local_290;
  long local_288;
  char *pcStack_280;
  undefined8 local_278;
  long *local_270;
  undefined8 local_268;
  char *pcStack_260;
  undefined8 local_258;
  long *local_250;
  char *local_248;
  long local_240;
  char *pcStack_238;
  undefined8 local_230;
  long *local_228;
  char *local_220;
  long local_218;
  char *pcStack_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long *local_1a0;
  undefined8 local_198;
  long *local_190;
  long *local_188;
  undefined8 local_180;
  long *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  long *local_168;
  char *pcStack_160;
  undefined8 local_158;
  long *local_150;
  undefined8 *local_148;
  char *local_140;
  undefined1 *local_138;
  long *local_130;
  undefined8 uStack_128;
  long *local_120;
  long *local_118;
  undefined8 *local_110;
  char *pcStack_108;
  long local_100;
  long *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  char *local_c8;
  undefined1 *puStack_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_68;
  
  if (*(int *)(param_1 + 0x200) != 1) {
    local_1d8 = 0xe54b72e3ca52071a;
    pcStack_1d0 = "Bcat Sync";
    local_1c8 = 9;
    local_1c0 = (long *)0x0;
    FUN_01e78dec(&local_1b8,&local_1d8,*(undefined8 *)(param_1 + 0x208));
    local_1f8 = 0xfeaaf173f3251a69;
    pcStack_1f0 = "BcatLoad Raid";
    local_1e8 = 0xd;
    local_1e0 = (long *)0x0;
    FUN_01e78e6c(&local_1b0,local_1b8,&local_1f8,*(undefined8 *)(param_1 + 0x208),&DAT_03c56eb2);
    local_218 = 0x6d89b83668fbad1c;
    pcStack_210 = "Parse Raid";
    local_208 = 10;
    local_200 = (long *)0x0;
    local_220 = param_1;
    FUN_01e79660(&local_1a8,local_1b0,&local_218,&local_220);
    local_240 = -0x6a57e661515cbb;
    pcStack_238 = "Recover Raid";
    local_230 = 0xc;
    local_228 = (long *)0x0;
    local_248 = param_1;
    FUN_01e79724(&local_1a0,local_1a8,&local_240,&local_248);
    local_268 = 0xed141f672a6dd78;
    pcStack_260 = "BcatLoad Stadium";
    local_258 = 0x10;
    local_250 = (long *)0x0;
    FUN_01e78e6c(&local_198,local_1a0,&local_268,*(undefined8 *)(param_1 + 0x208),"stadium");
    local_288 = 0x7625db2aae1f4fff;
    pcStack_280 = "Parse Stadium";
    local_278 = 0xd;
    local_270 = (long *)0x0;
    local_290 = param_1;
    FUN_01e79b98(&local_190,local_198,&local_288,&local_290);
    plVar3 = local_190;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,local_190 + 6);
    local_148 = (undefined8 *)0x0;
    local_140 = (char *)0x0;
    plVar15 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar15 = plVar3 + 5;
    }
    if ((long *)local_f0[2] == plVar15) {
      FUN_015d2a6c(&local_148,&local_f0);
    }
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_110 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_110);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    puVar12 = local_148;
    if (local_148 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_148 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_148 + 0x1a);
        sVar14 = *(short *)((long)local_148 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01e780cc;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e780cc:
            bVar6 = false;
          }
          if (bVar6) {
            plVar15 = (long *)0x0;
            if (local_148[2] != 0) {
              plVar15 = (long *)(local_148[2] + -0x28);
            }
            goto LAB_01e781d8;
          }
          sVar14 = sVar4;
        } while (sVar4 != 0);
      }
      plVar15 = (long *)0x0;
LAB_01e781d8:
      psVar1 = (short *)(local_148 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_148 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_f0 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_f0);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    local_110 = (undefined8 *)((ulong)local_110 & 0xffffffff00000000);
    local_148 = (undefined8 *)0x40a00344ce2b2664;
    local_140 = "Recover Stadium";
    local_138 = (undefined1 *)0xf;
    local_130 = (long *)0x0;
    if (plVar15 == (long *)0x0) {
      local_d0 = (long *)0x0;
    }
    else {
      lVar17 = plVar15[6];
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar13;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      lVar17 = plVar15[6];
      local_d0 = plVar15;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar13;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
    }
    local_f0 = (undefined8 *)&LAB_00ae9880;
    local_e8 = FUN_00aeb464;
    local_e0 = &LAB_00af6630;
    local_d8 = &LAB_00af6708;
    local_c8 = param_1;
    FUN_015d1ba8(&local_188,&local_148,&local_110,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    if (plVar15 != (long *)0x0) {
      lVar17 = plVar15[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (plVar15 != (long *)0x0) {
      lVar17 = plVar15[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    local_2b0 = 0xd6ca2cdaf2d34416;
    pcStack_2a8 = "BcatLoad EncountOutbreak";
    local_2a0 = 0x18;
    local_298 = (long *)0x0;
    FUN_01e78e6c(&local_180,local_188,&local_2b0,*(undefined8 *)(param_1 + 0x208),"encountOutbreak")
    ;
    local_158 = 0x15;
    local_150 = (long *)0x0;
    local_168 = (long *)&DAT_3796a6785602ea89;
    pcStack_160 = "Parse EncountOutbreak";
    FUN_01e79c5c(&local_f0,local_180);
    if (local_f0 == (undefined8 *)0x0) {
      local_118 = (long *)0x0;
    }
    else {
      FUN_01e79dbc(&local_118);
    }
    FUN_01e79e4c(&local_f0);
    FUN_01050714(&local_68,&local_168);
    plVar8 = local_68;
    plVar16 = (long *)PTR_DAT_047d8b70;
    plVar3 = (long *)PTR_PTR_047d4508;
    plVar15 = (long *)PTR_DAT_047d8b70;
    if (local_68 != (long *)0x0) {
      plVar15 = local_68 + 6;
    }
    local_110 = (undefined8 *)*plVar15;
    plVar15 = (long *)PTR_PTR_047d4508;
    if (local_68 != (long *)0x0) {
      plVar15 = local_68 + 7;
    }
    pcStack_108 = (char *)*plVar15;
    if (local_68 == (long *)0x0) {
      local_100 = 0;
    }
    else {
      local_100 = local_68[8];
    }
    local_f8 = (long *)0x0;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    local_f8 = plVar8;
    local_170 = 0;
    FUN_01e79f5c(&local_148,&local_118);
    local_130 = (long *)0x3c56eb7;
    uStack_128 = 0x15;
    local_138 = &DAT_3796a6785602ea89;
    local_120 = (long *)0x0;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_140 = param_1;
    FUN_01e79f5c(&local_d0,&local_148);
    local_c8 = local_140;
    puStack_c0 = local_138;
    local_b8 = local_130;
    uStack_b0 = uStack_128;
    local_a8 = local_120;
    local_f0 = (undefined8 *)&LAB_00af67e0;
    local_e8 = FUN_00af72b4;
    local_e0 = &LAB_00af8634;
    local_d8 = &LAB_00af86a0;
    local_120 = (long *)0x0;
    FUN_015d1ba8(&local_178,&local_110,&local_170,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    FUN_01e7a01c(&local_148);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    plVar15 = local_178;
    FUN_01e79c5c(&local_148,local_180);
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_01e7a094(&local_f0,&local_148);
    if ((((char)plVar15[0x28] != '\0') && (local_f0 != (undefined8 *)0x0)) && (local_f0[2] != 0)) {
      (**(code **)(*(long *)(local_f0[2] + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar15 + 0x26,&local_f0);
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    FUN_01e79e4c(&local_148);
    FUN_01e7a01c(&local_118);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    plVar8 = local_178;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,local_178 + 6);
    local_148 = (undefined8 *)0x0;
    local_140 = (char *)0x0;
    plVar15 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar15 = plVar8 + 5;
    }
    if ((long *)local_f0[2] == plVar15) {
      FUN_015d2a6c(&local_148,&local_f0);
    }
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_110 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_110);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    puVar12 = local_148;
    if (local_148 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_148 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_148 + 0x1a);
        sVar14 = *(short *)((long)local_148 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01e78118;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e78118:
            bVar6 = false;
          }
          if (bVar6) {
            plVar15 = (long *)0x0;
            if (local_148[2] != 0) {
              plVar15 = (long *)(local_148[2] + -0x28);
            }
            goto LAB_01e7820c;
          }
          sVar14 = sVar4;
        } while (sVar4 != 0);
      }
      plVar15 = (long *)0x0;
LAB_01e7820c:
      psVar1 = (short *)(local_148 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_148 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_f0 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_f0);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    local_110 = (undefined8 *)((ulong)local_110 & 0xffffffff00000000);
    local_148 = (undefined8 *)0xdd4d3c0b7bc04882;
    local_140 = "Recover EncountOutbreak";
    local_138 = (undefined1 *)0x17;
    local_130 = (long *)0x0;
    if (plVar15 == (long *)0x0) {
      local_d0 = (long *)0x0;
    }
    else {
      lVar17 = plVar15[6];
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar13;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      lVar17 = plVar15[6];
      local_d0 = plVar15;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar13;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
    }
    local_f0 = (undefined8 *)&LAB_00af86f8;
    local_e8 = FUN_00afa2dc;
    local_e0 = &LAB_00b054a8;
    local_d8 = &LAB_00b05580;
    local_c8 = param_1;
    FUN_015d1ba8(&local_170,&local_148,&local_110,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    if (plVar15 != (long *)0x0) {
      lVar17 = plVar15[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (plVar15 != (long *)0x0) {
      lVar17 = plVar15[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    lVar7 = CONCAT44(uStack_16c,local_170);
    local_110 = (undefined8 *)0x2d1a1220bc1efa7c;
    pcStack_108 = "LoadSuccess";
    local_100 = 0xb;
    local_f8 = (long *)0x0;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,lVar7 + 0x30);
    local_148 = (undefined8 *)0x0;
    local_140 = (char *)0x0;
    lVar17 = 0;
    if (lVar7 != 0) {
      lVar17 = lVar7 + 0x28;
    }
    if (local_f0[2] == lVar17) {
      FUN_015d2a6c(&local_148,&local_f0);
    }
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_168 = (long *)*puVar12;
          FUN_00c44438(lVar18 + 0x8040,&local_168);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    puVar12 = local_148;
    if (local_148 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_148 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_148 + 0x1a);
        sVar14 = *(short *)((long)local_148 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01e78164;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e78164:
            bVar6 = false;
          }
          if (bVar6) {
            plVar15 = (long *)0x0;
            if (local_148[2] != 0) {
              plVar15 = (long *)(local_148[2] + -0x28);
            }
            goto LAB_01e78240;
          }
          sVar14 = sVar4;
        } while (sVar4 != 0);
      }
      plVar15 = (long *)0x0;
LAB_01e78240:
      psVar1 = (short *)(local_148 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_148 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_f0 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar18 + 0x8040,&local_f0);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    FUN_01050714(&local_168,&local_110);
    plVar8 = local_168;
    if (local_168 != (long *)0x0) {
      plVar3 = local_168 + 7;
      plVar16 = local_168 + 6;
    }
    local_148 = (undefined8 *)*plVar16;
    local_140 = (char *)*plVar3;
    if (local_168 == (long *)0x0) {
      local_138 = (undefined1 *)0x0;
    }
    else {
      local_138 = (undefined1 *)local_168[8];
    }
    local_130 = (long *)0x0;
    if (local_168 != (long *)0x0) {
      (**(code **)(*local_168 + 0x18))(local_168);
    }
    local_130 = plVar8;
    local_68 = (long *)((ulong)local_68 & 0xffffffff00000000);
    if (plVar15 == (long *)0x0) {
      local_d0 = (long *)0x0;
    }
    else {
      lVar18 = plVar15[6];
      if (*(long *)(lVar18 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar13;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      lVar18 = plVar15[6];
      local_d0 = plVar15;
      if (*(long *)(lVar18 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar13;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
    }
    local_b8 = (long *)0x3c03df5;
    uStack_b0 = 0xb;
    local_a8 = 0;
    local_f0 = (undefined8 *)&LAB_00b05658;
    local_e8 = FUN_00b061c4;
    puStack_c0 = (undefined1 *)0x2d1a1220bc1efa7c;
    local_e0 = &LAB_00b075a0;
    local_d8 = &LAB_00b076b4;
    local_c8 = param_1;
    FUN_015d1ba8(&local_118,&local_148,&local_68,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    if (plVar15 != (long *)0x0) {
      lVar18 = plVar15[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (local_168 != (long *)0x0) {
      (**(code **)(*local_168 + 0x20))();
    }
    plVar3 = local_118;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,lVar7 + 0x30);
    local_168 = (long *)0x0;
    pcStack_160 = (char *)0x0;
    if (local_f0[2] == lVar17) {
      FUN_015d2a6c(&local_168,&local_f0);
    }
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_0177de7c(&local_f0,&local_168);
    if ((((char)plVar3[0x28] != '\0') && (local_f0 != (undefined8 *)0x0)) && (local_f0[2] != 0)) {
      (**(code **)(*(long *)(local_f0[2] + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar3 + 0x26,&local_f0);
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    plVar3 = local_168;
    if (local_168 != (long *)0x0) {
      plVar16 = local_168 + 3;
      do {
        sVar14 = (short)*plVar16;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(short *)plVar16 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_168 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_68 = (long *)*plVar3;
          FUN_00c44438(lVar17 + 0x8040,&local_68);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    if (plVar15 != (long *)0x0) {
      lVar17 = plVar15[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    plVar16 = local_118;
    plVar15 = local_118 + 6;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,plVar15);
    local_148 = (undefined8 *)0x0;
    local_140 = (char *)0x0;
    plVar3 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      plVar3 = plVar16 + 5;
    }
    if ((long *)local_f0[2] == plVar3) {
      FUN_015d2a6c(&local_148,&local_f0);
    }
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_110 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_110);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    puVar12 = local_148;
    if (local_148 == (undefined8 *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_148 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_148 + 0x1a);
        sVar14 = *(short *)((long)local_148 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01e781b0;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e781b0:
            bVar6 = false;
          }
          if (bVar6) {
            plVar16 = (long *)0x0;
            if (local_148[2] != 0) {
              plVar16 = (long *)(local_148[2] + -0x28);
            }
            goto LAB_01e78274;
          }
          sVar14 = sVar4;
        } while (sVar4 != 0);
      }
      plVar16 = (long *)0x0;
LAB_01e78274:
      psVar1 = (short *)(local_148 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_148 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_f0 = (undefined8 *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_f0);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    local_110 = (undefined8 *)((ulong)local_110 & 0xffffffff00000000);
    local_148 = (undefined8 *)0x55d7f8250e00c96d;
    local_140 = "LoadFailure";
    local_138 = (undefined1 *)0xb;
    local_130 = (long *)0x0;
    if (plVar16 == (long *)0x0) {
      local_d0 = (long *)0x0;
    }
    else {
      lVar17 = plVar16[6];
      if (*(long *)(lVar17 + 0x10) == 0) {
LAB_01e78a20:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar13;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_01e78a40;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      lVar17 = plVar16[6];
      local_d0 = plVar16;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_01e78a20;
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar13;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) {
LAB_01e78a40:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_f0 = (undefined8 *)&LAB_00b077b0;
    local_e8 = FUN_00b07f44;
    local_e0 = &LAB_00b08878;
    local_d8 = &LAB_00b08950;
    local_c8 = param_1;
    FUN_015d1ba8(&local_68,&local_148,&local_110,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    if (plVar16 != (long *)0x0) {
      lVar17 = plVar16[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))(plVar16);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    plVar8 = local_68;
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_00c43ef0(&local_f0,plVar15);
    local_110 = (undefined8 *)0x0;
    pcStack_108 = (char *)0x0;
    if ((long *)local_f0[2] == plVar3) {
      FUN_015d2a6c(&local_110,&local_f0);
    }
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_168 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_168);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    local_f0 = (undefined8 *)0x0;
    local_e8 = (code *)0x0;
    FUN_0177de7c(&local_f0,&local_110);
    if ((((char)plVar8[0x28] != '\0') && (local_f0 != (undefined8 *)0x0)) && (local_f0[2] != 0)) {
      (**(code **)(*(long *)(local_f0[2] + -0x28) + 0x78))();
    }
    FUN_0154631c(plVar8 + 0x26,&local_f0);
    puVar12 = local_f0;
    if (local_f0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_f0 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_168 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_168);
        }
      }
      else if (sVar14 == 0) goto LAB_01e77d9c;
    }
    puVar12 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_110 + 3);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_168 = (long *)*puVar12;
          FUN_00c44438(lVar17 + 0x8040,&local_168);
        }
      }
      else if (sVar14 == 0) {
LAB_01e77d9c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar16 != (long *)0x0) {
      lVar17 = plVar16[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))(plVar16);
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    local_f0 = *(undefined8 **)(param_1 + 0x210);
    param_1[0x210] = '\0';
    param_1[0x211] = '\0';
    param_1[0x212] = '\0';
    param_1[0x213] = '\0';
    param_1[0x214] = '\0';
    param_1[0x215] = '\0';
    param_1[0x216] = '\0';
    param_1[0x217] = '\0';
    FUN_0186e214(&local_f0);
    plVar15 = local_68;
    local_68 = (long *)0x0;
    *(long **)(param_1 + 0x210) = plVar15;
    if (local_118 != (long *)0x0) {
      lVar17 = local_118[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_118 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    plVar15 = (long *)CONCAT44(uStack_16c,local_170);
    if (plVar15 != (long *)0x0) {
      lVar17 = plVar15[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_178 != (long *)0x0) {
      lVar17 = local_178[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_178 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    FUN_01e7a01c(&local_180);
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x20))();
    }
    if (local_188 != (long *)0x0) {
      lVar17 = local_188[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_188 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_190 != (long *)0x0) {
      lVar17 = local_190[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_190 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_270 != (long *)0x0) {
      (**(code **)(*local_270 + 0x20))();
    }
    FUN_01e7a01c(&local_198);
    if (local_250 != (long *)0x0) {
      (**(code **)(*local_250 + 0x20))();
    }
    if (local_1a0 != (long *)0x0) {
      lVar17 = local_1a0[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_1a0 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_228 != (long *)0x0) {
      (**(code **)(*local_228 + 0x20))();
    }
    if (local_1a8 != (long *)0x0) {
      lVar17 = local_1a8[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_1a8 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_01e789f8;
    }
    if (local_200 != (long *)0x0) {
      (**(code **)(*local_200 + 0x20))();
    }
    FUN_01e7a01c(&local_1b0);
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 0x20))();
    }
    if (local_1b8 != (long *)0x0) {
      lVar17 = local_1b8[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_1b8 + 0x50))();
      }
      else if (sVar14 == 0) {
LAB_01e789f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_1c0 != (long *)0x0) {
      (**(code **)(*local_1c0 + 0x20))();
    }
    puVar12 = (undefined8 *)0x0;
    if (*(long **)(param_1 + 0x210) != (long *)0x0) {
      uVar11 = (**(code **)(**(long **)(param_1 + 0x210) + 0x70))();
      if ((uVar11 & 1) != 0) {
        param_1[0x200] = '\x01';
        param_1[0x201] = '\0';
        param_1[0x202] = '\0';
        param_1[0x203] = '\0';
        param_1[0x204] = '\x01';
        param_1[0x205] = '\0';
        param_1[0x206] = '\0';
        param_1[0x207] = '\0';
        return 1;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x210);
    }
    param_1[0x210] = '\0';
    param_1[0x211] = '\0';
    param_1[0x212] = '\0';
    param_1[0x213] = '\0';
    param_1[0x214] = '\0';
    param_1[0x215] = '\0';
    param_1[0x216] = '\0';
    param_1[0x217] = '\0';
    local_f0 = puVar12;
    FUN_0186e214(&local_f0);
  }
  return 0;
}


