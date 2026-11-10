/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f48a0; name: FUN_022f48a0
 */


bool FUN_022f48a0(undefined8 param_1,uint param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_38;
  
  local_38 = (ulong)param_2 << 0x20 | 1;
  lVar2 = FUN_022f4714(param_1,&local_38);
  bVar1 = **(char **)(lVar2 + 8) != '\0';
  if (bVar1) {
    local_38 = CONCAT71(local_38._1_7_,1);
    local_38 = CONCAT44(param_2,(undefined4)local_38);
    FUN_00d92a80(param_1,&local_38,param_3 != 0);
  }
  return bVar1;
}


