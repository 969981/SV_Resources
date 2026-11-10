/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea81dc; name: FUN_01ea81dc
 */


void FUN_01ea81dc(long param_1,undefined2 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  
  if ((((*(long *)(param_1 + 0x50) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar5 != 0)) &&
      (*(long *)(param_1 + 0x60) != 0)) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar7 != 0)) {
    plVar6 = (long *)(lVar5 + -0x28);
    local_50 = plVar6;
    uVar4 = FUN_01ea85a0(&local_50);
    if ((uVar4 & 0xff) != 0) {
      FUN_014faeb4(plVar6,uVar4 >> 0x20,*param_2,0);
      local_50 = (long *)&DAT_b49a716fb65dbb9c;
      local_48 = (long *)&DAT_03c2e7b5;
      local_40 = 4;
      local_38 = (long *)0x0;
      local_70 = 0xa2126f096beabc04;
      pcStack_68 = "color_hrs";
      local_60 = 9;
      local_58 = (long *)0x0;
      FUN_0118fe64(lVar7 + -0x28,&local_50,&local_70,param_2[1]);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x10), lVar5 != 0)) {
        uVar4 = FUN_01101dbc(lVar5 + -0x28,1,0);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x80) = 1;
        }
        FUN_00c9e664(&local_50,lVar5 + 0xc0);
        if (local_50 != (long *)0x0) {
          lVar5 = 0;
          if (local_48 != (long *)0x0) {
            lVar5 = local_48[9];
          }
          lVar5 = FUN_011aa1f0(lVar5 + 0x108,&local_70);
          if (lVar5 != 0) {
            FUN_01ea8634();
          }
        }
        if (local_48 != (long *)0x0) {
          plVar6 = local_48 + 5;
          do {
            lVar5 = *plVar6;
            iVar3 = (int)lVar5 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *(int *)plVar6 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
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
  }
  return;
}


