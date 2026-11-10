/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186d774; name: FUN_0186d774
 */


void FUN_0186d774(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  long local_50;
  undefined1 local_48;
  
  if (((DAT_04839888 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839888), iVar4 != 0)) {
    FUN_00100190(&LAB_00b1c558,&DAT_04839878,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839888);
  }
  DAT_04839870 = DAT_04839878;
  if (DAT_04839878 == 0) {
    return;
  }
  if (*param_2 != 0) {
    plVar6 = (long *)(DAT_04839878 + 200);
    lVar7 = *plVar6;
    lVar8 = *(long *)(DAT_04839878 + 0xd0);
    local_a8 = param_1;
    if ((lVar7 != lVar8) && (uVar5 = FUN_0186d93c(&local_a8,lVar7), (uVar5 & 1) == 0)) {
      do {
        lVar7 = lVar7 + 0x68;
        if (lVar8 == lVar7) {
          lVar7 = lVar8;
          goto LAB_0186d888;
        }
        uVar5 = FUN_0186d93c(&local_a8,lVar7);
      } while ((uVar5 & 1) == 0);
    }
LAB_0186d888:
    if (lVar8 == lVar7) {
      FUN_01077654(&local_a8);
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = 0;
      local_88 = *param_1;
      uStack_80 = param_1[1];
      local_78 = param_1[2];
      uStack_70 = param_1[3];
      local_64 = 0;
      local_68 = 3;
      local_50 = *param_2;
      if (local_50 != 0) {
        piVar1 = (int *)(local_50 + 0x28);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      local_48 = 0;
      FUN_0186d9ac(plVar6,&local_a8);
      FUN_00dea7e0(&local_a8);
    }
  }
  return;
}


