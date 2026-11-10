/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a05fb0; name: FUN_01a05fb0
 */


void FUN_01a05fb0(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(*(long *)(*param_4 + (ulong)*(uint *)(param_2 + 8)) + 0x58);
  if (plVar8 == (long *)0x0) {
    puVar6 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar6;
    return;
  }
  lVar9 = plVar8[6];
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
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
    uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar7;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  lVar9 = FUN_01073a44(plVar8,*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
  if (lVar9 == 0x6ff643349b50c810) {
    puVar5 = PTR_DAT_047dca60;
    goto LAB_01a06048;
  }
  if (lVar9 < 0x7989b6dd56823279) {
    if (lVar9 == -0x65e463199a50382f) {
      puVar5 = (undefined *)FUN_00f6866c();
      goto LAB_01a06048;
    }
    uVar7 = 0x4c70eef446d33b4c;
    if (lVar9 == 0x4c70eef446d33b4c) {
      puVar5 = (undefined *)FUN_015a7158();
      goto LAB_01a06048;
    }
  }
  else {
    if (lVar9 == 0x7989b6dd56823279) {
      puVar5 = (undefined *)FUN_01a061e4();
      goto LAB_01a06048;
    }
    uVar7 = 0x7fdb823538e20110;
  }
  puVar5 = (undefined *)FUN_013e253c(uVar7);
LAB_01a06048:
  *param_1 = *puVar5;
  lVar9 = plVar8[6];
  psVar1 = (short *)(lVar9 + 0x1a);
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
    *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01a060cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x50))(plVar8);
    return;
  }
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


