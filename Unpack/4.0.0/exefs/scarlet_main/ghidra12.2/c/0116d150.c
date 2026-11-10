/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116d150; name: FUN_0116d150
 */


void FUN_0116d150(long *param_1,long param_2,undefined8 *param_3)

{
  byte *pbVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  ulong uVar17;
  undefined1 *local_40;
  byte *pbStack_38;
  ulong local_30;
  long *local_28;
  
  pcVar10 = (char *)param_3[1];
  if (*pcVar10 == '\0') {
    *param_1 = param_2;
    if (param_2 != 0) {
      lVar14 = *(long *)(param_2 + 0x30);
      if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar8;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  else {
    plVar9 = *(long **)(param_2 + 0x70);
    if (plVar9 != *(long **)(param_2 + 0x78)) {
      uVar11 = param_3[2];
      do {
        lVar14 = *(long *)(*plVar9 + 0x40);
        if (lVar14 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(ulong *)(lVar14 + 0x40);
        }
        if ((uVar13 == uVar11) || ((uVar13 < uVar11 && (pcVar10[uVar13] == '/')))) {
          if (uVar13 == 0) {
LAB_0116d204:
            if (uVar13 < uVar11) {
              uVar13 = uVar13 + 1;
            }
            local_40 = &DAT_cbf29ce484222645;
            uVar17 = uVar11;
            if (uVar13 <= uVar11) {
              uVar17 = uVar13;
            }
            pbStack_38 = (byte *)(pcVar10 + uVar17);
            local_30 = uVar11 - uVar17;
            param_3[1] = pbStack_38;
            param_3[2] = local_30;
            if (local_30 != 0) {
              pbVar12 = pbStack_38;
              if (uVar11 != uVar17 + 1) {
                lVar14 = -(local_30 & 0xfffffffffffffffe);
                do {
                  bVar5 = *pbVar12;
                  pbVar1 = pbVar12 + 1;
                  pbVar12 = pbVar12 + 2;
                  local_40 = (undefined1 *)
                             ((((ulong)local_40 ^ (ulong)bVar5) * 0x100000001b3 ^ (ulong)*pbVar1) *
                             0x100000001b3);
                  lVar14 = lVar14 + 2;
                } while (lVar14 != 0);
              }
              if ((local_30 & 1) != 0) {
                local_40 = (undefined1 *)(((ulong)local_40 ^ (ulong)*pbVar12) * 0x100000001b3);
              }
            }
            *param_3 = local_40;
            lVar14 = *plVar9;
            local_28 = (long *)param_3[3];
            if (local_28 != (long *)0x0) {
              (**(code **)(*local_28 + 0x18))();
            }
            FUN_0116d150(param_1,lVar14,&local_40);
            if (local_28 == (long *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0116d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*local_28 + 0x20))();
            return;
          }
          puVar3 = (undefined8 *)PTR_PTR_047d4508;
          if (lVar14 != 0) {
            puVar3 = (undefined8 *)(lVar14 + 0x38);
          }
          pcVar15 = (char *)*puVar3;
          pcVar16 = pcVar10;
          uVar17 = uVar13;
          while (*pcVar16 == *pcVar15) {
            uVar17 = uVar17 - 1;
            pcVar15 = pcVar15 + 1;
            pcVar16 = pcVar16 + 1;
            if (uVar17 == 0) goto LAB_0116d204;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != *(long **)(param_2 + 0x78));
    }
    *param_1 = 0;
  }
  return;
}


