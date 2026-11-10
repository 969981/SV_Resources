/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02998f40; name: FUN_02998f40
 */


void FUN_02998f40(long param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = param_2[4];
  uStack_1c = param_2[5];
  local_18 = param_2[6];
  uStack_14 = param_2[7];
  FUN_0298d100(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x90),*param_2,param_2[1],param_2[2],
               &local_20,param_2[3]);
  return;
}


