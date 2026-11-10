/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015e0924; name: FUN_015e0924
 */


void FUN_015e0924(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
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
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar10;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar12 = param_1 + 5;
  *plVar12 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar12);
  *param_1 = (long)&DAT_0459c4c8;
  param_1[4] = (long)&PTR_LAB_0459c540;
  *plVar12 = (long)&DAT_0459c590;
  plVar12 = (long *)param_1[1];
  param_1[0xe] = 0x7ffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = (long)&PTR_FUN_0459c5e8;
  param_1[0x23] = 0x8d3dcb08d3dcb0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = (long)plVar12;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = (long)plVar12;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = (long)plVar12;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = (long)plVar12;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = (long)plVar12;
  param_1[0x78] = 0x1fffffffffffffff;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x7b) = param_4;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = (long)plVar12;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = (long)plVar12;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x2a] = 0x8d3dcb08d3dcb0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0x8d3dcb08d3dcb0;
  param_1[0x32] = 0;
  param_1[0x4d] = 0x666666666666666;
  param_1[0x52] = 0x666666666666666;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[0x5a] = 0xaaaaaaaaaaaaaaa;
  param_1[0x5f] = 0xaaaaaaaaaaaaaaa;
  param_1[0x7f] = 0xaaaaaaaaaaaaaaa;
  param_1[0x84] = 0xaaaaaaaaaaaaaaa;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)plVar12;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)plVar12;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = (long)plVar12;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = (long)plVar12;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = (long)plVar12;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x400,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00da2ea0(plVar8,*(undefined8 *)PTR_DAT_047d8d98,param_1 + 4,1);
  puVar5 = PTR_DAT_047d8da0;
  plVar8[0x70] = 0;
  plVar8[0x71] = 0;
  plVar8[4] = (long)(puVar5 + 0xc0);
  plVar8[5] = (long)(puVar5 + 0x110);
  plVar8[0x72] = 0;
  plVar8[0x73] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = (long)plVar12;
  plVar8[2] = (long)plVar8;
  *(undefined4 *)(plVar8 + 3) = 0x100400;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar8[6];
  plVar8[0x37] = plVar8[0x37] | 8;
  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar9;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  pcVar11 = (code *)plVar8[0x71];
  if (pcVar11 != (code *)0x0) {
    plVar8[0x72] = 0;
    plVar8[0x73] = 0;
    plVar8[0x70] = 0;
    plVar8[0x71] = 0;
    (*pcVar11)(plVar8 + 0x74);
  }
  plVar8[0x70] = (long)&LAB_00c83cdc;
  plVar8[0x72] = (long)&LAB_02b3cc74;
  plVar8[0x74] = (long)param_1;
  plVar8[0x71] = (long)&LAB_02b3cc70;
  plVar12 = plVar8 + 0x3a;
  plVar8[0x73] = (long)&LAB_02b3cc80;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_015e0cbc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x3b));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_015e0cbc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_015e0cbc:
  FUN_00e220f4(plVar8,param_2,0);
  FUN_00e220f4(plVar8,0,param_3);
  plVar12 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar12 != (long *)0x0) {
    lVar7 = plVar12[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[8] = (long)plVar8;
  plVar8[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 0x3b));
  return;
}


