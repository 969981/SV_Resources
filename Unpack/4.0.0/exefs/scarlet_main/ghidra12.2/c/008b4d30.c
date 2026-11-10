/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b4d30; name: FUN_008b4d30
 */


ulong FUN_008b4d30(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  FUN_008f0470(&local_40);
  local_40 = CONCAT44(param_2,(int)param_3);
  lVar1 = FUN_008f06e0(param_1,&local_40);
  return (param_3 + lVar1) - 1U & -lVar1;
}


