/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a03f8; name: FUN_034a03f8
 */


int FUN_034a03f8(byte param_1,byte param_2,uint param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_047e7258;
  puVar5 = PTR_DAT_047e6fe8;
  uVar4 = DAT_047c389c;
  uVar3 = DAT_047c3894;
  iVar6 = 2;
  if ((param_1 & 1) == 0) {
    iVar6 = 0;
  }
  bVar2 = param_2 & 1;
  if (iVar6 == DAT_048b0100) {
    if (DAT_047c3898 != bVar2) {
      DAT_047c3898 = (param_2 | param_1 ^ 0xff) & 1;
    }
LAB_034a052c:
    iVar6 = 3;
  }
  else {
    DAT_047c3898 = bVar2;
    if ((DAT_048b0100 == 0) && ((param_1 & 1) != 0)) {
      DAT_047c3894 = 0;
      DAT_048b0100 = 1;
      DAT_047c389c = uVar3;
      DAT_048b0104 = *(uint *)PTR_DAT_047e6fc0 * 2;
      if (DAT_048b0104 <= param_3) {
        DAT_048b0104 = param_3;
      }
      if (*(uint *)PTR_DAT_047e6fc0 <= DAT_048b0104) goto LAB_034a052c;
LAB_034a04e8:
      DAT_048b0104 = 0;
      if (DAT_048b0118 == 0) {
        iVar6 = 1;
      }
      else {
        lVar10 = DAT_048b0118;
        iVar9 = 1;
        do {
          iVar6 = FUN_0349afcc(lVar10,0);
          lVar10 = *(long *)(lVar10 + 0x20);
          if (iVar6 == 1 || iVar9 != 1) {
            iVar6 = iVar9;
          }
          iVar9 = iVar6;
        } while (lVar10 != 0);
      }
      if (*(int *)PTR_DAT_047e7008 != 2) {
        *(undefined4 *)PTR_DAT_047e7008 = 1;
      }
      DAT_048afef4 = iVar6 == 1;
      DAT_047c3898 = bVar2;
      nn::os::SignalEvent((EventType *)&DAT_048b00d8);
      puVar5 = PTR_DAT_047e6d38;
      if (iVar6 != 1) {
        return iVar6;
      }
      DAT_048b0100 = 2;
      uVar7 = *(uint *)(PTR_DAT_047e6d38 + 0xb8);
      if (0 < (int)uVar7) {
        lVar10 = (ulong)uVar7 + 1;
        puVar1 = PTR_DAT_047e6ff0 + 0x10;
        do {
          uVar7 = uVar7 - 1;
          pcVar8 = *(code **)(*(long *)(puVar5 + 0xb0) + (ulong)uVar7 * 0x18);
          if (((DAT_048afc00 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_048afc00), iVar6 != 0))
          {
            DAT_048afbf8 = puVar1;
            __cxa_guard_release(&DAT_048afc00);
          }
          (*pcVar8)(&DAT_048afbf8,0x800,
                    *(undefined8 *)(*(long *)(puVar5 + 0xb0) + (ulong)uVar7 * 0x18 + 8));
          lVar10 = lVar10 + -1;
        } while (1 < lVar10);
      }
    }
    else {
      DAT_048b0100 = 3;
      if ((param_1 & 1) != 0) {
        DAT_048b0100 = 1;
      }
      if (DAT_048b0104 <= param_3) {
        DAT_048b0104 = param_3;
      }
      if (*(uint *)PTR_DAT_047e6fc0 <= DAT_048b0104) goto LAB_034a052c;
      DAT_048b0104 = 0;
      if ((param_1 & 1) != 0) goto LAB_034a04e8;
      DAT_047c3898 = 1;
      DAT_047c389c = 0xbf800000;
      DAT_048b0100 = 0;
      DAT_047c3894 = uVar4;
      for (lVar10 = DAT_048b0118; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x20)) {
        if ((1 < *(int *)(lVar10 + 0x468) - 1U) &&
           (*(undefined4 *)(lVar10 + 0x468) = 2, *puVar1 != '\0')) {
          nn::os::SignalEvent((EventType *)puVar5);
        }
      }
      FUN_0349f034(1);
      puVar5 = PTR_DAT_047e6d38;
      uVar7 = *(uint *)(PTR_DAT_047e6d38 + 200);
      if ((int)uVar7 < 1) {
        return 1;
      }
      lVar10 = (ulong)uVar7 + 1;
      puVar1 = PTR_DAT_047e6ff0 + 0x10;
      do {
        uVar7 = uVar7 - 1;
        pcVar8 = *(code **)(*(long *)(puVar5 + 0xc0) + (ulong)uVar7 * 0x18);
        if (((DAT_048afc00 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_048afc00), iVar6 != 0)) {
          DAT_048afbf8 = puVar1;
          __cxa_guard_release(&DAT_048afc00);
        }
        (*pcVar8)(&DAT_048afbf8,0x1000,
                  *(undefined8 *)(*(long *)(puVar5 + 0xc0) + (ulong)uVar7 * 0x18 + 8));
        lVar10 = lVar10 + -1;
      } while (1 < lVar10);
    }
    iVar6 = 1;
  }
  return iVar6;
}


