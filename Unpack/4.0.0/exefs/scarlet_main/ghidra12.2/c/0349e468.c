/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349e468; name: FUN_0349e468
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0349e468(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar3 = PTR_DAT_047e6ff0;
  puVar2 = PTR_DAT_047e2fd0;
  if (DAT_048b0118 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    bVar6 = true;
    puVar1 = PTR_DAT_047e6ff0 + 0x10;
    puVar12 = DAT_048b0118;
    do {
      pcVar5 = DAT_048b0140;
      if ((bVar6) && (*(char *)((long)puVar12 + 0x46d) != '\0')) {
        puVar13 = (undefined8 *)puVar12[4];
        puVar10 = puVar12;
      }
      else {
        if (DAT_048b0140 != (code *)0x0) {
          if ((DAT_048afc00 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_048afc00);
            if (iVar7 != 0) {
              DAT_048afbf8 = puVar1;
              __cxa_guard_release(&DAT_048afc00);
            }
          }
          (*pcVar5)(&DAT_048afbf8,*(undefined4 *)(puVar12 + 0x10),
                    *(undefined4 *)((long)puVar12 + 0x84),1,1);
        }
        puVar13 = (undefined8 *)puVar12[4];
        (**(code **)*puVar12)(puVar12);
        (**(code **)(puVar2 + 0x30))(0,puVar12);
      }
      pcVar5 = DAT_048b0140;
      bVar6 = puVar10 == (undefined8 *)0x0;
      puVar12 = puVar13;
    } while (puVar13 != (undefined8 *)0x0);
    if (puVar10 != (undefined8 *)0x0) {
      if (DAT_048b0140 != (code *)0x0) {
        if (((DAT_048afc00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048afc00), iVar7 != 0)) {
          DAT_048afbf8 = puVar3 + 0x10;
          __cxa_guard_release(&DAT_048afc00);
        }
        (*pcVar5)(&DAT_048afbf8,*(undefined4 *)(puVar10 + 0x10),
                  *(undefined4 *)((long)puVar10 + 0x84),1,1);
      }
      (**(code **)*puVar10)(puVar10);
      (**(code **)(puVar2 + 0x30))(0,puVar10);
    }
  }
  DAT_048b0108 = 0;
  DAT_048b0110 = 0;
  DAT_048b0118 = (undefined8 *)0x0;
  _DAT_047c3890 = 0x3f8000003f800000;
  if (DAT_048afee0 != 0) {
    (**(code **)(puVar2 + 0x30))(0);
    DAT_048afee0 = 0;
  }
  if (DAT_048b0130 != (undefined *)0x0) {
    DAT_048b0138 = 0;
    if (DAT_048b0130 != &DAT_048b0120) {
      (**(code **)(puVar2 + 0x30))(4);
    }
    DAT_048b0130 = (undefined *)0x0;
    DAT_048b013c = 0;
  }
  DAT_048afef4 = 0;
  DAT_048b0148 = 0;
  if (DAT_048aff38 == '\0') goto LAB_0349e698;
  DAT_048b00d0 = 1;
  nn::os::SignalEvent((EventType *)&DAT_048b00d8);
  nn::os::WaitThread((ThreadType *)&DAT_048afef8);
  nn::os::DestroyThread((ThreadType *)&DAT_048afef8);
  lVar4 = DAT_048b00b8;
  if ((DAT_048b00c0 != 0) && (DAT_048b00b8 != 0)) {
    lVar9 = tpidr_el0;
    plVar11 = *(long **)(lVar9 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar9 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar4,0,8);
        goto LAB_0349e688;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar4,0,8);
  }
LAB_0349e688:
  DAT_048b00b8 = 0;
  DAT_048aff38 = '\0';
LAB_0349e698:
  if (DAT_048b00e8._3_1_ == '\x01') {
    nn::os::FinalizeEvent((EventType *)&DAT_048b00d8);
  }
  DAT_048afef0 = 0;
  DAT_048b00f0 = 0;
  DAT_048b00f8 = 0;
  DAT_048b00d8 = 0;
  DAT_048b00e0 = 0;
  DAT_048b00e8 = 0;
  DAT_048afeec = 0;
  return;
}


