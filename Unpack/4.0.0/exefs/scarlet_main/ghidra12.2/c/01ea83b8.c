/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea83b8; name: FUN_01ea83b8
 */


void FUN_01ea83b8(long param_1,long param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *local_50;
  long *local_48;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 != 0)) {
    if (param_3 != 0) {
      uVar6 = 0;
      puVar7 = (undefined4 *)(param_2 + 4);
      do {
        if (uVar6 < 0x10) {
          FUN_014faeb4(lVar5 + -0x28,puVar7[-1],*puVar7,0);
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (param_3 != uVar6);
    }
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x10), lVar5 != 0)) {
      uVar6 = FUN_01101dbc(lVar5 + -0x28,1,0);
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x80) = 1;
      }
      FUN_00c9e664(&local_50,lVar5 + 0xc0);
      if (local_50 != (long *)0x0) {
        lVar5 = 0;
        if (local_48 != (long *)0x0) {
          lVar5 = local_48[9];
        }
        lVar5 = FUN_011aa1f0(lVar5 + 0x108,auStack_28);
        if (lVar5 != 0) {
          FUN_01ea8634();
        }
      }
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 5;
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
          (**(code **)(*local_48 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x60))();
      }
    }
  }
  return;
}


