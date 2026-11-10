/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c3d4dc; name: FUN_01c3d4dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01c3d4dc(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((1 < *param_1) ||
     (puVar3 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d5fc0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d5fc0);
      puVar3 = PTR_DAT_047d5fc8;
      if (iVar2 != 0) {
        *PTR_DAT_047d5fc8 = 0;
        uVar1 = _DAT_00000005;
        if (cRam0000000000000001 != '\0') {
          *puVar3 = 1;
          *(undefined4 *)(puVar3 + 4) = uVar1;
        }
        puVar3[8] = 0;
        if (DAT_00000009 != '\0') {
          FUN_00cbd7c0(puVar3 + 0xc,0xd);
          puVar3[8] = 1;
        }
        puVar3[0x20] = 0;
        if (DAT_00000021 != '\0') {
          *(undefined8 *)(puVar3 + 0x28) = _DAT_00000029;
          puVar3[0x20] = 1;
        }
        puVar3[0x30] = 0;
        if (DAT_00000031 != '\0') {
          *(undefined8 *)(puVar3 + 0x34) = _DAT_00000035;
          puVar3[0x30] = 1;
        }
        *(undefined8 *)(puVar3 + 0x3c) = _DAT_0000003d;
        puVar3[0x44] = 0;
        if (DAT_00000045 != '\0') {
          *(undefined8 *)(puVar3 + 0x48) = _DAT_00000049;
          puVar3[0x44] = 1;
        }
        puVar3 = PTR_DAT_047d5fc8;
        FUN_00100190(PTR_FUN_047d5fd0,PTR_DAT_047d5fc8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5fc0);
      }
    }
    else {
      puVar3 = PTR_DAT_047d5fc8;
    }
  }
  return puVar3;
}


