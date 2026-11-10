/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136ae88; name: FUN_0136ae88
 */


void FUN_0136ae88(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  lVar8 = FUN_016fc954(*(undefined8 *)(param_1 + 0x30));
  *(long *)(param_1 + 0x50) = lVar8;
  lVar8 = *(long *)(lVar8 + 0x30);
  FUN_0136b024(param_1 + 0xb0);
  uVar6 = FUN_0136b014(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x11c) = uVar6;
  uVar6 = FUN_010a58c0(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x11d) = uVar6;
  plVar9 = *(long **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar5 = *plVar1;
      iVar2 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar5 = 0;
  if (*(byte *)(param_1 + 0x11c) < 5) {
    lVar5 = lVar8 + (ulong)*(byte *)(param_1 + 0x11c) * 0x38 + 0x28;
  }
  *(undefined1 *)(param_1 + 0x215) = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(long *)(param_1 + 0x208) = lVar5;
  FUN_0136b068(param_1);
  uVar7 = FUN_0136b00c(*(undefined8 *)(param_1 + 0x48));
  *(undefined2 *)(param_1 + 0x200) = uVar7;
  uVar7 = FUN_0136b004(*(undefined8 *)(param_1 + 0x48));
  *(undefined2 *)(param_1 + 0x202) = uVar7;
  uVar7 = FUN_010a91f8(*(undefined8 *)(param_1 + 0x48));
  *(undefined2 *)(param_1 + 0x204) = uVar7;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x122) = 0;
  *(undefined1 *)(param_1 + 0x214) = 0;
  *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) & 0xfc;
  uVar10 = FUN_0158253c(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  uVar6 = FUN_0136b01c(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x3ad) = 0;
  *(undefined1 *)(param_1 + 0x120) = uVar6;
  iVar2 = *(int *)(*(long *)(param_1 + 0x50) + 0x36c);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  *(undefined1 *)(param_1 + 0x3db) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(bool *)(param_1 + 0x3ad) = iVar2 == 2;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x3ac) = 0;
  return;
}


