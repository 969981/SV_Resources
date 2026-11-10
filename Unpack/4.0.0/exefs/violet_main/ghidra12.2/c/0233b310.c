/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0233b310; name: FUN_0233b310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233b310(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_30 [16];
  
  if ((1 < *param_4) || (puVar2 = *(undefined8 **)(param_4 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04847a10 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04847a10);
      if (iVar1 != 0) {
        DAT_04847a00 = uRam0000000000000001;
        DAT_04847a08 = _DAT_00000009;
        __cxa_guard_release(&DAT_04847a10);
      }
      puVar2 = &DAT_04847a00;
    }
    else {
      puVar2 = &DAT_04847a00;
    }
  }
  FUN_0233bbf4(auStack_30,param_2,param_3,*puVar2,puVar2[1],param_5);
  FUN_0233bec0(param_1,auStack_30);
  FUN_01795c84(auStack_30);
  return;
}


