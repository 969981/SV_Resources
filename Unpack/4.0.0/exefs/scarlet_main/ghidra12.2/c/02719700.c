/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02719700; name: FUN_02719700
 */


void FUN_02719700(void *param_1,long *param_2,long *param_3,void *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *param_2;
  if (lVar2 != *param_3) {
    do {
      FUN_02719984(param_4,lVar2 + 0x10);
      lVar2 = *(long *)*param_2;
      *param_2 = lVar2;
      if (lVar2 != 0) {
        uVar4 = param_2[2];
        uVar3 = *(ulong *)(lVar2 + 8);
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
        if (uVar3 != param_2[1]) {
          lVar2 = 0;
          *param_2 = 0;
        }
      }
    } while (lVar2 != *param_3);
  }
  memcpy(param_1,param_4,0x30);
  return;
}


