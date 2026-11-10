/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ab140; name: FUN_029ab140
 */


void FUN_029ab140(void)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  
  DAT_048afbf0 = 0;
  if (DAT_048af9e8 != 0) {
    if (DAT_048afa8c._1_1_ == '\0') {
      FUN_0349e468();
    }
    else {
      FUN_03513760(DAT_048af9e8 + 0x80);
    }
  }
  if (DAT_048afa08 != (long *)0x0) {
    (**(code **)(*DAT_048afa08 + 0x38))();
  }
  plVar6 = DAT_048afa40;
  puVar1 = PTR_DAT_047e2fd0;
  if ((DAT_048afa40 != (long *)0x0) && (lVar8 = DAT_048afa40[3], lVar8 != 0)) {
    FUN_03495e5c(lVar8);
    (**(code **)(puVar1 + 0x30))(0,lVar8);
    plVar6[3] = 0;
  }
  if (*(long *)PTR_DAT_047e6f60 != 0) {
    FUN_0344a488();
  }
  FUN_034ed714();
  if (0 < (int)DAT_048afb70) {
    lVar8 = (ulong)DAT_048afb70 + 1;
    uVar7 = DAT_048afb70;
    do {
      uVar7 = uVar7 - 1;
      pcVar10 = *(code **)(DAT_048afb68 + (ulong)uVar7 * 0x18);
      if (((DAT_048afc00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_048afc00), iVar5 != 0)) {
        DAT_048afbf8 = &PTR_LAB_047c0468;
        __cxa_guard_release(&DAT_048afc00);
      }
      (*pcVar10)(&DAT_048afbf8,0x80,*(undefined8 *)(DAT_048afb68 + (ulong)uVar7 * 0x18 + 8));
      lVar8 = lVar8 + -1;
    } while (1 < lVar8);
  }
  if (DAT_048afaf8 != 0) {
    DAT_048afb00 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afaf8 = 0;
    DAT_048afb04 = 0;
  }
  if (DAT_048afb08 != 0) {
    DAT_048afb10 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb08 = 0;
    DAT_048afb14 = 0;
  }
  if (DAT_048afb18 != 0) {
    DAT_048afb20 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb18 = 0;
    DAT_048afb24 = 0;
  }
  if (DAT_048afb28 != 0) {
    DAT_048afb30 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb28 = 0;
    DAT_048afb34 = 0;
  }
  if (DAT_048afb38 != 0) {
    DAT_048afb40 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb38 = 0;
    DAT_048afb44 = 0;
  }
  if (DAT_048afb48 != 0) {
    DAT_048afb50 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb48 = 0;
    DAT_048afb54 = 0;
  }
  if (DAT_048afb58 != 0) {
    DAT_048afb60 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb58 = 0;
    DAT_048afb64 = 0;
  }
  if (DAT_048afb68 != 0) {
    DAT_048afb70 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb68 = 0;
    DAT_048afb74 = 0;
  }
  if (DAT_048afb78 != 0) {
    DAT_048afb80 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb78 = 0;
    DAT_048afb84 = 0;
  }
  if (DAT_048afb88 != 0) {
    DAT_048afb90 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb88 = 0;
    DAT_048afb94 = 0;
  }
  if (DAT_048afb98 != 0) {
    DAT_048afba0 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afb98 = 0;
    DAT_048afba4 = 0;
  }
  if (DAT_048afba8 != 0) {
    DAT_048afbb0 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afba8 = 0;
    DAT_048afbb4 = 0;
  }
  if (DAT_048afbb8 != 0) {
    DAT_048afbc0 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048afbb8 = 0;
    DAT_048afbc4 = 0;
  }
  FUN_034e7258();
  if (DAT_048af9e8 != 0) {
    FUN_0344ee98();
    lVar8 = DAT_048af9e8;
    if (DAT_048af9e8 != 0) {
      if (*(long *)(DAT_048af9e8 + 0xa8) != 0) {
        *(undefined4 *)(DAT_048af9e8 + 0xb0) = 0;
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(lVar8 + 0xa8) = 0;
        *(undefined4 *)(lVar8 + 0xb4) = 0;
      }
      (**(code **)(puVar1 + 0x30))(0x10,lVar8);
    }
    DAT_048af9e8 = 0;
  }
  if (DAT_048afa08 != (long *)0x0) {
    (**(code **)(*DAT_048afa08 + 0x18))();
    plVar6 = DAT_048afa08;
    if (DAT_048afa08 != (long *)0x0) {
      (**(code **)*DAT_048afa08)(DAT_048afa08);
      (**(code **)(puVar1 + 0x30))(0x10,plVar6);
    }
    DAT_048afa08 = (long *)0x0;
  }
  if (DAT_048af9e0 != (MutexType *)0x0) {
    FUN_0344e9ec();
    FUN_0344eb44(DAT_048af9e0);
  }
  if (DAT_048afbe8 != 0) {
    (**(code **)(puVar1 + 0x30))(0x10);
    DAT_048afbe8 = 0;
  }
  if (DAT_048afa18 != 0) {
    FUN_034b239c();
    if (DAT_048afa18 != 0) {
      (**(code **)(puVar1 + 0x30))(0x10);
    }
    DAT_048afa18 = 0;
  }
  if (DAT_048afa10 != 0) {
    FUN_034e6964();
    if (DAT_048afa10 != 0) {
      (**(code **)(puVar1 + 0x30))(0x10);
    }
    DAT_048afa10 = 0;
  }
  if (DAT_048afa00 != 0) {
    FUN_034c53bc();
    lVar8 = DAT_048afa00;
    if (DAT_048afa00 != 0) {
      if (*(long *)(DAT_048afa00 + 0x30) != 0) {
        *(undefined4 *)(DAT_048afa00 + 0x38) = 0;
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(lVar8 + 0x30) = 0;
        *(undefined4 *)(lVar8 + 0x3c) = 0;
      }
      (**(code **)(puVar1 + 0x30))(0x10,lVar8);
    }
    DAT_048afa00 = 0;
  }
  plVar6 = DAT_048afa30;
  if (DAT_048afa30 != (long *)0x0) {
    if ((int)DAT_048afa30[1] != 0) {
      lVar8 = *(long *)*DAT_048afa30;
      if (lVar8 == 0) {
        uVar11 = 0;
        do {
          if ((int)DAT_048afa30[1] - 1 == uVar11) goto LAB_029ab6b0;
          uVar11 = uVar11 + 1;
          lVar8 = ((long *)*DAT_048afa30)[uVar11 & 0xffffffff];
        } while (lVar8 == 0);
      }
      else {
        uVar11 = 0;
      }
      do {
        do {
          if (*(long *)(lVar8 + 0x20) != 0) {
            *(undefined4 *)(lVar8 + 0x28) = 0;
            (**(code **)(puVar1 + 0x30))(0);
            *(undefined8 *)(lVar8 + 0x20) = 0;
            *(undefined4 *)(lVar8 + 0x2c) = 0;
          }
          lVar8 = *(long *)(lVar8 + 0x70);
        } while (lVar8 != 0);
        do {
          uVar7 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar7;
          if (*(uint *)(plVar6 + 1) <= uVar7) goto LAB_029ab6b0;
          lVar8 = *(long *)(*plVar6 + (ulong)uVar7 * 8);
        } while (lVar8 == 0);
      } while( true );
    }
LAB_029ab6b0:
    if (*plVar6 != 0) {
      *(undefined4 *)(plVar6 + 1) = 0;
      (**(code **)(puVar1 + 0x30))(0);
      *plVar6 = 0;
      *(undefined4 *)((long)plVar6 + 0xc) = 0;
    }
    plVar6 = DAT_048afa30;
    if (DAT_048afa30 != (long *)0x0) {
      if (DAT_048afa30[0xc] != 0) {
        *(undefined4 *)(DAT_048afa30 + 0xd) = 0;
        (**(code **)(puVar1 + 0x30))(0);
        plVar6[0xc] = 0;
        *(undefined4 *)((long)plVar6 + 0x6c) = 0;
      }
      if (plVar6[0xe] != 0) {
        *(undefined4 *)(plVar6 + 0xf) = 0;
        (**(code **)(puVar1 + 0x30))(0);
        plVar6[0xe] = 0;
        *(undefined4 *)((long)plVar6 + 0x7c) = 0;
      }
      if (plVar6[0x10] != 0) {
        *(undefined4 *)(plVar6 + 0x11) = 0;
        (**(code **)(puVar1 + 0x30))(0);
        plVar6[0x10] = 0;
        *(undefined4 *)((long)plVar6 + 0x8c) = 0;
      }
      nn::os::FinalizeMutex((MutexType *)(plVar6 + 0x12));
      nn::os::FinalizeEvent((EventType *)(plVar6 + 7));
      nn::os::FinalizeMutex((MutexType *)(plVar6 + 3));
      (**(code **)(puVar1 + 0x30))(0x10,plVar6);
    }
    DAT_048afa30 = (long *)0x0;
  }
  plVar6 = DAT_048afa38;
  if (DAT_048afa38 != (long *)0x0) {
    if (*DAT_048afa38 != 0) {
      *(undefined4 *)(DAT_048afa38 + 1) = 0;
      (**(code **)(puVar1 + 0x30))(0);
      *plVar6 = 0;
      *(undefined4 *)((long)plVar6 + 0xc) = 0;
    }
    if (plVar6[2] != 0) {
      *(undefined4 *)(plVar6 + 3) = 0;
      (**(code **)(puVar1 + 0x30))(0);
      plVar6[2] = 0;
      *(undefined4 *)((long)plVar6 + 0x1c) = 0;
    }
    plVar6 = DAT_048afa38;
    if (DAT_048afa38 != (long *)0x0) {
      nn::os::FinalizeMutex((MutexType *)(DAT_048afa38 + 4));
      (**(code **)(puVar1 + 0x30))(0x10,plVar6);
    }
    DAT_048afa38 = (long *)0x0;
  }
  if (DAT_048afa28 != 0) {
    FUN_0347e104();
    if (DAT_048afa28 != 0) {
      (**(code **)(puVar1 + 0x30))(0x10);
    }
    DAT_048afa28 = 0;
  }
  if (DAT_048af9f0 != 0) {
    FUN_034e3d70();
    if (DAT_048af9f0 != 0) {
      (**(code **)(puVar1 + 0x30))(0x10);
    }
    DAT_048af9f0 = 0;
  }
  if (DAT_048af9f8 != 0) {
    FUN_034dbe20();
    lVar8 = DAT_048af9f8;
    if (DAT_048af9f8 != 0) {
      nn::os::FinalizeMutex((MutexType *)(DAT_048af9f8 + 0x68));
      (**(code **)(puVar1 + 0x30))(0x10,lVar8);
    }
    DAT_048af9f8 = 0;
  }
  if (DAT_048afa20 != 0) {
    FUN_034b5404();
    if (DAT_048afa20 != 0) {
      (**(code **)(puVar1 + 0x30))(0x10);
    }
    DAT_048afa20 = 0;
  }
  plVar6 = DAT_048afa40;
  if (DAT_048afa40 != (long *)0x0) {
    if (*DAT_048afa40 != 0) {
      *(undefined4 *)(DAT_048afa40 + 1) = 0;
      (**(code **)(puVar1 + 0x30))(0);
      *plVar6 = 0;
      *(undefined4 *)((long)plVar6 + 0xc) = 0;
    }
    lVar8 = plVar6[3];
    if (lVar8 != 0) {
      FUN_03495e5c(lVar8);
      (**(code **)(puVar1 + 0x30))(0,lVar8);
      plVar6[3] = 0;
    }
    if (DAT_048afa40 != (long *)0x0) {
      (**(code **)(puVar1 + 0x30))(0x10);
    }
    DAT_048afa40 = (long *)0x0;
  }
  if (DAT_048af9e0 != (MutexType *)0x0) {
    FUN_0344e7b8();
    pMVar3 = DAT_048af9e0;
    if (DAT_048af9e0 != (MutexType *)0x0) {
      nn::os::FinalizeMutex(DAT_048af9e0 + 0x2d8);
      nn::os::FinalizeMutex(pMVar3 + 0x2a0);
      nn::os::FinalizeMutex(pMVar3 + 0x268);
      nn::os::FinalizeMutex(pMVar3 + 0x230);
      nn::os::FinalizeMutex(pMVar3 + 0x1f8);
      nn::os::FinalizeMutex(pMVar3 + 0x1c0);
      nn::os::FinalizeMutex(pMVar3 + 0x188);
      nn::os::FinalizeMutex(pMVar3 + 0x150);
      nn::os::FinalizeMutex(pMVar3 + 0x118);
      nn::os::FinalizeMutex(pMVar3 + 0xe0);
      nn::os::FinalizeMutex(pMVar3 + 0xa8);
      nn::os::FinalizeMutex(pMVar3 + 0x70);
      nn::os::FinalizeMutex(pMVar3 + 0x38);
      nn::os::FinalizeMutex(pMVar3);
      (**(code **)(puVar1 + 0x30))(0x10,pMVar3);
    }
    DAT_048af9e0 = (MutexType *)0x0;
  }
  puVar2 = PTR_DAT_047e6d80;
  if (*(undefined **)(PTR_DAT_047e6d80 + 0x10) != (undefined *)0x0) {
    bVar4 = *(undefined **)(PTR_DAT_047e6d80 + 0x10) != PTR_DAT_047e6d80;
    *(undefined4 *)(PTR_DAT_047e6d80 + 0x18) = 0;
    if (bVar4) {
      (**(code **)(puVar1 + 0x30))(4);
    }
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
  }
  puVar2 = PTR_DAT_047e6cb8;
  puVar9 = *(undefined8 **)PTR_DAT_047e6cb8;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    (**(code **)(puVar1 + 0x30))(4,puVar9);
    *(undefined8 *)puVar2 = 0;
  }
  if (DAT_048b02a8 != 0) {
    uVar11 = 0;
    do {
      plVar6 = *(long **)(DAT_048b02a0 + uVar11 * 8);
      while (plVar6 != (long *)0x0) {
        plVar6 = (long *)*plVar6;
        (**(code **)(puVar1 + 0x30))(0);
      }
      *(undefined8 *)(DAT_048b02a0 + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < DAT_048b02a8);
  }
  DAT_048b02b0 = 0;
  if (DAT_048b02a0 != 0) {
    DAT_048b02a8 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048b02a0 = 0;
    DAT_048b02ac = 0;
  }
  FUN_03476730();
  DAT_048af9d8 = 0;
  DAT_048af9dc = 0;
  return;
}


