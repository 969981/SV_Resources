/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00100030; name: _DT_INIT
 */


void _DT_INIT(void)

{
  undefined *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = PTR___DT_FINI_ARRAY_047cb740;
  if ((DAT_047ec0d0 == 0) &&
     (DAT_047ec0d0 = end(PTR_DAT_047cb798,PTR_DAT_047cb7a0,PTR_DAT_047cb7a8,PTR_DAT_047cb7b0,
                         PTR_DAT_047cb7b8,PTR_DAT_047cb7c0,PTR_DAT_047cb7d0,DAT_047cb7d8,
                         PTR_DAT_047cb7e8,PTR_DAT_047cb7e0,PTR___DT_PLTGOT_047cb790,
                         PTR___DT_INIT_ARRAY_047cb7c8,PTR___DT_RELA_047cb788,
                         PTR___DT_JMPREL_047cb780,PTR___rel_dyn_start_047cb778,
                         PTR___rel_dyn_end_047cb770,PTR___DT_JMPREL_047cb768,PTR___DT_HASH_047cb760,
                         PTR___rel_plt_start_047cb758,PTR___rel_plt_end_047cb750,
                         PTR__DYNAMIC_047cb748), DAT_047ec0d0 == 1)) {
    return;
  }
  if (PTR___DT_INIT_ARRAY_047cb7f0 < puVar1) {
    puVar2 = (undefined8 *)PTR___DT_INIT_ARRAY_047cb7f0;
    do {
      puVar3 = puVar2 + 1;
      (*(code *)*puVar2)();
      puVar2 = puVar3;
    } while (puVar3 < puVar1);
  }
  return;
}


