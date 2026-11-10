/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01232cd8; name: FUN_01232cd8
 */


undefined8 FUN_01232cd8(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  char local_80 [32];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e));
  puVar6 = PTR_DAT_047d8290;
  puVar5 = PTR_DAT_047d8288;
  if (param_1[10] == 0) {
    iVar17 = 0;
    do {
      lVar11 = FUN_01233940(local_80,*param_1);
      if (lVar11 != 0) {
        lVar10 = *(long *)(lVar11 + 0x30);
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
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
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar9;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      lVar10 = param_1[2];
      lVar16 = param_1[3];
      uVar12 = 0;
      if (lVar16 - lVar10 != 0) {
        uVar12 = (lVar16 - lVar10) * 0x40 - 1;
      }
      uVar15 = param_1[10] + param_1[9];
      if (uVar12 == uVar15) {
        FUN_01233c74(param_1 + 1);
        uVar15 = param_1[9] + param_1[10];
        lVar10 = param_1[2];
        lVar16 = param_1[3];
      }
      if (lVar16 == lVar10) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)(*(long *)(lVar10 + (uVar15 >> 6 & 0x3fffffffffffff8)) +
                         (uVar15 & 0x1ff) * 8);
      }
      uVar9 = param_1[0xb];
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 == 0) {
        *plVar8 = lVar11;
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar9;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *plVar8 = lVar11;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      param_1[10] = param_1[10] + 1;
      snprintf(local_80,0x20,"TempPokeVoice_%d",*(int *)(param_1 + 0x1d));
      *(int *)(param_1 + 0x1d) = *(int *)(param_1 + 0x1d) + 1;
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      uVar12 = (param_1[10] + param_1[9]) - 1;
      uVar9 = FUN_00cf8198(*(undefined8 *)
                            (*(long *)(param_1[2] + (uVar12 >> 6 & 0x3fffffffffffff8)) +
                            (uVar12 & 0x1ff) * 8));
      if (local_80[0] != '\0') {
        pcVar13 = (char *)((ulong)local_80 | 1);
        do {
          cVar3 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar3 != '\0');
      }
      plVar8 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
      (**(code **)(*plVar8 + 0x60))(plVar8,uVar9,local_80);
      iVar17 = iVar17 + 1;
    } while (iVar17 != 4);
  }
  uVar15 = param_1[9];
  lVar16 = *(long *)(param_1[2] + (uVar15 >> 6 & 0x3fffffffffffff8));
  lVar11 = param_1[0x10];
  lVar10 = param_1[0x11];
  uVar12 = 0;
  if (lVar10 - lVar11 != 0) {
    uVar12 = (lVar10 - lVar11) * 0x40 - 1;
  }
  uVar14 = param_1[0x18] + param_1[0x17];
  if (uVar12 == uVar14) {
    FUN_01233c74(param_1 + 0xf);
    uVar14 = param_1[0x17] + param_1[0x18];
    lVar11 = param_1[0x10];
    lVar10 = param_1[0x11];
  }
  if (lVar10 == lVar11) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + (uVar14 >> 6 & 0x3fffffffffffff8)) + (uVar14 & 0x1ff) * 8;
  }
  FUN_012331e0(param_1 + 0x19,lVar11,lVar16 + (uVar15 & 0x1ff) * 8);
  param_1[0x18] = param_1[0x18] + 1;
  plVar8 = *(long **)(*(long *)(param_1[2] + ((ulong)param_1[9] >> 6 & 0x3fffffffffffff8)) +
                     (param_1[9] & 0x1ff) * 8);
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar11 = param_1[9];
  param_1[9] = lVar11 + 1U;
  param_1[10] = param_1[10] + -1;
  if (0x3ff < lVar11 + 1U) {
    plVar8 = (long *)param_1[0xb];
    uVar9 = *(undefined8 *)param_1[2];
    uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar9,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar9,0x1000,8);
    }
    param_1[2] = param_1[2] + 8;
    param_1[9] = param_1[9] + -0x200;
  }
  uVar12 = (param_1[0x18] + param_1[0x17]) - 1;
  uVar9 = FUN_00cf8198(*(undefined8 *)
                        (*(long *)(param_1[0x10] + (uVar12 >> 6 & 0x3fffffffffffff8)) +
                        (uVar12 & 0x1ff) * 8));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e));
  return uVar9;
}


