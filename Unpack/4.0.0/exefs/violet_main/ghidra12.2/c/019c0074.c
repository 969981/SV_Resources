/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c0074; name: FUN_019c0074
 */


void FUN_019c0074(undefined8 *param_1,long param_2,int param_3)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_48;
  
  if (399 < param_3) {
    if (param_3 < 600) {
      switch(param_3) {
      case 500:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_019c35a0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) {
LAB_019c35a4:
          (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6890;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 500;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) {
LAB_019c35d4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1f5:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d68f0;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1f5;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1f6:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d67e8;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1f6;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1f7:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d68c0;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1f7;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1f8:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6908;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1f8;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1f9:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6860;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1f9;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1fa:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6830;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1fa;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1fb:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6800;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1fb;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1fc:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d67d0;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1fc;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80060;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1fd:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6920;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1fd;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1fe:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d68a8;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1fe;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80060;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x1ff:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6818;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x1ff;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x200:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6848;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x200;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x201:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d68d8;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x201;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80060;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      case 0x202:
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6878;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x202;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80058;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        break;
      default:
        switch(param_3) {
        case 400:
          FUN_01f54ea0(&local_48,*(undefined8 *)(param_2 + 8));
          break;
        case 0x191:
          FUN_01f5518c(&local_48,*(undefined8 *)(param_2 + 8));
          break;
        case 0x192:
          FUN_01f55478(&local_48,*(undefined8 *)(param_2 + 8));
          break;
        case 0x193:
          plVar12 = *(long **)(param_2 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
          puVar4 = PTR_DAT_047d66f8;
          if (plVar7 == (long *)0x0) goto LAB_019c35a4;
          plVar7[2] = 0;
          *(undefined4 *)(plVar7 + 3) = 0;
          *plVar7 = (long)(puVar4 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          puVar4 = PTR_DAT_047d8c78;
          if (lVar8 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if (*(long *)(lVar8 + 0x80) != 0) {
              lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
            }
          }
          *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
          plVar7[1] = lVar11;
          plVar7[4] = (long)(puVar4 + 0x88);
          plVar13 = plVar7 + 5;
          *plVar13 = (long)(puVar4 + 0xd8);
          plVar14 = plVar7 + 6;
          *plVar14 = 0;
          plVar7[7] = 0;
          FUN_00d1a3f4(plVar14,plVar13);
          plVar7[8] = 0;
          puVar4 = PTR_DAT_047d6760;
          *(undefined8 *)((long)plVar7 + 0x46) = 0;
          *plVar7 = (long)(puVar4 + 0x10);
          plVar7[1] = (long)plVar12;
          plVar7[4] = (long)(puVar4 + 0xa0);
          *plVar13 = (long)(puVar4 + 0xf0);
          *(undefined2 *)(plVar7 + 8) = 0x193;
          plVar7[2] = (long)plVar7;
          *(undefined4 *)(plVar7 + 3) = 0x80058;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          lVar6 = *plVar14;
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_019c2468;
        default:
          goto switchD_019c00c8_default;
        }
        goto LAB_019c2324;
      }
    }
    else if (param_3 < 0x25a) {
      if (param_3 == 600) {
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6938;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 600;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80080;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        if (param_3 != 0x259) goto switchD_019c00c8_default;
        plVar12 = *(long **)(param_2 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 == (long *)0x0) goto LAB_019c35a4;
        plVar7[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        puVar4 = PTR_DAT_047d8c78;
        if (lVar8 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (*(long *)(lVar8 + 0x80) != 0) {
            lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
          }
        }
        *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
        plVar7[1] = lVar11;
        plVar7[4] = (long)(puVar4 + 0x88);
        plVar13 = plVar7 + 5;
        *plVar13 = (long)(puVar4 + 0xd8);
        plVar14 = plVar7 + 6;
        *plVar14 = 0;
        plVar7[7] = 0;
        FUN_00d1a3f4(plVar14,plVar13);
        plVar7[8] = 0;
        puVar4 = PTR_DAT_047d6950;
        *(undefined8 *)((long)plVar7 + 0x46) = 0;
        *plVar7 = (long)(puVar4 + 0x10);
        plVar7[1] = (long)plVar12;
        plVar7[4] = (long)(puVar4 + 0xa0);
        *plVar13 = (long)(puVar4 + 0xf0);
        *(undefined2 *)(plVar7 + 8) = 0x259;
        plVar7[2] = (long)plVar7;
        *(undefined4 *)(plVar7 + 3) = 0x80080;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        lVar6 = *plVar14;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else if (param_3 == 0x25a) {
      plVar12 = *(long **)(param_2 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x70,8);
      puVar4 = PTR_DAT_047d66f8;
      if (plVar7 == (long *)0x0) goto LAB_019c35a4;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 3) = 0;
      *plVar7 = (long)(puVar4 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      puVar4 = PTR_DAT_047d8c78;
      if (lVar8 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if (*(long *)(lVar8 + 0x80) != 0) {
          lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
        }
      }
      *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
      plVar7[1] = lVar11;
      plVar7[4] = (long)(puVar4 + 0x88);
      plVar13 = plVar7 + 5;
      *plVar13 = (long)(puVar4 + 0xd8);
      plVar14 = plVar7 + 6;
      *plVar14 = 0;
      plVar7[7] = 0;
      FUN_00d1a3f4(plVar14,plVar13);
      plVar7[8] = 0;
      puVar4 = PTR_DAT_047d6968;
      *(undefined8 *)((long)plVar7 + 0x46) = 0;
      *plVar7 = (long)(puVar4 + 0x10);
      plVar7[1] = (long)plVar12;
      plVar7[4] = (long)(puVar4 + 0xa0);
      *plVar13 = (long)(puVar4 + 0xf0);
      *(undefined2 *)(plVar7 + 8) = 0x25a;
      plVar7[2] = (long)plVar7;
      *(undefined4 *)(plVar7 + 3) = 0x80070;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar6 = *plVar14;
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (param_3 != 700) goto switchD_019c00c8_default;
      plVar12 = *(long **)(param_2 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
      if (plVar7 == (long *)0x0) goto LAB_019c35a4;
      FUN_00b5703c();
      *(undefined4 *)(plVar7 + 3) = 0x80058;
      plVar7[1] = (long)plVar12;
      plVar7[2] = (long)plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar6 = plVar7[6];
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    goto LAB_019c2468;
  }
  if (199 < param_3) {
    if (param_3 < 300) {
      if (param_3 == 200) {
        FUN_01f54304(&local_48,*(undefined8 *)(param_2 + 8));
      }
      else {
        if (param_3 != 0xc9) {
          if (param_3 == 0xca) {
            plVar12 = *(long **)(param_2 + 8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (*(ulong *)(lVar6 + 0x80) < 0x10) {
              *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
              puVar4 = PTR_DAT_047d66f8;
              if (plVar7 != (long *)0x0) {
                plVar7[2] = 0;
                *(undefined4 *)(plVar7 + 3) = 0;
                *plVar7 = (long)(puVar4 + 0x10);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar8 = nn::os::GetTlsValue(DAT_04865a30);
                puVar4 = PTR_DAT_047d8c78;
                if (lVar8 == 0) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = 0;
                  if (*(long *)(lVar8 + 0x80) != 0) {
                    lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
                  }
                }
                *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
                plVar7[1] = lVar11;
                plVar7[4] = (long)(puVar4 + 0x88);
                plVar13 = plVar7 + 5;
                *plVar13 = (long)(puVar4 + 0xd8);
                plVar14 = plVar7 + 6;
                *plVar14 = 0;
                plVar7[7] = 0;
                FUN_00d1a3f4(plVar14,plVar13);
                plVar7[8] = 0;
                puVar4 = PTR_DAT_047d6778;
                *(undefined8 *)((long)plVar7 + 0x46) = 0;
                *plVar7 = (long)(puVar4 + 0x10);
                plVar7[1] = (long)plVar12;
                plVar7[4] = (long)(puVar4 + 0xa0);
                *plVar13 = (long)(puVar4 + 0xf0);
                *(undefined2 *)(plVar7 + 8) = 0xca;
                plVar7[2] = (long)plVar7;
                *(undefined4 *)(plVar7 + 3) = 0x80060;
                *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
                lVar6 = *plVar14;
                if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
                psVar1 = (short *)(lVar6 + 0x1a);
                do {
                  sVar10 = *psVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar3) {
                    *psVar1 = sVar10 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                goto LAB_019c2468;
              }
              goto LAB_019c35a4;
            }
            goto LAB_019c35a0;
          }
          goto switchD_019c00c8_default;
        }
        FUN_01f544f0(&local_48,*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      switch(param_3) {
      case 300:
        FUN_01f547dc(&local_48,*(undefined8 *)(param_2 + 8));
        break;
      case 0x12d:
        FUN_019f5598(&local_48,*(undefined8 *)(param_2 + 8));
        break;
      case 0x12e:
        FUN_01a507f0(&local_48,*(undefined8 *)(param_2 + 8));
        break;
      case 0x12f:
        FUN_01f549c8(&local_48,*(undefined8 *)(param_2 + 8));
        break;
      case 0x130:
        FUN_01f54bb4(&local_48,*(undefined8 *)(param_2 + 8));
        break;
      default:
switchD_019c00c8_default:
        *param_1 = 0;
        return;
      }
    }
    goto LAB_019c2324;
  }
  if (param_3 < 100) {
    if (param_3 == 1) {
      plVar12 = *(long **)(param_2 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (*(ulong *)(lVar6 + 0x80) < 0x10) {
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
        puVar4 = PTR_DAT_047d66f8;
        if (plVar7 != (long *)0x0) {
          plVar7[2] = 0;
          *(undefined4 *)(plVar7 + 3) = 0;
          *plVar7 = (long)(puVar4 + 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          puVar4 = PTR_DAT_047d8c78;
          if (lVar8 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if (*(long *)(lVar8 + 0x80) != 0) {
              lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
            }
          }
          *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
          plVar7[1] = lVar11;
          plVar7[4] = (long)(puVar4 + 0x88);
          plVar13 = plVar7 + 5;
          *plVar13 = (long)(puVar4 + 0xd8);
          plVar14 = plVar7 + 6;
          *plVar14 = 0;
          plVar7[7] = 0;
          FUN_00d1a3f4(plVar14,plVar13);
          plVar7[8] = 0;
          puVar4 = PTR_DAT_047d6700;
          *(undefined8 *)((long)plVar7 + 0x46) = 0;
          *plVar7 = (long)(puVar4 + 0x10);
          plVar7[1] = (long)plVar12;
          plVar7[4] = (long)(puVar4 + 0xa0);
          *plVar13 = (long)(puVar4 + 0xf0);
          *(undefined2 *)(plVar7 + 8) = 1;
          plVar7[2] = (long)plVar7;
          *(undefined4 *)(plVar7 + 3) = 0x80058;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          lVar6 = *plVar14;
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_019c2468;
        }
        goto LAB_019c35a4;
      }
      goto LAB_019c35a0;
    }
    if (param_3 == 10) {
      FUN_01f52ca4(&local_48,*(undefined8 *)(param_2 + 8));
    }
    else {
      if (param_3 != 0xb) goto switchD_019c00c8_default;
      FUN_01f52f90(&local_48,*(undefined8 *)(param_2 + 8));
    }
    goto LAB_019c2324;
  }
  switch(param_3) {
  case 100:
    FUN_01f5327c(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x65:
    FUN_01a7aab0(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x66:
    FUN_01f53568(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x67:
    FUN_01a3c060(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x68:
  case 0x69:
    FUN_01f53854(&local_48,*(undefined8 *)(param_2 + 8));
    uVar9 = local_48;
    local_48 = 0;
    *param_1 = uVar9;
    FUN_01996b54(&local_48);
    return;
  case 0x6a:
    FUN_01a50604(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x6b:
    FUN_01f53a40(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x6c:
    FUN_01f53d2c(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x6d:
    FUN_01f54018(&local_48,*(undefined8 *)(param_2 + 8));
    break;
  case 0x6e:
    plVar12 = *(long **)(param_2 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
    puVar4 = PTR_DAT_047d66f8;
    if (plVar7 == (long *)0x0) goto LAB_019c35a4;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    puVar4 = PTR_DAT_047d8c78;
    if (lVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*(long *)(lVar8 + 0x80) != 0) {
        lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
      }
    }
    *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar7[1] = lVar11;
    plVar7[4] = (long)(puVar4 + 0x88);
    plVar13 = plVar7 + 5;
    *plVar13 = (long)(puVar4 + 0xd8);
    plVar14 = plVar7 + 6;
    *plVar14 = 0;
    plVar7[7] = 0;
    FUN_00d1a3f4(plVar14,plVar13);
    plVar7[8] = 0;
    puVar4 = PTR_DAT_047d6a68;
    *(undefined8 *)((long)plVar7 + 0x46) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[1] = (long)plVar12;
    plVar7[4] = (long)(puVar4 + 0xa0);
    *plVar13 = (long)(puVar4 + 0xf0);
    *(undefined2 *)(plVar7 + 8) = 0x6e;
    plVar7[2] = (long)plVar7;
    *(undefined4 *)(plVar7 + 3) = 0x80058;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *plVar14;
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_019c2468;
  case 0x6f:
    plVar12 = *(long **)(param_2 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
    puVar4 = PTR_DAT_047d66f8;
    if (plVar7 == (long *)0x0) goto LAB_019c35a4;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    puVar4 = PTR_DAT_047d8c78;
    if (lVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*(long *)(lVar8 + 0x80) != 0) {
        lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
      }
    }
    *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar7[1] = lVar11;
    plVar7[4] = (long)(puVar4 + 0x88);
    plVar13 = plVar7 + 5;
    *plVar13 = (long)(puVar4 + 0xd8);
    plVar14 = plVar7 + 6;
    *plVar14 = 0;
    plVar7[7] = 0;
    FUN_00d1a3f4(plVar14,plVar13);
    plVar7[8] = 0;
    puVar4 = PTR_DAT_047d6a50;
    *(undefined8 *)((long)plVar7 + 0x46) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[1] = (long)plVar12;
    plVar7[4] = (long)(puVar4 + 0xa0);
    *plVar13 = (long)(puVar4 + 0xf0);
    *(undefined2 *)(plVar7 + 8) = 0x6f;
    plVar7[2] = (long)plVar7;
    *(undefined4 *)(plVar7 + 3) = 0x80058;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *plVar14;
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_019c2468;
  case 0x70:
    plVar12 = *(long **)(param_2 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
    if (plVar7 == (long *)0x0) goto LAB_019c35a4;
    FUN_009d6f5c();
    *(undefined4 *)(plVar7 + 3) = 0x80080;
    plVar7[1] = (long)plVar12;
    plVar7[2] = (long)plVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = plVar7[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_019c2468;
  case 0x71:
    plVar12 = *(long **)(param_2 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
    puVar4 = PTR_DAT_047d66f8;
    if (plVar7 == (long *)0x0) goto LAB_019c35a4;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    puVar4 = PTR_DAT_047d8c78;
    if (lVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*(long *)(lVar8 + 0x80) != 0) {
        lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
      }
    }
    *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar7[1] = lVar11;
    plVar7[4] = (long)(puVar4 + 0x88);
    plVar13 = plVar7 + 5;
    *plVar13 = (long)(puVar4 + 0xd8);
    plVar14 = plVar7 + 6;
    *plVar14 = 0;
    plVar7[7] = 0;
    FUN_00d1a3f4(plVar14,plVar13);
    plVar7[8] = 0;
    puVar4 = PTR_DAT_047d6b88;
    *(undefined8 *)((long)plVar7 + 0x46) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[1] = (long)plVar12;
    plVar7[4] = (long)(puVar4 + 0xa0);
    *plVar13 = (long)(puVar4 + 0xf0);
    *(undefined2 *)(plVar7 + 8) = 0x71;
    plVar7[2] = (long)plVar7;
    *(undefined4 *)(plVar7 + 3) = 0x80058;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *plVar14;
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_019c2468;
  case 0x72:
    plVar12 = *(long **)(param_2 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x88,8);
    puVar4 = PTR_DAT_047d66f8;
    if (plVar7 == (long *)0x0) goto LAB_019c35a4;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    puVar4 = PTR_DAT_047d8c78;
    if (lVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*(long *)(lVar8 + 0x80) != 0) {
        lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
      }
    }
    *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar7[1] = lVar11;
    plVar7[4] = (long)(puVar4 + 0x88);
    plVar13 = plVar7 + 5;
    *plVar13 = (long)(puVar4 + 0xd8);
    plVar14 = plVar7 + 6;
    *plVar14 = 0;
    plVar7[7] = 0;
    FUN_00d1a3f4(plVar14,plVar13);
    plVar7[8] = 0;
    puVar4 = PTR_DAT_047d6b70;
    *(undefined8 *)((long)plVar7 + 0x46) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[1] = (long)plVar12;
    plVar7[4] = (long)(puVar4 + 0xa0);
    *plVar13 = (long)(puVar4 + 0xf0);
    *(undefined2 *)(plVar7 + 8) = 0x72;
    plVar7[2] = (long)plVar7;
    *(undefined4 *)(plVar7 + 3) = 0x80088;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *plVar14;
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_019c2468;
  case 0x73:
    plVar12 = *(long **)(param_2 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_019c35a0;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
    puVar4 = PTR_DAT_047d66f8;
    if (plVar7 == (long *)0x0) goto LAB_019c35a4;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    puVar4 = PTR_DAT_047d8c78;
    if (lVar8 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (*(long *)(lVar8 + 0x80) != 0) {
        lVar11 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
      }
    }
    *plVar7 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar7[1] = lVar11;
    plVar7[4] = (long)(puVar4 + 0x88);
    plVar13 = plVar7 + 5;
    *plVar13 = (long)(puVar4 + 0xd8);
    plVar14 = plVar7 + 6;
    *plVar14 = 0;
    plVar7[7] = 0;
    FUN_00d1a3f4(plVar14,plVar13);
    plVar7[8] = 0;
    puVar4 = PTR_DAT_047d6a38;
    *(undefined8 *)((long)plVar7 + 0x46) = 0;
    *plVar7 = (long)(puVar4 + 0x10);
    plVar7[1] = (long)plVar12;
    plVar7[4] = (long)(puVar4 + 0xa0);
    *plVar13 = (long)(puVar4 + 0xf0);
    *(undefined2 *)(plVar7 + 8) = 0x73;
    plVar7[2] = (long)plVar7;
    *(undefined4 *)(plVar7 + 3) = 0x80058;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    lVar6 = *plVar14;
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_019c35d4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_019c2468:
    if (sVar10 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    *param_1 = plVar7;
    return;
  default:
    goto switchD_019c00c8_default;
  }
LAB_019c2324:
  *param_1 = local_48;
  return;
}


