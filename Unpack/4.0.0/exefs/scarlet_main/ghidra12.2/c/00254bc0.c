/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00254bc0; name: FUN_00254bc0
 */


void FUN_00254bc0(void)

{
  undefined *local_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR_LAB_0448b6d8;
  local_30 = PTR_LAB_0448b6d0;
  puStack_18 = PTR_LAB_0448b6e8;
  puStack_20 = PTR_LAB_0448b6e0;
                    /* try { // try from 00254bd8 to 00254c1b has its CatchHandler @ 00254c28 */
  FUN_0038c6f0(&local_30);
  FUN_00452be0(PTR_LAB_047cc1c8,PTR_LAB_047cc1d0,PTR_LAB_047cc1d8);
  thunk_FUN_0049e74c(PTR_LAB_047cc1e0,PTR_LAB_047cc1e8,PTR_LAB_047cc1f0);
  FUN_0052d9e0();
  return;
}


