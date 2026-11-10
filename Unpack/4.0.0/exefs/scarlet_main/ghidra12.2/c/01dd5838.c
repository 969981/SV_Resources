/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd5838; name: FUN_01dd5838
 */


undefined8 FUN_01dd5838(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int local_30 [4];
  
  if (*(long *)(param_1 + 0x1c8) == 0) {
    uVar1 = 1;
  }
  else {
    FUN_00cbd720(local_30);
    if (local_30[0] == 0) {
      if (((param_2 & 1) == 0) || (uVar2 = FUN_01de2620(), (uVar2 & 1) == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}


