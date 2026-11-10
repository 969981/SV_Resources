/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9c814; name: FUN_01d9c814
 */


ulong FUN_01d9c814(uint param_1,undefined8 *param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((param_1 & 0xfffffffd) == 0) {
    if ((int)DAT_04835be8 < 1) {
      return 0xffffffff;
    }
    if (0x160 < DAT_04835bec) {
      return 0xffffffff;
    }
    if (0x160 < DAT_04835be8) {
      return 0xffffffff;
    }
LAB_01d9c89c:
    if ((int)DAT_04835bec < 1) {
      return 0xffffffff;
    }
  }
  else if ((param_1 & 0xfffffffd) == 1) {
    if ((int)DAT_04835be8 < 1) {
      return 0xffffffff;
    }
    if (0x360 < DAT_04835bec) {
      return 0xffffffff;
    }
    if (0x5a0 < DAT_04835be8) {
      return 0xffffffff;
    }
    goto LAB_01d9c89c;
  }
  if (param_1 == 5) {
    if ((int)DAT_04835be8 < 1) {
      return 0xffffffff;
    }
    if (0x440 < DAT_04835bec) {
      return 0xffffffff;
    }
    if (0x780 < DAT_04835be8) {
      return 0xffffffff;
    }
    if ((int)DAT_04835bec < 1) {
      return 0xffffffff;
    }
    piVar10 = (int *)(DAT_04835c00 + 0xa0);
  }
  else {
    switch(param_1) {
    case 0:
      piVar10 = (int *)(DAT_04835c00 + 0x58);
      break;
    case 1:
      piVar10 = (int *)(DAT_04835c00 + 0x40);
      break;
    case 2:
      piVar10 = (int *)(DAT_04835c00 + 0x88);
      break;
    case 3:
      piVar10 = (int *)(DAT_04835c00 + 0x70);
      break;
    default:
      goto LAB_01d9c9f4;
    }
  }
  if (((*piVar10 != 0) && (piVar10[1] != 0)) && (piVar10[2] != 0)) {
    puVar11 = &DAT_04835cd4;
    if (DAT_04835cd4 == 0) {
      lVar14 = 0;
    }
    else {
      puVar11 = &DAT_04835d84;
      if (DAT_04835d84 == 0) {
        lVar14 = 1;
      }
      else {
        puVar11 = &DAT_04835e34;
        if (DAT_04835e34 == 0) {
          lVar14 = 2;
        }
        else {
          puVar11 = &DAT_04835ee4;
          if (DAT_04835ee4 == 0) {
            lVar14 = 3;
          }
          else {
            puVar11 = &DAT_04835f94;
            if (DAT_04835f94 == 0) {
              lVar14 = 4;
            }
            else {
              puVar11 = &DAT_04836044;
              if (DAT_04836044 == 0) {
                lVar14 = 5;
              }
              else {
                puVar11 = &DAT_048360f4;
                if (DAT_048360f4 == 0) {
                  lVar14 = 6;
                }
                else {
                  puVar11 = &DAT_048361a4;
                  if (DAT_048361a4 == 0) {
                    lVar14 = 7;
                  }
                  else {
                    puVar11 = &DAT_04836254;
                    if (DAT_04836254 == 0) {
                      lVar14 = 8;
                    }
                    else {
                      puVar11 = &DAT_04836304;
                      if (DAT_04836304 != 0) {
                        return 0xffffffff;
                      }
                      lVar14 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *puVar11 = 2;
    plVar8 = (long *)(&DAT_04835ce0)[lVar14 * 0x16];
    (&DAT_04835ce8)[lVar14 * 0x2c] = param_1;
    (&DAT_04835ce0)[lVar14 * 0x16] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    pcVar12 = (code *)(&DAT_04835d08)[lVar14 * 0x16];
    if (pcVar12 != (code *)0x0) {
      (&DAT_04835d10)[lVar14 * 0x16] = 0;
      (&DAT_04835d18)[lVar14 * 0x16] = 0;
      (&DAT_04835d00)[lVar14 * 0x16] = 0;
      (&DAT_04835d08)[lVar14 * 0x16] = 0;
      (*pcVar12)(&DAT_04835d20 + lVar14 * 0xb0);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,&DAT_04835d20 + lVar14 * 0xb0);
      uVar13 = param_2[3];
      (&DAT_04835d08)[lVar14 * 0x16] = param_2[1];
      (&DAT_04835d18)[lVar14 * 0x16] = uVar13;
      uVar13 = *param_2;
      (&DAT_04835d10)[lVar14 * 0x16] = param_2[2];
      (&DAT_04835d00)[lVar14 * 0x16] = uVar13;
    }
    uVar7 = DAT_04835bec;
    if (param_1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x01d9cb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)((ulong)(&switchD_01d9cb24::switchdataD_03d2fcf8)[param_1] * 4 + 0x1d9cb28))
                        ();
      return uVar9;
    }
    uVar2 = (&DAT_04835cd0)[lVar14 * 0x58];
    (&DAT_04835cd8)[lVar14 * 0x2c] = DAT_04835be8;
    (&DAT_04835cdc)[lVar14 * 0x2c] = uVar7;
    (&DAT_04835cf0)[lVar14 * 0x16] = 0;
    return (ulong)uVar2;
  }
LAB_01d9c9f4:
  return 0xffffffff;
}


