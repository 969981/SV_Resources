/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea0cf8; name: FUN_00ea0cf8
 */


void FUN_00ea0cf8(long param_1)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  uint param3;
  byte *pbVar12;
  undefined8 uVar13;
  long *local_130;
  long *local_128;
  undefined1 *local_120;
  ulong *puStack_118;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  ulong local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_68;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    local_f8 = 0x73dc8a729748f659;
    pcStack_f0 = "BipedIKWeight";
    local_e8 = 0xd;
    local_e0 = (long *)0x0;
    uVar13 = FUN_00d209f8(uVar11,&local_f8);
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    (**(code **)(**(long **)(param_1 + 0x70) + 0xb8))(uVar13);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xd8))(&local_68);
    if (local_68 != (long *)0x0) {
      local_f8 = 0xdae42a2ec75ff9d2;
      pcStack_f0 = "BipedIKOffsetWeight";
      local_e8 = 0x13;
      local_e0 = (long *)0x0;
      uVar13 = FUN_00d209f8(uVar11,&local_f8);
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      (**(code **)(*local_68 + 0x88))(uVar13);
    }
    iVar6 = (**(code **)(**(long **)(param_1 + 0x70) + 0x98))();
    if (iVar6 != 0) {
      param3 = 0;
      pbVar12 = (byte *)((ulong)&local_f8 | 1);
      do {
        (**(code **)(**(long **)(param_1 + 0x70) + 0xa0))
                  (&local_100,*(long **)(param_1 + 0x70),param3);
        if (local_100 != (long *)0x0) {
          snprintf((char *)&local_f8,0x80,"BipedIKControl%dWeight",param3);
          uVar8 = local_f8 & 0xff;
          local_120 = &DAT_cbf29ce484222645;
          if ((char)local_f8 != '\0') {
            local_120 = &DAT_cbf29ce484222645;
            pbVar10 = pbVar12;
            do {
              local_120 = (undefined1 *)(((ulong)local_120 ^ uVar8) * 0x100000001b3);
              bVar3 = *pbVar10;
              uVar8 = (ulong)bVar3;
              pbVar10 = pbVar10 + 1;
            } while (bVar3 != 0);
          }
          local_110 = 0x7f;
          local_108 = (long *)0x0;
          puStack_118 = &local_f8;
          uVar13 = FUN_00d209f8(uVar11,&local_120);
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          (**(code **)(*local_100 + 0xf8))(uVar13);
          (**(code **)(*local_100 + 0x80))(&local_128);
          if (local_128 != (long *)0x0) {
            snprintf((char *)&local_f8,0x80,"BipedIKControl%dFootWeight",param3);
            uVar8 = local_f8 & 0xff;
            local_120 = &DAT_cbf29ce484222645;
            if ((char)local_f8 != '\0') {
              local_120 = &DAT_cbf29ce484222645;
              pbVar10 = pbVar12;
              do {
                local_120 = (undefined1 *)(((ulong)local_120 ^ uVar8) * 0x100000001b3);
                bVar3 = *pbVar10;
                uVar8 = (ulong)bVar3;
                pbVar10 = pbVar10 + 1;
              } while (bVar3 != 0);
            }
            local_110 = 0x7f;
            local_108 = (long *)0x0;
            puStack_118 = &local_f8;
            uVar13 = FUN_00d209f8(uVar11,&local_120);
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            (**(code **)(*local_128 + 0x88))(uVar13);
          }
          (**(code **)(*local_100 + 0x90))(&local_130);
          if (local_130 != (long *)0x0) {
            snprintf((char *)&local_f8,0x80,"BipedIKControl%dToeWeight",param3);
            uVar8 = local_f8 & 0xff;
            local_120 = &DAT_cbf29ce484222645;
            if ((char)local_f8 != '\0') {
              local_120 = &DAT_cbf29ce484222645;
              pbVar10 = pbVar12;
              do {
                local_120 = (undefined1 *)(((ulong)local_120 ^ uVar8) * 0x100000001b3);
                bVar3 = *pbVar10;
                uVar8 = (ulong)bVar3;
                pbVar10 = pbVar10 + 1;
              } while (bVar3 != 0);
            }
            local_110 = 0x7f;
            local_108 = (long *)0x0;
            puStack_118 = &local_f8;
            uVar13 = FUN_00d209f8(uVar11,&local_120);
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            (**(code **)(*local_130 + 0x88))(uVar13);
            if (local_130 != (long *)0x0) {
              lVar9 = local_130[6];
              psVar1 = (short *)(lVar9 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar2 == 1) {
                *(undefined8 *)(lVar9 + 0x10) = 0;
                (**(code **)(*local_130 + 0x50))();
              }
              else if (sVar2 == 0) goto LAB_00ea1174;
            }
          }
          if (local_128 != (long *)0x0) {
            lVar9 = local_128[6];
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_128 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00ea1174;
          }
          if (local_100 != (long *)0x0) {
            lVar9 = local_100[6];
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*local_100 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00ea1174;
          }
        }
        param3 = param3 + 1;
        uVar7 = (**(code **)(**(long **)(param_1 + 0x70) + 0x98))();
      } while (param3 < uVar7);
    }
    if (local_68 != (long *)0x0) {
      lVar9 = local_68[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_00ea1174:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


