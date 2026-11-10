/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01890ebc; name: FUN_01890ebc
 */


void FUN_01890ebc(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x70a3d70a3d70a3d7) < param_2) {
    FUN_01890f3c(auStack_48,param_2,(param_1[1] - *param_1 >> 4) * -0x70a3d70a3d70a3d7,param_1 + 3);
    FUN_01891064(param_1,auStack_48);
    FUN_01890fd0(auStack_48);
  }
  return;
}


