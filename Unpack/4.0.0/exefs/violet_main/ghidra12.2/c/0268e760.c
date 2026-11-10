/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0268e760; name: FUN_0268e760
 */


void FUN_0268e760(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  
  cVar2 = DAT_04859090;
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
  puVar1 = PTR_FUN_047e07f0;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02694464(param_1,puVar1,0,puVar4);
  return;
}


