/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0196c2fc; name: FUN_0196c2fc
 */


void FUN_0196c2fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  
  lVar11 = FUN_0196c644(*param_4);
  iVar10 = FUN_0196c63c(*param_4);
  puVar9 = PTR_DAT_047db120;
  puVar8 = PTR_DAT_047db118;
  puVar7 = PTR_DAT_047db110;
  if (0 < iVar10) {
    lVar14 = 0;
    do {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047dda40,puVar8,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar7);
      }
      uVar15 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar15;
      local_90 = *param_5;
      uStack_88 = param_5[1];
      local_80 = param_5[2];
      local_78 = (long *)param_5[3];
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      FUN_00c82174(&local_70,uVar15,&local_90,param_6);
      plVar5 = (long *)CONCAT44(uStack_6c,local_70);
      uVar12 = (**(code **)(plVar5[8] + 0xa8))(plVar5 + 8,*(undefined2 *)(lVar11 + lVar14 * 2));
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 5;
        do {
          lVar6 = *plVar1;
          iVar10 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        else if ((int)lVar6 == 0) goto LAB_0196c5ec;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if ((uVar12 & 1) == 0) {
        local_70 = 2;
        lVar14 = FUN_0152bfac(auStack_68,param_3,&local_70);
        *param_1 = lVar14;
        if (lVar14 != 0) {
          piVar2 = (int *)(lVar14 + 0x28);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        iVar10 = FUN_0196c63c(*param_4);
        if (iVar10 < 1) {
          return;
        }
        uVar12 = 0;
        do {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047dda40,puVar8,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar7);
          }
          uVar15 = *(undefined8 *)puVar8;
          *(undefined8 *)puVar9 = uVar15;
          local_b0 = *param_5;
          uStack_a8 = param_5[1];
          local_a0 = param_5[2];
          local_98 = (long *)param_5[3];
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x18))();
          }
          FUN_00c82174(&local_70,uVar15,&local_b0,param_6);
          plVar5 = (long *)CONCAT44(uStack_6c,local_70);
          uVar13 = (**(code **)(plVar5[8] + 0xa8))(plVar5 + 8,*(undefined2 *)(lVar11 + uVar12 * 2));
          if (plVar5 != (long *)0x0) {
            plVar1 = plVar5 + 5;
            do {
              lVar14 = *plVar1;
              iVar10 = (int)lVar14 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
            else if ((int)lVar14 == 0) {
LAB_0196c5ec:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if ((uVar13 & 1) == 0) {
            FUN_02251c38(*param_1,*(undefined2 *)(lVar11 + (uVar12 & 0xffffffff) * 2));
            return;
          }
          uVar12 = uVar12 + 1;
          iVar10 = FUN_0196c63c(*param_4);
          if ((long)iVar10 <= (long)uVar12) {
            return;
          }
        } while( true );
      }
      lVar14 = lVar14 + 1;
      iVar10 = FUN_0196c63c(*param_4);
    } while (lVar14 < iVar10);
  }
  *param_1 = 0;
  return;
}


