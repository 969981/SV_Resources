/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ec27c; name: FUN_001ec27c
 */


undefined8 FUN_001ec27c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_strdup_047cb9f0;
  puVar3 = PTR_realloc_047cb9e8;
  puVar2 = PTR_free_047cb9e0;
  puVar1 = PTR_DAT_047cb9d0;
  *(undefined **)PTR_DAT_047cb9d0 = PTR_malloc_047cb9d8;
  *(undefined **)(puVar1 + 8) = puVar2;
  puVar2 = PTR_calloc_047cb9f8;
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined **)(puVar1 + 0x18) = puVar4;
  *(undefined **)(puVar1 + 0x20) = puVar2;
  return 1;
}


