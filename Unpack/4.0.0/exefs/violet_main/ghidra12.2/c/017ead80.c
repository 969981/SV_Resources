/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ead80; name: FUN_017ead80
 */


void FUN_017ead80(int param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  int local_24 [4];
  int local_14;
  
  local_24[0] = param_1;
  if (((DAT_048383f8 & 1) == 0) &&
     (local_14 = param_1, iVar7 = __cxa_guard_acquire(&DAT_048383f8), local_24[0] = local_14,
     iVar7 != 0)) {
    FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048383f8);
    local_24[0] = local_14;
  }
  DAT_04838400 = DAT_048383e8;
  uVar8 = *(ulong *)(DAT_048383e8 + 0x118);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar12 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    plVar1 = (long *)(DAT_048383e8 + 0x110);
    uVar9 = (ulong)local_24[0];
    if (uVar12 < 2) {
      uVar10 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      uVar10 = uVar9;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar9 / uVar8;
      }
      uVar10 = uVar9 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(*plVar1 + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar11[1] == uVar9) {
            if ((int)plVar11[2] == local_24[0]) goto LAB_017eaea4;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) {
            DAT_04838400 = DAT_048383e8;
            return;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar9) {
            if ((int)plVar11[2] == local_24[0]) {
LAB_017eaea4:
              lVar13 = plVar11[3];
              if (*(long *)(lVar13 + 0x18) != 0) {
                FUN_016a29fc();
                plVar11 = *(long **)(lVar13 + 0x18);
                *(undefined8 *)(lVar13 + 0x18) = 0;
                if (plVar11 != (long *)0x0) {
                  lVar13 = plVar11[6];
                  psVar2 = (short *)(lVar13 + 0x1a);
                  do {
                    sVar3 = *psVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar5) {
                      *psVar2 = sVar3 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar3 == 1) {
                    *(undefined8 *)(lVar13 + 0x10) = 0;
                    (**(code **)(*plVar11 + 0x50))();
                  }
                  else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x60,"Reference counter underflows.");
                  }
                }
              }
              FUN_017eafac(plVar1,local_24);
              return;
            }
          }
          else {
            if (uVar8 <= uVar12) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar6 * uVar8;
            }
            if (uVar12 != uVar10) {
              DAT_04838400 = DAT_048383e8;
              return;
            }
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  return;
}


