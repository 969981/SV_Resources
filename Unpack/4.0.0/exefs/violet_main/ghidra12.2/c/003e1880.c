/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e1880; name: FUN_003e1880
 */


undefined8
FUN_003e1880(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar1 = &uStack_18;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  iVar2 = FUN_003e1950(puVar1);
  if (iVar2 < 1) {
    FUN_003e47c0(puVar1,param_4);
    return 0;
  }
  return *puVar1;
}


