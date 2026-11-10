/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c25efc; name: FUN_01c25efc
 */


void FUN_01c25efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_LAB_047d5d20;
  if (DAT_04812578 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c28ae4(auStack_30,param_2,puVar1,0);
  FUN_01c28b60(param_1,auStack_30);
  FUN_01c14ecc(auStack_30);
  return;
}


