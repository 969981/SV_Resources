/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0090202c; name: FUN_0090202c
 */


void FUN_0090202c(undefined8 *param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  undefined8 uVar13;
  LightEventType *unaff_x24;
  bool bVar14;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  LightEventType *local_38;
  
  local_54 = *param_3;
  uStack_58 = *param_4;
  local_5c = *param_5;
  lVar10 = *param_2;
  if (lVar10 == 0) {
    unaff_x24 = (LightEventType *)0x0;
  }
  else if (*(short *)(lVar10 + 0x1a) == 0) {
LAB_0090217c:
    unaff_x24 = (LightEventType *)0x0;
  }
  else {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_009020c4;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_009020c4:
        bVar14 = false;
      }
      puVar4 = PTR_DAT_047d38f8;
      if (bVar14) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          lVar12 = *(long *)PTR_DAT_047d38f8;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 == lVar12) {
            bVar14 = true;
          }
          else {
            uVar13 = nn::os::GetCurrentThread();
            do {
              if (*(long *)puVar4 != 0) {
                unaff_x24 = (LightEventType *)(puVar4 + 8);
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent(unaff_x24);
                  while (*(long *)puVar4 == 0) {
                    cVar3 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                    if (bVar14) {
                      *(undefined8 *)puVar4 = uVar13;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_00902234;
                  }
                } while( true );
              }
              cVar3 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar14) {
                *(undefined8 *)puVar4 = uVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_00902234:
            bVar14 = false;
          }
          uVar13 = *(undefined8 *)(lVar10 + 0x48);
          uVar7 = FUN_00902420(uVar13,param_2[2],&local_54,&uStack_58,&local_5c);
          if ((uVar7 & 1) != 0) {
            pcVar8 = (char *)FUN_00c646d0(uVar13,0xffffffff,0);
            if (*pcVar8 == '\0') {
              unaff_x24 = (LightEventType *)FUN_00d44228();
              if (unaff_x24 != (LightEventType *)0x0) {
                (**(code **)(*(long *)unaff_x24 + 0x18))(unaff_x24);
              }
            }
            else {
              if (((*PTR_DAT_047d4240 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
                FUN_00100190(&LAB_009025e4,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4240);
              }
              uVar9 = *(undefined8 *)PTR_DAT_047d4248;
              *(undefined8 *)PTR_DAT_047d4250 = uVar9;
              FUN_00cf9884(&local_38,uVar9,pcVar8);
              unaff_x24 = local_38;
            }
          }
          FUN_00c5db00(uVar13,0);
          if (!bVar14) {
            *(undefined8 *)puVar4 = 0;
            nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
          }
          lVar6 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar14) {
              *psVar1 = sVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
          }
          else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_0090217c;
      }
      unaff_x24 = (LightEventType *)0x0;
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  *param_1 = unaff_x24;
  return;
}


