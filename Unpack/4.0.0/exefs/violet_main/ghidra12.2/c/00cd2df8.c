/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd2df8; name: FUN_00cd2df8
 */


void FUN_00cd2df8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_40;
  undefined4 local_34;
  
  FUN_00cd32e8();
  *param_1 = &PTR_FUN_045d0b98;
  param_1[4] = &PTR_LAB_045d0bc8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = lVar6;
  param_1[0xe] = 0;
  param_1[9] = 0x1fffffffffffffff;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xf] = lVar6;
  param_1[0x15] = 0;
  param_1[0x10] = 0x1fffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = lVar6;
  param_1[0x1c] = 0;
  param_1[0x17] = 0x1fffffffffffffff;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = lVar6;
  param_1[0x23] = 0;
  param_1[0x1e] = 0x1fffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_01060ed0();
  }
  param_1[0x24] = lVar6;
  param_1[0x25] = 0x1fffffffffffffff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x2a,0,1);
  param_1[0x2c] = 0;
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x2d),1,1);
  local_34 = 0x100000;
  FUN_00cd3224(&local_40,param_1[1],&local_34);
  plVar7 = (long *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x2c] = local_40;
  FUN_00cd035c(local_40,"GpuObjectContainer",0xffffffff,0x11);
  return;
}


