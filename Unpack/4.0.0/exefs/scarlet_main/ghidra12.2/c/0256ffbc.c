/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0256ffbc; name: FUN_0256ffbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256ffbc(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  
  cVar4 = DAT_04851ed0;
  if ((1 < *param_2) ||
     (puVar6 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df510 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_047df510);
      puVar6 = PTR_DAT_047df518;
      uVar3 = _UNK_03cabe58;
      uVar2 = _DAT_03cabe50;
      if (iVar5 != 0) {
        *(undefined8 *)(PTR_DAT_047df518 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
        *(undefined8 *)(puVar6 + 0x20) = 0;
        *(undefined8 *)(puVar6 + 0x28) = 0;
        *(undefined8 *)puVar6 = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 0x18) = uVar3;
        *(undefined8 *)(puVar6 + 0x10) = uVar2;
        __cxa_guard_release(PTR_DAT_047df510);
      }
    }
    else {
      puVar6 = PTR_DAT_047df518;
    }
  }
  puVar1 = PTR_FUN_047df648;
  if (cVar4 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0257195c(param_1,puVar1,0,puVar6);
  return;
}


