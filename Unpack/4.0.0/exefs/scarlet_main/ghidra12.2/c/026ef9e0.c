/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ef9e0; name: FUN_026ef9e0
 */


uint FUN_026ef9e0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  long local_60 [4];
  ulong local_40;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined4 local_28 [2];
  
  local_34[0] = 2;
  if ((((param_4 < 0x201) && (param_4 < 0x1f8)) &&
      (local_40 = *(ulong *)(param_2 + 0x20), (local_40 & 0xff) != 0)) &&
     (*(float *)(param_2 + 0x28) != *(float *)(param_2 + 0x2c))) {
    local_30 = param_1;
    FUN_017522c8(local_60,param_3 + (ulong)param_4,0x200 - param_4);
    if (((local_60[0] != 0) && (FUN_026ef8bc(local_28,local_34,local_60[0] + 8), local_60[0] != 0))
       && (FUN_01e62da0(local_28,&local_30,local_60[0] + 8), local_60[0] != 0)) {
      FUN_014c2934(local_28,(ulong)&local_40 | 4,local_60[0] + 8);
    }
    local_28[0] = *(undefined4 *)(param_2 + 0x2c);
    FUN_01eba4d4(local_60,local_28);
    iVar1 = FUN_014c27c8(local_60);
    param_4 = iVar1 + param_4;
    FUN_01694aa8(local_60);
  }
  return param_4;
}


