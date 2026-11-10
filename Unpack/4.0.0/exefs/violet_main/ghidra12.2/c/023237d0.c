/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023237d0; name: FUN_023237d0
 */


uint FUN_023237d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  puVar1 = &LAB_02b83e40;
  if (DAT_04847750 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_28 = param_3;
  local_20[0] = param_1;
  uVar2 = FUN_02327e2c(param_2,puVar1,0,local_20,&local_28);
  return uVar2 & 1;
}


