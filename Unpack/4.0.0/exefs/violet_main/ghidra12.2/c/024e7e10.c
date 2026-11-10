/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024e7e10; name: FUN_024e7e10
 */


void FUN_024e7e10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047df118;
  if (DAT_0484f158 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_024d0e00(param_2);
  FUN_024e9830(param_1,puVar1,0,uVar2);
  return;
}


