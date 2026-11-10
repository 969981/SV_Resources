/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fcb350; name: FUN_00fcb350
 */


void FUN_00fcb350(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  short *psVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
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
  
  puVar7 = PTR_DAT_047d8c78;
  uVar18 = 0;
  plVar1 = (long *)(param_1 + 8);
  puVar2 = PTR_DAT_047d66f8 + 0x10;
  do {
    lVar13 = param_1 + uVar18 * 0x118;
    if (((*(long *)(lVar13 + 0x8138) == 0) ||
        ((*(byte *)(*(long *)(lVar13 + 0x8138) + 0x1e8) & 1) != 0)) &&
       ((lVar16 = *(long *)(param_1 + uVar18 * 0x118 + 0x80f8), lVar16 == 0 ||
        ((*(byte *)(lVar16 + 0x1e8) & 1) != 0)))) {
      local_78 = *(undefined8 *)(lVar13 + 0x80d8);
      local_70 = *(undefined8 *)(lVar13 + 0x80e0);
      uStack_68 = *(undefined8 *)(lVar13 + 33000);
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
    piVar9 = (int *)FUN_00efa07c(&local_78,&local_98);
    if (piVar9 == (int *)0x0) {
      local_cc = 0;
    }
    else {
      local_cc = *piVar9;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_cc != 0) {
      iVar21 = 0;
      do {
        local_80 = (long *)0x0;
        local_98 = (long *)&DAT_fbec41851566601b;
        local_90 = "values";
        uStack_88 = 6;
        FUN_00e90ee0(&local_b0,&local_78,&local_98,iVar21);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        plVar17 = (long *)*plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
        *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x50,8);
        if (plVar10 == (long *)0x0) {
LAB_00fcef48:
          (**(code **)(*plVar17 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        memset(plVar10 + 1,0,0x48);
        *plVar10 = (long)puVar2;
        plVar10[2] = 0;
        *(undefined4 *)(plVar10 + 3) = 0;
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar16 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          if (*(long *)(lVar16 + 0x80) != 0) {
            lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
          }
        }
        plVar10[4] = (long)(puVar7 + 0x88);
        *plVar10 = (long)(puVar7 + 0x10);
        plVar10[1] = lVar14;
        plVar11 = plVar10 + 5;
        *plVar11 = (long)(puVar7 + 0xd8);
        plVar22 = plVar10 + 6;
        *plVar22 = 0;
        plVar10[7] = 0;
        FUN_00d1a3f4(plVar22,plVar11);
        puVar6 = PTR_DAT_047d9e30;
        *plVar10 = (long)(PTR_DAT_047d9e30 + 0x10);
        plVar10[1] = (long)plVar17;
        plVar10[4] = (long)(puVar6 + 0x90);
        *plVar11 = (long)(puVar6 + 0xe0);
        plVar10[8] = -1;
        plVar10[9] = 0;
        plVar10[2] = (long)plVar10;
        *(undefined4 *)(plVar10 + 3) = 0x80050;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        lVar13 = *plVar22;
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
        else if (sVar15 == -1) goto LAB_00fceef4;
        plVar11 = plVar10;
        switch(uVar18 & 0xffffffff) {
        case 0:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00fcef44:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar20 = plVar11 + 5;
          *plVar20 = (long)(puVar7 + 0xd8);
          plVar19 = plVar11 + 6;
          *plVar19 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar19,plVar20);
          puVar6 = PTR_DAT_047d9e38;
          plVar11[8] = -1;
          plVar11[9] = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar20 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0xffffffff;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar19;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar15 == 0) goto LAB_00fcef1c;
          goto switchD_00fcb5f0_caseD_3;
        case 1:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e98;
          *plVar11 = (long)(PTR_DAT_047d9e98 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e78;
          *plVar11 = (long)(PTR_DAT_047d9e78 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          goto switchD_00fcb5f0_caseD_3;
        case 4:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          puVar6 = PTR_DAT_047d9eb8;
          plVar11[8] = -1;
          plVar11[9] = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          plVar11[10] = -0x40800000;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ec0;
          *plVar11 = (long)(PTR_DAT_047d9ec0 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 6:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e80;
          *plVar11 = (long)(PTR_DAT_047d9e80 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ea0;
          *plVar11 = (long)(PTR_DAT_047d9ea0 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ea8;
          *plVar11 = (long)(PTR_DAT_047d9ea8 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          FUN_017d9000(&local_98,*plVar1);
          lVar13 = *plVar22;
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
          goto LAB_00fcd20c;
        case 0xc:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ec8;
          *plVar11 = (long)(PTR_DAT_047d9ec8 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e60;
          *plVar11 = (long)(PTR_DAT_047d9e60 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e88;
          *plVar11 = (long)(PTR_DAT_047d9e88 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e68;
          *plVar11 = (long)(PTR_DAT_047d9e68 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          FUN_017eb820(&local_98,*plVar1);
          lVar13 = *plVar22;
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
          goto LAB_00fcd20c;
        case 0x13:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9eb0;
          *plVar11 = (long)(PTR_DAT_047d9eb0 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x14:
          FUN_018bcbc4(&local_98,*plVar1);
          lVar13 = *plVar22;
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
          goto LAB_00fcd20c;
        case 0x15:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ed8;
          *plVar11 = (long)(PTR_DAT_047d9ed8 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x16:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ed0;
          *plVar11 = (long)(PTR_DAT_047d9ed0 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x17:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e40;
          *plVar11 = (long)(PTR_DAT_047d9e40 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x18:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e70;
          *plVar11 = (long)(PTR_DAT_047d9e70 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          plVar11[10] = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x19:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x60,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x58);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          puVar6 = PTR_DAT_047d9ee0;
          plVar11[8] = -1;
          plVar11[9] = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          plVar11[10] = 0;
          *(undefined4 *)(plVar11 + 0xb) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80060;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x1b:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e48;
          *plVar11 = (long)(PTR_DAT_047d9e48 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x1d:
          FUN_017d6be8(&local_98,*plVar1);
          lVar13 = *plVar22;
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
LAB_00fcd20c:
          if (sVar15 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar15 == 0) goto LAB_00fcef1c;
          plVar11 = local_98;
          goto switchD_00fcb5f0_caseD_3;
        case 0x20:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e58;
          *plVar11 = (long)(PTR_DAT_047d9e58 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x21:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e90;
          *plVar11 = (long)(PTR_DAT_047d9e90 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x22:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9e50;
          *plVar11 = (long)(PTR_DAT_047d9e50 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
        case 0x24:
          plVar17 = (long *)*plVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00fcef44;
          *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar17;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x58,8);
          if (plVar11 == (long *)0x0) goto LAB_00fcef48;
          memset(plVar11 + 1,0,0x50);
          puVar6 = PTR_DAT_047d66f8;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          *plVar11 = (long)(puVar6 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*(long *)(lVar16 + 0x80) != 0) {
              lVar14 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
            }
          }
          plVar11[4] = (long)(puVar7 + 0x88);
          *plVar11 = (long)(puVar7 + 0x10);
          plVar11[1] = lVar14;
          plVar19 = plVar11 + 5;
          *plVar19 = (long)(puVar7 + 0xd8);
          plVar20 = plVar11 + 6;
          *plVar20 = 0;
          plVar11[7] = 0;
          FUN_00d1a3f4(plVar20,plVar19);
          plVar11[8] = -1;
          plVar11[9] = 0;
          puVar6 = PTR_DAT_047d9ee8;
          *plVar11 = (long)(PTR_DAT_047d9ee8 + 0x10);
          plVar11[1] = (long)plVar17;
          plVar11[4] = (long)(puVar6 + 0x90);
          *plVar19 = (long)(puVar6 + 0xe0);
          *(undefined4 *)(plVar11 + 10) = 0;
          plVar11[2] = (long)plVar11;
          *(undefined4 *)(plVar11 + 3) = 0x80058;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          lVar13 = *plVar20;
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_00fceed4;
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
          else if (sVar15 == -1) goto LAB_00fceef4;
          lVar13 = *plVar22;
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
          if (sVar15 != 1) {
            if (sVar15 == 0) goto LAB_00fcef1c;
            goto switchD_00fcb5f0_caseD_3;
          }
          goto LAB_00fcd938;
        }
        if (sVar15 == 1) {
LAB_00fcd938:
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar15 == 0) goto LAB_00fcef1c;
switchD_00fcb5f0_caseD_3:
        local_c8 = local_b0;
        uStack_c0 = uStack_a8;
        local_b8 = local_a0;
        (**(code **)(*plVar11 + 0x68))(plVar11,&local_c8,uVar18 & 0xffffffff);
        local_98 = (long *)CONCAT44(local_98._4_4_,*(undefined4 *)((long)plVar11 + 0x44));
        plVar17 = (long *)FUN_011ec970(param_1 + 0x7ff0,&local_98);
        if (plVar11 != (long *)0x0) {
          lVar13 = plVar11[6];
          if (*(long *)(lVar13 + 0x10) == 0) {
LAB_00fceed4:
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
LAB_00fceef4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        plVar10 = (long *)*plVar17;
        *plVar17 = (long)plVar11;
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
          else if (sVar15 == 0) goto LAB_00fcef1c;
        }
        if (plVar11 != (long *)0x0) {
          lVar13 = plVar11[6];
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
            (**(code **)(*plVar11 + 0x50))(plVar11);
          }
          else if (sVar15 == 0) {
LAB_00fcef1c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != local_cc);
    }
    uVar18 = uVar18 + 1;
    if (uVar18 == 0x25) {
      return;
    }
  } while( true );
}


