/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02711978; name: FUN_02711978
 */


void FUN_02711978(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  memcpy(param_1 + 1,param_2 + 1,0x28);
  param_2[1] = 0;
  memcpy(param_1 + 6,param_2 + 6,0x28);
  lVar2 = param_2[0xb];
  param_1[0xb] = lVar2;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  if (lVar2 != 0) {
    uVar4 = param_1[1];
    uVar3 = *(ulong *)(param_1[6] + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar3 = uVar4 - 1 & uVar3;
    }
    else if (uVar4 <= uVar3) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar3 / uVar4;
      }
      uVar3 = uVar3 - uVar1 * uVar4;
    }
    *(long **)(*param_1 + uVar3 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


