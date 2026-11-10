/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181faf4; name: FUN_0181faf4
 */


ulong FUN_0181faf4(undefined4 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  undefined4 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  long lVar16;
  
  uVar6 = 0xffffffff;
  switch(param_1) {
  case 0:
    piVar8 = (int *)(DAT_04835c00 + 0x58);
    break;
  case 1:
    piVar8 = (int *)(DAT_04835c00 + 0x40);
    break;
  case 2:
    piVar8 = (int *)(DAT_04835c00 + 0x88);
    break;
  case 3:
    piVar8 = (int *)(DAT_04835c00 + 0x70);
    break;
  default:
    goto switchD_0181fb40_caseD_4;
  case 5:
    piVar8 = (int *)(DAT_04835c00 + 0xa0);
  }
  if (((*piVar8 == 0) || (piVar8[1] == 0)) || (piVar8[2] == 0)) {
    return 0xffffffff;
  }
  puVar9 = &DAT_04835cd4;
  if (DAT_04835cd4 == 0) {
    lVar16 = 0;
  }
  else {
    puVar9 = &DAT_04835d84;
    if (DAT_04835d84 == 0) {
      lVar16 = 1;
    }
    else {
      puVar9 = &DAT_04835e34;
      if (DAT_04835e34 == 0) {
        lVar16 = 2;
      }
      else {
        puVar9 = &DAT_04835ee4;
        if (DAT_04835ee4 == 0) {
          lVar16 = 3;
        }
        else {
          puVar9 = &DAT_04835f94;
          if (DAT_04835f94 == 0) {
            lVar16 = 4;
          }
          else {
            puVar9 = &DAT_04836044;
            if (DAT_04836044 == 0) {
              lVar16 = 5;
            }
            else {
              puVar9 = &DAT_048360f4;
              if (DAT_048360f4 == 0) {
                lVar16 = 6;
              }
              else {
                puVar9 = &DAT_048361a4;
                if (DAT_048361a4 == 0) {
                  lVar16 = 7;
                }
                else {
                  puVar9 = &DAT_04836254;
                  if (DAT_04836254 == 0) {
                    lVar16 = 8;
                  }
                  else {
                    puVar9 = &DAT_04836304;
                    if (DAT_04836304 != 0) {
                      return 0xffffffff;
                    }
                    lVar16 = 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *puVar9 = 2;
  plVar7 = (long *)(&DAT_04835ce0)[lVar16 * 0x16];
  (&DAT_04835ce8)[lVar16 * 0x2c] = param_1;
  (&DAT_04835ce0)[lVar16 * 0x16] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pcVar10 = (code *)(&DAT_04835d08)[lVar16 * 0x16];
  if (pcVar10 != (code *)0x0) {
    (&DAT_04835d10)[lVar16 * 0x16] = 0;
    (&DAT_04835d18)[lVar16 * 0x16] = 0;
    (&DAT_04835d00)[lVar16 * 0x16] = 0;
    (&DAT_04835d08)[lVar16 * 0x16] = 0;
    (*pcVar10)(&DAT_04835d20 + lVar16 * 0xb0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,&DAT_04835d20 + lVar16 * 0xb0);
    uVar11 = param_2[3];
    (&DAT_04835d08)[lVar16 * 0x16] = param_2[1];
    (&DAT_04835d18)[lVar16 * 0x16] = uVar11;
    uVar11 = *param_2;
    (&DAT_04835d10)[lVar16 * 0x16] = param_2[2];
    (&DAT_04835d00)[lVar16 * 0x16] = uVar11;
  }
  uVar13 = 0;
  uVar11 = 0;
  uVar14 = 0;
  switch(param_1) {
  case 0:
    puVar12 = (undefined8 *)(DAT_04835c00 + 0x68);
    puVar9 = (undefined4 *)(DAT_04835c00 + 0x58);
    puVar15 = (undefined4 *)(DAT_04835c00 + 0x5c);
    break;
  case 1:
    puVar12 = (undefined8 *)(DAT_04835c00 + 0x50);
    puVar9 = (undefined4 *)(DAT_04835c00 + 0x40);
    puVar15 = (undefined4 *)(DAT_04835c00 + 0x44);
    break;
  case 2:
    puVar12 = (undefined8 *)(DAT_04835c00 + 0x98);
    puVar9 = (undefined4 *)(DAT_04835c00 + 0x88);
    puVar15 = (undefined4 *)(DAT_04835c00 + 0x8c);
    break;
  case 3:
    puVar12 = (undefined8 *)(DAT_04835c00 + 0x80);
    puVar9 = (undefined4 *)(DAT_04835c00 + 0x70);
    puVar15 = (undefined4 *)(DAT_04835c00 + 0x74);
    break;
  case 4:
    goto switchD_0181fd48_caseD_4;
  case 5:
    puVar12 = (undefined8 *)(DAT_04835c00 + 0xb0);
    puVar9 = (undefined4 *)(DAT_04835c00 + 0xa0);
    puVar15 = (undefined4 *)(DAT_04835c00 + 0xa4);
    break;
  default:
    uVar14 = 0;
    goto switchD_0181fd48_caseD_4;
  }
  uVar13 = *puVar9;
  uVar11 = *puVar12;
  uVar14 = *puVar15;
switchD_0181fd48_caseD_4:
  uVar6 = (ulong)(ushort)(&DAT_04835cd0)[lVar16 * 0x58];
  (&DAT_04835cd8)[lVar16 * 0x2c] = uVar13;
  (&DAT_04835cdc)[lVar16 * 0x2c] = uVar14;
  (&DAT_04835cf0)[lVar16 * 0x16] = uVar11;
switchD_0181fb40_caseD_4:
  return uVar6;
}


