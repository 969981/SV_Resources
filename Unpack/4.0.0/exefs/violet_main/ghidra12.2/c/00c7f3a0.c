/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7f3a0; name: FUN_00c7f3a0
 */


long FUN_00c7f3a0(long param_1,ulong *param_2)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong local_60;
  char *local_58;
  ulong local_50;
  long *local_48;
  
  uVar15 = *param_2;
  pcVar2 = (char *)param_2[1];
  local_50 = param_2[2];
  local_48 = (long *)param_2[3];
  local_60 = uVar15;
  local_58 = pcVar2;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  if (*pcVar2 != '\0') {
    do {
      uVar10 = *(ulong *)(param_1 + 0x118);
      if (uVar10 != 0) {
        uVar13 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar14 = uVar10 - 1 & uVar15;
        }
        else {
          uVar14 = uVar15;
          if (uVar10 <= uVar15) {
            uVar14 = 0;
            if (uVar10 != 0) {
              uVar14 = uVar15 / uVar10;
            }
            uVar14 = uVar15 - uVar14 * uVar10;
          }
        }
        plVar16 = *(long **)(*(long *)(param_1 + 0x110) + uVar14 * 8);
        if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if (plVar16[1] == uVar15) {
                if (plVar16[2] == uVar15) goto LAB_00c7f57c;
              }
              else if ((plVar16[1] & uVar10 - 1) != uVar14) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar16[1];
              if (uVar13 == uVar15) {
                if (plVar16[2] == uVar15) goto LAB_00c7f57c;
              }
              else {
                if (uVar10 <= uVar13) {
                  uVar8 = 0;
                  if (uVar10 != 0) {
                    uVar8 = uVar13 / uVar10;
                  }
                  uVar13 = uVar13 - uVar8 * uVar10;
                }
                if (uVar13 != uVar14) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
      }
      puVar9 = (undefined8 *)
               FUN_00c7f744(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),&local_60);
      plVar16 = (long *)*puVar9;
      lVar11 = 0;
      if (plVar16 == (long *)0x0) goto LAB_00c7f68c;
      plVar1 = plVar16 + 5;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar11 = plVar16[0x29];
      if (lVar11 == 0) {
        bVar5 = false;
      }
      else {
        local_60 = *(ulong *)(lVar11 + 0x38);
        local_58 = *(char **)(lVar11 + 0x40);
        local_50 = *(ulong *)(lVar11 + 0x48);
        plVar3 = *(long **)(lVar11 + 0x50);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
        if (local_48 != (long *)0x0) {
          lVar11 = *local_48;
          local_48 = plVar3;
          (**(code **)(lVar11 + 0x20))();
          plVar3 = local_48;
        }
        local_48 = plVar3;
        bVar5 = true;
      }
      do {
        lVar11 = *plVar1;
        iVar7 = (int)lVar11 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      if ((!bVar5) || (*local_58 == '\0')) break;
      uVar15 = local_60;
    } while( true );
  }
  goto LAB_00c7f618;
LAB_00c7f57c:
  uVar15 = *(ulong *)(param_1 + 0x78);
  if (uVar15 != 0) {
    uVar13 = plVar16[6];
    uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar14 = uVar15 - 1 & uVar13;
    }
    else if (uVar13 < uVar15) {
      uVar14 = uVar13;
    }
    else {
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = uVar13 / uVar15;
      }
      uVar14 = uVar13 - uVar14 * uVar15;
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x70) + uVar14 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (1 < uVar10) goto LAB_00c7f658;
      goto LAB_00c7f5e8;
    }
  }
  goto LAB_00c7f618;
LAB_00c7f658:
  do {
    uVar10 = plVar16[1];
    if (uVar10 == uVar13) {
      if (plVar16[2] == uVar13) goto LAB_00c7f670;
    }
    else {
      if (uVar15 <= uVar10) {
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = uVar10 / uVar15;
        }
        uVar10 = uVar10 - uVar8 * uVar15;
      }
      if (uVar10 != uVar14) goto LAB_00c7f618;
    }
    plVar16 = (long *)*plVar16;
    lVar11 = 0;
  } while (plVar16 != (long *)0x0);
  goto LAB_00c7f68c;
LAB_00c7f670:
  lVar12 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)plVar16[6] * 0x20);
  lVar11 = 0;
  if (*(char *)(lVar12 + 0xd0) != '\0') {
    lVar11 = lVar12;
  }
  goto LAB_00c7f68c;
LAB_00c7f5e8:
  do {
    if (plVar16[1] == uVar13) {
      if (plVar16[2] == uVar13) goto LAB_00c7f670;
    }
    else if ((plVar16[1] & uVar15 - 1) != uVar14) break;
    plVar16 = (long *)*plVar16;
  } while (plVar16 != (long *)0x0);
LAB_00c7f618:
  lVar11 = 0;
LAB_00c7f68c:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return lVar11;
}


