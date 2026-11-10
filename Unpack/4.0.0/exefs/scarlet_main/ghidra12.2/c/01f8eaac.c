/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8eaac; name: FUN_01f8eaac
 */


uint FUN_01f8eaac(long param_1,undefined8 param_2)

{
  uint uVar1;
  long local_8;
  
  if (*(long *)(param_1 + 0x168) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01bb642c(&local_8);
    if (local_8 != 0) {
      uVar1 = FUN_01f8b118(local_8,param_2);
      FUN_01018e84(&local_8);
      goto LAB_01f8eafc;
    }
  }
  FUN_01018e84(&local_8);
  uVar1 = 0;
LAB_01f8eafc:
  return uVar1 & 1;
}


