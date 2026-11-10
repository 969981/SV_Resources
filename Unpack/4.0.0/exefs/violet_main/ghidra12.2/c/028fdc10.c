/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fdc10; name: FUN_028fdc10
 */


void FUN_028fdc10(long *param_1)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  short sVar14;
  long *local_88 [4];
  long *local_68;
  long local_58;
  
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar14 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_028fdc88;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_028fdc88:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        lVar11 = *(long *)(param_1[2] + 8);
        if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x1e8) & 1) == 0)) {
          piVar10 = (int *)0x0;
        }
        else {
          puVar6 = (uint *)(**(code **)(**(long **)(param_1[2] + 8) + 0x70))();
          piVar10 = (int *)((long)puVar6 + (ulong)*puVar6);
        }
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
           (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar12 == 0)) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = (uint *)((long)piVar10 + uVar12);
          puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        }
        FUN_028fe430(param_1[2] + 0x40,*puVar6);
        uVar2 = *puVar6;
        if (uVar2 != 0) {
          lVar11 = 0;
          do {
            uVar12 = (ulong)*(uint *)((long)puVar6 + lVar11 + 4);
            lVar8 = lVar11 + (uVar12 - (long)*(int *)((long)puVar6 + lVar11 + uVar12 + 4));
            if ((*(ushort *)((long)puVar6 + lVar8 + 4) < 0xb) ||
               (uVar13 = (ulong)*(ushort *)((long)puVar6 + lVar8 + 0xe), uVar13 == 0)) {
              local_58 = 0;
            }
            else {
              lVar8 = uVar12 + uVar13;
              lVar8 = lVar8 + (ulong)*(uint *)((long)puVar6 + lVar11 + lVar8 + 4);
              local_58 = (long)puVar6 + lVar11 + lVar8 + 4;
              if (*(int *)((long)puVar6 + lVar11 + lVar8 + 4) != 0) {
                uVar7 = FUN_028fe4e4(param_1[2] + 0x40);
                if (*(long *)(param_1[2] + 8) == 0) {
                  lVar8 = FUN_00da5204();
                }
                else {
                  lVar8 = *(long *)(param_1[2] + 8) + 0x40;
                }
                FUN_00e83e2c(local_88,lVar8,&local_58,&DAT_03c886bc);
                FUN_011ac0c0(uVar7,0,local_88,0,0);
                if (local_68 != (long *)0x0) {
                  (**(code **)(*local_68 + 0x20))();
                }
                if (local_88[0] != (long *)0x0) {
                  (**(code **)(*local_88[0] + 0x20))();
                }
              }
            }
            lVar11 = lVar11 + 4;
          } while ((ulong)uVar2 * 4 != lVar11);
        }
        *(undefined1 *)(param_1[2] + 0x78) = 1;
        lVar11 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
          return;
        }
        if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar14 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


