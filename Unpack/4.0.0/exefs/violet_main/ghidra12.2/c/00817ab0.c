/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00817ab0; name: FUN_00817ab0
 */


void FUN_00817ab0(undefined8 param_1,long param_2)

{
  int local_30 [4];
  undefined4 local_18 [2];
  
  if ((*(char *)(param_2 + 0x7c0) == '\x05' || *(char *)(param_2 + 0x7c0) == '\0') ||
     (*(char *)(param_2 + 0x7c) != '\0')) {
    local_30[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x80) + 0x18))(local_30,*(long **)(param_2 + 0x80),0);
    if (local_30[0] == 0) {
      *(undefined1 *)(param_2 + 0x7c) = 1;
    }
  }
  FUN_00cbd7c0(param_1,local_30);
  return;
}


