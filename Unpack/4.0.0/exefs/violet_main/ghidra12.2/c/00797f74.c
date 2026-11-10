/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00797f74; name: FUN_00797f74
 */


void FUN_00797f74(undefined8 param_1,long *param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  puVar2 = PTR_LAB_047d09f0;
  puVar1 = PTR_LAB_047d09e8;
  if ((param_3 == 0) || (param_4 == 0)) {
    local_28[0] = 0x10407;
  }
  else if (param_2[0xe] == 0) {
    local_28[0] = 0x10408;
  }
  else {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    param_2[8] = (long)puVar1;
    param_2[9] = (long)puVar2;
    param_2[10] = (long)param_2;
    iVar3 = FUN_003800e0(param_2,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar3 == -4) {
      local_28[0] = 0x10401;
    }
    else if (iVar3 == 0) {
      local_28[0] = 0;
    }
    else {
      local_28[0] = 0xc0b;
    }
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


