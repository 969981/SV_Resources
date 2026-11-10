/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3ba6c; name: FUN_00a3ba6c
 */


ulong FUN_00a3ba6c(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar7 = &DAT_04835cd4;
  if (DAT_04835cd4 == 0) {
    lVar10 = 0;
  }
  else {
    puVar7 = &DAT_04835d84;
    if (DAT_04835d84 == 0) {
      lVar10 = 1;
    }
    else {
      puVar7 = &DAT_04835e34;
      if (DAT_04835e34 == 0) {
        lVar10 = 2;
      }
      else {
        puVar7 = &DAT_04835ee4;
        if (DAT_04835ee4 == 0) {
          lVar10 = 3;
        }
        else {
          puVar7 = &DAT_04835f94;
          if (DAT_04835f94 == 0) {
            lVar10 = 4;
          }
          else {
            puVar7 = &DAT_04836044;
            if (DAT_04836044 == 0) {
              lVar10 = 5;
            }
            else {
              puVar7 = &DAT_048360f4;
              if (DAT_048360f4 == 0) {
                lVar10 = 6;
              }
              else {
                puVar7 = &DAT_048361a4;
                if (DAT_048361a4 == 0) {
                  lVar10 = 7;
                }
                else {
                  puVar7 = &DAT_04836254;
                  if (DAT_04836254 == 0) {
                    lVar10 = 8;
                  }
                  else {
                    puVar7 = &DAT_04836304;
                    if (DAT_04836304 != 0) {
                      return 0xffffffff;
                    }
                    lVar10 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *puVar7 = 2;
  plVar6 = (long *)(&DAT_04835ce0)[lVar10 * 0x16];
  (&DAT_04835cd0)[lVar10 * 0x58] = DAT_04836460;
  DAT_04836460 = DAT_04836460 + 1;
  (&DAT_04835ce8)[lVar10 * 0x2c] = param_2;
  (&DAT_04835ce0)[lVar10 * 0x16] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pcVar8 = (code *)(&DAT_04835d08)[lVar10 * 0x16];
  if (pcVar8 != (code *)0x0) {
    (&DAT_04835d10)[lVar10 * 0x16] = 0;
    (&DAT_04835d18)[lVar10 * 0x16] = 0;
    (&DAT_04835d00)[lVar10 * 0x16] = 0;
    (&DAT_04835d08)[lVar10 * 0x16] = 0;
    (*pcVar8)(&DAT_04835d20 + lVar10 * 0xb0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,&DAT_04835d20 + lVar10 * 0xb0);
    uVar9 = param_3[3];
    (&DAT_04835d08)[lVar10 * 0x16] = param_3[1];
    (&DAT_04835d18)[lVar10 * 0x16] = uVar9;
    uVar9 = *param_3;
    (&DAT_04835d10)[lVar10 * 0x16] = param_3[2];
    (&DAT_04835d00)[lVar10 * 0x16] = uVar9;
  }
  (&DAT_04835cf0)[lVar10 * 0x16] = *(undefined8 *)(param_1 + 8);
  (&DAT_04835cd8)[lVar10 * 0x2c] = *(undefined4 *)(param_1 + 0x18);
  (&DAT_04835cdc)[lVar10 * 0x2c] = *(undefined4 *)(param_1 + 0x1c);
  return (ulong)(ushort)(&DAT_04835cd0)[lVar10 * 0x58];
}


