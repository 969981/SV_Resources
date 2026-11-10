/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bcdb0; name: FUN_033bcdb0
 */


undefined4 FUN_033bcdb0(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  int local_70 [2];
  undefined8 local_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [8];
  long local_48;
  
  if (*(int *)(param_1 + 0x88) != 0) goto LAB_033bcdd4;
  *(byte *)(param_1 + 0x20) =
       (byte)(*(uint *)(*(long *)(param_1 + 0x18) + 699) >> 0x14) & 2 |
       *(byte *)(param_1 + 0x20) & 0xfd;
  if (param_2 == 0) {
    return 2;
  }
  piVar1 = (int *)(param_1 + 0x38);
  local_70[0] = 0;
  local_68 = 0;
  iVar12 = FUN_0347e990(param_2,param_3,auStack_50,param_1 + 0x40,param_1 + 0x34,piVar1,
                        (int *)(param_1 + 0x2c),(uint *)(param_1 + 0x30),local_70,auStack_60,0);
  if (iVar12 != 1) {
    return 7;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(local_48 + 4);
  *(uint *)(param_1 + 0x5c) = (uint)*(ushort *)(local_48 + 2);
  iVar12 = *(int *)(local_48 + 0x18);
  *(int *)(param_1 + 0x24) = iVar12;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(local_48 + 0x1c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(local_48 + 0x20);
  uVar13 = *(uint *)(local_48 + 0x24);
  *(uint *)(param_1 + 0xa0) = uVar13;
  *(uint *)(param_1 + 0x70) = (uint)*(ushort *)(local_48 + 0x12);
  *(uint *)(param_1 + 0x88) = uVar13 >> 2;
  *(uint *)(param_1 + 0xa4) = *(int *)(param_1 + 0x2c) - uVar13;
  if (local_70[0] != 0) {
    *(undefined8 *)(param_1 + 0x10) = local_68;
  }
  if (*piVar1 == 0) {
    *piVar1 = iVar12 + -1;
  }
  sVar6 = *(short *)(local_48 + 2);
  uVar14 = *(undefined4 *)(local_48 + 0x14);
  lVar15 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar15 + 600) = *(undefined4 *)(local_48 + 4);
  *(undefined4 *)(lVar15 + 0x25c) = uVar14;
  *(undefined1 *)(lVar15 + 0x262) = 0;
  *(ushort *)(lVar15 + 0x260) = sVar6 << 7 | 0x10;
  if (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x34)) {
    return 2;
  }
  uVar13 = *(uint *)(param_1 + 0x30);
  if (param_3 < *(int *)(param_1 + 0x2c) + uVar13) {
    return 2;
  }
  if (*(uint *)(param_1 + 0xa0) != 0) {
    *(ulong *)(param_1 + 0x98) = param_2 + (ulong)uVar13;
  }
  *(ulong *)(param_1 + 0xb8) = param_2 + (ulong)uVar13 + (ulong)*(uint *)(param_1 + 0xa0);
  puVar11 = PTR_DAT_047e6970;
  iVar12 = FUN_0351557c(PTR_DAT_047e6970,*(undefined4 *)(param_1 + 0x58),
                        *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x70),
                        param_1 + 0x60,(long *)(param_1 + 0x68));
  puVar10 = PTR_DAT_047e2fd0;
  if (iVar12 != 1) {
LAB_033bd0c4:
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
    return 2;
  }
  lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))
                     (5,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x5c) * 2);
  *(long *)(param_1 + 0xa8) = lVar15;
  if (lVar15 == 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      puVar11[(ulong)*(uint *)(param_1 + 0x60) + 8] = 2;
      *(undefined8 *)(param_1 + 0x68) = 0;
      if (*(long *)(param_1 + 0xa8) != 0) {
        (**(code **)(puVar10 + 0x30))(5);
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
    }
    goto LAB_033bd0c4;
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
  iVar12 = *(int *)(param_1 + 0x58) / 400;
  lVar15 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(int *)(param_1 + 0x8c) = iVar12;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (lVar15 == 0) {
    *(undefined2 *)(param_1 + 0x54) = 1;
LAB_033bd0ec:
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar13 = *(int *)(param_1 + 0x88) - 1;
  }
  else {
    sVar6 = *(short *)(lVar15 + 0x2b8);
    *(short *)(param_1 + 0x54) = sVar6;
    if (sVar6 == 1) goto LAB_033bd0ec;
    uVar5 = *(uint *)(param_1 + 0x70);
    uVar13 = 0;
    if (uVar5 != 0) {
      uVar13 = *(uint *)(param_1 + 0x34) / uVar5;
    }
    uVar7 = *(int *)(param_1 + 0x88) - 1;
    uVar3 = iVar12 + *(int *)(param_1 + 0x38);
    if (uVar7 <= uVar13) {
      uVar13 = uVar7;
    }
    *(uint *)(param_1 + 0x80) = uVar13;
    uVar13 = uVar7;
    if (uVar3 < *(int *)(param_1 + 0x24) - 1U) {
      uVar13 = 0;
      if (uVar5 != 0) {
        uVar13 = uVar3 / uVar5;
      }
      if (uVar7 <= uVar13) {
        uVar13 = uVar7;
      }
    }
  }
  *(uint *)(param_1 + 0x84) = uVar13;
  if ((*(byte *)(lVar15 + 0x2bd) >> 6 & 1) != 0) {
    uVar13 = FUN_034f988c(param_1);
    if (*(uint *)(param_1 + 0x24) <= uVar13) {
      return 2;
    }
    uVar5 = *(uint *)(param_1 + 0x70);
    uVar3 = *(uint *)(param_1 + 0x58);
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = (uVar5 * 1000) / uVar3;
    }
    uVar8 = *(int *)(param_1 + 0x88) - 1;
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar13 / uVar5;
    }
    uVar4 = uVar9;
    if (uVar8 <= uVar9) {
      uVar4 = uVar8;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = 0x50 / uVar7;
    }
    if (uVar4 <= uVar8) {
      uVar8 = uVar4;
    }
    *(uint *)(param_1 + 0x7c) = uVar4 - uVar8;
    *(uint *)(param_1 + 0x8c) = (uVar13 - uVar9 * uVar5) + (int)uVar3 / 400 + uVar8 * uVar5;
    uVar5 = *(uint *)(*(long *)(param_1 + 0x98) + (ulong)(uVar4 - uVar8) * 4);
    *(uint *)(param_1 + 0x28) = uVar13;
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb8) + (ulong)uVar5;
    lVar15 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(lVar15 + 0x2b4) = 0;
    puVar2 = (uint *)(lVar15 + 699);
    *puVar2 = *puVar2 & 0xfe3fffff;
  }
LAB_033bcdd4:
  lVar15 = *(long *)(param_1 + 0x68);
  if ((*(int *)(lVar15 + 0x28) != *(int *)(lVar15 + 0x24)) &&
     (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x88))) {
    do {
      FUN_033bcc58(param_1);
      if (*(int *)(*(long *)(param_1 + 0x68) + 0x28) == *(int *)(*(long *)(param_1 + 0x68) + 0x24))
      break;
    } while (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x88));
    nn::os::SignalEvent((EventType *)(PTR_DAT_047e6970 + 0xa38));
    lVar15 = *(long *)(param_1 + 0x68);
  }
  uVar14 = 0x3f;
  if (*(int *)(lVar15 + 0x3c) != 0) {
    uVar14 = 1;
  }
  return uVar14;
}


