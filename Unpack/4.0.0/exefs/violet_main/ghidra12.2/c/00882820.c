/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00882820; name: FUN_00882820
 */


undefined8 FUN_00882820(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float local_70 [12];
  
  if (param_1 == (uint *)0x0) {
    return 0x80260201;
  }
  if (param_2 == (uint *)0x0) {
    return 0x80260201;
  }
  *param_1 = param_2[2];
  param_1[1] = param_2[4];
  param_1[2] = param_2[5];
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 3) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xb) = uVar2;
  *(undefined8 *)(param_1 + 9) = uVar3;
  *(undefined8 *)(param_1 + 7) = uVar1;
  *(char *)(param_1 + 0xf) = (char)param_2[0x12];
  param_1[0x10] = *param_2;
  iVar5 = strcmp("Default",*(char **)PTR_PTR_047d1e70);
  if (iVar5 != 0) {
    return 0x80800006;
  }
  local_70[8] = 0.0;
  local_70[9] = 0.0;
  local_70[10] = 0.0;
  local_70[0xb] = 0.0;
  local_70[4] = 0.0;
  local_70[5] = 0.0;
  local_70[6] = 0.0;
  local_70[7] = 0.0;
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_70[2] = 0.0;
  local_70[3] = 0.0;
  uVar4 = *param_1;
  uVar6 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    pfVar7 = (float *)(param_1 + 0x12);
    uVar8 = uVar6;
    do {
      fVar9 = exp2f(local_70[(uint)pfVar7[-0xf]] * 0.1660964);
      *pfVar7 = fVar9;
      uVar8 = uVar8 - 1;
      pfVar7 = pfVar7 + 1;
    } while (uVar8 != 0);
    if (0xb < uVar4) goto LAB_0088293c;
  }
  memset(param_1 + uVar6 + 0x12,0,(ulong)(0xb - uVar4) * 4 + 4);
LAB_0088293c:
  param_1[0x11] = 3;
  return 0;
}


