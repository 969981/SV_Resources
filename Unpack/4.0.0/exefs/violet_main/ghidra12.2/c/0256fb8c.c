/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0256fb8c; name: FUN_0256fb8c
 */


void FUN_0256fb8c(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  
  cVar2 = DAT_04851ec0;
  if ((1 < *param_2) ||
     (puVar4 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df530 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047df530);
      puVar4 = PTR_DAT_047df538;
      if (iVar3 != 0) {
        *(undefined8 *)(PTR_DAT_047df538 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined8 *)puVar4 = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047df530);
      }
    }
    else {
      puVar4 = PTR_DAT_047df538;
    }
  }
  puVar1 = PTR_FUN_047df638;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_025717b4(param_1,puVar1,0,puVar4);
  return;
}


