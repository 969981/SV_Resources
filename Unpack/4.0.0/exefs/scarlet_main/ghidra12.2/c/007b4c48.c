/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b4c48; name: FUN_007b4c48
 */


void FUN_007b4c48(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  long lVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_0079a890(local_38);
  if (local_38[0] == 0) {
    (**(code **)(*param_2 + 0x390))(param_2);
    if (param_2[0x23a] == 0) {
      uVar1 = FUN_0078a12c();
      lVar3 = FUN_007bf9f0(0x68,uVar1);
      if (lVar3 != 0) {
        FUN_007b5bc4(lVar3,param_2);
      }
      param_2[0x23a] = lVar3;
      lVar3 = param_2[0x23b];
    }
    else {
      lVar3 = param_2[0x23b];
    }
    if (lVar3 == 0) {
      uVar1 = FUN_0078a12c();
      lVar3 = FUN_007bf9f0(400,uVar1);
      if (lVar3 != 0) {
        FUN_007b52d4(lVar3,param_2);
      }
      param_2[0x23b] = lVar3;
    }
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar2 = local_48;
  }
  else {
    piVar2 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


