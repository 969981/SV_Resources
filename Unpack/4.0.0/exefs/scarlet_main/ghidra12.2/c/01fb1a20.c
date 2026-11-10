/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb1a20; name: FUN_01fb1a20
 */


bool FUN_01fb1a20(short *param_1,long param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      sVar1 = FUN_01fb1ab0();
      sVar2 = FUN_01fb1ab0(*(undefined2 *)(param_2 + uVar4 * 2));
      if (sVar1 != sVar2) {
        return false;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ulong)uVar3;
    } while (param_1[uVar3] != 0);
  }
  return *(short *)(param_2 + uVar4 * 2) == 0;
}


