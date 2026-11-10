/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349c8dc; name: FUN_0349c8dc
 */


long FUN_0349c8dc(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar3 = *(uint **)(param_1 + 0xb8);
  uVar5 = *(uint *)(param_1 + 0xc0);
  puVar4 = puVar3;
  if ((uVar5 != 0) && (*puVar3 != param_2)) {
    lVar6 = (ulong)uVar5 * 0x10;
    puVar7 = puVar3;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) goto LAB_0349c978;
      puVar4 = puVar7 + 4;
      puVar1 = puVar7 + 4;
      puVar7 = puVar4;
    } while (*puVar1 != param_2);
  }
  if (puVar4 == puVar3 + (ulong)uVar5 * 4) {
LAB_0349c978:
    uVar8 = *(uint *)(param_1 + 0xc4);
    if (uVar5 < uVar8) {
LAB_0349c9bc:
      if (uVar5 < uVar8) {
        uVar8 = *(uint *)(param_1 + 0xc0);
        uVar5 = uVar8 + 1;
        *(uint *)(param_1 + 0xc0) = uVar5;
        puVar4 = (uint *)0x0;
        if (puVar3 == (uint *)0x0) goto LAB_0349c9f8;
        puVar4 = puVar3 + (ulong)uVar8 * 4;
        *puVar4 = param_2;
        goto LAB_0349c950;
      }
    }
    else {
      iVar2 = uVar8 + (uVar8 >> 1);
      if (uVar8 == 0) {
        iVar2 = 1;
      }
      uVar8 = iVar2 + uVar8;
      puVar3 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar3,(ulong)uVar8 << 4);
      if (puVar3 != (uint *)0x0) {
        *(uint **)(param_1 + 0xb8) = puVar3;
        *(uint *)(param_1 + 0xc4) = uVar8;
        goto LAB_0349c9bc;
      }
    }
  }
  else {
LAB_0349c950:
    puVar4 = puVar4 + 2;
    puVar4[0] = 0;
    puVar4[1] = 0;
    if ((param_2 & 0xff9c0000) == 0) {
      FUN_034cdb74(param_2,*(undefined8 *)(param_1 + 0x68),puVar4);
    }
    else {
      FUN_034cdef4(*(undefined4 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x68),puVar4);
    }
    if (*(long *)puVar4 != 0) {
      return *(long *)puVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0xc0);
  puVar4 = *(uint **)(param_1 + 0xb8);
LAB_0349c9f8:
  puVar3 = puVar4 + (ulong)uVar5 * 4;
  if ((uVar5 != 0) && (*puVar4 != param_2)) {
    lVar6 = (ulong)uVar5 * 0x10;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) {
        puVar4 = puVar3;
        goto LAB_0349ca40;
      }
      puVar7 = puVar4 + 4;
      puVar4 = puVar4 + 4;
    } while (*puVar7 != param_2);
  }
LAB_0349ca40:
  if (puVar3 != puVar4) {
    if (puVar4 < puVar3 + -4) {
      do {
        puVar7 = puVar4 + 4;
        *(undefined8 *)puVar4 = *(undefined8 *)puVar7;
        *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar4 + 6);
        puVar4 = puVar7;
      } while (puVar7 < puVar3 + -4);
      uVar5 = *(uint *)(param_1 + 0xc0);
    }
    *(uint *)(param_1 + 0xc0) = uVar5 - 1;
  }
  return 0;
}


