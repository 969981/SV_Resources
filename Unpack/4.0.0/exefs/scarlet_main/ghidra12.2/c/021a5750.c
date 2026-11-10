/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a5750; name: FUN_021a5750
 */


void FUN_021a5750(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047dd658;
  *param_1 = &PTR_LAB_045a18f8;
  lVar2 = -0x4020;
  *(undefined8 *)puVar1 = 0;
  do {
    if (*(long *)((long)param_1 + lVar2 + 0x4038) != 0) {
      (**(code **)(**(long **)(&DAT_00004028 + (long)param_1 + lVar2) + 0xe8))();
    }
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0);
  FUN_01dadbd8(param_1);
  return;
}


