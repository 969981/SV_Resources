/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc067c; name: FUN_01dc067c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc067c(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long *local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar8 = (long *)FUN_00fee8fc(auStack_48);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) {
LAB_01dc08ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  iVar11 = 0;
  plVar1 = plVar8 + 5;
  do {
    iVar12 = 0;
    if (plVar8 == (long *)0x0) {
      do {
        local_50 = (long *)0x0;
        FUN_00f139bc(param_1,&local_50,iVar11,iVar12);
        if (((((*(byte *)(*(long *)(_DAT_00000070 + 0x10) + 4) >> 2 & 1) != 0) ||
             (sVar6 = FUN_00cf44f4(), sVar6 != 0)) &&
            (uVar10 = FUN_00cf4cfc(_DAT_00000070), (uVar10 & 1) == 0)) &&
           ((*(ushort *)(*(long *)(_DAT_00000070 + 0x10) + 4) >> 2 & 1) == 0)) {
          uVar7 = FUN_00d75438();
          FUN_00f14810(_DAT_00000070,uVar7);
          FUN_00deb388(_DAT_00000070,0);
          FUN_00deb1b4(0);
          local_58 = (long *)0x0;
          FUN_0152f420(param_1,&local_58,iVar11,iVar12);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x1e);
    }
    else {
      do {
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_50 = plVar8;
        if ((int)lVar9 == -1) goto LAB_01dc08ec;
        FUN_00f139bc(param_1,&local_50,iVar11,iVar12);
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 5;
          do {
            lVar9 = *plVar2;
            iVar5 = (int)lVar9 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar9 == 0) goto LAB_01dc0928;
        }
        lVar9 = plVar8[0xe];
        if ((*(byte *)(*(long *)(lVar9 + 0x10) + 4) >> 2 & 1) == 0) {
          sVar6 = FUN_00cf44f4();
          if (sVar6 != 0) {
            lVar9 = plVar8[0xe];
            goto LAB_01dc072c;
          }
        }
        else {
LAB_01dc072c:
          uVar10 = FUN_00cf4cfc(lVar9);
          if (((uVar10 & 1) == 0) &&
             ((*(ushort *)(*(long *)(plVar8[0xe] + 0x10) + 4) >> 2 & 1) == 0)) {
            uVar7 = FUN_00d75438();
            FUN_00f14810(plVar8[0xe],uVar7);
            FUN_00deb388(plVar8[0xe],0);
            FUN_00deb1b4(plVar8);
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)lVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            local_58 = plVar8;
            if ((int)lVar9 == -1) goto LAB_01dc08ec;
            FUN_0152f420(param_1,&local_58,iVar11,iVar12);
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + 5;
              do {
                lVar9 = *plVar2;
                iVar5 = (int)lVar9 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar5;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar5 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
              else if ((int)lVar9 == 0) goto LAB_01dc0928;
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x1e);
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 0x21) {
      do {
        lVar9 = *plVar1;
        iVar11 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if ((int)lVar9 == 0) {
LAB_01dc0928:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      return;
    }
  } while( true );
}


