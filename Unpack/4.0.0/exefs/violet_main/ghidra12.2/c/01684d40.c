/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01684d40; name: FUN_01684d40
 */


void FUN_01684d40(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar8 = PTR_DAT_047dd2d8;
  puVar7 = PTR_DAT_047dd2d0;
  if (param_3 != param_2) {
    lVar13 = *param_4;
    puVar1 = PTR_DAT_047dd2d8 + 0x10;
    puVar2 = PTR_DAT_047dd2d0 + 0x10;
    do {
      uVar14 = *param_1;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *(undefined8 *)(lVar13 + -0x38) = 0;
        *(undefined8 *)(lVar13 + -0x30) = 0;
        *(undefined8 *)(lVar13 + -0x28) = 0;
        *(undefined8 *)(lVar13 + -0x20) = 0;
        *(undefined8 *)(lVar13 + -0x18) = 0;
        *(undefined **)(lVar13 + -0x40) = puVar1;
        *(undefined8 *)(lVar13 + -0x10) = 0;
        *(undefined8 *)(lVar13 + -8) = 0;
        FUN_00fa74e8((undefined8 *)(lVar13 + -0x38),param_3 + -0x38);
        plVar11 = *(long **)(lVar13 + -0x28);
        *(undefined8 *)(lVar13 + -0x28) = 0;
        if (plVar11 != (long *)0x0) {
          lVar10 = plVar11[6];
          psVar3 = (short *)(lVar10 + 0x1a);
          do {
            sVar4 = *psVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar6) {
              *psVar3 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_01684e84;
        }
        uVar14 = *(undefined8 *)(param_3 + -0x28);
        *(undefined8 *)(param_3 + -0x28) = 0;
        *(undefined8 *)(lVar13 + -0x28) = uVar14;
        FUN_00ecc978(lVar13 + -0x20,param_3 + -0x20);
        FUN_00eccc4c(lVar13 + -0x10,param_3 + -0x10);
        *(undefined **)(lVar13 + -0x40) = puVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar14;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *(undefined8 *)(lVar13 + -0x38) = 0;
        *(undefined **)(lVar13 + -0x40) = puVar8 + 0x10;
        *(undefined8 *)(lVar13 + -0x30) = 0;
        *(undefined8 *)(lVar13 + -0x28) = 0;
        *(undefined8 *)(lVar13 + -0x20) = 0;
        *(undefined8 *)(lVar13 + -0x18) = 0;
        *(undefined8 *)(lVar13 + -0x10) = 0;
        *(undefined8 *)(lVar13 + -8) = 0;
        FUN_00fa74e8((undefined8 *)(lVar13 + -0x38),param_3 + -0x38);
        plVar11 = *(long **)(lVar13 + -0x28);
        *(undefined8 *)(lVar13 + -0x28) = 0;
        if (plVar11 != (long *)0x0) {
          lVar12 = plVar11[6];
          psVar3 = (short *)(lVar12 + 0x1a);
          do {
            sVar4 = *psVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar6) {
              *psVar3 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))();
          }
          else if (sVar4 == 0) {
LAB_01684e84:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        uVar14 = *(undefined8 *)(param_3 + -0x28);
        *(undefined8 *)(param_3 + -0x28) = 0;
        *(undefined8 *)(lVar13 + -0x28) = uVar14;
        FUN_00ecc978(lVar13 + -0x20,param_3 + -0x20);
        FUN_00eccc4c(lVar13 + -0x10,param_3 + -0x10);
        *(undefined **)(lVar13 + -0x40) = puVar7 + 0x10;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      param_3 = param_3 + -0x40;
      lVar13 = *param_4 + -0x40;
      *param_4 = lVar13;
    } while (param_3 != param_2);
  }
  return;
}


