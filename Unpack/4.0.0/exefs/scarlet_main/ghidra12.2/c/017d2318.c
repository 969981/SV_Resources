/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d2318; name: FUN_017d2318
 */


void FUN_017d2318(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_48 [24];
  
  FUN_00c4e5a0(auStack_48,0);
  pcVar8 = *(code **)(param_2 + 0xb8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
    (*pcVar8)(param_2 + 0xd0);
  }
  pcVar8 = *(code **)(param_2 + 0x38);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    (*pcVar8)(param_2 + 0x50);
  }
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (*(long **)(param_2 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x20))();
  }
  plVar6 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar10 = param_1[2];
  uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar6,param_2,uVar3,uVar10);
      goto LAB_017d23bc;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,uVar3,uVar10);
LAB_017d23bc:
  FUN_00c4e70c(auStack_48);
  return;
}


