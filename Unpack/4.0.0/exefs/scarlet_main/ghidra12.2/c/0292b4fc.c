/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292b4fc; name: FUN_0292b4fc
 */


void FUN_0292b4fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte *pbVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long *local_58;
  long *local_38;
  
  uVar10 = 0;
  do {
    *(undefined1 *)(param_2 + uVar10 + 0x230) = 0;
    FUN_00f634c8(&local_38,param_1,uVar10 & 0xffffffff);
    plVar7 = local_38;
    if (local_38 != (long *)0x0) {
      FUN_00f63734(&local_58,local_38,param_3);
      if (local_58 != (long *)0x0) {
        if (((int)local_58[9] == 0x30) && (piVar8 = (int *)local_58[8], *piVar8 == 0x10)) {
          pbVar1 = (byte *)(param_2 + uVar10 + 0x230);
          if ((ulong)*pbVar1 < 7) {
            puVar3 = (undefined8 *)(param_2 + uVar10 * 0x70 + (ulong)*pbVar1 * 0x10);
            *puVar3 = *(undefined8 *)(piVar8 + 8);
            *(int *)(puVar3 + 1) = piVar8[10];
            *pbVar1 = *pbVar1 + 1;
          }
          FUN_0105bd98(plVar7,param_3);
          if (local_58 == (long *)0x0) goto LAB_0292b5ec;
        }
        lVar9 = local_58[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_58 + 0x50))();
        }
        else if (sVar4 == 0) goto LAB_0292b668;
      }
LAB_0292b5ec:
      if (local_38 != (long *)0x0) {
        lVar9 = local_38[6];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar4 == 0) {
LAB_0292b668:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 5) {
      return;
    }
  } while( true );
}


