/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f3774; name: FUN_022f3774
 */


bool FUN_022f3774(undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_38;
  
  local_38 = (ulong)param_3 << 0x20 | 1;
  lVar2 = FUN_022f35e8(param_2,&local_38);
  bVar1 = **(char **)(lVar2 + 8) != '\0';
  if (bVar1) {
    local_38 = CONCAT71(local_38._1_7_,1);
    local_38 = CONCAT44(param_3,(undefined4)local_38);
    FUN_022f37f8(param_1,param_2,&local_38);
  }
  return bVar1;
}


