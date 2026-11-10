/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fc7f18; name: FUN_00fc7f18
 */


void FUN_00fc7f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  char *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar17 = 0;
  puVar1 = PTR_DAT_047d66f8 + 0x10;
  do {
    lVar13 = param_1 + uVar17 * 0x118;
    if (((*(long *)(lVar13 + 0x188) == 0) ||
        ((*(byte *)(*(long *)(lVar13 + 0x188) + 0x1e8) & 1) != 0)) &&
       ((lVar16 = *(long *)(param_1 + uVar17 * 0x118 + 0x148), lVar16 == 0 ||
        ((*(byte *)(lVar16 + 0x1e8) & 1) != 0)))) {
      local_78 = *(undefined8 *)(lVar13 + 0x128);
      local_70 = *(undefined8 *)(lVar13 + 0x130);
      uStack_68 = *(undefined8 *)(lVar13 + 0x138);
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      local_78 = 0;
    }
    local_80 = (long *)0x0;
    local_98 = (long *)&DAT_fbec41851566601b;
    local_90 = "values";
    uStack_88 = 6;
    piVar8 = (int *)FUN_00efa07c(&local_78,&local_98);
    if (piVar8 == (int *)0x0) {
      local_cc = 0;
    }
    else {
      local_cc = *piVar8;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_cc != 0) {
      iVar18 = 0;
      do {
        local_80 = (long *)0x0;
        local_98 = (long *)&DAT_fbec41851566601b;
        local_90 = "values";
        uStack_88 = 6;
        FUN_00e90ee0(&local_b0,&local_78,&local_98,iVar18);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        plVar19 = *(long **)(param_1 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
        *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        plVar9 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x48,8);
        if (plVar9 == (long *)0x0) {
          lVar13 = *plVar19;
          goto LAB_00fc9728;
        }
        plVar9[7] = 0;
        plVar9[8] = 0;
        plVar9[2] = 0;
        plVar9[5] = 0;
        plVar9[6] = 0;
        plVar9[3] = 0;
        plVar9[4] = 0;
        *(undefined4 *)(plVar9 + 3) = 0;
        *plVar9 = (long)puVar1;
        plVar9[1] = 0;
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        puVar6 = PTR_DAT_047d8c78;
        if (lVar16 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          if (*(long *)(lVar16 + 0x80) != 0) {
            lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
          }
        }
        puVar2 = PTR_DAT_047d8c78 + 0x88;
        *plVar9 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar9[1] = lVar14;
        plVar9[4] = (long)puVar2;
        plVar11 = plVar9 + 5;
        *plVar11 = (long)(puVar6 + 0xd8);
        plVar10 = plVar9 + 6;
        *plVar10 = 0;
        plVar9[7] = 0;
        FUN_00d1a3f4(plVar10,plVar11);
        plVar9[4] = (long)&PTR_FUN_045473b8;
        *plVar9 = (long)&DAT_04547338;
        plVar9[1] = (long)plVar19;
        *plVar11 = (long)&PTR_LAB_04547408;
        plVar9[8] = -1;
        plVar9[2] = (long)plVar9;
        *(undefined4 *)(plVar9 + 3) = 0x80048;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        lVar13 = *plVar10;
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
        psVar3 = (short *)(lVar13 + 0x1a);
        do {
          sVar15 = *psVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar5) {
            *psVar3 = sVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar12;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar15 == -1) goto LAB_00fc96ac;
        switch(uVar17 & 0xffffffff) {
        case 0:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00fc96fc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x168,8);
          if (plVar11 == (long *)0x0) {
LAB_00fc9720:
            lVar13 = *plVar19;
LAB_00fc9728:
            (**(code **)(lVar13 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ptr","Create",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                       ,0x40);
          }
          FUN_00fc9750();
          *(undefined4 *)(plVar11 + 3) = 0x80168;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 1:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x168,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9bb0();
          *(undefined4 *)(plVar11 + 3) = 0x80168;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 2:
          FUN_00fca7b8(&local_98,*(undefined8 *)(param_1 + 8));
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_00fc8910;
        case 3:
          FUN_00fca87c(&local_98,*(undefined8 *)(param_1 + 8));
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_00fc8910;
        case 4:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9980();
          *(undefined4 *)(plVar11 + 3) = 0x80070;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 5:
          FUN_00fca940(&local_98,*(undefined8 *)(param_1 + 8));
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00fc8910:
          if (sVar15 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar15 == 0) goto LAB_00fc96d4;
          plVar9 = local_98;
          goto LAB_00fc8268;
        case 6:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x80,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca240();
          *(undefined4 *)(plVar11 + 3) = 0x80080;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 7:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca128();
          *(undefined4 *)(plVar11 + 3) = 0x80070;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 8:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x90,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca588();
          *(undefined4 *)(plVar11 + 3) = 0x80090;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 9:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x68,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca6a0();
          *(undefined4 *)(plVar11 + 3) = 0x80068;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 10:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x90,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca358();
          *(undefined4 *)(plVar11 + 3) = 0x80090;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0xb:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x80,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca010();
          *(undefined4 *)(plVar11 + 3) = 0x80080;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0xc:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x60,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9868();
          *(undefined4 *)(plVar11 + 3) = 0x80060;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0xd:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9a98();
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0xe:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x60,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9ef8();
          *(undefined4 *)(plVar11 + 3) = 0x80060;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0xf:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9cc8();
          *(undefined4 *)(plVar11 + 3) = 0x80070;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0x10:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x60,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fca470();
          *(undefined4 *)(plVar11 + 3) = 0x80060;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        case 0x11:
          plVar19 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fc96fc;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar19;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x1c8,8);
          if (plVar11 == (long *)0x0) goto LAB_00fc9720;
          FUN_00fc9de0();
          *(undefined4 *)(plVar11 + 3) = 0x801c8;
          plVar11[1] = (long)plVar19;
          plVar11[2] = (long)plVar11;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fc968c;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) goto LAB_00fc96ac;
          lVar13 = *plVar10;
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          break;
        default:
          goto LAB_00fc8268;
        }
        if (sVar15 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          plVar9 = plVar11;
        }
        else {
          plVar9 = plVar11;
          if (sVar15 == 0) goto LAB_00fc96d4;
        }
LAB_00fc8268:
        local_c8 = local_b0;
        uStack_c0 = uStack_a8;
        local_b8 = local_a0;
        (**(code **)(*plVar9 + 0x68))(plVar9,&local_c8,uVar17 & 0xffffffff);
        local_98 = (long *)CONCAT44(local_98._4_4_,*(undefined4 *)((long)plVar9 + 0x44));
        plVar19 = (long *)FUN_00fa340c(param_1 + 0x40,&local_98);
        if (plVar9 != (long *)0x0) {
          lVar13 = plVar9[6];
          if (*(long *)(lVar13 + 0x10) == 0) {
LAB_00fc968c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar12;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar15 == -1) {
LAB_00fc96ac:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        plVar10 = (long *)*plVar19;
        *plVar19 = (long)plVar9;
        if (plVar10 != (long *)0x0) {
          lVar13 = plVar10[6];
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))();
          }
          else if (sVar15 == 0) goto LAB_00fc96d4;
        }
        if (plVar9 != (long *)0x0) {
          lVar13 = plVar9[6];
          psVar3 = (short *)(lVar13 + 0x1a);
          do {
            sVar15 = *psVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar15 == 0) {
LAB_00fc96d4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != local_cc);
    }
    uVar17 = uVar17 + 1;
    if (uVar17 == 0x12) {
      return;
    }
  } while( true );
}


