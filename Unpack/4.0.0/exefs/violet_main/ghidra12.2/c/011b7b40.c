/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b7b40; name: FUN_011b7b40
 */


void FUN_011b7b40(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 0xff) == 5) {
    return;
  }
  FUN_011b783c(param_1,param_2,param_4);
  FUN_011b6f2c(param_1,param_3,param_4);
  uVar1 = (uint)param_2 & 0xff;
  thunk_FUN_01f7ff04(*(undefined8 *)(param_1 + 0x48),uVar1,uVar1,param_3 & 0xff);
  return;
}


