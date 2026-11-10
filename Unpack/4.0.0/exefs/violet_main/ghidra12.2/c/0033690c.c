/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033690c; name: FUN_0033690c
 */


ulong * FUN_0033690c(ulong *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  puVar1 = PTR_LAB_047cba48;
  if (param_2 != param_1) {
    if ((*param_2 & 1) == 0) {
      FUN_003385b8(param_1,param_2 + 1,*param_2 >> 1);
    }
    else {
      uVar4 = *param_1;
      uVar2 = uVar4 & 1;
      if ((uVar4 & 1) == 0) {
        puVar3 = param_1 + 1;
      }
      else {
        puVar3 = (ulong *)param_1[1];
      }
      if ((uVar4 >> 1 != 0) && (uVar4 = uVar4 >> 1, puVar3 != (ulong *)0x0)) {
        do {
          uVar2 = uVar4 - 1;
          puVar5 = (undefined8 *)puVar3[uVar4 - 1];
          puVar3[uVar4 - 1] = 0;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5);
            FUN_0049e790(puVar1,puVar5);
          }
          uVar4 = uVar2;
        } while (uVar2 != 0);
        uVar2 = *param_1 & 1;
      }
      if (uVar2 != 0) {
        FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      }
      *param_1 = *param_2;
      uVar2 = param_2[2];
      uVar4 = param_2[1];
      uVar6 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar6;
      param_1[2] = uVar2;
      param_1[1] = uVar4;
      *param_2 = 0;
    }
  }
  return param_1;
}


