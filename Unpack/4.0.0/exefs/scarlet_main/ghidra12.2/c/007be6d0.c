/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007be6d0; name: FUN_007be6d0
 */


void FUN_007be6d0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0f88;
  if (*(long *)PTR_DAT_047d0f88 != 0) {
    FUN_00798904();
    (**(code **)**(undefined8 **)puVar1)();
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_047d0f90;
  lVar2 = *(long *)PTR_DAT_047d0f90;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


