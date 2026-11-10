/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017af688; name: FUN_017af688
 */


void FUN_017af688(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
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
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_FUN_045ee6e8;
  param_1[4] = (long)&PTR_LAB_045ee760;
  *plVar9 = (long)&PTR_LAB_045ee7b0;
  param_1[8] = (long)&PTR_LAB_045ee808;
  memset(param_1 + 9,0,0x98);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  uVar8 = FUN_017b0d94(param_1[1]);
  FUN_017afb74(&local_28,uVar8);
  local_48 = param_1[0x13];
  param_1[0x13] = 0;
  FUN_017af9d8(&local_48);
  lVar7 = local_28;
  local_28 = 0;
  param_1[0x13] = lVar7;
  FUN_017af9d8(&local_28);
  uVar8 = FUN_017aff38(param_1[1]);
  FUN_017afc30(&local_28,uVar8);
  local_48 = param_1[0x14];
  param_1[0x14] = 0;
  FUN_017afa50(&local_48);
  lVar7 = local_28;
  local_28 = 0;
  param_1[0x14] = lVar7;
  FUN_017afa50(&local_28);
  FUN_017afcec(&local_48,param_1[1]);
  plVar9 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[6];
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
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_017af910;
  }
  param_1[0x16] = local_48;
  FUN_017afdb0(&local_48,param_1[1]);
  plVar9 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[6];
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
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_017af910;
  }
  param_1[0x17] = local_48;
  FUN_017afe74(&local_48,param_1[1]);
  plVar9 = (long *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[6];
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
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_017af910:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x15] = local_48;
  FUN_017afad0(&local_48,param_1[1]);
  lVar7 = local_48;
  local_48 = 0;
  lVar10 = param_1[0x18];
  param_1[0x18] = lVar7;
  if (lVar10 == 0) {
    param_1[0x1a] = local_38;
    param_1[0x1b] = local_30;
    param_1[0x19] = local_40;
  }
  else {
    FUN_017b2850(param_1 + 0x19);
    lVar7 = local_48;
    param_1[0x19] = local_40;
    param_1[0x1a] = local_38;
    param_1[0x1b] = local_30;
    local_48 = 0;
    if (lVar7 != 0) {
      FUN_017b2850(&local_40);
    }
  }
  return;
}


