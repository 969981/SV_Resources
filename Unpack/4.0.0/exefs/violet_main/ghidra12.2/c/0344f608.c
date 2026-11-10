/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344f608; name: FUN_0344f608
 */


void FUN_0344f608(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  char cVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  char local_64 [4];
  
  if ((*PTR_DAT_047e6980 != '\0') && ((param_3 & 1) == 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
  uVar8 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  puVar3 = PTR_DAT_047e6d38;
  uVar5 = *(uint *)(PTR_DAT_047e6d38 + 0x18);
  if (0 < (int)uVar5) {
    lVar12 = (ulong)uVar5 + 1;
    puVar1 = PTR_DAT_047e6ff0 + 0x10;
    do {
      uVar5 = uVar5 - 1;
      pcVar15 = *(code **)(*(long *)(puVar3 + 0x10) + (ulong)uVar5 * 0x18);
      if (((DAT_048afc00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048afc00), iVar4 != 0)) {
        DAT_048afbf8 = puVar1;
        __cxa_guard_release(&DAT_048afc00);
      }
      (*pcVar15)(&DAT_048afbf8,2,*(undefined8 *)(*(long *)(puVar3 + 0x10) + (ulong)uVar5 * 0x18 + 8)
                );
      lVar12 = lVar12 + -1;
    } while (1 < lVar12);
  }
  if (((param_2 & 1) == 0) && (iVar4 = FUN_03452440(param_1), iVar4 != 0)) {
    if (*(long *)(param_1 + 0x88) < *(long *)(param_1 + 0x90)) {
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x90);
    }
  }
  else {
    uVar5 = *(int *)(param_1 + 0x98) + 1;
    *(uint *)(param_1 + 0x98) = uVar5;
    puVar1 = PTR_DAT_047e7000;
    uVar6 = 0;
    if (*(uint *)PTR_DAT_047e6fc0 != 0) {
      uVar6 = *(uint *)(PTR_DAT_047e6ce8 + 0x30) / *(uint *)PTR_DAT_047e6fc0;
    }
    if ((uVar5 <= uVar6) ||
       (((*(int *)PTR_DAT_047e6ff8 == 2 && ((*PTR_DAT_047e7000 & 1) == 0)) ||
        ((float)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) / *(float *)PTR_DAT_047e6d28
         <= (float)*(uint *)(PTR_DAT_047e6ce8 + 0x30))))) {
      iVar4 = 0;
      goto LAB_0344f854;
    }
    lVar12 = *(long *)(PTR_DAT_047e6f80 + 0x10);
    if (lVar12 == 0) {
      iVar4 = 1;
    }
    else {
      iVar7 = 1;
      do {
        iVar4 = FUN_0349afcc(lVar12,0);
        lVar12 = *(long *)(lVar12 + 0x20);
        if (iVar4 == 1 || iVar7 != 1) {
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
      } while (lVar12 != 0);
    }
    if (*(int *)PTR_DAT_047e7008 != 2) {
      *(undefined4 *)PTR_DAT_047e7008 = 1;
    }
    *PTR_DAT_047e7010 = iVar4 == 1;
    *puVar1 = 1;
    nn::os::SignalEvent((EventType *)PTR_DAT_047e7018);
    uVar8 = nn::os::GetSystemTick();
    iVar4 = 0;
    *(undefined8 *)(param_1 + 0x88) = uVar8;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_0344f854:
  puVar1 = PTR_DAT_047e6ff0 + 0x10;
  while( true ) {
    if (iVar4 != 0) {
      uVar5 = *(uint *)(puVar3 + 0x28);
      if (0 < (int)uVar5) {
        lVar12 = (ulong)uVar5 + 1;
        do {
          uVar5 = uVar5 - 1;
          pcVar15 = *(code **)(*(long *)(puVar3 + 0x20) + (ulong)uVar5 * 0x18);
          if (((DAT_048afc00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048afc00), iVar7 != 0))
          {
            DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
            __cxa_guard_release(&DAT_048afc00);
          }
          (*pcVar15)(&DAT_048afbf8,4,
                     *(undefined8 *)(*(long *)(puVar3 + 0x20) + (ulong)uVar5 * 0x18 + 8));
          lVar12 = lVar12 + -1;
        } while (1 < lVar12);
      }
    }
    local_64[0] = '\0';
    uVar5 = FUN_0344fd18(param_1,0,local_64);
    if ((local_64[0] != '\0') || (*(int *)PTR_DAT_047e7020 != *(int *)PTR_DAT_047e7028)) {
      iVar4 = FUN_03452440(param_1);
    }
    uVar6 = FUN_0345259c(param_1);
    if (((uVar5 | uVar6) & 1) == 0) {
      cVar9 = *(char *)(param_1 + 0xa4);
      puVar2 = PTR_DAT_047e6d80;
    }
    else {
      cVar9 = '\x01';
      *(undefined1 *)(param_1 + 0xa4) = 1;
      puVar2 = PTR_DAT_047e6d80;
    }
    PTR_DAT_047e6d80 = puVar2;
    if ((iVar4 != 0) && (cVar9 != '\0')) {
      if (*(int *)(puVar2 + 0x18) != 0) {
        FUN_034c7cd4(*(undefined8 *)PTR_DAT_047e6cc0,puVar2);
        *(undefined4 *)(puVar2 + 0x18) = 0;
      }
      uVar5 = *(uint *)(puVar3 + 0x38);
      if (0 < (int)uVar5) {
        lVar12 = (ulong)uVar5 + 1;
        do {
          uVar5 = uVar5 - 1;
          pcVar15 = *(code **)(*(long *)(puVar3 + 0x30) + (ulong)uVar5 * 0x18);
          if (((DAT_048afc00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048afc00), iVar7 != 0))
          {
            DAT_048afbf8 = puVar1;
            __cxa_guard_release(&DAT_048afc00);
          }
          (*pcVar15)(&DAT_048afbf8,8,
                     *(undefined8 *)(*(long *)(puVar3 + 0x30) + (ulong)uVar5 * 0x18 + 8));
          lVar12 = lVar12 + -1;
        } while (1 < lVar12);
      }
      for (lVar12 = *(long *)(PTR_DAT_047e6d58 + 0x10); lVar12 != 0;
          lVar12 = *(long *)(lVar12 + 0x10)) {
        FUN_034c4b58(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x28));
      }
      uVar10 = (ulong)DAT_048b02e0;
      if (0 < (int)DAT_048b02e0) {
        lVar12 = 0;
        do {
          FUN_034c4b58(*(undefined8 *)(DAT_048b02d8 + lVar12));
          lVar12 = lVar12 + 8;
        } while (uVar10 * 8 != lVar12);
      }
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
    uVar8 = FUN_034f01d0();
    if (*PTR_DAT_047e7030 != '\0') {
      uVar8 = FUN_034836a8();
    }
    if (iVar4 == 0) break;
    uVar5 = *(uint *)(puVar3 + 0x48);
    if (0 < (int)uVar5) {
      lVar12 = (ulong)uVar5 + 1;
      do {
        uVar5 = uVar5 - 1;
        pcVar15 = *(code **)(*(long *)(puVar3 + 0x40) + (ulong)uVar5 * 0x18);
        if (((DAT_048afc00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048afc00), iVar7 != 0)) {
          DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
          __cxa_guard_release(&DAT_048afc00);
        }
        uVar8 = (*pcVar15)(&DAT_048afbf8,0x10,
                           *(undefined8 *)(*(long *)(puVar3 + 0x40) + (ulong)uVar5 * 0x18 + 8));
        lVar12 = lVar12 + -1;
      } while (1 < lVar12);
    }
    iVar7 = *(int *)(param_1 + 0x78) + 1;
    lVar12 = *(long *)PTR_DAT_047e7038;
    uVar8 = FUN_034e6f74(uVar8,iVar7,lVar12);
    FUN_034e6f74(uVar8,iVar7,lVar12 + 0x10);
    puVar13 = *(undefined8 **)PTR_DAT_047e7040;
    uVar10 = (ulong)*(uint *)(puVar13 + 1);
    if (*(uint *)(puVar13 + 1) != 0) {
      puVar11 = (undefined8 *)*puVar13;
      puVar14 = puVar11;
      do {
        if (*(int *)*puVar14 == 1) {
          FUN_034b1e00((int *)*puVar14,iVar7);
          puVar11 = (undefined8 *)*puVar13;
          uVar10 = (ulong)*(uint *)(puVar13 + 1);
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar11 + uVar10);
    }
    if (*PTR_DAT_047e7030 != '\0') {
      FUN_034836a8();
    }
    FUN_03483884();
    FUN_03498f18(*(undefined8 *)PTR_DAT_047e7048);
    FUN_03513990();
    FUN_03476730();
    FUN_034e880c();
    uVar5 = *(uint *)(puVar3 + 0x58);
    if (0 < (int)uVar5) {
      lVar12 = (ulong)uVar5 + 1;
      do {
        uVar5 = uVar5 - 1;
        pcVar15 = *(code **)(*(long *)(puVar3 + 0x50) + (ulong)uVar5 * 0x18);
        if (((DAT_048afc00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048afc00), iVar7 != 0)) {
          DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
          __cxa_guard_release(&DAT_048afc00);
        }
        (*pcVar15)(&DAT_048afbf8,0x20,
                   *(undefined8 *)(*(long *)(puVar3 + 0x50) + (ulong)uVar5 * 0x18 + 8));
        lVar12 = lVar12 + -1;
      } while (1 < lVar12);
    }
    iVar4 = iVar4 + -1;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  uVar5 = *(uint *)(puVar3 + 0x68);
  if (0 < (int)uVar5) {
    lVar12 = (ulong)uVar5 + 1;
    puVar1 = PTR_DAT_047e6ff0 + 0x10;
    do {
      uVar5 = uVar5 - 1;
      pcVar15 = *(code **)(*(long *)(puVar3 + 0x60) + (ulong)uVar5 * 0x18);
      if (((DAT_048afc00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048afc00), iVar4 != 0)) {
        DAT_048afbf8 = puVar1;
        __cxa_guard_release(&DAT_048afc00);
      }
      (*pcVar15)(&DAT_048afbf8,0x40,
                 *(undefined8 *)(*(long *)(puVar3 + 0x60) + (ulong)uVar5 * 0x18 + 8));
      lVar12 = lVar12 + -1;
    } while (1 < lVar12);
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  return;
}


