/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7ae24; name: FUN_00c7ae24
 */


void FUN_00c7ae24(long param_1,int *param_2,undefined8 param_3,byte param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  short sVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong uStack_58;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x70) + 0x150);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar14 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar14) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00c7aecc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c7aecc:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          uVar2 = param_2[1];
          uVar11 = param_2[2];
          iVar3 = *param_2;
          if ((int)*(undefined8 *)
                    (*(long *)(lVar9 + 0x30) +
                    (*(long *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar11 * 8) + (long)iVar3 +
                    (long)(int)(uVar2 << (ulong)(uVar11 & 0x1f))) * 8) < 0) {
            uVar12 = iVar3 << 1;
            uVar13 = (long)(int)uVar11 + 1;
            local_60 = (ulong)uVar12 | (ulong)uVar2 << 0x21;
            uStack_58 = uVar13 & 0xffffffff;
            uVar11 = (uint)uVar13;
            bVar8 = param_4;
            if ((int)uVar11 < *(int *)(param_1 + 0x120)) {
              lVar10 = *(long *)(*(long *)(param_1 + 0xb0) +
                                ((long)(int)((uVar2 << 1) << (ulong)(uVar11 & 0x1f)) +
                                 (long)(int)uVar12 +
                                *(long *)(*(long *)(param_1 + 0xe8) + uVar13 * 8)) * 8);
              if (*(char *)(lVar10 + 0x69) == '\0') {
                bVar8 = *(char *)(lVar10 + 0x6a) != '\0';
                goto LAB_00c7b084;
              }
              if (uVar13 < *(ulong *)(lVar9 + 0x68)) {
                bVar8 = 1;
                goto LAB_00c7b090;
              }
            }
            else {
LAB_00c7b084:
              if (uVar13 < *(ulong *)(lVar9 + 0x68)) {
LAB_00c7b090:
                FUN_00c7ae24(param_1,&local_60,param_3,bVar8 & 1);
              }
              else if ((bVar8 & 1) == 0) {
                fVar16 = 1.0 / (float)(1 << (ulong)(uVar11 & 0x1f));
                uVar15 = *(undefined4 *)(*(long *)(param_1 + 0x70) + 0xf0);
                lVar10 = **(long **)(param_1 + 0x30);
                uVar11 = *(uint *)(param_1 + 0x68);
                FUN_00c41540(lVar10);
                puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (ulong)uVar11 * 0x10);
                puVar7[1] = CONCAT44(fVar16 * -(float)(int)(uVar2 << 1),fVar16 * (float)(int)uVar12)
                ;
                *puVar7 = CONCAT44(uVar15,fVar16);
                *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
              }
            }
            uVar2 = *param_2 << 1 | 1;
            iVar3 = param_2[1] << 1;
            uVar13 = (long)param_2[2] + 1;
            local_60 = (ulong)uVar2 | (ulong)(uint)param_2[1] << 0x21;
            uStack_58 = uVar13 & 0xffffffff;
            uVar11 = (uint)uVar13;
            bVar8 = param_4;
            if ((int)uVar11 < *(int *)(param_1 + 0x120)) {
              lVar10 = *(long *)(*(long *)(param_1 + 0xb0) +
                                ((long)(iVar3 << (ulong)(uVar11 & 0x1f)) + (long)(int)uVar2 +
                                *(long *)(*(long *)(param_1 + 0xe8) + uVar13 * 8)) * 8);
              if (*(char *)(lVar10 + 0x69) == '\0') {
                bVar8 = *(char *)(lVar10 + 0x6a) != '\0';
                goto LAB_00c7b12c;
              }
              if (uVar13 < *(ulong *)(lVar9 + 0x68)) goto LAB_00c7b138;
            }
            else {
LAB_00c7b12c:
              if (uVar13 < *(ulong *)(lVar9 + 0x68)) {
LAB_00c7b138:
                FUN_00c7ae24(param_1,&local_60);
              }
              else if ((bVar8 & 1) == 0) {
                fVar16 = 1.0 / (float)(1 << (ulong)(uVar11 & 0x1f));
                uVar15 = *(undefined4 *)(*(long *)(param_1 + 0x70) + 0xf0);
                lVar10 = **(long **)(param_1 + 0x30);
                uVar11 = *(uint *)(param_1 + 0x68);
                FUN_00c41540(lVar10);
                puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (ulong)uVar11 * 0x10);
                puVar7[1] = CONCAT44(fVar16 * -(float)iVar3,fVar16 * (float)(int)uVar2);
                *puVar7 = CONCAT44(uVar15,fVar16);
                *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
              }
            }
            iVar3 = *param_2 << 1;
            uVar2 = param_2[1] << 1 | 1;
            uVar13 = (long)param_2[2] + 1;
            uStack_58 = uVar13 & 0xffffffff;
            local_60 = CONCAT44(param_2[1] << 1,iVar3) | 0x100000000;
            uVar11 = (uint)uVar13;
            bVar8 = param_4;
            if ((int)uVar11 < *(int *)(param_1 + 0x120)) {
              lVar10 = *(long *)(*(long *)(param_1 + 0xb0) +
                                ((long)(int)(uVar2 << (ulong)(uVar11 & 0x1f)) + (long)iVar3 +
                                *(long *)(*(long *)(param_1 + 0xe8) + uVar13 * 8)) * 8);
              if (*(char *)(lVar10 + 0x69) == '\0') {
                bVar8 = *(char *)(lVar10 + 0x6a) != '\0';
                goto LAB_00c7b1d4;
              }
              if (uVar13 < *(ulong *)(lVar9 + 0x68)) goto LAB_00c7b1e0;
            }
            else {
LAB_00c7b1d4:
              if (uVar13 < *(ulong *)(lVar9 + 0x68)) {
LAB_00c7b1e0:
                FUN_00c7ae24(param_1,&local_60);
              }
              else if ((bVar8 & 1) == 0) {
                fVar16 = 1.0 / (float)(1 << (ulong)(uVar11 & 0x1f));
                uVar15 = *(undefined4 *)(*(long *)(param_1 + 0x70) + 0xf0);
                lVar10 = **(long **)(param_1 + 0x30);
                uVar11 = *(uint *)(param_1 + 0x68);
                FUN_00c41540(lVar10);
                puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (ulong)uVar11 * 0x10);
                puVar7[1] = CONCAT44(fVar16 * -(float)(int)uVar2,fVar16 * (float)iVar3);
                *puVar7 = CONCAT44(uVar15,fVar16);
                *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
              }
            }
            uVar2 = *param_2 << 1 | 1;
            uVar11 = param_2[1] << 1 | 1;
            local_60 = CONCAT44(param_2[1] << 1,*param_2 << 1) | 0x100000001;
            uVar13 = (long)param_2[2] + 1;
            uStack_58 = uVar13 & 0xffffffff;
            uVar12 = (uint)uVar13;
            if ((int)uVar12 < *(int *)(param_1 + 0x120)) {
              lVar10 = *(long *)(*(long *)(param_1 + 0xb0) +
                                ((long)(int)(uVar11 << (ulong)(uVar12 & 0x1f)) + (long)(int)uVar2 +
                                *(long *)(*(long *)(param_1 + 0xe8) + uVar13 * 8)) * 8);
              if (*(char *)(lVar10 + 0x69) == '\0') {
                param_4 = *(char *)(lVar10 + 0x6a) != '\0';
                goto LAB_00c7b278;
              }
              if (*(ulong *)(lVar9 + 0x68) <= uVar13) goto LAB_00c7af2c;
            }
            else {
LAB_00c7b278:
              if (*(ulong *)(lVar9 + 0x68) <= uVar13) {
                if ((param_4 & 1) == 0) {
                  fVar16 = 1.0 / (float)(1 << (ulong)(uVar12 & 0x1f));
                  uStack_68 = CONCAT44(fVar16 * -(float)(int)uVar11,fVar16 * (float)(int)uVar2);
                  local_70 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x70) + 0xf0),fVar16);
                  goto LAB_00c7afd8;
                }
                goto LAB_00c7af2c;
              }
            }
            FUN_00c7ae24(param_1,&local_60);
          }
          else if ((param_4 & 1) == 0) {
            fVar16 = 1.0 / (float)(1 << (ulong)(uVar11 & 0x1f));
            uVar12 = uVar11 - 1;
            if ((int)uVar11 < 1) {
              uVar12 = 0;
            }
            uStack_68 = CONCAT44(fVar16 * -(float)(int)uVar2,fVar16 * (float)iVar3);
            local_70 = CONCAT44(*(float *)(*(long *)(*(long *)(param_1 + 0x70) + 0xb8) +
                                          (ulong)uVar12 * 4) +
                                *(float *)(*(long *)(param_1 + 0x70) + 0xf0),fVar16);
LAB_00c7afd8:
            lVar10 = **(long **)(param_1 + 0x30);
            uVar2 = *(uint *)(param_1 + 0x68);
            FUN_00c41540(lVar10);
            puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x88) + (ulong)uVar2 * 0x10);
            puVar7[1] = uStack_68;
            *puVar7 = local_70;
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          }
LAB_00c7af2c:
          lVar10 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar14 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar14 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
          }
          else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
  lVar9 = **(long **)(param_1 + 0x30);
  uVar13 = *(long *)(lVar9 + 0x90) - *(long *)(lVar9 + 0x88) >> 4;
  if (*(uint *)(param_1 + 0x68) <= uVar13) {
    uVar13 = (ulong)*(uint *)(param_1 + 0x68);
  }
  *(ulong *)(lVar9 + 0x80) = uVar13;
  return;
}


