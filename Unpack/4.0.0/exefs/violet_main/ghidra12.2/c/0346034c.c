/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346034c; name: FUN_0346034c
 */


void FUN_0346034c(undefined4 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  piVar1 = param_1 + 0x18;
  do {
    iVar2 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar6 = PTR_DAT_047e2fd0;
  } while (cVar4 != '\0');
  if (0 < iVar2 + -1) {
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    return;
  }
  if (*(long *)(param_1 + 6) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))
              (((*(byte *)(param_1 + 0x1a) & 8) >> 3) << 0x1e | 0x20000003);
    *(undefined8 *)(param_1 + 6) = 0;
  }
  puVar7 = PTR_DAT_047e70e8;
  FUN_034605e0(*(undefined8 *)PTR_DAT_047e70e8,param_1);
  iVar2 = param_1[0x19];
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  if (iVar2 < 1) {
    if (((param_2 & 1) != 0) || (pcVar9 = *(code **)(param_1 + 0x10), pcVar9 == (code *)0x0)) {
LAB_034604d0:
      if ((*(byte *)(param_1 + 0x1a) >> 1 & 1) != 0) {
        (**(code **)(puVar6 + 0x30))(0,*(undefined8 *)(param_1 + 8));
        *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfd;
      }
      *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x03460514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar6 + 0x30))(0,param_1);
      return;
    }
    lVar13 = *(long *)puVar7;
    uVar3 = *param_1;
    uVar8 = *(undefined8 *)(param_1 + 2);
    uVar12 = *(ulong *)(param_1 + 0x12);
    *(undefined4 *)(lVar13 + 0xf4) = 1;
    puVar10 = *(ulong **)(lVar13 + 0xf8);
    while( true ) {
      if (puVar10 == (ulong *)0x0) goto LAB_034604cc;
      if ((*puVar10 >> 0x3e == 0) && (puVar10[1] == uVar12)) break;
      puVar10 = (ulong *)(*puVar10 & 0x3fffffffffffffff);
    }
    (*pcVar9)(uVar3,uVar8,1,uVar12);
    for (puVar10 = *(ulong **)(lVar13 + 0xf8); puVar10 != (ulong *)0x0;
        puVar10 = (ulong *)(*puVar10 & 0x3fffffffffffffff)) {
      while ((uVar11 = *puVar10, uVar11 >> 0x3e == 0 && (puVar10[1] == uVar12))) {
        while (*puVar10 == uVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
          if (bVar5) {
            *puVar10 = uVar11 | 0x4000000000000000;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_034604cc;
        }
        ClearExclusiveLocal();
      }
    }
LAB_034604cc:
    *(undefined8 *)(param_1 + 0x10) = 0;
    goto LAB_034604d0;
  }
  if (((param_2 & 1) != 0) || (pcVar9 = *(code **)(param_1 + 0x10), pcVar9 == (code *)0x0)) {
    return;
  }
  lVar13 = *(long *)puVar7;
  uVar3 = *param_1;
  uVar8 = *(undefined8 *)(param_1 + 2);
  uVar12 = *(ulong *)(param_1 + 0x12);
  *(undefined4 *)(lVar13 + 0xf4) = 1;
  puVar10 = *(ulong **)(lVar13 + 0xf8);
  while( true ) {
    if (puVar10 == (ulong *)0x0) goto LAB_03460460;
    if ((*puVar10 >> 0x3e == 0) && (puVar10[1] == uVar12)) break;
    puVar10 = (ulong *)(*puVar10 & 0x3fffffffffffffff);
  }
  (*pcVar9)(uVar3,uVar8,1,uVar12);
  for (puVar10 = *(ulong **)(lVar13 + 0xf8); puVar10 != (ulong *)0x0;
      puVar10 = (ulong *)(*puVar10 & 0x3fffffffffffffff)) {
    while ((uVar11 = *puVar10, uVar11 >> 0x3e == 0 && (puVar10[1] == uVar12))) {
      while (*puVar10 == uVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar5) {
          *puVar10 = uVar11 | 0x4000000000000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_03460460;
      }
      ClearExclusiveLocal();
    }
  }
LAB_03460460:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


