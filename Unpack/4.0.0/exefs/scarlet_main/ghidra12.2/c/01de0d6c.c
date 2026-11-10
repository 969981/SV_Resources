/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de0d6c; name: FUN_01de0d6c
 */


undefined4 FUN_01de0d6c(long param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  lVar3 = FUN_01dcc2a4();
  uVar5 = 5;
  if (lVar3 != 0) {
    uVar4 = FUN_01de0ff0(param_1,param_2);
    iVar2 = FUN_01de14bc(lVar3,param_2,*(undefined8 *)(param_1 + 8),1);
    if (iVar2 == 0x1e) {
      uVar5 = 2;
      if ((uVar4 & 1) == 0) {
        uVar5 = 5;
      }
    }
    else {
      bVar1 = (uVar4 & 1) == 0;
      if (iVar2 == 0) {
        uVar5 = 0;
        if (bVar1) {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 4;
        if (!bVar1) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}


