/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006fc214; name: FUN_006fc214
 */


ulong * FUN_006fc214(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (((long *)param_1[3] == (long *)param_2[3]) ||
     (uVar3 = (**(code **)(*(long *)param_1[3] + 0x20))(), (uVar3 & 1) != 0)) {
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *(undefined2 *)param_1 = 0;
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    *(undefined2 *)param_2 = 0;
  }
  else {
    FUN_01d0e1a8(param_1,param_2);
  }
  puVar1 = param_1 + 4;
  puVar2 = param_2 + 4;
  if (((long *)param_1[7] == (long *)param_2[7]) ||
     (uVar3 = (**(code **)(*(long *)param_1[7] + 0x20))(), (uVar3 & 1) != 0)) {
    if ((*puVar1 & 1) != 0) {
      (**(code **)(*(long *)param_1[7] + 0x18))
                ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 4) = 0;
    }
    uVar4 = param_2[5];
    uVar3 = *puVar2;
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    *puVar1 = uVar3;
    *(undefined2 *)puVar2 = 0;
  }
  else {
    FUN_01d0e1a8(puVar1,puVar2);
  }
  return param_1;
}


