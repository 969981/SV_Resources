/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0246bbac; name: FUN_0246bbac
 */


void FUN_0246bbac(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = &LAB_02b971d8;
  if (DAT_0484c160 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_0246fe30(param_2);
  FUN_0246fec0(param_1,puVar1,0,uVar2);
  return;
}


