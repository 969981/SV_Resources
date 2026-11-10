/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0174d198; name: FUN_0174d198
 */


bool FUN_0174d198(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_28;
  
  FUN_00faae34(&local_28,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 0x30);
  }
  lVar2 = *plVar1;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 6;
  }
  lVar3 = *plVar1;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return lVar2 == lVar3;
}


