/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a8478c; name: FUN_00a8478c
 */


void FUN_00a8478c(long param_1)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long alStack_80 [12];
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 2) {
    FUN_012977e0(param_1);
    lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
    if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
LAB_00a848e4:
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
      if (lVar11 == 0) {
        return;
      }
      if (*(short *)(lVar11 + 0x1a) == 0) {
        return;
      }
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x80);
      cVar5 = DAT_00000381;
      if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar11 + 0x1a);
        sVar13 = *(short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar13) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00a84a0c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a84a0c:
            bVar6 = false;
          }
          cVar5 = DAT_00000381;
          if (bVar6) {
            lVar11 = *(long *)(lVar11 + 0x10);
            if (lVar11 != 0) {
              cVar5 = *(char *)(lVar11 + 0x359);
              lVar12 = *(long *)(lVar11 + 8);
              psVar1 = (short *)(lVar12 + 0x1a);
              do {
                sVar13 = *psVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar13 == 1) {
                *(undefined8 *)(lVar12 + 0x10) = 0;
                (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))();
              }
              else if (sVar13 == 0) {
LAB_00a84a98:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar13 = sVar3;
        } while (sVar3 != 0);
      }
      if (cVar5 == '\0') {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar11 + 0x2a4);
      if (*(int *)(lVar11 + 0x2a8) == iVar2) {
        FUN_0129e8c0(*(undefined8 *)(lVar11 + 0x150));
        return;
      }
      lVar11 = FUN_01195854();
      if (((lVar11 != 0) && (uVar7 = iVar2 - 1, uVar7 < 6)) &&
         ((*(byte *)(lVar11 + 0x56e) >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
        local_a0 = &LAB_00a84f5c;
        local_98 = FUN_00a84f68;
        local_90 = &LAB_00a84f6c;
        local_88 = &LAB_00a84f78;
        alStack_80[0] = param_1;
        FUN_01dda320(*(undefined8 *)(param_1 + 0x30),9,&local_a0,0,0,1,0);
        pcVar8 = local_98;
        if (local_98 != (code *)0x0) {
          local_90 = (undefined1 *)0x0;
          local_88 = (undefined1 *)0x0;
          local_a0 = (undefined1 *)0x0;
          local_98 = (code *)0x0;
          (*pcVar8)(alStack_80);
        }
        uVar10 = 3;
        goto LAB_00a84800;
      }
      lVar11 = *(long *)(param_1 + 0x30);
      lVar12 = *(long *)(lVar11 + 0x1b8);
      if (lVar12 == 0) {
        return;
      }
      uVar10 = 0x17;
    }
    else {
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x90);
      cVar5 = DAT_00000381;
      if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar11 + 0x1a);
        sVar13 = *(short *)(lVar11 + 0x1a);
LAB_00a84874:
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00a84898;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a84898:
          bVar6 = false;
        }
        cVar5 = DAT_00000381;
        if (!bVar6) goto code_r0x00a848a0;
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          cVar5 = *(char *)(lVar11 + 0x359);
          lVar12 = *(long *)(lVar11 + 8);
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))();
          }
          else if (sVar13 == 0) goto LAB_00a84a98;
        }
      }
joined_r0x00a84a78:
      if (cVar5 == '\0') goto LAB_00a848e4;
      FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
      lVar11 = *(long *)(param_1 + 0x30);
      lVar12 = *(long *)(lVar11 + 0x1b8);
      if (lVar12 == 0) {
        return;
      }
      uVar10 = 2;
    }
    *(undefined4 *)(lVar11 + 0x170) = uVar10;
    *(undefined4 *)(lVar12 + 0x30) = uVar10;
  }
  else {
    if (iVar2 == 1) {
      uVar9 = FUN_00a69eec(*(undefined8 *)(param_1 + 0x30));
      if ((uVar9 & 1) == 0) {
        return;
      }
      FUN_0129e8c0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
      uVar10 = 2;
    }
    else {
      if (iVar2 != 0) {
        return;
      }
      if (*(char *)(*(long *)(param_1 + 0x30) + 0x2ac) == '\0') {
        return;
      }
      FUN_01dcddfc(*(long *)(param_1 + 0x30),10,0,0,0,0);
      uVar10 = 1;
    }
LAB_00a84800:
    *(undefined4 *)(param_1 + 0x40) = uVar10;
  }
  return;
code_r0x00a848a0:
  sVar13 = sVar3;
  if (sVar3 == 0) goto joined_r0x00a84a78;
  goto LAB_00a84874;
}


