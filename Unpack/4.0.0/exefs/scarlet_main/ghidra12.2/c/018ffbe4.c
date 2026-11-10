/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ffbe4; name: FUN_018ffbe4
 */


int FUN_018ffbe4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar2 = (undefined8 *)FUN_018ff6bc(param_1,0x80);
    FUN_018ffc74();
    iVar1 = FUN_018ff788(param_1,puVar2,0x74000000);
    if (iVar1 == *(int *)PTR_DAT_047d0e88) {
      (**(code **)*puVar2)(puVar2);
      FUN_018ff540(param_1,puVar2);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


