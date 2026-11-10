/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233096c; name: FUN_0233096c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233096c(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar2 = DAT_04847ed0;
  if ((1 < *param_2) || (puVar4 = *(undefined8 **)(param_2 + 8), puVar4 == (undefined8 *)0x0)) {
    if ((DAT_04847a10 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_04847a10);
      if (iVar3 != 0) {
        DAT_04847a00 = uRam0000000000000001;
        DAT_04847a08 = _DAT_00000009;
        __cxa_guard_release(&DAT_04847a10);
      }
      puVar4 = &DAT_04847a00;
    }
    else {
      puVar4 = &DAT_04847a00;
    }
  }
  local_30 = *puVar4;
  uStack_28 = puVar4[1];
  puVar1 = &LAB_02b84058;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02333494(param_1,puVar1,0,&local_30);
  return;
}


