/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146b4b8; name: FUN_0146b4b8
 */


void FUN_0146b4b8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 == puVar2) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    puVar3 = puVar4 + -6;
    uVar6 = *puVar3;
    uVar1 = puVar4[-4];
    *(undefined8 *)(lVar5 + -0x28) = puVar4[-5];
    *(undefined8 *)(lVar5 + -0x20) = uVar1;
    *(undefined8 *)(lVar5 + -0x30) = uVar6;
    uVar1 = puVar4[-3];
    uVar6 = puVar4[-1];
    puVar4[-5] = 0;
    puVar4[-4] = 0;
    *puVar3 = 0;
    *(undefined8 *)(lVar5 + -0x10) = puVar4[-2];
    *(undefined8 *)(lVar5 + -8) = uVar6;
    *(undefined8 *)(lVar5 + -0x18) = uVar1;
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    puVar4[-3] = 0;
    lVar5 = param_2[1] + -0x30;
    param_2[1] = lVar5;
    while (puVar3 != puVar2) {
      puVar4 = puVar3 + -6;
      uVar1 = puVar3[-5];
      uVar6 = puVar3[-4];
      *(undefined8 *)(lVar5 + -0x30) = *puVar4;
      *(undefined8 *)(lVar5 + -0x28) = uVar1;
      *(undefined8 *)(lVar5 + -0x20) = uVar6;
      uVar6 = puVar3[-1];
      uVar1 = puVar3[-2];
      *puVar4 = 0;
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      *(undefined8 *)(lVar5 + -0x18) = puVar3[-3];
      *(undefined8 *)(lVar5 + -0x10) = uVar1;
      *(undefined8 *)(lVar5 + -8) = uVar6;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      lVar5 = param_2[1] + -0x30;
      param_2[1] = lVar5;
      puVar3 = puVar4;
    }
    puVar2 = (undefined8 *)*param_1;
  }
  *param_1 = lVar5;
  param_2[1] = puVar2;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


