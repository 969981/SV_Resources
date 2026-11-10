/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e00bac; name: FUN_01e00bac
 */


void FUN_01e00bac(long param_1,long *param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar11 = *(ulong *)(param_1 + 0x40);
  lVar9 = *(long *)(param_1 + 0x48);
  lVar18 = *(long *)(param_1 + 8);
  plVar17 = (long *)(lVar18 + ((uVar11 + lVar9) / 0x55) * 8);
  if (*(long *)(param_1 + 0x10) == lVar18) {
    lVar15 = 0;
  }
  else {
    lVar15 = *plVar17 + ((uVar11 + lVar9) % 0x55) * 0x30;
  }
  if (lVar15 != param_3) {
    lVar13 = param_3 - *param_2 >> 4;
    lVar16 = ((long)plVar17 - (long)param_2 >> 3) * 0x55 +
             (lVar15 - *plVar17 >> 4) * -0x5555555555555555 + lVar13 * 0x5555555555555555;
    if (0 < lVar16) {
      plVar17 = (long *)(lVar18 + (uVar11 / 0x55) * 8);
      if (*(long *)(param_1 + 0x10) == lVar18) {
        lVar18 = 0;
      }
      else {
        lVar18 = *plVar17 + (uVar11 % 0x55) * 0x30;
      }
      if (param_3 != lVar18) {
        lVar10 = lVar18 - *plVar17 >> 4;
        lVar13 = ((long)param_2 - (long)plVar17 >> 3) * 0x55 + lVar13 * -0x5555555555555555 +
                 lVar10 * 0x5555555555555555;
        if (lVar13 != 0) {
          uVar11 = lVar13 + lVar10 * -0x5555555555555555;
          if ((long)uVar11 < 1) {
            lVar18 = 0x54 - uVar11;
            lVar13 = SUB168(SEXT816(lVar18) * SEXT816(-0x6060606060606061),8);
            plVar17 = plVar17 + ((lVar13 >> 5) - (lVar13 >> 0x3f));
            lVar18 = *plVar17 + ((lVar18 / 0x55) * 0x55 - lVar18) * 0x30 + 0xfc0;
          }
          else {
            plVar17 = plVar17 + uVar11 / 0x55;
            lVar18 = *plVar17 + (uVar11 % 0x55) * 0x30;
          }
        }
      }
      if (lVar18 != lVar15) {
        pbVar12 = PTR_DAT_047d3908;
        do {
          puVar14 = *(undefined8 **)(lVar18 + 8);
          if (puVar14 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar14 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)puVar14 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 != -1) {
                if (((*pbVar12 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar9 = *(long *)puVar6;
                *(long *)puVar7 = lVar9;
                local_68 = *puVar14;
                FUN_00c44438(lVar9 + 0x8040,&local_68);
                pbVar12 = PTR_DAT_047d3908;
              }
            }
            else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar18 = lVar18 + 0x30;
          if (lVar18 - *plVar17 == 0xff0) {
            plVar17 = plVar17 + 1;
            lVar18 = *plVar17;
          }
        } while (lVar18 != lVar15);
        lVar9 = *(long *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = lVar9 - lVar16;
      do {
        uVar11 = FUN_01962688(param_1);
      } while ((uVar11 & 1) != 0);
    }
  }
  return;
}


