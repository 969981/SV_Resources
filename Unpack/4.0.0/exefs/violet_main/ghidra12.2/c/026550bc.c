/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026550bc; name: FUN_026550bc
 */


void FUN_026550bc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_026567a8;
  if (DAT_04855998 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02656b34(auStack_30,param_2,puVar1,0);
  FUN_02656bb0(param_1,auStack_30);
  FUN_02655270(auStack_30);
  return;
}


