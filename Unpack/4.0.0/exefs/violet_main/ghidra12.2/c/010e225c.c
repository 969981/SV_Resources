/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e225c; name: FUN_010e225c
 */


void FUN_010e225c(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined4 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
  if (puVar7 == (undefined8 *)0x0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *param_1 = 0;
  }
  else {
    FUN_00d33afc(puVar7,*param_3,*param_4,5);
    puVar7[2] = puVar7;
    *puVar7 = &PTR_FUN_04545e38;
    puVar7[1] = param_2;
    puVar7[4] = &PTR_LAB_04545eb0;
    puVar7[5] = &PTR_LAB_04545f00;
    *(undefined4 *)(puVar7 + 3) = 0x80060;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *param_1 = puVar7;
    lVar6 = puVar7[6];
    if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar8;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  return;
}


