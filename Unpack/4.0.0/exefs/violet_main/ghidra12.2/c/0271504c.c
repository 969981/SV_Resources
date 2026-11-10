/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271504c; name: FUN_0271504c
 */


void FUN_0271504c(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_40;
  byte *pbStack_38;
  byte local_2c [4];
  undefined8 local_28;
  
  local_2c[0] = param_3 & 1;
  local_40 = &local_28;
  pbStack_38 = local_2c;
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  local_28 = param_2;
  for (puVar2 = *(undefined8 **)(param_1 + 0x50); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_027150a4(*puVar2,&local_40);
  }
  return;
}


