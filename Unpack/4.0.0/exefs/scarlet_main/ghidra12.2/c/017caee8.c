/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017caee8; name: FUN_017caee8
 */


long FUN_017caee8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *local_70;
  long local_68;
  
  if (param_1[0x66] == 0) {
    return 0;
  }
  lVar14 = param_1[0x76];
  lVar12 = param_1[0x77];
  if (lVar14 != lVar12) {
    lVar13 = 0;
    lVar15 = 0;
LAB_017caf40:
    uVar8 = param_1[0x15];
    if (uVar8 != 0) {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar7 = *(ulong *)(lVar14 + 8);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & uVar7;
      }
      else if (uVar7 < uVar8) {
        uVar10 = uVar7;
      }
      else {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar7 / uVar8;
        }
        uVar10 = uVar7 - uVar10 * uVar8;
      }
      plVar11 = *(long **)(param_1[0x14] + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar11[1] == uVar7) {
              if (plVar11[2] == uVar7) goto LAB_017cb034;
            }
            else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar11[1];
            if (uVar9 == uVar7) {
              if (plVar11[2] == uVar7) goto LAB_017cb034;
            }
            else {
              if (uVar8 <= uVar9) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar9 / uVar8;
                }
                uVar9 = uVar9 - uVar5 * uVar8;
              }
              if (uVar9 != uVar10) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    goto LAB_017cb03c;
  }
  lVar15 = 0;
  lVar13 = 0;
LAB_017cb128:
  FUN_017cb1a0(param_1 + 0x76,lVar14,lVar14 + lVar15 * 0x48);
  return lVar13;
LAB_017cb034:
  if (plVar11[3] == 0) {
LAB_017cb03c:
    (*(code *)param_1[0x66])(&local_70,param_1 + 0x6a,lVar14);
    if (local_70 != (long *)0x0) {
      lVar6 = (**(code **)(*(long *)*param_1 + 0x10))
                        ((long *)*param_1,*(long *)(lVar14 + 0x38) * 8 + 0x50,8);
      FUN_00d03f90(lVar6,&local_70,lVar14 + 0x30);
      local_68 = *(long *)(lVar6 + 0x20);
      plVar11 = (long *)FUN_00d0475c(param_1 + 0x14,&local_68);
      *plVar11 = lVar6;
      param_1[0x7d] = param_1[0x7d] + *(long *)(lVar14 + 0x30);
      local_68 = lVar6;
      FUN_00d040c4(param_1 + 6,&local_68);
      lVar13 = lVar13 + 1;
      if (local_70 != (long *)0x0) {
        lVar6 = local_70[6];
        psVar1 = (short *)(lVar6 + 0x1a);
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
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  lVar14 = lVar14 + 0x48;
  lVar15 = lVar15 + 1;
  if (lVar14 == lVar12) goto LAB_017cb120;
  goto LAB_017caf40;
LAB_017cb120:
  lVar14 = param_1[0x76];
  goto LAB_017cb128;
}


