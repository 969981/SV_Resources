/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02048fec; name: FUN_02048fec
 */


void FUN_02048fec(long param_1,long *param_2)

{
  long local_38 [2];
  long local_28;
  
  FUN_01b2f888(local_38);
  if (local_38[0] == 0) {
    local_28 = 0;
  }
  else {
    FUN_01d8542c(&local_28);
  }
  FUN_01b2f968(local_38);
  if (local_28 != 0) {
    FUN_01df9ab4(local_28,1);
    FUN_01df908c(local_28,1);
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = 0;
  }
  FUN_019c51a8(&local_28);
  return;
}


