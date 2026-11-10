/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a5f938; name: FUN_01a5f938
 */


void FUN_01a5f938(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],uint param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  
  if (((DAT_04840e50 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04840e50), iVar5 != 0)) {
    FUN_00100190(&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840e50);
  }
  lVar8 = DAT_04840e40;
  DAT_04840e88 = DAT_04840e40;
  plVar6 = (long *)(DAT_04840e40 + 0x78);
  if ((*plVar6 == 0) || (*(short *)(*plVar6 + 0x1a) == 0)) {
    FUN_00ef8710(param_1,0);
    return;
  }
  lVar7 = *plVar6;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a5faa4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a5faa4:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar10 = (long *)(lVar7 + -0x28);
          *(long *)(lVar7 + 0xc0) = param_2._8_8_;
          *(long *)(lVar7 + 0xb8) = param_2._0_8_;
          if (*(char *)(lVar7 + 0xcc) == '\0') {
            *(undefined1 *)(lVar7 + 0xcc) = 1;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x78))(plVar10,plVar6);
            *(long *)(lVar7 + 0xb0) = param_3._8_8_;
            *(long *)(lVar7 + 0xa8) = param_3._0_8_;
            if (*(char *)(lVar7 + 0xcc) == '\0') {
              *(undefined1 *)(lVar7 + 0xcc) = 1;
              (**(code **)(*plVar10 + 0x78))(plVar10);
            }
          }
          else {
            *(long *)(lVar7 + 0xb0) = param_3._8_8_;
            *(long *)(lVar7 + 0xa8) = param_3._0_8_;
          }
          FUN_01712f64(lVar8,param_4 & 1);
          lVar8 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00ca1a48(param_1,plVar6);
  return;
}


