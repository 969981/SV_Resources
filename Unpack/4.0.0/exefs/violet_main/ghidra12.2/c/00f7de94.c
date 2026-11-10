/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7de94; name: FUN_00f7de94
 */


void FUN_00f7de94(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4,
                 undefined8 param_5)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_1[1] = 0;
  param_2[1] = 0;
  param_3[1] = 0;
  uVar3 = FUN_00f7e27c(param_5);
  uVar4 = FUN_00f7e28c(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00f7e27c(param_5);
    uVar4 = FUN_00f7e3e0(uVar3,0);
    uVar3 = FUN_00f7e284(param_5);
    uVar3 = FUN_00f7e3c8(uVar3,0);
    cVar1 = FUN_00f7e274();
    if (cVar1 != '\0') {
      cVar1 = FUN_00f7e454(uVar3);
      uVar5 = uVar4 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_00f7e274(uVar3);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    if ((*(char *)(*(long *)(param_4 + 0x38) + 0x710) == '\0') && (*(short *)(param_4 + 0x8c) != 0))
    {
      uVar3 = FUN_02923b0c(param_5);
      sVar2 = FUN_02923b14(uVar3,0);
      if (sVar2 == 0) {
        param_3[uVar4 & 0xff] = param_3[uVar4 & 0xff] + '\x01';
      }
    }
  }
  uVar3 = FUN_00f7e27c(param_5);
  uVar4 = FUN_00f7e28c(uVar3,1);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00f7e27c(param_5);
    uVar4 = FUN_00f7e3e0(uVar3,1);
    uVar3 = FUN_00f7e284(param_5);
    uVar3 = FUN_00f7e3c8(uVar3,1);
    cVar1 = FUN_00f7e274();
    if (cVar1 != '\0') {
      cVar1 = FUN_00f7e454(uVar3);
      uVar5 = uVar4 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_00f7e274(uVar3);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    if ((*(char *)(*(long *)(param_4 + 0x38) + 0x710) == '\0') && (*(short *)(param_4 + 0x8c) != 0))
    {
      uVar3 = FUN_02923b0c(param_5);
      sVar2 = FUN_02923b14(uVar3,1);
      if (sVar2 == 0) {
        param_3[uVar4 & 0xff] = param_3[uVar4 & 0xff] + '\x01';
      }
    }
  }
  uVar3 = FUN_00f7e27c(param_5);
  uVar4 = FUN_00f7e28c(uVar3,2);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00f7e27c(param_5);
    uVar4 = FUN_00f7e3e0(uVar3,2);
    uVar3 = FUN_00f7e284(param_5);
    uVar3 = FUN_00f7e3c8(uVar3,2);
    cVar1 = FUN_00f7e274();
    if (cVar1 != '\0') {
      cVar1 = FUN_00f7e454(uVar3);
      uVar5 = uVar4 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_00f7e274(uVar3);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    if ((*(char *)(*(long *)(param_4 + 0x38) + 0x710) == '\0') && (*(short *)(param_4 + 0x8c) != 0))
    {
      uVar3 = FUN_02923b0c(param_5);
      sVar2 = FUN_02923b14(uVar3,2);
      if (sVar2 == 0) {
        param_3[uVar4 & 0xff] = param_3[uVar4 & 0xff] + '\x01';
      }
    }
  }
  uVar3 = FUN_00f7e27c(param_5);
  uVar4 = FUN_00f7e28c(uVar3,3);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00f7e27c(param_5);
    uVar4 = FUN_00f7e3e0(uVar3,3);
    uVar3 = FUN_00f7e284(param_5);
    uVar3 = FUN_00f7e3c8(uVar3,3);
    cVar1 = FUN_00f7e274();
    if (cVar1 != '\0') {
      cVar1 = FUN_00f7e454(uVar3);
      uVar5 = uVar4 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_00f7e274(uVar3);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    if ((*(char *)(*(long *)(param_4 + 0x38) + 0x710) == '\0') && (*(short *)(param_4 + 0x8c) != 0))
    {
      uVar3 = FUN_02923b0c(param_5);
      sVar2 = FUN_02923b14(uVar3,3);
      if (sVar2 == 0) {
        param_3[uVar4 & 0xff] = param_3[uVar4 & 0xff] + '\x01';
      }
    }
  }
  uVar3 = FUN_00f7e27c(param_5);
  uVar4 = FUN_00f7e28c(uVar3,4);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00f7e27c(param_5);
    uVar4 = FUN_00f7e3e0(uVar3,4);
    uVar3 = FUN_00f7e284(param_5);
    uVar3 = FUN_00f7e3c8(uVar3,4);
    cVar1 = FUN_00f7e274();
    if (cVar1 != '\0') {
      cVar1 = FUN_00f7e454(uVar3);
      uVar5 = uVar4 & 0xff;
      param_1[uVar5] = param_1[uVar5] + cVar1;
      cVar1 = FUN_00f7e274(uVar3);
      param_2[uVar5] = param_2[uVar5] + cVar1;
    }
    if ((*(char *)(*(long *)(param_4 + 0x38) + 0x710) == '\0') && (*(short *)(param_4 + 0x8c) != 0))
    {
      uVar3 = FUN_02923b0c(param_5);
      sVar2 = FUN_02923b14(uVar3,4);
      if (sVar2 == 0) {
        param_3[uVar4 & 0xff] = param_3[uVar4 & 0xff] + '\x01';
      }
    }
  }
  return;
}


