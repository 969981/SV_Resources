/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0101c3f8; name: FUN_0101c3f8
 */


void FUN_0101c3f8(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (sVar2 = *(short *)(lVar9 + 0x1a), sVar2 != 0)) {
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (((*PTR_DAT_047d39b0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar6 = PTR_DAT_047d39c8, iVar7 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar7 != 0)) {
        *(undefined8 *)puVar6 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)PTR_DAT_047d39b8 = puVar6;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        if (puVar11 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_0101c494;
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
  }
  goto LAB_0101c414;
  while (sVar2 = sVar3, sVar3 != 0) {
LAB_0101c494:
    sVar3 = *psVar1;
    if (sVar3 == sVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0101c4b8;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0101c4b8:
      bVar5 = false;
    }
    if (bVar5) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        lVar10 = param_2[2];
        *param_1 = lVar10;
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + 0x30);
          if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            *(undefined8 *)(lVar10 + 8) = uVar8;
            *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0101c528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
        return;
      }
      break;
    }
  }
LAB_0101c414:
  *param_1 = 0;
  return;
}


