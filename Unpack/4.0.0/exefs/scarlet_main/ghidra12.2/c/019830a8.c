/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019830a8; name: FUN_019830a8
 */


ulong FUN_019830a8(undefined4 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  long *plVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long local_28;
  
  puVar10 = &DAT_04835cd4;
  if (DAT_04835cd4 == 0) {
    lVar13 = 0;
  }
  else {
    puVar10 = &DAT_04835d84;
    if (DAT_04835d84 == 0) {
      lVar13 = 1;
    }
    else {
      puVar10 = &DAT_04835e34;
      if (DAT_04835e34 == 0) {
        lVar13 = 2;
      }
      else {
        puVar10 = &DAT_04835ee4;
        if (DAT_04835ee4 == 0) {
          lVar13 = 3;
        }
        else {
          puVar10 = &DAT_04835f94;
          if (DAT_04835f94 == 0) {
            lVar13 = 4;
          }
          else {
            puVar10 = &DAT_04836044;
            if (DAT_04836044 == 0) {
              lVar13 = 5;
            }
            else {
              puVar10 = &DAT_048360f4;
              if (DAT_048360f4 == 0) {
                lVar13 = 6;
              }
              else {
                puVar10 = &DAT_048361a4;
                if (DAT_048361a4 == 0) {
                  lVar13 = 7;
                }
                else {
                  puVar10 = &DAT_04836254;
                  if (DAT_04836254 == 0) {
                    lVar13 = 8;
                  }
                  else {
                    puVar10 = &DAT_04836304;
                    if (DAT_04836304 != 0) {
                      return 0xffffffff;
                    }
                    lVar13 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  sVar8 = DAT_04836460 + 1;
  (&DAT_04835cd0)[lVar13 * 0x58] = DAT_04836460;
  DAT_04836460 = sVar8;
  *puVar10 = 1;
  uVar6 = DAT_04835be8;
  (&DAT_04835ce8)[lVar13 * 0x2c] = param_1;
  uVar7 = DAT_04835bec;
  (&DAT_04835cd8)[lVar13 * 0x2c] = uVar6;
  (&DAT_04835cdc)[lVar13 * 0x2c] = uVar7;
  FUN_019832f8(&local_28);
  plVar14 = &DAT_04835ce0 + lVar13 * 0x16;
  plVar9 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *plVar14 = local_28;
  (&DAT_04835cf0)[lVar13 * 0x16] = 0;
  pcVar11 = (code *)(&DAT_04835d08)[lVar13 * 0x16];
  if (pcVar11 != (code *)0x0) {
    (&DAT_04835d10)[lVar13 * 0x16] = 0;
    (&DAT_04835d18)[lVar13 * 0x16] = 0;
    (&DAT_04835d00)[lVar13 * 0x16] = 0;
    (&DAT_04835d08)[lVar13 * 0x16] = 0;
    (*pcVar11)(&DAT_04835d20 + lVar13 * 0xb0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,&DAT_04835d20 + lVar13 * 0xb0);
    uVar12 = param_2[3];
    (&DAT_04835d08)[lVar13 * 0x16] = param_2[1];
    (&DAT_04835d18)[lVar13 * 0x16] = uVar12;
    uVar12 = *param_2;
    (&DAT_04835d10)[lVar13 * 0x16] = param_2[2];
    (&DAT_04835d00)[lVar13 * 0x16] = uVar12;
  }
  return (ulong)(ushort)(&DAT_04835cd0)[lVar13 * 0x58];
}


