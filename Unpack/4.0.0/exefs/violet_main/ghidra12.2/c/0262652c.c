/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0262652c; name: FUN_0262652c
 */


void FUN_0262652c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0262e188;
  if (DAT_04854e20 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0262e51c(auStack_30,param_2,puVar1,0);
  FUN_0262e590(param_1,auStack_30);
  FUN_026267f0(auStack_30);
  return;
}


