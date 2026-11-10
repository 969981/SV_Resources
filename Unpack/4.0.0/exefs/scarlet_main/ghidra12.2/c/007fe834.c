/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fe834; name: FUN_007fe834
 */


void FUN_007fe834(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1308);
  if (lVar2 != 0) {
    FUN_008010c0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 0x1308) = 0;
  }
  plVar1 = (long *)FUN_007f738c(*(undefined8 *)PTR_DAT_047d0860);
  (**(code **)(*plVar1 + 0x120))(plVar1,*(undefined8 *)(param_1 + 0x1318));
  lVar2 = *(long *)(param_1 + 0x1320);
  *(undefined8 *)(param_1 + 0x1318) = 0;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 0x1320) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x1338);
  *(undefined4 *)(param_1 + 0x1328) = 0;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 0x1338) = 0;
  }
  *(undefined4 *)(param_1 + 0x1340) = 0;
  FUN_0079afcc(param_1);
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  return;
}


