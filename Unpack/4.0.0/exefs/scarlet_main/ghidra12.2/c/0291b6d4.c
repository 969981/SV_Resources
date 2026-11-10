/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b6d4; name: FUN_0291b6d4
 */


undefined4 FUN_0291b6d4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0291bbf8();
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)FUN_01021c74(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x4c0))(plVar2,0x55);
    uVar3 = 0x14;
    if ((uVar1 & 1) == 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


