/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cc387c; name: FUN_01cc387c
 */


void FUN_01cc387c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = 0x50;
  if (DAT_0481b810 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = (undefined8 *)FUN_01cc4530(param_2);
  local_30 = *puVar2;
  uStack_28 = puVar2[1];
  FUN_01cc45b0(param_1,uVar1,&local_30);
  return;
}


