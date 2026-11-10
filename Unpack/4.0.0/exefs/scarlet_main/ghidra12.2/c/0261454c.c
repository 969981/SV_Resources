/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0261454c; name: FUN_0261454c
 */


uint FUN_0261454c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_02614588();
  uVar2 = 0;
  if ((puVar1 != (uint *)0x0) && (param_3 < *puVar1)) {
    uVar2 = puVar1[(ulong)param_3 + 1];
  }
  return uVar2;
}


