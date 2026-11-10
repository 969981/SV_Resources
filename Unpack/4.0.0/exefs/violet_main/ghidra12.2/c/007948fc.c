/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007948fc; name: FUN_007948fc
 */


void FUN_007948fc(undefined8 param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    local_38[0] = 0x10407;
  }
  else if ((*(long *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x28) != 0)) {
    local_38[0] = 0x10408;
  }
  else {
    iVar1 = FUN_0037ca30(param_2 + 0x20,4);
    if (iVar1 == 1) {
      *param_3 = (int)*(undefined8 *)(param_2 + 0x48);
      local_38[0] = 0;
    }
    else {
      local_38[0] = 0xc0b;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


