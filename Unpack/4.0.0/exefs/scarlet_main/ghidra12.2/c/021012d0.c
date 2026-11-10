/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021012d0; name: FUN_021012d0
 */


undefined8 FUN_021012d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((long)param_2 + 0xc);
  if (*(uint *)((long)param_1 + 0xc) < uVar4) {
    if (uVar4 < *(uint *)((long)param_3 + 0xc)) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar3;
      *param_3 = uVar1;
      param_3[1] = uVar2;
    }
    else {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      *param_2 = uVar1;
      param_2[1] = uVar2;
      if ((uint)((ulong)uVar2 >> 0x20) < *(uint *)((long)param_3 + 0xc)) {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar3;
        *param_3 = uVar1;
        param_3[1] = uVar2;
        return 2;
      }
    }
  }
  else {
    if (*(uint *)((long)param_3 + 0xc) <= uVar4) {
      return 0;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    if (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_2 + 0xc)) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      *param_2 = uVar1;
      param_2[1] = uVar2;
      return 2;
    }
  }
  return 1;
}


