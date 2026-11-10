/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186ddc0; name: FUN_0186ddc0
 */


void FUN_0186ddc0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar2 = param_2[1];
  }
  else {
    plVar1 = param_1 + 3;
    FUN_0186db10(plVar1,param_2[1] + -0x68,lVar4 + -0x68);
    lVar3 = param_2[1];
    lVar2 = lVar3 + -0x68;
    param_2[1] = lVar2;
    if (lVar4 + -0x68 != lVar5) {
      FUN_0186db10(plVar1,lVar3 + -0xd0,lVar4 + -0xd0);
      lVar3 = param_2[1];
      lVar2 = lVar3 + -0x68;
      param_2[1] = lVar2;
      if (lVar4 + -0xd0 != lVar5) {
        do {
          FUN_0186db10(plVar1,lVar3 + -0xd0,lVar4 + -0x138);
          lVar3 = param_2[1];
          lVar4 = lVar4 + -0x68;
          lVar2 = lVar3 + -0x68;
          param_2[1] = lVar2;
        } while (lVar5 + 0xd0 != lVar4);
      }
    }
    lVar5 = *param_1;
  }
  *param_1 = lVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


