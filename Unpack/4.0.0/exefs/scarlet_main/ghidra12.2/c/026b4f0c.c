/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b4f0c; name: FUN_026b4f0c
 */


void FUN_026b4f0c(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_8;
  
  cVar2 = DAT_04859190;
  if ((1 < *param_2) || (puVar4 = *(undefined8 **)(param_2 + 8), puVar4 == (undefined8 *)0x0)) {
    if ((DAT_048569e8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_048569e8);
      if (iVar3 != 0) {
        DAT_048569e0 = 0;
        __cxa_guard_release(&DAT_048569e8);
      }
      puVar4 = &DAT_048569e0;
    }
    else {
      puVar4 = &DAT_048569e0;
    }
  }
  local_8 = *puVar4;
  puVar1 = &LAB_02ba5d18;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_026b7b30(param_1,puVar1,0,&local_8);
  return;
}


