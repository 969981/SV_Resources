/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152218c; name: FUN_0152218c
 */


/* WARNING: Removing unreachable block (ram,0x015222cc) */

void FUN_0152218c(long *param_1)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  short sVar12;
  
  if (((DAT_0483af40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0483af40), iVar8 != 0)) {
    FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af40);
  }
  DAT_0483af48 = DAT_0483af30;
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar12 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01522250;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01522250:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        pcVar10 = *(code **)(lVar9 + 0x450);
        if (pcVar10 != (code *)0x0) {
          *(undefined8 *)(lVar9 + 0x458) = 0;
          *(undefined8 *)(lVar9 + 0x460) = 0;
          *(undefined8 *)(lVar9 + 0x448) = 0;
          *(undefined8 *)(lVar9 + 0x450) = 0;
          (*pcVar10)(lVar9 + 0x468);
        }
        puVar7 = PTR_DAT_047db010;
        if (*(code **)(PTR_DAT_047db010 + 0x10) != (code *)0x0) {
          (**(code **)(PTR_DAT_047db010 + 0x10))(PTR_DAT_047db010 + 0x20,lVar9 + 0x468);
          uVar2 = *(undefined8 *)(puVar7 + 0x10);
          *(undefined8 *)(lVar9 + 0x460) = *(undefined8 *)(puVar7 + 0x18);
          uVar3 = *(undefined8 *)(puVar7 + 8);
          *(undefined8 *)(lVar9 + 0x448) = *(undefined8 *)puVar7;
          *(undefined8 *)(lVar9 + 0x450) = uVar3;
          *(undefined8 *)(lVar9 + 0x458) = uVar2;
        }
        lVar11 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
          return;
        }
        if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


