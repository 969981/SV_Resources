/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a238f8; name: FUN_02a238f8
 */


undefined8 FUN_02a238f8(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  int local_44;
  long *local_28;
  
  if (param_1 != 0) {
    plVar5 = (long *)(param_1 + 0x110);
    lVar6 = *plVar5;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 == lVar6) {
      bVar7 = true;
    }
    else {
      lVar3 = nn::os::GetCurrentThread();
      do {
        if (*plVar5 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x118));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar7) {
                *plVar5 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_02a23944;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar7) {
          *plVar5 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_02a23944:
      bVar7 = false;
    }
    lVar3 = FUN_01f8bdd8(param_1 + 0x128);
    if (lVar3 == 0) {
      lVar3 = FUN_01f8bdd8(param_1 + 0x160);
    }
    if (!bVar7) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x118));
    }
    if ((lVar3 != 0) &&
       (lVar6 = *(long *)(lVar3 + 0x130),
       (int)((ulong)(*(long *)(lVar6 + 0x78) - *(long *)(lVar6 + 0x70)) >> 3) * -0x33333333 != 0)) {
      uVar8 = 0;
      do {
        FUN_00c5ecb4(&local_28,*(undefined8 *)(lVar6 + 0x30),*(long *)(lVar6 + 0x70) + uVar8 * 0x28)
        ;
        if (local_28 != (long *)0x0) {
          local_44 = 0;
          if (*(long *)(local_28[0x15] + 0xf8) != 0) {
            plVar5 = (long *)(*(long *)(local_28[0x15] + 0xf8) + 0x30);
            uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_44,"EnableDistanceDither");
            if (((uVar4 & 1) != 0) && (local_44 != 0)) {
              if (local_28 != (long *)0x0) {
                plVar5 = local_28 + 5;
                do {
                  lVar3 = *plVar5;
                  iVar2 = (int)lVar3 + -1;
                  cVar1 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                  if (bVar7) {
                    *(int *)plVar5 = iVar2;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (iVar2 == 0) {
                  (**(code **)(*local_28 + 0x10))();
                }
                else if ((int)lVar3 == 0) {
LAB_02a23adc:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint32_t>::max()",
                             "DecrementReferenceInternal",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                             ,0x58,"Reference counter underflows.");
                }
              }
              return 1;
            }
            if (local_28 == (long *)0x0) goto LAB_02a23a20;
          }
          plVar5 = local_28 + 5;
          do {
            lVar6 = *plVar5;
            iVar2 = (int)lVar6 + -1;
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar7) {
              *(int *)plVar5 = iVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_02a23adc;
        }
LAB_02a23a20:
        lVar6 = *(long *)(lVar3 + 0x130);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((int)((ulong)(*(long *)(lVar6 + 0x78) - *(long *)(lVar6 + 0x70)) >> 3)
                             * -0x33333333));
    }
  }
  return 0;
}


