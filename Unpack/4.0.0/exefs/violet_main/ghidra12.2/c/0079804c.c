/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079804c; name: FUN_0079804c
 */


void FUN_0079804c(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_2 + 8) == 0) {
    local_40[0] = 0x2c09;
  }
  else if (((param_3 == 0) || (param_4 == (int *)0x0)) || (iVar1 = *param_4, iVar1 == 0)) {
    local_40[0] = 0x10407;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0x20) = iVar1;
    uVar2 = FUN_003801d0(param_2,2);
    if (uVar2 < 2) {
      *param_4 = *(int *)(param_2 + 0x28) - (int)uVar3;
      local_40[0] = 0;
    }
    else if (uVar2 == 0xfffffffd) {
      local_40[0] = 0x2c03;
    }
    else {
      local_40[0] = 0xc0b;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


