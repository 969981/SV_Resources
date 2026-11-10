/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080d380; name: FUN_0080d380
 */


undefined8 FUN_0080d380(long param_1)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong *local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  long *plStack_1c0;
  byte local_1b8;
  undefined7 uStack_1b7;
  undefined8 local_1a8;
  long *plStack_1a0;
  byte local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  long *plStack_178;
  byte local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  long *plStack_150;
  int local_148 [10];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [152];
  uint local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  ulong local_50;
  long *plStack_48;
  undefined4 local_38 [2];
  
  uVar6 = FUN_0080d0ac();
  if ((uVar6 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d17b0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "AttachMeshJob::CompleteFailure";
    return 0;
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x20))();
  if ((uVar6 & 1) == 0) {
    return 5;
  }
  plVar10 = *(long **)(param_1 + 0xa8);
  plVar2 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  (**(code **)(*plVar10 + 0x30))(local_148);
  if (plVar2 != (long *)0x0) {
    plVar10 = plVar2 + 1;
    do {
      lVar8 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_148[0] != 0) {
    lVar8 = FUN_00808b1c(*(undefined8 *)PTR_DAT_047d15d8);
    nn::os::LockMutex((MutexType *)(lVar8 + 0x18));
    local_1d8 = 0;
    local_1d0 = FUN_01cf7e20();
    local_1c8 = 0;
    local_1e0 = &local_1d8;
    FUN_01e76990(&local_60,auStack_120,&local_1e0);
    FUN_01cfa44c(&local_1e0,local_1d8);
    uVar5 = FUN_01ea1450(local_148[0],&local_60);
    FUN_01cfa44c(&local_60,CONCAT44(uStack_54,local_58));
    local_38[0] = uVar5;
    (**(code **)(**(long **)(param_1 + 0x98) + 0x38))(*(long **)(param_1 + 0x98),uVar5);
    plVar10 = *(long **)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_60 = 0;
    local_1e0 = (ulong *)CONCAT44(local_1e0._4_4_,0xa466);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_1e0 | 4),(Result *)&local_60);
    FUN_018ff39c(param_1 + 0xc0,&local_1e0);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)&local_1e0,(Result *)local_38);
    FUN_00796550(param_1 + 0xc0,&local_1e0);
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d17b0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "AttachMeshJob::CompleteFailure";
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x18));
    goto LAB_0080d6fc;
  }
  FUN_005587c4(&local_1e0,auStack_f8);
  FUN_0053f1a8(&local_60,&local_1e0);
  plVar10 = (long *)thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  bVar4 = (local_60 & 1) != 0;
  uVar1 = local_60 >> 1 & 0x7f;
  if (bVar4) {
    uVar1 = local_58;
  }
  uVar6 = (ulong)&local_60 | 1;
  if (bVar4) {
    uVar6 = local_50;
  }
  (**(code **)(*plVar10 + 0x170))(plVar10,uVar6,uVar1);
  if ((local_60 & 1) == 0) {
    if ((local_168 & 1) != 0) goto LAB_0080d630;
LAB_0080d5d4:
    if ((local_190 & 1) != 0) goto LAB_0080d654;
LAB_0080d5dc:
    if ((local_1b8 & 1) != 0) goto LAB_0080d678;
LAB_0080d5e4:
    if ((local_1d8 & 1) != 0) goto LAB_0080d69c;
LAB_0080d5ec:
    if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_0080d6c0;
LAB_0080d5f4:
    *(undefined **)(param_1 + 0x30) = PTR_LAB_047d17c8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "AttachMeshJob::PostConnectNetwork";
  }
  else {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT44(uStack_5c,local_60) & 0xfffffffffffffffe,1);
    if ((local_168 & 1) == 0) goto LAB_0080d5d4;
LAB_0080d630:
    (**(code **)(*plStack_150 + 0x18))
              (plStack_150,local_158,CONCAT71(uStack_167,local_168) & 0xfffffffffffffffe,1);
    if ((local_190 & 1) == 0) goto LAB_0080d5dc;
LAB_0080d654:
    (**(code **)(*plStack_178 + 0x18))
              (plStack_178,local_180,CONCAT71(uStack_18f,local_190) & 0xfffffffffffffffe,1);
    if ((local_1b8 & 1) == 0) goto LAB_0080d5e4;
LAB_0080d678:
    (**(code **)(*plStack_1a0 + 0x18))
              (plStack_1a0,local_1a8,CONCAT71(uStack_1b7,local_1b8) & 0xfffffffffffffffe,1);
    if ((local_1d8 & 1) == 0) goto LAB_0080d5ec;
LAB_0080d69c:
    (**(code **)(*plStack_1c0 + 0x18))(plStack_1c0,local_1c8,local_1d8 & 0xfffffffffffffffe,1);
    if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_0080d5f4;
LAB_0080d6c0:
    plVar10 = (long *)FUN_0079365c();
    lVar8 = *plVar10;
    local_1e0 = (ulong *)0x0;
    FUN_007935cc(&local_1e0);
    *(undefined **)(param_1 + 0x30) = PTR_LAB_047d17d0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(ulong **)(param_1 + 0xe0) = local_1e0 + lVar8 * 0x4e2;
    pcVar7 = "AttachMeshJob::WaitHostConstantId";
  }
  *(char **)(param_1 + 0x40) = pcVar7;
LAB_0080d6fc:
  FUN_00557e34(local_148);
  return 0;
}


