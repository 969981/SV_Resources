/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00408150; name: FUN_00408150
 */


undefined * FUN_00408150(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_003ebf10(&PTR_DAT_044a4e08,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_047cd2b0;
  }
  iVar2 = FUN_003ebf10(&PTR_DAT_044a4e20,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_047cd2b8;
  }
  iVar2 = FUN_003ebf10(&PTR_DAT_044a4e38,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_047cd2c0;
  }
  iVar2 = FUN_003ebf10(&PTR_DAT_044a4e50,param_1);
  if (iVar2 == 0) {
    return PTR_LAB_047cd2c8;
  }
  iVar2 = FUN_003ebf10(&PTR_DAT_044a4e68,param_1);
  puVar1 = PTR_LAB_047cd2a8;
  if (iVar2 != 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


