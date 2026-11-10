/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0261414c; name: FUN_0261414c
 */


undefined8 FUN_0261414c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = (uint *)FUN_0261418c();
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    if (param_3 < *puVar1) {
      uVar2 = *(undefined8 *)(puVar1 + (ulong)param_3 * 2 + 1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


