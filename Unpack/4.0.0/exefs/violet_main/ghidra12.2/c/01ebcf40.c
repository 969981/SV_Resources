/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebcf40; name: FUN_01ebcf40
 */


void FUN_01ebcf40(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = &DAT_045548c0;
  param_1[4] = &PTR_LAB_04554910;
  param_1[5] = &PTR_LAB_04554930;
  param_1[6] = &PTR_LAB_04554948;
  param_1[7] = &PTR_LAB_04554960;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8d));
  FUN_01ebd23c(param_1 + 0x86);
  FUN_01ebd2dc(param_1 + 0x7f);
  if (*(char *)(param_1 + 0x7c) != '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  FUN_01ebd2dc(param_1 + 0x75);
  FUN_01ebd2dc(param_1 + 0x6e);
  if (*(char *)(param_1 + 0x58) != '\0') {
    pcVar8 = (code *)param_1[0x5f];
    if (pcVar8 != (code *)0x0) {
      param_1[0x61] = 0;
      param_1[0x60] = 0;
      param_1[0x5f] = 0;
      param_1[0x5e] = 0;
      (*pcVar8)(param_1 + 0x62);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  pcVar8 = (code *)param_1[0x49];
  if (pcVar8 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar8)(param_1 + 0x4c);
  }
  pcVar8 = (code *)param_1[0x39];
  if (pcVar8 != (code *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (*pcVar8)(param_1 + 0x3c);
  }
  pcVar8 = (code *)param_1[0x29];
  if (pcVar8 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar8)(param_1 + 0x2c);
  }
  FUN_01ebd37c(param_1 + 0x20);
  FUN_01ebd37c(param_1 + 0x19);
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  lVar10 = param_1[0x11];
  if (lVar10 != 0) {
    lVar9 = param_1[0x12];
    if (lVar9 == lVar10) {
      lVar9 = lVar10;
    }
    else {
      do {
        lVar9 = lVar9 + -0xc0;
        FUN_01a0b710(lVar9);
      } while (lVar10 != lVar9);
      lVar9 = param_1[0x11];
    }
    lVar3 = param_1[0x13];
    plVar7 = (long *)param_1[0x14];
    param_1[0x12] = lVar10;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar3 - lVar9,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,lVar3 - lVar9,0x10);
    }
  }
  lVar10 = param_1[10];
  if (lVar10 != 0) {
    lVar9 = param_1[0xb];
    if (lVar9 == lVar10) {
      lVar9 = lVar10;
    }
    else {
      do {
        lVar9 = lVar9 + -0xd0;
        FUN_0159e7d4(lVar9);
      } while (lVar10 != lVar9);
      lVar9 = param_1[10];
    }
    lVar3 = param_1[0xc];
    plVar7 = (long *)param_1[0xd];
    param_1[0xb] = lVar10;
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar3 - lVar9,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,lVar3 - lVar9,0x10);
    }
  }
  plVar7 = (long *)param_1[9];
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01ebd184;
  }
  plVar7 = (long *)param_1[8];
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01ebd238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
LAB_01ebd184:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


