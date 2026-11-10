/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0261434c; name: FUN_0261434c
 */


bool FUN_0261434c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_02614394();
  bVar1 = false;
  if (puVar2 != (uint *)0x0) {
    if (param_3 < *puVar2) {
      bVar1 = *(char *)((long)puVar2 + (ulong)param_3 + 4) != '\0';
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


