/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a6120; name: FUN_007a6120
 */


void FUN_007a6120(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)((long)param_2 + 100) == '\0') {
    uVar1 = FUN_0078cdf4();
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_0078ce3c(param_2);
      if ((uVar1 & 1) != 0) {
        local_30[0] = 0x4c11;
        goto LAB_007a6188;
      }
      if (param_2[0xb] != 0) {
        FUN_0078cc8c();
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2,0);
    *(undefined1 *)((long)param_2 + 100) = 1;
  }
  local_30[0] = 0;
LAB_007a6188:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


