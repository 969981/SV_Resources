/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274c70c; name: FUN_0274c70c
 */


undefined8 FUN_0274c70c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)PTR_DAT_047db018;
  lVar1 = *(long *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (lVar1 != 0) {
    FUN_0274c0e4(lVar2 + 0x18);
  }
  (**(code **)PTR_DAT_047e1930)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 0x6038);
  for (puVar3 = *(undefined8 **)(param_1 + 0x6030); puVar3 != puVar4; puVar3 = puVar3 + 4) {
    FUN_0274c798(*puVar3);
  }
  FUN_0274c794(*(undefined8 *)(param_1 + 0x6028));
  return 1;
}


