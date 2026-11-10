/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6fa10; name: FUN_01e6fa10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01e6fa10(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  long *local_68;
  
  plVar9 = (long *)*param_2;
  if ((char)plVar9[0x12] == '\0') {
    uVar13 = 1;
  }
  else {
    local_70 = 0;
    bVar12 = 0;
    uVar13 = 1;
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    do {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x60))(plVar9,bVar12);
      if (plVar9 == (long *)0x0) {
        uVar10 = FUN_00cf4cfc(_DAT_00000070);
        if (((uVar10 & 1) == 0) &&
           ((*(ushort *)(*(long *)(_DAT_00000070 + 0x10) + 4) >> 2 & 1) == 0)) {
          local_68 = (long *)0x0;
          uVar8 = FUN_00ae090c(param_1,&local_68);
          plVar11 = (long *)0x0;
LAB_01e6faac:
          if ((uVar8 & 1) == 0) {
            uVar6 = FUN_00cf44f4(plVar11[0xe]);
            uVar7 = FUN_00e974e0(plVar11[0xe]);
            if (uVar8 != 0) {
              if ((uVar8 >> 4 & 1) != 0) {
                *(undefined1 *)(param_3 + 6) = 1;
                *(undefined2 *)(param_3 + (local_70 & 0xff) * 2 + 0x30) = uVar6;
                *(undefined1 *)(param_3 + (ulong)bVar12 + 0x72) = 1;
                local_70 = (ulong)((int)local_70 + 1);
              }
              if ((uVar8 >> 2 & 1) != 0) {
                *(undefined1 *)(param_3 + 4) = 1;
                *(undefined2 *)(param_3 + (local_78 & 0xff) * 2 + 0xc) = uVar6;
                *(undefined1 *)(param_3 + (ulong)bVar12 + 0x60) = 1;
                local_78 = (ulong)((int)local_78 + 1);
              }
              if ((uVar8 >> 3 & 1) != 0) {
                *(undefined1 *)(param_3 + 5) = 1;
                *(undefined2 *)(param_3 + (local_88 & 0xff) * 2 + 0x18) = uVar7;
                *(undefined1 *)(param_3 + (ulong)bVar12 + 0x66) = 1;
                local_88 = (ulong)((int)local_88 + 1);
              }
              if ((uVar8 >> 1 & 1) != 0) {
                *(undefined1 *)(param_3 + 3) = 1;
                *(undefined2 *)(param_3 + (local_80 & 0xff) * 2 + 0x24) = uVar6;
                *(undefined1 *)(param_3 + (ulong)bVar12 + 0x6c) = 1;
                local_80 = (ulong)((int)local_80 + 1);
              }
              if ((uVar8 >> 0xd & 1) == 0) goto LAB_01e6fadc;
              *(undefined1 *)(param_3 + 10) = 1;
              *(undefined2 *)(param_3 + (local_90 & 0xff) * 2 + 0x54) = uVar6;
              uVar13 = 0;
              *(undefined1 *)(param_3 + (ulong)bVar12 + 0x78) = 1;
              local_90 = (ulong)((int)local_90 + 1);
            }
          }
          else {
LAB_01e6fadc:
            uVar13 = 0;
          }
          if (plVar9 != (long *)0x0) goto LAB_01e6fae4;
        }
      }
      else {
        plVar11 = plVar9 + 5;
        do {
          lVar5 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = (int)lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar5 == -1) {
LAB_01e6fd0c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        uVar10 = FUN_00cf4cfc(plVar9[0xe]);
        if (((uVar10 & 1) == 0) && ((*(ushort *)(*(long *)(plVar9[0xe] + 0x10) + 4) >> 2 & 1) == 0))
        {
          do {
            lVar5 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *(int *)plVar11 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_68 = plVar9;
          if ((int)lVar5 == -1) goto LAB_01e6fd0c;
          uVar8 = FUN_00ae090c(param_1,&local_68);
          plVar11 = plVar9;
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 5;
            do {
              lVar5 = *plVar1;
              iVar4 = (int)lVar5 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            else if ((int)lVar5 == 0) goto LAB_01e6fce4;
          }
          goto LAB_01e6faac;
        }
LAB_01e6fae4:
        plVar11 = plVar9 + 5;
        do {
          lVar5 = *plVar11;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar5 == 0) {
LAB_01e6fce4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar9 = (long *)*param_2;
      bVar12 = bVar12 + 1;
    } while (bVar12 < *(byte *)(plVar9 + 0x12));
  }
  return uVar13;
}


