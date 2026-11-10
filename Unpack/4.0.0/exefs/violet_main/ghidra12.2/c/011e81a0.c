/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e81a0; name: FUN_011e81a0
 */


void FUN_011e81a0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *__s;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *local_78;
  long local_70;
  long local_68;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d1048;
  param_1[1] = lVar9;
  param_1[4] = (long)&PTR_LAB_045d1080;
  lVar6 = *param_2;
  param_1[6] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) goto LAB_011e861c;
  }
  lVar6 = *param_3;
  param_1[7] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
LAB_011e861c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  __s = param_1 + 8;
  memset(__s,0,0x50);
  param_1[0x18] = 0;
  param_1[0x12] = (long)&DAT_cbf29ce484222645;
  param_1[0x13] = (long)&DAT_03c886bc;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar9 = tpidr_el0;
    lVar6 = *(long *)(lVar9 + 0x30);
    if (lVar6 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar6 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = lVar6;
  param_1[0x1a] = 0x555555555555555;
  param_1[0x1b] = 0;
  do {
    iVar5 = DAT_04859f48;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x4859f48,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_04859f48 = DAT_04859f48 + 1;
    }
  } while (cVar2 != '\0');
  plVar10 = (long *)param_1[1];
  *(int *)(param_1 + 0x1d) = iVar5;
  puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
    lVar9 = 0;
    lVar6 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011e8644;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *(undefined4 *)(puVar7 + 6) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    lVar6 = 8;
    puVar7[2] = 0;
    puVar7[3] = plVar10;
    lVar9 = 0x38;
    puVar7[4] = 0xf0f0f0f0f0f0f0;
    puVar7[5] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  lVar8 = *__s;
  *__s = (long)puVar7;
  if (lVar8 != 0) {
    FUN_011ea2d8(param_1 + 9);
  }
  param_1[9] = (long)plVar10;
  param_1[10] = lVar9;
  local_78 = (long *)param_1[1];
  param_1[0xb] = lVar6;
  puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x38,8);
  if (puVar7 == (undefined8 *)0x0) {
    local_70 = 0;
    local_68 = 0;
    local_78 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_011e8644:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = local_78;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = local_78;
    *(undefined4 *)(puVar7 + 6) = 0;
    puVar7[4] = 0xf0f0f0f0f0f0f0;
    puVar7[5] = 0;
    local_70 = 0x38;
    local_68 = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  lVar6 = param_1[0xc];
  param_1[0xc] = (long)puVar7;
  if (lVar6 != 0) {
    FUN_011ea2d8(param_1 + 0xd);
  }
  param_1[0xe] = local_70;
  param_1[0xf] = local_68;
  param_1[0xd] = (long)local_78;
  return;
}


