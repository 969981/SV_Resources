/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eae820; name: FUN_01eae820
 */


void FUN_01eae820(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_00ca1a48(param_2 + 4,param_3 + 4);
  lVar6 = *(long *)(param_3 + 0xc);
  *(long *)(param_2 + 0xc) = lVar6;
  if (lVar6 != 0) {
    FUN_01837a80();
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined1 *)(param_2 + 0x12) = 0;
  if (*(char *)(param_3 + 0x12) != '\0') {
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_3 + 0x14);
    *(undefined8 *)(param_2 + 0x18) = uVar7;
    *(undefined1 *)(param_2 + 0x12) = 1;
  }
  lVar6 = *(long *)(param_3 + 0x1c);
  *(long *)(param_2 + 0x1c) = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_2[0x20] = param_3[0x20];
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


