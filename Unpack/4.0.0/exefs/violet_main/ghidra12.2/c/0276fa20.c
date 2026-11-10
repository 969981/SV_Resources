/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0276fa20; name: FUN_0276fa20
 */


ulong FUN_0276fa20(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  do {
    lVar4 = param_1[0xf] - param_1[0xe];
    if (lVar4 == 0) {
      uVar8 = param_1[1] - *param_1 >> 7;
      FUN_0276fb4c(param_1,param_2);
      goto LAB_0276fb2c;
    }
    uVar8 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar4 + param_1[0xe] + -8;
    uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar7) =
         *(ulong *)(param_1[7] + uVar7) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(param_1[1] - *param_1 >> 7) <= uVar8);
  puVar1 = (undefined8 *)(*param_1 + uVar8 * 0x80);
  pcVar5 = (code *)puVar1[1];
  if (pcVar5 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar5)(puVar1 + 4);
  }
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  puVar1[6] = param_2[2];
  puVar1[7] = uVar3;
  puVar1[4] = uVar6;
  puVar1[5] = uVar2;
  uVar6 = param_2[4];
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[8] = uVar6;
  FUN_00cacc64(puVar1 + 9,param_2 + 5);
  *puVar1 = &LAB_0276ff68;
  puVar1[1] = &LAB_0276ff70;
  puVar1[2] = &LAB_02770080;
  puVar1[3] = &LAB_027700b0;
  if ((ulong)param_1[0x15] <= uVar8) {
LAB_0276fb2c:
    param_1[0x15] = uVar8 + 1;
  }
  return uVar8;
}


