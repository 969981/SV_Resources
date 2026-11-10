/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124340; name: FUN_00124340
 */


undefined8 FUN_00124340(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_14;
  
  uVar4 = param_2 & 0xffffffff;
  uVar2 = FUN_00c92df0(param_1,param_2,&local_14);
  if (local_14 == 0) {
    iVar1 = FUN_00121e90(param_1,uVar4);
    if (iVar1 == 0) {
      uVar3 = FUN_01b2ccf0(param_1,3);
      FUN_00123c80(param_1,uVar4,uVar3);
    }
    else {
      FUN_00123970(param_1,uVar4,"number has no integer representation");
    }
  }
  return uVar2;
}


