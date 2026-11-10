/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ed654; name: FUN_007ed654
 */


undefined8 FUN_007ed654(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(short *)(param_1 + 0x60) == 0) {
    return 0;
  }
  plVar1 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined2 *)(param_1 + 0x60));
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
  }
  return uVar3;
}


