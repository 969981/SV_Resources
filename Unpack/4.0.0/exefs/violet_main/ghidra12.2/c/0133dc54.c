/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133dc54; name: FUN_0133dc54
 */


void FUN_0133dc54(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  undefined8 *puVar5;
  char *pcVar6;
  short sVar7;
  long *plVar8;
  char cVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *local_d8 [4];
  long *local_b8;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar10 = PTR_PTR_047d4508;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  puVar1 = PTR_DAT_047dcde8 + 0x10;
  uStack_a0 = 0;
  plVar20 = *(long **)(param_2 + 0x120);
  plVar8 = *(long **)(param_2 + 0x128);
  local_a8 = puVar1;
  if ((plVar8 != plVar20) && (plVar20 != plVar8)) {
    puVar2 = PTR_DAT_047e2518 + 0x10;
    puVar3 = PTR_DAT_047dcde8 + 0x10;
    do {
      plVar12 = (long *)FUN_0133e008(*plVar20 + 0x50);
      puVar5 = (undefined8 *)puVar10;
      if (*plVar12 != 0) {
        puVar5 = (undefined8 *)(*plVar12 + 0x38);
      }
      local_68 = (long *)*puVar5;
      FUN_0110eb84(local_d8,&local_68,&DAT_03c886bc,(int)plVar12[5]);
      plVar12 = (long *)puVar10;
      if (local_d8[0] != (long *)0x0) {
        plVar12 = local_d8[0] + 7;
      }
      pcVar13 = strrchr((char *)*plVar12,0x2f);
      pcVar6 = (char *)0x0;
      if (pcVar13 != (char *)0x0) {
        pcVar6 = pcVar13 + 1;
      }
      if (*pcVar6 == '\0') {
        plVar12 = (long *)FUN_00d44228();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar14 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar14;
        FUN_00cf9884(&local_68,uVar14,pcVar6);
        plVar12 = local_68;
      }
      plVar15 = (long *)PTR_DAT_047d8b70;
      if (plVar12 != (long *)0x0) {
        plVar15 = plVar12 + 6;
      }
      if (*plVar15 == *param_3) {
        lVar18 = *plVar20;
        *param_1 = (long)puVar2;
        param_1[1] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        FUN_01186bfc(param_1 + 1,lVar18 + 0x58);
        lVar19 = *(long *)(lVar18 + 0x68);
        if (lVar19 != 0) {
          lVar16 = *(long *)(lVar19 + 0x30);
          if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar4 = (short *)(lVar16 + 0x1a);
          do {
            sVar7 = *psVar4;
            cVar9 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar17) {
              *psVar4 = sVar7 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar7 == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            *(undefined8 *)(lVar16 + 8) = uVar14;
            *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
          }
          else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        plVar15 = (long *)param_1[3];
        param_1[3] = lVar19;
        if (plVar15 != (long *)0x0) {
          lVar19 = plVar15[6];
          psVar4 = (short *)(lVar19 + 0x1a);
          do {
            sVar7 = *psVar4;
            cVar9 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar17) {
              *psVar4 = sVar7 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))();
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        FUN_00cef9d0(param_1 + 4,lVar18 + 0x70);
        FUN_00ceffd4(param_1 + 6,lVar18 + 0x80);
        bVar17 = false;
        *param_1 = (long)puVar3;
      }
      else {
        bVar17 = true;
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_d8[0] != (long *)0x0) {
        (**(code **)(*local_d8[0] + 0x20))();
      }
      if (!bVar17) goto LAB_0133deec;
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar8);
  }
  FUN_01788aac(param_1,&local_a8);
  *param_1 = (long)puVar1;
LAB_0133deec:
  FUN_01185de0(&local_a8);
  return;
}


