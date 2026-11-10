/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160983c; name: FUN_0160983c
 */


bool FUN_0160983c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  iVar2 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*puVar1);
  return iVar2 == 1;
}


