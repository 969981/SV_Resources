/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d331c; name: FUN_018d331c
 */


void FUN_018d331c(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e30 [1800];
  undefined1 auStack_728 [1800];
  
  puVar1 = PTR_LAB_047d58e8;
  if (DAT_04810510 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_018d3388(auStack_e30,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_728,auStack_e30,0x708);
  FUN_018d372c(param_1 + 8,auStack_728);
  return;
}


