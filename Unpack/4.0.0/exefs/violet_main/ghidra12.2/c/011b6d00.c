/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b6d00; name: FUN_011b6d00
 */


void FUN_011b6d00(long param_1,uint param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined *puVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  ulong uVar9;
  
  uVar5 = -param_2;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    **(undefined2 **)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
  }
  puVar2 = &UNK_03d61f78;
  if (param_5 != 0) {
    puVar2 = &DAT_03d61f8e;
  }
  if ((int)param_2 < 0) {
    uVar8 = 0x30fc;
    if (param_5 != 0) {
      uVar8 = 0x2d;
    }
    if (*(char *)(param_1 + 0x54) != '\0') {
      uVar3 = *(ushort *)(param_1 + 0x52);
      if (uVar3 + 1 < (uint)*(ushort *)(param_1 + 0x50)) {
        *(ushort *)(param_1 + 0x52) = uVar3 + 1;
        *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)uVar3 * 2) = uVar8;
        *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_1 + 0x52) * 2) = 0;
      }
    }
  }
  uVar6 = *(uint *)(&DAT_03d61fa4 + (ulong)(param_3 - 1) * 4);
  do {
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = uVar5 / uVar6;
    }
    uVar7 = uVar7 & 0xffff;
    uVar5 = uVar5 - uVar7 * uVar6;
    if (9 < uVar7) {
      uVar7 = 10;
    }
    if (((param_4 == 2) || (uVar6 == 1)) || (uVar7 != 0)) {
      if (*(char *)(param_1 + 0x54) != '\0') {
        sVar4 = *(short *)(puVar2 + (ulong)uVar7 * 2);
        uVar3 = *(ushort *)(param_1 + 0x52);
        uVar9 = (ulong)uVar3;
        if (uVar3 + 1 < (uint)*(ushort *)(param_1 + 0x50)) {
          *(ushort *)(param_1 + 0x52) = uVar3 + 1;
          *(short *)(*(long *)(param_1 + 0x30) + uVar9 * 2) = sVar4;
          uVar9 = (ulong)*(ushort *)(param_1 + 0x52);
        }
        else {
          if (sVar4 != 0 || uVar3 + 1 != (uint)*(ushort *)(param_1 + 0x50)) goto LAB_011b6db4;
          *(ushort *)(param_1 + 0x52) = uVar3 + 1;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x30) + uVar9 * 2) = 0;
      }
LAB_011b6db4:
      param_4 = 2;
    }
    else if (param_4 == 1) {
      if (*(char *)(param_1 + 0x54) != '\0') {
        uVar3 = *(ushort *)(param_1 + 0x52);
        if (uVar3 + 1 < (uint)*(ushort *)(param_1 + 0x50)) {
          *(ushort *)(param_1 + 0x52) = uVar3 + 1;
          uVar8 = 0x3000;
          if (param_5 != 0) {
            uVar8 = 0x20;
          }
          *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)uVar3 * 2) = uVar8;
          *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_1 + 0x52) * 2) = 0;
        }
      }
      param_4 = 1;
    }
    bVar1 = uVar6 < 10;
    uVar6 = uVar6 / 10;
    if (bVar1) {
      return;
    }
  } while( true );
}


