/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02043ef8; name: FUN_02043ef8
 */


void FUN_02043ef8(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined1 auStack_58 [24];
  long *local_40;
  long *local_38;
  
  lVar6 = FUN_0204407c(param_2,*param_4);
  if ((((*(long *)(lVar6 + 0x1c8) == 0) || (*(short *)(*(long *)(lVar6 + 0x1c8) + 0x1a) == 0)) &&
      (uVar7 = FUN_01fb7e20(lVar6 + 0x1b0), (uVar7 & 1) == 0)) ||
     (lVar6 = *(long *)(lVar6 + 0x1c0), lVar6 == 0)) {
    puVar8 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar8;
  }
  else {
    FUN_014410c0(&local_38,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
    if (local_38 == (long *)0x0) {
      puVar8 = (undefined1 *)FUN_00f6866c();
      *param_1 = *puVar8;
    }
    else {
      FUN_015a8b44(auStack_58,local_38,*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
      memset(&local_e0,0,0x80);
      FUN_0131fc3c(lVar6,auStack_58,&local_e0,100);
      pcVar5 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar5)(auStack_c0);
      }
      puVar8 = (undefined1 *)FUN_015c0588();
      *param_1 = *puVar8;
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[6];
      psVar1 = (short *)(lVar6 + 0x1a);
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
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


