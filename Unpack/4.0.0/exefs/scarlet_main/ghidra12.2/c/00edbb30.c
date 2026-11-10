/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00edbb30; name: FUN_00edbb30
 */


undefined8 FUN_00edbb30(byte *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  
  bVar2 = *param_2;
  bVar5 = bVar2 < *param_1;
  if (bVar2 == *param_1) {
    sVar3 = *(short *)(param_2 + 6);
    sVar4 = *(short *)(param_1 + 6);
    if (sVar3 == sVar4) {
      sVar3 = *(short *)(param_2 + 2);
      sVar4 = *(short *)(param_1 + 2);
    }
    bVar5 = sVar3 < sVar4;
  }
  bVar6 = *param_3 < bVar2;
  if (*param_3 == bVar2) {
    sVar3 = *(short *)(param_3 + 6);
    sVar4 = *(short *)(param_2 + 6);
    if (sVar3 == sVar4) {
      sVar3 = *(short *)(param_3 + 2);
      sVar4 = *(short *)(param_2 + 2);
    }
    bVar6 = sVar3 < sVar4;
  }
  if (bVar5) {
    uVar7 = *(undefined8 *)param_1;
    if (bVar6) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar7;
      return 1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar7;
    uVar1 = (uint)uVar7 & 0xff;
    if (*param_3 == uVar1) {
      sVar3 = (short)((ulong)uVar7 >> 0x30);
      if (*(short *)(param_3 + 6) == sVar3) {
        if ((int)(uint)uVar7 >> 0x10 <= (int)*(short *)(param_3 + 2)) {
          return 1;
        }
      }
      else if (sVar3 <= *(short *)(param_3 + 6)) {
        return 1;
      }
    }
    else if (uVar1 <= *param_3) {
      return 1;
    }
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar7;
  }
  else {
    if (!bVar6) {
      return 0;
    }
    uVar7 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar7;
    if (*param_2 == *param_1) {
      sVar3 = *(short *)(param_2 + 6);
      sVar4 = *(short *)(param_1 + 6);
      if (sVar3 == sVar4) {
        sVar3 = *(short *)(param_2 + 2);
        sVar4 = *(short *)(param_1 + 2);
      }
      if (sVar4 <= sVar3) {
        return 1;
      }
    }
    else if (*param_1 <= *param_2) {
      return 1;
    }
    uVar7 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar7;
  }
  return 2;
}


