/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02613f4c; name: FUN_02613f4c
 */


uint FUN_02613f4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_02613f8c();
  uVar1 = 0;
  if (puVar2 != (uint *)0x0) {
    if (param_3 < *puVar2) {
      uVar1 = puVar2[(ulong)param_3 + 1];
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


