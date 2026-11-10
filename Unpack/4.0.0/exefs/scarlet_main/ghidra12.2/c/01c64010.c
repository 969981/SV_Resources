/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c64010; name: FUN_01c64010
 */


void FUN_01c64010(undefined8 *param_1,long *param_2,undefined1 *param_3)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar7 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  if (puVar7 == (undefined1 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *puVar7 = *param_3;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    FUN_00d8e6c4(puVar7 + 8,param_3 + 8);
    lVar9 = *(long *)(param_3 + 0x18);
    *(long *)(puVar7 + 0x18) = lVar9;
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
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar10;
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
    uVar10 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x20) = uVar10;
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    puVar7[0x30] = param_3[0x30];
    *(undefined8 *)(puVar7 + 0x28) = uVar10;
    uVar10 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x38) = uVar10;
    uVar3 = *(undefined2 *)(param_3 + 0x40);
    puVar7[0x42] = param_3[0x42];
    *(undefined2 *)(puVar7 + 0x40) = uVar3;
    *param_1 = puVar7;
    param_1[1] = param_2;
    param_1[2] = 0x48;
    param_1[3] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


