/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6643c; name: FUN_00a6643c
 */


undefined4 FUN_00a6643c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00a65174(param_1,param_2,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
    uVar1 = FUN_00a65174(param_1,param_2 & 0xffffffff,1);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_00a65174(param_1,param_2 & 0xffffffff,2);
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}


