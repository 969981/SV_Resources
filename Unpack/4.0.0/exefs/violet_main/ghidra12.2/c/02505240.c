/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02505240; name: FUN_02505240
 */


void FUN_02505240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047df288;
  if (DAT_0484f220 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_024e42d4(param_2);
  FUN_025060dc(param_1,puVar1,0,uVar2);
  return;
}


