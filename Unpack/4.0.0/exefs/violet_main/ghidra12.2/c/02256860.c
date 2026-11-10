/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02256860; name: FUN_02256860
 */


undefined1  [16] FUN_02256860(long *param_1,undefined8 param_2)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  
  lVar10 = param_1[1];
  uVar15 = 0;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_022568d0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022568d0:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          lVar12 = *param_1;
          plVar7 = (long *)FUN_00c81fa0(0,0,lVar12);
          iVar6 = (**(code **)(*plVar7 + 0x20))();
          lVar8 = FUN_00fa5b78(lVar12,&DAT_03c3608e);
          if (lVar8 == 0) {
            fVar17 = (float)iVar6;
          }
          else {
            fVar17 = *(float *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
          }
          uVar9 = FUN_00c81fa0(lVar12);
          iVar6 = FUN_01446910(fVar17,param_2,uVar9,0);
          uVar13 = *(uint *)(lVar12 + 0x54);
          fVar14 = (float)iVar6;
          bVar2 = *(byte *)(lVar12 + 0x5b) & 3;
          bVar5 = (*(byte *)(lVar12 + 0x116) & 3) != bVar2;
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
          *(ushort *)(lVar12 + 0x114) =
               *(ushort *)(lVar12 + 0x114) & 0xfffb |
               (*(ushort *)(lVar12 + 0x114) >> 2 & 1 | (ushort)bVar5) << 2;
          *(float *)(lVar12 + 0x50) = fVar17 + fVar14;
          if (bVar5) {
            *(byte *)(lVar12 + 0x116) = *(byte *)(lVar12 + 0x116) & 0xfc | bVar2;
          }
          lVar8 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
            uVar15 = (ulong)(uint)fVar14;
          }
          else {
            uVar15 = (ulong)(uint)fVar14;
            if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.",uVar15,(ulong)uVar13);
            }
          }
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar15;
  return auVar16;
}


