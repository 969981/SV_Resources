/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f724ec; name: FUN_00f724ec
 */


ulong FUN_00f724ec(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  ulong unaff_x21;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  if ((((*(long *)(param_1 + 0x160) == 0) || (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) == 0))
      || (lVar10 = *(long *)(param_1 + 0x160), lVar10 == 0)) || (*(short *)(lVar10 + 0x1a) == 0)) {
LAB_00f72524:
    uVar9 = 0;
  }
  else {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00f72578;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f72578:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        unaff_x21 = 0;
        if (lVar10 != 0) {
          plVar13 = (long *)(lVar10 + -0x28);
          FUN_00d9ec44(auStack_50,2,*param_2);
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00ca1a48(&local_78,param_1 + 0x150);
          local_68[0] = 2;
          local_60 = 0;
          uStack_58 = 0;
          FUN_00ca1ea4(&local_60,&local_78);
          uVar7 = FUN_00f6a414(plVar13,auStack_50,local_68);
          FUN_00cecfd8(local_68);
          puVar6 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
            do {
              sVar12 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar12 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_38 = *puVar6;
                FUN_00c44438(lVar11 + 0x8040,&local_38);
              }
            }
            else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          unaff_x21 = (ulong)(uVar7 >> 8 & 0xff);
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          uVar9 = 1;
          break;
        }
        goto LAB_00f72524;
      }
      uVar9 = 0;
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  return uVar9 | (unaff_x21 & 0xff) << 8;
}


