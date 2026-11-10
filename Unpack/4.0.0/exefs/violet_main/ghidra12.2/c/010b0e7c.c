/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b0e7c; name: FUN_010b0e7c
 */


void FUN_010b0e7c(undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(param_2 + 0x18),*(undefined1 *)(param_2 + 0x1d),param_3);
  if (((uVar1 & 1) == 0) || (param_4 != 0)) {
    *param_1 = 0;
    return;
  }
  FUN_010a6134(param_1,param_2,param_3,1);
  return;
}


