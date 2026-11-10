/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e8be0; name: FUN_007e8be0
 */


void FUN_007e8be0(undefined8 param_1,long param_2)

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
    *(undefined8 *)(param_2 + 0x48) = 0;
    uVar1 = FUN_0078a12c();
    lVar2 = FUN_007bf9f0(0x88,uVar1);
    if (lVar2 == 0) {
      *(undefined8 *)(param_2 + 0xe0) = 0;
      local_48[0] = 0x10401;
    }
    else {
      FUN_00797ed4();
      *(long *)(param_2 + 0xe0) = lVar2;
      FUN_00797ee4(local_48,lVar2,*(undefined8 *)(param_2 + 0x20),0x9750);
      FUN_018ff39c(local_38,local_48);
      if (local_38[0] != 0) goto LAB_007e8c2c;
      local_48[0] = 0;
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar3 = local_48;
  }
  else {
LAB_007e8c2c:
    piVar3 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


