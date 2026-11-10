/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


