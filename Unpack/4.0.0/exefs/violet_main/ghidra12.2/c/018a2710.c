/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a2710; name: FUN_018a2710
 */


undefined4 FUN_018a2710(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar2 = param_2[1] - (long)*param_2;
    puVar1 = &DAT_0486a240;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_2;
    }
    uVar3 = FUN_018a291c(param_1,puVar1,lVar2 >> 2);
  }
  uVar3 = FUN_018a2770(param_1,uVar3);
  return uVar3;
}


