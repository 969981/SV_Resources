/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015e6a48; name: FUN_015e6a48
 */


void FUN_015e6a48(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 uVar11;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *param_1 = (long)&PTR_FUN_045d0398;
  param_1[4] = (long)&PTR_LAB_045d0410;
  *plVar10 = (long)&DAT_045d0460;
  *(undefined2 *)(param_1 + 8) = 0x100;
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_00d32adc(param_1 + 9,param_2);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar7 + 0x30), lVar8 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar8 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x13] = lVar8;
  param_1[0x17] = 0;
  param_1[0x14] = 0xfffffffffffffff;
  param_1[0x15] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar7 + 0x30), lVar8 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar8 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x1e] = 0;
  param_1[0x18] = lVar8;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x19] = 0xfffffffffffffff;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1f,0,1);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_015e6f20(param_1 + 0x23);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_015e6f20(param_1 + 0x2a);
  lVar7 = *param_2;
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
        if (cVar3 != '\0') goto LAB_015e6d8c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015e6d8c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        param_1[0xb] = *(long *)(lVar7 + 0x30);
        param_1[0xc] = *(long *)(lVar7 + 0x38);
        uVar11 = *(undefined8 *)(lVar7 + 0x48);
        FUN_02707510(uVar11,"ThreadTableKey");
        lVar8 = FUN_027075e0(uVar11);
        FUN_027076d0(uVar11,0xfffffffe,param_1);
        FUN_00c5db00(uVar11,0);
        param_1[0xe] = lVar8;
        param_1[0x10] = *(long *)(lVar7 + 0x58);
        FUN_017e6980(lVar8,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x015e6e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


