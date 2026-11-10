/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e1a54; name: FUN_007e1a54
 */


void FUN_007e1a54(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined8 *)0x0) {
    local_28[0] = 0x10407;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0xd0);
    uVar2 = *(undefined8 *)(param_2 + 0xd8);
    uVar3 = *(undefined8 *)(param_2 + 0xe8);
    param_3[2] = *(undefined8 *)(param_2 + 0xe0);
    param_3[3] = uVar3;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


