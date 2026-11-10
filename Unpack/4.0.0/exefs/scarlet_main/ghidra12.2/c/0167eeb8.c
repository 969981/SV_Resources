/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167eeb8; name: FUN_0167eeb8
 */


void FUN_0167eeb8(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01243584();
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((param_5 & 1) == 0) {
    FUN_0167ef30();
    return;
  }
  FUN_01680450(uVar2,uVar1,param_3,param_4);
  return;
}


