/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c80fd0; name: FUN_00c80fd0
 */


void FUN_00c80fd0(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  bool bVar13;
  long lVar14;
  short sVar15;
  undefined8 uVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  lVar14 = param_3[1];
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar15 = *(short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00c81074;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c81074:
        bVar13 = false;
      }
      if (bVar13) {
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 == 0) {
          return;
        }
        uVar16 = *param_3;
        lVar9 = FUN_00fa5b78(uVar16,&DAT_03c32ba5);
        puVar5 = PTR_DAT_047db110;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar9 + 4);
          if (((*PTR_DAT_047db110 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047db110), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047db110);
          }
          puVar7 = PTR_DAT_047db120;
          puVar6 = PTR_DAT_047db118;
          uVar10 = *(undefined8 *)PTR_DAT_047db118;
          *(undefined8 *)PTR_DAT_047db120 = uVar10;
          FUN_02251914(&local_80,uVar10,*(undefined4 *)(lVar9 + (ulong)uVar2));
          *param_1 = local_80;
          param_1[1] = uStack_78;
          plVar11 = (long *)param_1[3];
          param_1[2] = local_70;
          param_1[3] = 0;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x20))();
          }
          param_1[3] = local_68;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047db110), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047db110);
          }
          local_a0 = *param_1;
          uStack_98 = param_1[1];
          uVar10 = *(undefined8 *)puVar6;
          *(undefined8 *)puVar7 = uVar10;
          local_90 = param_1[2];
          local_88 = (long *)param_1[3];
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x18))();
          }
          uVar2 = *(int *)(param_2 + 0x278) - 2;
          if (uVar2 < 8) {
            uVar12 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)uVar2 * 4);
          }
          else {
            uVar12 = 0;
          }
          FUN_00c82174(&local_80,uVar10,&local_a0,uVar12);
          uVar10 = FUN_02254f98(local_80);
          if (local_80 != (long *)0x0) {
            plVar11 = local_80 + 5;
            do {
              lVar9 = *plVar11;
              iVar8 = (int)lVar9 + -1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar13) {
                *(int *)plVar11 = iVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
            else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          lVar9 = FUN_00c81fa0(uVar16);
          if (lVar9 == 0) {
            FUN_02254fa0(uVar16,uVar10);
          }
          *(undefined8 *)(param_2 + 0x270) = uVar10;
        }
        lVar9 = *(long *)(lVar14 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))((long *)(lVar14 + -0x28));
          return;
        }
        if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


