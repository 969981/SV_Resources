/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026925b0; name: FUN_026925b0
 */


void FUN_026925b0(undefined8 param_1,byte *param_2,byte param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  byte local_4 [4];
  
  cVar2 = DAT_048590b8;
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
  pcVar1 = FUN_02695f60;
  if (cVar2 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_4[0] = param_3 & 1;
  FUN_026961a8(param_1,pcVar1,0,puVar4,local_4);
  return;
}


