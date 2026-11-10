/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297b2d4; name: FUN_0297b2d4
 */


void FUN_0297b2d4(long param_1,long param_2,long *param_3,long *param_4,byte param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar2 = (**(code **)(*param_4 + 0x98))(param_4);
  puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),
                                uVar1);
  if (puVar4 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar4 & 0xff;
    if (4 < (int)*puVar4) {
      uVar6 = 0;
    }
  }
  puVar4 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x290) + 8) + 0x50),
                                uVar2);
  if (puVar4 == (uint *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4 & 0xff;
    if (4 < (int)*puVar4) {
      uVar7 = 0;
    }
  }
  uVar3 = FUN_0128ab58(*(undefined8 *)(param_2 + 0x290),uVar1,uVar2);
  if (uVar6 == 0) {
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (param_5 == 0) {
      puVar5 = (ushort *)(param_1 + 8);
    }
    else if (param_5 < 8) {
      if (param_5 == 7) {
        return;
      }
      puVar5 = (ushort *)(param_1 + 0xc);
    }
    else {
      puVar5 = (ushort *)(param_1 + 10);
    }
  }
  else {
    if (uVar7 != 0) {
      return;
    }
    if (((uVar3 ^ 1) & 1) == 0) {
      return;
    }
    if (param_5 == 0) {
      puVar5 = (ushort *)(param_1 + 0xe);
    }
    else if (param_5 < 8) {
      if (param_5 == 7) {
        return;
      }
      puVar5 = (ushort *)(param_1 + 0x12);
    }
    else {
      puVar5 = (ushort *)(param_1 + 0x10);
    }
  }
  if (*puVar5 < 9999) {
    *puVar5 = *puVar5 + 1;
  }
  return;
}


