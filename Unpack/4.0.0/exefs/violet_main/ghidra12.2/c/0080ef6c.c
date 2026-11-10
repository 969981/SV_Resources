/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ef6c; name: FUN_0080ef6c
 */


void FUN_0080ef6c(undefined8 param_1,long param_2,long *param_3,undefined2 *param_4)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0xae1) == '\0') {
    local_38[0] = 0x10408;
  }
  else {
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 0x10))(local_38,param_3,param_2 + 0x18);
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = *(undefined2 *)(param_2 + 0xaa8);
    }
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


