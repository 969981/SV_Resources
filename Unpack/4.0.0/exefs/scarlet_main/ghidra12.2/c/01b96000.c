/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b96000; name: FUN_01b96000
 */


undefined * FUN_01b96000(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4f40 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d4f40);
      puVar2 = PTR_DAT_047d4f48;
      if (iVar1 != 0) {
        *(undefined8 *)(PTR_DAT_047d4f48 + 0x30) = 0;
        *(undefined8 *)(puVar2 + 0x38) = 0;
        *(undefined8 *)(puVar2 + 0x20) = 0;
        *(undefined8 *)(puVar2 + 0x28) = 0;
        *(undefined8 *)(puVar2 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        *(undefined8 *)puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        FUN_00100190(&LAB_0095365c,puVar2,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4f40);
      }
    }
    else {
      puVar2 = PTR_DAT_047d4f48;
    }
  }
  return puVar2;
}


