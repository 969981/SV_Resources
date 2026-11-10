/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01531a30; name: FUN_01531a30
 */


void FUN_01531a30(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long lVar10;
  
  lVar7 = param_2[1];
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01531a90;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01531a90:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        plVar6 = (long *)(*(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x82) * 0x90);
        lVar10 = *param_2;
        *plVar6 = lVar10;
        FUN_00c81640(plVar6 + 1,param_2 + 1);
        lVar8 = *(long *)(param_1 + 0x58);
        if ((lVar8 != 0) &&
           (bVar5 = *(long *)(lVar10 + 0x108) != lVar8,
           *(ushort *)(lVar10 + 0x114) =
                *(ushort *)(lVar10 + 0x114) & 0xfffb |
                (*(ushort *)(lVar10 + 0x114) >> 2 & 1 | (ushort)bVar5) << 2, bVar5)) {
          *(long *)(lVar10 + 0x108) = lVar8;
        }
        uVar4 = *(undefined8 *)(lVar10 + 0x30);
        lVar8 = *(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x82) * 0x90;
        *(ulong *)(lVar8 + 0x28) = (ulong)*(uint *)(lVar10 + 0x38);
        *(undefined8 *)(lVar8 + 0x20) = uVar4;
        lVar8 = *(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x82) * 0x90;
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar8 + 0x20);
        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar8 + 0x28);
        *(byte *)(*(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x82) * 0x90 + 0x82) =
             *(byte *)(param_1 + 0x82);
        *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x82) * 0x90 + 0x80)
             = 0;
        cVar3 = *(char *)(param_1 + 0x82) + '\x01';
        *(char *)(param_1 + 0x82) = cVar3;
        if (*(char *)(param_1 + 0x80) == cVar3) {
          *(undefined1 *)(param_1 + 0xf5) = 1;
        }
        lVar8 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01531c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


