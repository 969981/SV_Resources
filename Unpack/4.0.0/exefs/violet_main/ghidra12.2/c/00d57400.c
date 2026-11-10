/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d57400; name: FUN_00d57400
 */


void FUN_00d57400(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x98,8);
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
    uVar9 = param_3[1];
    param_3[1] = 0;
    puVar6[1] = uVar9;
    puVar6[2] = param_3[2];
    puVar6[3] = param_3[3];
    plVar8 = (long *)param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar4 = *plVar1;
        iVar5 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    param_3[2] = 0xffffffffffffffff;
    param_3[3] = 0;
    memset(puVar6 + 4,0,0x68);
    *(undefined1 *)((long)puVar6 + 0x92) = 1;
    puVar6[0x11] = 0xffffffffffffffff;
    *(undefined2 *)(puVar6 + 0x12) = 0;
    *param_1 = (long)puVar6;
    param_1[1] = (long)param_2;
    param_1[2] = 0x98;
    param_1[3] = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


