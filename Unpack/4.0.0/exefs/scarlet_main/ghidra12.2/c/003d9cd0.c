/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d9cd0; name: FUN_003d9cd0
 */


undefined8 FUN_003d9cd0(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = FUN_0047e450(param_2,0);
  }
  uVar4 = (uint)bVar1;
  uVar3 = FUN_003d9b20(param_1,0,param_3,param_4,1);
  if ((int)uVar3 == 1) {
    iVar2 = FUN_0047e430(param_2);
    if (iVar2 <= (int)(uint)bVar1) {
      return 1;
    }
    do {
      uVar3 = FUN_0047e450(param_2,uVar4);
      uVar3 = FUN_003d9b20(param_1,0,uVar3,param_4,0);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
      iVar2 = FUN_0047e430(param_2);
    } while ((int)uVar4 < iVar2);
    uVar3 = 1;
  }
  return uVar3;
}


