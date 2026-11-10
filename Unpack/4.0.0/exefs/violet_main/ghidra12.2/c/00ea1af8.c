/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea1af8; name: FUN_00ea1af8
 */


undefined1  [16] FUN_00ea1af8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long *local_48;
  
  auVar12 = FUN_00ddf004();
  if (((auVar12._0_8_ & 0xff00000000) != 0) && (auVar12._8_4_ == 0)) {
    lVar9 = *(long *)(param_1 + 0x1f8);
    uVar5 = FUN_00ea28ec(*(undefined8 *)(lVar9 + 0x30));
    *(undefined8 *)(lVar9 + 0x58) = uVar5;
    lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_00ea2920(lVar6,&DAT_00003010 + *(long *)(*(long *)(lVar9 + 0x50) + 0x30),0,0,0);
    if (0 < *(int *)(lVar6 + 0x1c)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        lVar8 = *(long *)(*(long *)(lVar6 + 0x20) + (&DAT_045d2f68)[*(byte *)(lVar6 + 0x14)] +
                         lVar10);
        iVar4 = FUN_00ea1db8(*(undefined8 *)(lVar8 + 0x68),
                             &DAT_00003010 + *(long *)(*(long *)(lVar9 + 0x50) + 0x30),lVar8);
        if (iVar4 != 0) break;
        uVar7 = FUN_00ea1c84(lVar8,&DAT_00003010 + *(long *)(*(long *)(lVar9 + 0x50) + 0x30));
        if (uVar7 <= *(ulong *)(lVar9 + 0x60)) {
          uVar7 = *(ulong *)(lVar9 + 0x60);
        }
        *(ulong *)(lVar9 + 0x60) = uVar7;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x40;
      } while (lVar11 < *(int *)(lVar6 + 0x1c));
    }
    (*DAT_04859f60)(&local_48,&DAT_04859f80);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
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
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  auVar12._8_8_ = auVar12._8_8_ & 0xffffffff;
  return auVar12;
}


