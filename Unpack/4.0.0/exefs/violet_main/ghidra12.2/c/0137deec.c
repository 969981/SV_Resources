/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0137deec; name: FUN_0137deec
 */


void FUN_0137deec(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (*(long *)(param_1 + 0x198) != 0) {
    plVar5 = (long *)*(long *)(param_1 + 0x170);
    while (plVar5 != (long *)0x0) {
      plVar11 = (long *)*plVar5;
      plVar6 = (long *)plVar5[3];
      if (plVar6 != (long *)0x0) {
        lVar10 = plVar6[6];
        psVar1 = (short *)(lVar10 + 0x1a);
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
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar6 = *(long **)(param_1 + 0x178);
      uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x20,8);
        plVar5 = plVar11;
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0x20,8);
        plVar5 = plVar11;
      }
    }
    uVar7 = *(ulong *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (uVar7 != 0) {
      uVar8 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x140) + uVar9 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x140) + uVar9 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x140) + uVar9 * 8 + 0x10) = 0;
          lVar10 = uVar9 * 8;
          uVar9 = uVar9 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x140) + lVar10 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar9);
      }
      if (uVar8 != 0) {
        lVar10 = uVar9 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x140) + lVar10) = 0;
          uVar8 = uVar8 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar8 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}


