/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146cce0; name: FUN_0146cce0
 */


void FUN_0146cce0(long param_1)

{
  short *psVar1;
  long ***ppplVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  bool bVar11;
  short sVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long *****local_c0;
  long *****local_b8 [2];
  byte *local_a8;
  long ***local_a0;
  long ******pppppplStack_98;
  size_t local_90;
  long *local_88;
  long ****local_80;
  long ****local_78 [2];
  long ***local_68;
  
  lVar9 = *(long *)(param_1 + 0x240);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar12 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0146cd64;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0146cd64:
        bVar11 = false;
      }
      if (bVar11) {
        lVar9 = *(long *)(lVar9 + 0x10);
        local_68 = (long ***)(lVar9 + -0x28);
        if (lVar9 == 0) {
          return;
        }
        local_a0 = (long ***)(lVar9 + 0xe0);
        local_b8[0] = local_78;
        pppppplStack_98 = local_b8;
        local_78[0] = &local_68;
        FUN_013e50c0(local_a0,&local_a0);
        FUN_01e23558(local_68 + 0x21,&local_a0);
        FUN_0135d328(local_78,*(undefined8 *)(param_1 + 8),0);
        plVar15 = *(long **)(param_1 + 0x120);
        if (plVar15 != (long *)0x0) {
          lVar9 = tpidr_el0;
          do {
            ppplVar2 = local_68 + 0x6d;
            std::to_string((uint)*(ushort *)(plVar15 + 2));
            pbVar13 = (byte *)((ulong)local_b8 | 1);
            if ((((ulong)local_b8[0] & 1) == 0) || (pbVar13 = local_a8, local_a8 != (byte *)0x0)) {
              local_90 = strlen((char *)pbVar13);
              bVar3 = *pbVar13;
              local_a0 = (long ***)&DAT_cbf29ce484222645;
              if (bVar3 != 0) {
                local_a0 = (long ***)&DAT_cbf29ce484222645;
                pbVar10 = pbVar13;
                do {
                  pbVar10 = pbVar10 + 1;
                  local_a0 = (long ***)(((ulong)local_a0 ^ (ulong)bVar3) * 0x100000001b3);
                  bVar3 = *pbVar10;
                } while (bVar3 != 0);
              }
              local_88 = (long *)0x0;
              pppppplStack_98 = (long ******)pbVar13;
            }
            else {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              local_a0 = *(long ****)PTR_DAT_047d3e30;
              pppppplStack_98 = *(long *******)(PTR_DAT_047d3e30 + 8);
              local_90 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              local_88 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x18))();
              }
            }
            FUN_01221800(&local_80,ppplVar2,&local_a0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            pbVar13 = local_a8;
            if ((((ulong)local_b8[0] & 1) != 0) && (local_a8 != (byte *)0x0)) {
              plVar14 = *(long **)(lVar9 + 0x30);
              if (plVar14 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar14 = DAT_04859430;
                *(long **)(lVar9 + 0x30) = DAT_04859430;
              }
              uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
              if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                (**(code **)(*plVar14 + 0x18))(plVar14,pbVar13,0,8);
              }
              else {
                FUN_00c48fe8(plVar14,pbVar13,0,8);
              }
            }
            local_c0 = &local_80;
            local_a0 = local_68 + 0x21;
            local_b8[0] = (long *****)&local_c0;
            pppppplStack_98 = local_b8;
            FUN_013ea69c(local_a0,&local_a0);
            if (local_80 != (long ****)0x0) {
              (*(code *)(*local_80)[4])();
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        local_a0 = local_68 + 0x21;
        local_b8[0] = &local_80;
        pppppplStack_98 = local_b8;
        local_80 = &local_68;
        FUN_01e23964(local_a0,&local_a0);
        local_a0 = local_68 + 0x21;
        local_b8[0] = &local_80;
        pppppplStack_98 = local_b8;
        local_80 = &local_68;
        FUN_01e23c50(local_a0,&local_a0);
        local_a0 = local_68 + 0x21;
        local_b8[0] = &local_80;
        pppppplStack_98 = local_b8;
        FUN_011c8734(local_a0,&local_a0);
        local_a0 = local_68 + 0x21;
        local_b8[0] = &local_80;
        pppppplStack_98 = local_b8;
        FUN_01e23e78(local_a0,&local_a0);
        local_a0 = local_68 + 0x21;
        local_b8[0] = &local_80;
        pppppplStack_98 = local_b8;
        FUN_010ea020(local_a0,&local_a0);
        plVar15 = *(long **)(param_1 + 0x3b0);
        *(undefined8 *)(param_1 + 0x3b0) = 0;
        if (plVar15 != (long *)0x0) {
          plVar14 = plVar15 + 5;
          do {
            lVar9 = *plVar14;
            iVar6 = (int)lVar9 + -1;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar11) {
              *(int *)plVar14 = iVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
          else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        FUN_0135d2ec(local_78);
        if (local_68 == (long ***)0x0) {
          return;
        }
        (*(code *)(*local_68)[0xc])();
        return;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


