/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a7d70; name: FUN_031a7d70
 */


void FUN_031a7d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = *(undefined4 *)(param_2 + 3);
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  puVar1 = param_1 + 6;
  *(undefined4 *)(param_1 + 3) = uVar3;
  param_1[4] = puVar1;
  param_1[5] = 0x8000001000000000;
  if (param_2 != param_1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
    puVar4 = (undefined8 *)param_2[4];
    if (puVar4 == param_2 + 6) {
      param_1[4] = puVar1;
      uVar2 = puVar4[1];
      *puVar1 = *puVar4;
      param_1[7] = uVar2;
      uVar2 = puVar4[3];
      param_1[8] = puVar4[2];
      param_1[9] = uVar2;
      uVar2 = puVar4[5];
      param_1[10] = puVar4[4];
      param_1[0xb] = uVar2;
      uVar2 = puVar4[7];
      param_1[0xc] = puVar4[6];
      param_1[0xd] = uVar2;
      uVar2 = puVar4[9];
      param_1[0xe] = puVar4[8];
      param_1[0xf] = uVar2;
      uVar2 = puVar4[0xb];
      param_1[0x10] = puVar4[10];
      param_1[0x11] = uVar2;
      uVar2 = puVar4[0xd];
      param_1[0x12] = puVar4[0xc];
      param_1[0x13] = uVar2;
      uVar2 = puVar4[0xf];
      param_1[0x14] = puVar4[0xe];
      param_1[0x15] = uVar2;
      uVar2 = puVar4[0x11];
      param_1[0x16] = puVar4[0x10];
      param_1[0x17] = uVar2;
      uVar2 = puVar4[0x13];
      param_1[0x18] = puVar4[0x12];
      param_1[0x19] = uVar2;
      uVar2 = puVar4[0x15];
      param_1[0x1a] = puVar4[0x14];
      param_1[0x1b] = uVar2;
      uVar2 = puVar4[0x17];
      param_1[0x1c] = puVar4[0x16];
      param_1[0x1d] = uVar2;
      uVar2 = puVar4[0x19];
      param_1[0x1e] = puVar4[0x18];
      param_1[0x1f] = uVar2;
      uVar2 = puVar4[0x1b];
      param_1[0x20] = puVar4[0x1a];
      param_1[0x21] = uVar2;
      uVar2 = puVar4[0x1d];
      param_1[0x22] = puVar4[0x1c];
      param_1[0x23] = uVar2;
      uVar2 = puVar4[0x1f];
      param_1[0x24] = puVar4[0x1e];
      param_1[0x25] = uVar2;
    }
    else {
      param_1[4] = puVar4;
      param_2[4] = param_2 + 6;
      *(undefined4 *)((long)param_2 + 0x2c) = 0x80000010;
    }
    *(undefined4 *)(param_2 + 5) = 0;
  }
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_2 + 0x29) = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x26] = 0;
  return;
}


