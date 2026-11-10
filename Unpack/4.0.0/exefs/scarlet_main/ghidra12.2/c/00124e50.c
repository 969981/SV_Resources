/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124e50; name: FUN_00124e50
 */


undefined8 FUN_00124e50(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00c5d9a0();
  if (iVar1 == 5) {
    return 1;
  }
  FUN_00c5db00(param_1,0xfffffffe);
  uVar2 = FUN_00121b80(param_1,param_2);
  FUN_00cf6cd0(param_1,0,0);
  FUN_00d341e0(param_1,0xffffffff);
  FUN_00efafb0(param_1,uVar2,param_3);
  return 0;
}


