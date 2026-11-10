/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebb820; name: FUN_00ebb820
 */


void FUN_00ebb820(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  lVar17 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar17 != lVar2) {
    uVar3 = *(uint *)(param_1 + 0x78);
    uVar14 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x80);
    do {
      lVar13 = *(long *)(lVar17 + 8);
      iVar4 = (int)((ulong)(*(long *)(lVar13 + 0x218) - *(long *)(lVar13 + 0x210)) >> 5) *
              -0x3b13b13b;
      uVar14 = uVar14 + iVar4;
      if (iVar4 != 0 && uVar3 < uVar14) {
        iVar15 = 0;
        lVar11 = lVar13;
        while( true ) {
          FUN_00ebc2c0(&local_80,*param_2,*(long *)(lVar11 + 0x210) + (long)iVar15 * 0x1a0,
                       *(long *)(*(long *)(lVar13 + 0x250) + 0x210) + (long)iVar15 * 8,
                       *(undefined8 *)(param_1 + 8));
          plVar10 = local_80;
          local_80[0x2c] = *(long *)(param_1 + 0xa0);
          local_80[0x2d] = *(long *)(param_1 + 0xa8);
          local_80[0x2e] = *(long *)(param_1 + 0xb0);
          plVar16 = *(long **)(param_1 + 0xb8);
          if (plVar16 != (long *)0x0) {
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
          plVar9 = (long *)plVar10[0x2f];
          plVar10[0x2f] = (long)plVar16;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))();
          }
          plVar10 = (long *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,0x18,8);
          if (plVar10 == (long *)0x0) {
            (**(code **)(*(long *)*puVar1 + 0xe8))();
          }
          *plVar10 = 0;
          uStack_68 = 1;
          uVar12 = *puVar1;
          local_70 = puVar1;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar12;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          plVar10[2] = (long)local_80;
          if (local_80 != (long *)0x0) {
            plVar16 = local_80 + 5;
            do {
              lVar7 = *plVar16;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *(int *)plVar16 = (int)lVar7 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          plVar10[1] = param_1 + 0x68;
          lVar11 = *(long *)(param_1 + 0x68);
          *plVar10 = lVar11;
          *(long **)(lVar11 + 8) = plVar10;
          *(long **)(param_1 + 0x68) = plVar10;
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
          local_78 = 0;
          FUN_00ebbb2c(&local_78);
          if (local_80 != (long *)0x0) {
            plVar10 = local_80 + 5;
            do {
              lVar11 = *plVar10;
              iVar8 = (int)lVar11 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *(int *)plVar10 = iVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*local_80 + 0x10))();
            }
            else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          iVar15 = iVar15 + 1;
          if (iVar15 == iVar4) break;
          lVar11 = *(long *)(lVar17 + 8);
        }
      }
      lVar17 = lVar17 + 0x40;
    } while (lVar17 != lVar2);
  }
  return;
}


