/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d10f0; name: FUN_021d10f0
 */


void FUN_021d10f0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar2 = param_1[3];
  if (uVar3 < uVar2) {
    uVar1 = param_1[4];
    do {
      uVar4 = param_1[1];
      if (uVar4 < uVar1) {
        uVar2 = param_1[5];
        do {
          uVar5 = param_1[2];
          if (uVar5 < uVar2) {
            do {
              FUN_021d1194(param_2,uVar3,uVar4,uVar5);
              uVar2 = param_1[5];
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
            uVar1 = param_1[4];
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
        uVar2 = param_1[3];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}


