/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299387c; name: FUN_0299387c
 */


void FUN_0299387c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  FUN_010a3edc();
  FUN_010a3a68(*(undefined8 *)(param_1 + 0xb0),1);
  FUN_02993cec(*(undefined8 *)(param_1 + 0xa8),1);
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar8 = FUN_00f7e2a0(*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x34),
                         *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8d),0);
    if ((uVar8 & 1) != 0) {
      FUN_02993cf8(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                   *(undefined8 *)(param_1 + 0xb0),0);
    }
  }
  else {
    FUN_019a8ad4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
    uVar8 = FUN_00f7e2a0(*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x34),
                         *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8d),1);
    if ((uVar8 & 1) != 0) {
      FUN_02993cf8(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                   *(undefined8 *)(param_1 + 0xb0),1);
    }
  }
  else {
    FUN_019a8ad4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 200) == 0) {
    uVar8 = FUN_00f7e2a0(*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x34),
                         *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8d),2);
    if ((uVar8 & 1) != 0) {
      FUN_02993cf8(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                   *(undefined8 *)(param_1 + 0xb0),2);
    }
  }
  else {
    FUN_019a8ad4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar8 = FUN_00f7e2a0(*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x34),
                         *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8d),3);
    if ((uVar8 & 1) != 0) {
      FUN_02993cf8(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                   *(undefined8 *)(param_1 + 0xb0),3);
    }
  }
  else {
    FUN_019a8ad4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar8 = FUN_00f7e2a0(*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x34),
                         *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8d),4);
    if ((uVar8 & 1) != 0) {
      FUN_02993cf8(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                   *(undefined8 *)(param_1 + 0xb0),4);
    }
  }
  else {
    FUN_019a8ad4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0xb0));
  }
  iVar9 = 0;
  do {
    FUN_0106f324(&local_58,*(undefined8 *)(param_1 + 0xb0),iVar9);
    iVar6 = FUN_019a8690(local_58);
    if (iVar6 != 0) {
      iVar10 = 0;
      do {
        FUN_019a8928(&local_60,local_58,iVar10);
        lVar7 = FUN_019a8688(local_60);
        uVar11 = *(undefined8 *)(lVar7 + 8);
        FUN_00f10acc(&local_68,*(undefined8 *)(param_1 + 0xb0),iVar9);
        uVar8 = FUN_019a86c8(local_68,uVar11);
        if (local_68 != (long *)0x0) {
          lVar7 = local_68[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_02993c7c;
        }
        if (((uVar8 & 1) == 0) &&
           (FUN_0123d184(&local_68,*(undefined8 *)(param_1 + 0xb0),iVar9), plVar5 = local_68,
           local_68 != (long *)0x0)) {
          local_70 = local_60;
          if (local_60 != (long *)0x0) {
            lVar7 = local_60[6];
            if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
              *(undefined8 *)(lVar7 + 8) = uVar11;
              *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          FUN_0123d4a0(plVar5,&local_70);
          if (local_70 != (long *)0x0) {
            lVar7 = local_70[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*local_70 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_02993c7c;
          }
          if (local_68 != (long *)0x0) {
            lVar7 = local_68[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*local_68 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_02993c7c;
          }
        }
        if (local_60 != (long *)0x0) {
          lVar7 = local_60[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_02993c7c;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar6);
    }
    if (local_58 != (long *)0x0) {
      lVar7 = local_58[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_02993c7c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 5) {
      FUN_0298fdd8(*(undefined8 *)(param_1 + (ulong)*(byte *)(param_1 + 0x95) * 8 + 0xb8));
      *(code **)(param_1 + 0x68) = FUN_02994190;
      *(undefined8 *)(param_1 + 0x70) = 0;
      return;
    }
  } while( true );
}


