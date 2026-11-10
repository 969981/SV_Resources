/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02987d7c; name: FUN_02987d7c
 */


uint FUN_02987d7c(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_0124e498();
  bVar1 = FUN_00f7e274();
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = (uint)bVar1;
    do {
      FUN_02987de4(param_1,uVar2,uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return uVar3;
}


