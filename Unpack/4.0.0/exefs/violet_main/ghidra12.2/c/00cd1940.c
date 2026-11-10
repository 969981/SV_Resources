/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd1940; name: FUN_00cd1940
 */


void FUN_00cd1940(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_00cd1c7c();
  *param_1 = &PTR_FUN_045d1250;
  param_1[4] = &PTR_LAB_045d1288;
  lVar6 = *param_2;
  param_1[6] = lVar6;
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
    if (iVar4 == -1) goto LAB_00cd1c04;
  }
  lVar6 = *param_3;
  param_1[7] = lVar6;
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
LAB_00cd1c04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[8] = 0;
  puVar7 = param_1 + 9;
  lVar6 = tpidr_el0;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar6 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar6 + 0x30) = DAT_04859430;
    }
    puVar7[3] = 0x7ffffffffffffff;
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    puVar7[2] = lVar5;
    puVar7[6] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
        (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
       (lVar5 = *(long *)(lVar6 + 0x30), lVar5 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar5 = DAT_04859430;
      *(long *)(lVar6 + 0x30) = DAT_04859430;
    }
    puVar7[8] = 0x7ffffffffffffff;
    puVar7[9] = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
    puVar7[7] = lVar5;
    puVar7[0xb] = 0;
    *(undefined4 *)(puVar7 + 0xc) = 0x3f800000;
    puVar7 = puVar7 + 0xd;
  } while (puVar7 != param_1 + 0x1a09);
  puVar7 = param_1 + 0x1a0a;
  param_1[0x1a09] = 0;
  do {
    *(undefined4 *)((long)puVar7 + 0x1c) = 1;
    *puVar7 = 0;
    puVar7[1] = 0;
    nn::os::InitializeLightEvent(puVar7 + 2,0,1);
    puVar7 = puVar7 + 4;
  } while (puVar7 != param_1 + 0x220a);
  param_1[0x220a] = 0;
  return;
}


