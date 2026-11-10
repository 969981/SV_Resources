/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c75700; name: FUN_01c75700
 */


void FUN_01c75700(long *param_1,long *param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x80,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar6 = *param_3;
    puVar6[2] = 0;
    puVar6[1] = 0;
    FUN_00d8e6c4(puVar6 + 1,param_3 + 1);
    lVar9 = param_3[3];
    puVar6[3] = lVar9;
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    memcpy(puVar6 + 4,param_3 + 4,0x60);
    *param_1 = (long)puVar6;
    param_1[1] = (long)param_2;
    param_1[2] = 0x80;
    param_1[3] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


