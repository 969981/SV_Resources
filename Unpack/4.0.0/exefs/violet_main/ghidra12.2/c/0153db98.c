/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153db98; name: FUN_0153db98
 */


void FUN_0153db98(long *param_1,ulong param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *local_58;
  long local_38;
  
  if ((param_3 == 0) && ((param_2 >> 0x20 & 0xff) != 0)) {
    lVar10 = *param_1;
    puVar9 = (undefined8 *)(lVar10 + 0x30);
    FUN_0153df94(puVar9,*puVar9);
    if ((*(long *)(lVar10 + 0x2e8) != 0) &&
       (((*(byte *)(*(long *)(lVar10 + 0x2e8) + 0x1e8) & 1) != 0 &&
        (lVar5 = (**(code **)(**(long **)(lVar10 + 0x2e8) + 0x70))(), lVar5 != 0)))) {
      piVar7 = (int *)0x0;
      if (*(long *)(lVar10 + 0x2e8) != 0) {
        if ((*(byte *)(*(long *)(lVar10 + 0x2e8) + 0x1e8) & 1) == 0) {
          piVar7 = (int *)0x0;
        }
        else {
          puVar6 = (uint *)(**(code **)(**(long **)(lVar10 + 0x2e8) + 0x70))();
          piVar7 = (int *)((long)puVar6 + (ulong)*puVar6);
        }
      }
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)((long)piVar7 + uVar8);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
      if (*puVar6 != 0) {
        uVar8 = 0;
        do {
          local_38 = (long)(puVar6 + uVar8 + 1) + (ulong)puVar6[uVar8 + 1];
          FUN_0153dd90(&local_58,*(undefined8 *)(lVar10 + 0x70),(undefined8 *)(lVar10 + 0x70),
                       &local_38);
          FUN_0153dd68(puVar9,&local_58);
          if (local_58 != (long *)0x0) {
            lVar5 = local_58[6];
            psVar1 = (short *)(lVar5 + 0x1a);
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
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*local_58 + 0x50))();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar6);
      }
      FUN_0153e5c8(lVar10 + 0x28,**(undefined8 **)(lVar10 + 0x30));
      FUN_0153e500(*(undefined8 *)(lVar10 + 0x28),lVar10 + 0x80);
    }
  }
  FUN_0153f9c8(param_1[1]);
  return;
}


