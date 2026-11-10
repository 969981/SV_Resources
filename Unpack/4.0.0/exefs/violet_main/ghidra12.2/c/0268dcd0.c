/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0268dcd0; name: FUN_0268dcd0
 */


undefined8 FUN_0268dcd0(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  puVar1 = PTR_FUN_047e07d8;
  if (DAT_04859078 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if ((1 < *param_2) || (puVar3 = *(undefined8 **)(param_2 + 8), puVar3 == (undefined8 *)0x0)) {
    if ((DAT_048569e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048569e8);
      if (iVar2 != 0) {
        DAT_048569e0 = 0;
        __cxa_guard_release(&DAT_048569e8);
      }
      puVar3 = &DAT_048569e0;
    }
    else {
      puVar3 = &DAT_048569e0;
    }
  }
  FUN_02693f74(auStack_40,param_1,puVar1,0,puVar3);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


