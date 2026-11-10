/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a7004; name: FUN_015a7004
 */


void FUN_015a7004(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *local_18;
  
  FUN_014410c0(&local_18,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
  uVar5 = FUN_00d60828(local_18,*param_4 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)(*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
    if (lVar7 == 0x6ff643349b50c810) {
      puVar6 = (undefined1 *)FUN_015c0588();
      goto LAB_015a7050;
    }
    if (lVar7 == -0x65e463199a50382f) {
      puVar6 = (undefined1 *)FUN_00f6866c();
      goto LAB_015a7050;
    }
    if ((lVar7 != 0x4c70eef446d33b4c) && (lVar7 == 0x7fdb823538e20110)) {
      puVar6 = PTR_DAT_047dafa8;
      goto LAB_015a7050;
    }
  }
  puVar6 = (undefined1 *)FUN_015a7158();
LAB_015a7050:
  *param_1 = *puVar6;
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[6];
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
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


