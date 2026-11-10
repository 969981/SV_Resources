/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d11c58; name: FUN_00d11c58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d11c58(long param_1,ulong param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 in_q3 [16];
  undefined1 *local_118;
  byte *pbStack_110;
  undefined8 local_108;
  long *local_100;
  byte local_f8 [136];
  
  fVar25 = in_q3._8_4_;
  fVar24 = in_q3._4_4_;
  fVar23 = in_q3._0_4_;
  plVar12 = (long *)(param_1 + 0x68);
  if ((*plVar12 != 0) && ((param_2 & 1) == 0)) {
    lVar8 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0x120), plVar9 == (long *)0x0)) {
      iVar13 = _DAT_00000194;
    }
    else {
      plVar2 = plVar9 + 5;
      do {
        lVar8 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = (int)lVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar13 = *(int *)((long)plVar9 + 0x194);
      do {
        lVar8 = *plVar2;
        iVar7 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (iVar13 < *(int *)(PTR_DAT_047ddf68 + 4)) {
      lVar8 = *(long *)(param_1 + 0x58);
      if (*(int *)(param_1 + 0x184) < (int)(uint)*(byte *)(lVar8 + 0x1fc)) {
        *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x184) = 0;
        if (*(char *)(param_1 + 0xa8) == '\0') {
          FUN_00d176a8(param_1);
        }
        else if (0 < (int)((ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) >> 3)) {
          lVar15 = 0;
          do {
            snprintf((char *)local_f8,0x80,"TwoBoneIKGroup%dWeight",(int)lVar15);
            local_118 = &DAT_cbf29ce484222645;
            if (local_f8[0] != 0) {
              local_118 = &DAT_cbf29ce484222645;
              pbVar11 = (byte *)((ulong)local_f8 | 1);
              bVar4 = local_f8[0];
              do {
                local_118 = (undefined1 *)(((ulong)local_118 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 != 0);
            }
            local_108 = 0x7f;
            local_100 = (long *)0x0;
            pbStack_110 = local_f8;
            uVar18 = FUN_00d209f8(lVar8,&local_118);
            if (local_100 != (long *)0x0) {
              (**(code **)(*local_100 + 0x20))();
            }
            *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x70) + lVar15 * 8) + 0x108) = uVar18;
            lVar15 = lVar15 + 1;
          } while (lVar15 < (int)((ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) >>
                                 3));
        }
        if (*(char *)(param_1 + 0x180) != '\0') {
          plVar2 = *(long **)(param_1 + 0x78);
          for (plVar9 = *(long **)(param_1 + 0x70); plVar9 != plVar2; plVar9 = plVar9 + 1) {
            lVar8 = *plVar9;
            fVar22 = fVar23;
            if (*(char *)(lVar8 + 0x60) != '\0') {
              puVar1 = (undefined2 *)(lVar8 + 0x1d4);
              if (*(long *)(lVar8 + 0x1f0) != *(long *)(lVar8 + 0x1f8)) {
                puVar1 = (undefined2 *)(*(long *)(lVar8 + 0x1f8) + -2);
              }
              FUN_00d175d0(*(undefined8 *)(param_1 + 0x68),*puVar1);
              uVar14 = (ulong)(uint)fVar25;
              fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20);
              fVar22 = fVar23;
              fVar20 = fVar24;
              if (1.1920929e-07 <= ABS(fVar21)) {
                fVar22 = (float)*(undefined8 *)(param_1 + 0xe8) * fVar25;
                fVar20 = *(float *)(param_1 + 0xd0) -
                         ((float)*(undefined8 *)(param_1 + 0xe0) * fVar23 + fVar22) / fVar21;
                fVar24 = fVar22;
                fVar25 = fVar22;
              }
              lVar8 = *plVar9;
              *(ulong *)(lVar8 + 0x268) = uVar14;
              *(ulong *)(lVar8 + 0x260) = CONCAT44(fVar20,fVar23);
              uVar19 = *(undefined8 *)(param_1 + 0xe0);
              lVar8 = *plVar9;
              *(undefined8 *)(lVar8 + 0x128) = *(undefined8 *)(param_1 + 0xe8);
              *(undefined8 *)(lVar8 + 0x120) = uVar19;
            }
            fVar23 = fVar22;
          }
          FUN_00d176e8(param_1 + 0xd0);
        }
        plVar9 = *(long **)(param_1 + 0xb0);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x68))
                    (*(undefined4 *)(param_1 + 0xc4),plVar9,*(undefined8 *)(param_1 + 0x68),
                     *(undefined2 *)(param_1 + 0xc0),param_1 + 0x70);
        }
        plVar9 = *(long **)(param_1 + 0xb8);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x68))
                    (*(undefined4 *)(param_1 + 0xc4),plVar9,*(undefined8 *)(param_1 + 0x68),
                     *(undefined2 *)(param_1 + 0xc2),param_1 + 0x70);
        }
        plVar9 = *(long **)(param_1 + 0xb0);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x70))
                    (*(undefined4 *)(param_1 + 0xc4),plVar9,*(undefined8 *)(param_1 + 0x68),
                     *(undefined2 *)(param_1 + 0xc0),param_1 + 0x70);
        }
        plVar9 = *(long **)(param_1 + 0xb8);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x70))
                    (*(undefined4 *)(param_1 + 0xc4),plVar9,*(undefined8 *)(param_1 + 0x68),
                     *(undefined2 *)(param_1 + 0xc2),param_1 + 0x70);
        }
        plVar9 = *(long **)(param_1 + 0x70);
        plVar2 = *(long **)(param_1 + 0x78);
        if (plVar9 != plVar2) {
          plVar10 = plVar2;
          plVar17 = plVar9;
          do {
            lVar8 = *plVar17;
            if ((*(long *)(lVar8 + 0x230) != *(long *)(lVar8 + 0x228)) &&
               (0 < (int)((ulong)((long)plVar10 - (long)plVar9) >> 3))) {
              FUN_00d17644(*(undefined8 *)(*plVar9 + 0x260),lVar8,0);
              plVar9 = *(long **)(param_1 + 0x70);
              plVar10 = *(long **)(param_1 + 0x78);
              if (((long)plVar10 - (long)plVar9) * -0x20000000 == -0x200000000 ||
                  0x200000000 < ((long)plVar10 - (long)plVar9) * 0x20000000) {
                uVar14 = 1;
                do {
                  FUN_00d17644(*(undefined8 *)(plVar9[uVar14] + 0x260),*plVar17,uVar14 & 0xffffffff)
                  ;
                  plVar9 = *(long **)(param_1 + 0x70);
                  plVar10 = *(long **)(param_1 + 0x78);
                  uVar14 = uVar14 + 1;
                } while ((long)uVar14 < (long)(int)((ulong)((long)plVar10 - (long)plVar9) >> 3));
              }
            }
            plVar17 = plVar17 + 1;
          } while (plVar17 != plVar2);
        }
        lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
        if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0x48), plVar9 != (long *)0x0)) {
          lVar8 = (**(code **)(*plVar9 + 0x68))();
          puVar16 = *(undefined8 **)(param_1 + 0x70);
          puVar3 = *(undefined8 **)(param_1 + 0x78);
          if (puVar16 != puVar3) {
            uVar19 = *(undefined8 *)(lVar8 + 0x30);
            FUN_00d12134(*(undefined4 *)(param_1 + 0xc4),*puVar16,plVar12,
                         *(undefined8 *)(param_1 + 8));
            if ((puVar16 + 1 != puVar3) &&
               (FUN_00d12134(*(undefined4 *)(param_1 + 0xc4),uVar19,puVar16[1],plVar12,
                             *(undefined8 *)(param_1 + 8)), puVar16 + 2 != puVar3)) {
              FUN_00d12134(*(undefined4 *)(param_1 + 0xc4),uVar19,puVar16[2],plVar12,
                           *(undefined8 *)(param_1 + 8));
              for (puVar16 = puVar16 + 3; puVar16 != puVar3; puVar16 = puVar16 + 1) {
                FUN_00d12134(*(undefined4 *)(param_1 + 0xc4),uVar19,*puVar16,plVar12,
                             *(undefined8 *)(param_1 + 8));
              }
            }
          }
        }
      }
    }
  }
  return;
}


