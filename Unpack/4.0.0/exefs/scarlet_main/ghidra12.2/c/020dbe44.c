/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020dbe44; name: FUN_020dbe44
 */


void FUN_020dbe44(long param_1,long *param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  puVar6 = PTR_DAT_047d66f8;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar12 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *param_2 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_2[1] = lVar12;
  param_2[4] = (long)(puVar6 + 0x88);
  plVar14 = param_2 + 5;
  *plVar14 = (long)(puVar6 + 0xd8);
  param_2[7] = 0;
  param_2[6] = 0;
  FUN_00d1a3f4(param_2 + 6,plVar14);
  *param_2 = (long)&PTR_LAB_0457f5e8;
  param_2[4] = (long)&PTR_LAB_0457f668;
  puVar7 = PTR_LAB_047dcaf0;
  puVar6 = PTR_LAB_047dcae8;
  *plVar14 = (long)&DAT_0457f6b8;
  puVar8 = PTR_LAB_047dcaf8;
  param_2[0xc] = param_1;
  param_2[8] = (long)puVar6;
  param_2[9] = (long)puVar7;
  puVar6 = PTR_LAB_047dcb00;
  param_2[10] = (long)puVar8;
  param_2[0xb] = (long)puVar6;
  param_2[0x18] = (long)&LAB_020dc35c;
  param_2[0x19] = (long)&LAB_02aca7d8;
  param_2[0x1a] = (long)&LAB_02aca7dc;
  param_2[0x1b] = (long)&LAB_02aca7e8;
  param_2[0x1c] = param_3;
  param_2[0x28] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  param_2[0x2b] = 0;
  *(undefined4 *)((long)param_2 + 0x16c) = 1;
  nn::os::InitializeLightEvent(param_2 + 0x2c,0,1);
  param_2[0x2e] = 0;
  *(undefined4 *)((long)param_2 + 0x184) = 1;
  nn::os::InitializeLightEvent(param_2 + 0x2f,0,1);
  if (((*PTR_DAT_047dcb08 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047dcb08), iVar10 != 0)) {
    FUN_00100190(&LAB_02aca700,PTR_DAT_047dcb10,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dcb08);
  }
  uVar13 = *(undefined8 *)PTR_DAT_047dcb10;
  *(undefined8 *)PTR_DAT_047dcb18 = uVar13;
  (**(code **)(*param_2 + 0x18))(local_48,param_2);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if ((long *)local_48[0][2] == plVar14) {
    FUN_01227cf4(&local_68,local_48);
  }
  puVar9 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_020dc0b4;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01228018(&local_58,&local_68);
  FUN_012283e8(uVar13,param_2 + 0x29,&local_58,PTR_FUN_047dcb20);
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48[0] = (undefined8 *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_020dc0b4;
  }
  puVar9 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48[0] = (undefined8 *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_020dc0b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


