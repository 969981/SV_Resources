/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eb040; name: FUN_007eb040
 */


void FUN_007eb040(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  FUN_007e890c(local_48,param_2);
  FUN_018ff39c(local_38,local_48);
  if (local_38[0] == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    uVar1 = FUN_0078a12c();
    lVar2 = FUN_007bf9f0(0x90,uVar1);
    if (lVar2 == 0) {
      *(undefined8 *)(param_2 + 0x720) = 0;
      local_48[0] = 0x10401;
    }
    else {
      FUN_007945f4();
      *(long *)(param_2 + 0x720) = lVar2;
      FUN_00794608(local_48,lVar2,*(undefined8 *)(param_2 + 0x20),0x9750);
      FUN_018ff39c(local_38,local_48);
      if (local_38[0] != 0) goto LAB_007eb08c;
      local_48[0] = 0;
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar3 = local_48;
  }
  else {
LAB_007eb08c:
    piVar3 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


