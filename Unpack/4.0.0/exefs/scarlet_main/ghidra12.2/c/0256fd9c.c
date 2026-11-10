/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0256fd9c; name: FUN_0256fd9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256fd9c(undefined8 param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  
  cVar5 = DAT_04851ec8;
  if ((1 < *param_2) ||
     (puVar7 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df4f8 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047df4f8);
      puVar7 = PTR_DAT_047df500;
      uVar4 = _UNK_03cabe58;
      uVar3 = _DAT_03cabe50;
      if (iVar6 != 0) {
        puVar1 = (undefined8 *)(PTR_DAT_047df500 + 0x20);
        *(undefined8 *)(PTR_DAT_047df500 + 0x28) = 0;
        *puVar1 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        *(undefined8 *)puVar7 = 0;
        *(undefined8 *)(puVar7 + 0x18) = uVar4;
        *(undefined8 *)(puVar7 + 0x10) = uVar3;
        __cxa_guard_release(PTR_DAT_047df4f8);
      }
    }
    else {
      puVar7 = PTR_DAT_047df500;
    }
  }
  puVar2 = PTR_FUN_047df640;
  if (cVar5 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_02571888(param_1,puVar2,0,puVar7);
  return;
}


