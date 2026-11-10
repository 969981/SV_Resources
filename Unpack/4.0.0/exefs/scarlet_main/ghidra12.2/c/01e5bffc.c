/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5bffc; name: FUN_01e5bffc
 */


undefined4 FUN_01e5bffc(long param_1,long param_2,uint param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  undefined4 uVar10;
  long *local_28;
  long local_18;
  
  lVar8 = *(long *)(param_2 + 0x10);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e5c074;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e5c074:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_18 = *(long *)(lVar8 + 0x10) + -0x28;
          FUN_00dbfec0(&local_28);
          if (local_28 == (long *)0x0) goto LAB_01e5c018;
          uVar7 = FUN_00dbf7ec();
          if ((uVar7 & 1) == 0) {
            uVar10 = 0;
          }
          else {
            lVar8 = 0xdc;
            if ((param_3 & 1) == 0) {
              lVar8 = 0xd8;
            }
            uVar10 = *(undefined4 *)(param_1 + lVar8);
          }
          if (local_28 != (long *)0x0) {
            plVar2 = local_28 + 5;
            do {
              lVar8 = *plVar2;
              iVar6 = (int)lVar8 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*local_28 + 0x10))();
            }
            else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          goto LAB_01e5c01c;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
LAB_01e5c018:
  uVar10 = 0;
LAB_01e5c01c:
  FUN_00c7f318(&local_18);
  return uVar10;
}


