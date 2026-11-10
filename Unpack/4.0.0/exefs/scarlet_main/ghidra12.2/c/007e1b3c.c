/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e1b3c; name: FUN_007e1b3c
 */


void FUN_007e1b3c(undefined8 param_1,long param_2,byte param_3,long param_4)

{
  undefined8 uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_4 == 0) || (*(byte *)(param_2 + 0x358) <= param_3)) {
    local_38[0] = 0x10407;
  }
  else {
    param_2 = param_2 + (ulong)param_3 * 0x98;
    FUN_018dd4a4(param_4,param_2 + 0xf8);
    uVar1 = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(param_4 + 0x88) = *(undefined8 *)(param_2 + 0x180);
    *(undefined8 *)(param_4 + 0x90) = uVar1;
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


