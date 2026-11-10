/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ff564; name: FUN_018ff564
 */


int FUN_018ff564(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar2 = (undefined8 *)FUN_018ff6bc(param_1,0x78);
    FUN_018ff5fc();
    iVar1 = FUN_018ff788(param_1,puVar2,param_2 & 0xffff | 0x80000000);
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


