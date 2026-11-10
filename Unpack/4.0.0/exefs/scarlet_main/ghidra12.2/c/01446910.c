/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01446910; name: FUN_01446910
 */


int FUN_01446910(float param_1,ushort *param_2,long *param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_88;
  
  puVar5 = PTR_DAT_047db110;
  if (((*PTR_DAT_047db110 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  puVar7 = PTR_DAT_047db120;
  puVar6 = PTR_DAT_047db118;
  uVar16 = *(undefined8 *)PTR_DAT_047db118;
  *(undefined8 *)PTR_DAT_047db120 = uVar16;
  uVar8 = (**(code **)(*param_3 + 0x20))(param_3);
  FUN_02251914(&local_b8,uVar16,uVar8);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  uVar16 = *(undefined8 *)puVar6;
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  *(undefined8 *)puVar7 = uVar16;
  local_c8 = local_a8;
  local_c0 = local_a0;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  if (DAT_04842748 - 2U < 8) {
    uVar8 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)(DAT_04842748 - 2U) * 4);
  }
  else {
    uVar8 = 0;
  }
  FUN_00c82174(&local_88,uVar16,&local_d8,uVar8);
  plVar17 = local_88;
  if (local_88 != (long *)0x0) {
    plVar12 = local_88 + 5;
    do {
      lVar4 = *plVar12;
      iVar9 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
    }
    else if ((int)lVar4 == 0) {
LAB_01446dd4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar17 = plVar17 + 8;
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  iVar9 = (**(code **)(*plVar17 + 0x20))(plVar17);
  uVar1 = *param_2;
  if (uVar1 == 0) {
    fVar20 = 0.0;
    iVar15 = 0;
    fVar19 = 0.0;
  }
  else {
    fVar19 = 0.0;
    fVar20 = 0.0;
    iVar15 = 0;
    do {
      uVar13 = (uint)uVar1;
      if (uVar13 == 0x1b) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047dda40,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar5);
        }
        uVar16 = *(undefined8 *)puVar6;
        local_f8 = local_b8;
        uStack_f0 = uStack_b0;
        *(undefined8 *)puVar7 = uVar16;
        local_e8 = local_a8;
        local_e0 = local_a0;
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x18))();
        }
        if (DAT_04842748 - 2U < 8) {
          uVar8 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)(DAT_04842748 - 2U) * 4);
        }
        else {
          uVar8 = 0;
        }
        FUN_00c82174(&local_88,uVar16,&local_f8,uVar8);
        plVar17 = local_88;
        if (local_88 != (long *)0x0) {
          plVar12 = local_88 + 5;
          do {
            lVar4 = *plVar12;
            iVar11 = (int)lVar4 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *(int *)plVar12 = iVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
          else if ((int)lVar4 == 0) goto LAB_01446dd4;
        }
        plVar12 = local_e0;
LAB_01446bb4:
        plVar17 = plVar17 + 8;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        puVar14 = param_2 + 1;
      }
      else {
        if (uVar13 - 0x11 < 10) {
          if ((uVar13 - 0x13 & 0xffff) < 8) {
            uVar8 = *(undefined4 *)(&DAT_03cbf220 + (long)(short)(uVar13 - 0x13) * 4);
          }
          else {
            uVar8 = 0;
          }
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,puVar6,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar5);
          }
          uVar16 = *(undefined8 *)puVar6;
          local_118 = local_b8;
          uStack_110 = uStack_b0;
          *(undefined8 *)puVar7 = uVar16;
          local_108 = local_a8;
          local_100 = local_a0;
          if (local_a0 != (long *)0x0) {
            (**(code **)(*local_a0 + 0x18))();
          }
          FUN_00c82174(&local_88,uVar16,&local_118,uVar8);
          plVar17 = local_88;
          if (local_88 != (long *)0x0) {
            plVar12 = local_88 + 5;
            do {
              lVar4 = *plVar12;
              iVar11 = (int)lVar4 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *(int *)plVar12 = iVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 == 0) {
              (**(code **)(*local_88 + 0x10))(local_88);
            }
            else if ((int)lVar4 == 0) goto LAB_01446dd4;
          }
          plVar12 = local_100;
          goto LAB_01446bb4;
        }
        if (uVar13 == 0x10) {
          puVar14 = param_2 + (ulong)param_2[1] + 2;
        }
        else if (uVar13 == 10) {
          iVar15 = iVar15 + 1;
          if (fVar20 <= fVar19) {
            fVar20 = fVar19;
          }
          fVar19 = fVar20;
          puVar14 = param_2 + 1;
          fVar20 = 0.0;
        }
        else {
          iVar11 = (**(code **)(*plVar17 + 0x80))(plVar17);
          puVar14 = param_2 + 1;
          fVar18 = 0.0;
          if ((*puVar14 | 0x10) != 0x10) {
            iVar10 = (**(code **)(*plVar17 + 0xb0))(plVar17,*param_2);
            fVar18 = (param_1 / (float)iVar9) * (float)iVar10;
          }
          fVar20 = fVar20 + (param_1 / (float)iVar9) * (float)iVar11 + fVar18;
        }
      }
      uVar1 = *puVar14;
      param_2 = puVar14;
    } while (uVar1 != 0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar15 + 1;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (fVar20 <= fVar19) {
    fVar20 = fVar19;
  }
  return (int)fVar20;
}


