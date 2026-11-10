/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f94d4; name: FUN_007f94d4
 */


void FUN_007f94d4(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  undefined8 local_40;
  undefined4 local_38;
  
  param_2 = param_2 & 1;
  FUN_007ea5cc(param_1,param_2);
  if ((param_3 & 1) == 0) {
    FUN_007ea5cc(param_1 + 0x1910,param_2);
    FUN_007ea5cc(param_1 + 0x3220,param_2);
  }
  FUN_007ea5cc(param_1 + 0x4b30,param_2);
  FUN_007f95c4(param_1 + 0x6440);
  plVar1 = (long *)FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  local_38 = 0;
  local_40 = 0x20000000;
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
  FUN_007eaaf4("[Analysis] ------ DispatchCount:%u, SendThreadCount:%u, ReceiveThreadCount:%u ------"
               ,*(undefined4 *)(param_1 + 0x68c4),*(undefined4 *)(param_1 + 0x68c8),
               *(undefined4 *)(param_1 + 0x68cc));
  return;
}


