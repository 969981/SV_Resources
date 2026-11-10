/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017869fc; name: FUN_017869fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_017869fc(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((1 < *param_1) ||
     (puVar4 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df550 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047df550);
      puVar4 = PTR_DAT_047df558;
      if (iVar3 != 0) {
        *(undefined8 *)PTR_DAT_047df558 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        uVar2 = _UNK_03cabe58;
        uVar1 = _DAT_03cabe50;
        *(undefined8 *)(puVar4 + 0x20) = 0x3f4ccccd3f000000;
        *(undefined8 *)(puVar4 + 0x28) = 0x83e4ccccd;
        *(undefined8 *)(puVar4 + 0x18) = uVar2;
        *(undefined8 *)(puVar4 + 0x10) = uVar1;
        __cxa_guard_release(PTR_DAT_047df550);
      }
    }
    else {
      puVar4 = PTR_DAT_047df558;
    }
  }
  return puVar4;
}


