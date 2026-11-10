/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e12e0; name: FUN_029e12e0
 */


undefined4 FUN_029e12e0(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 != (undefined8 *)0x0) {
    lVar2 = param_3[1] - (long)*param_3;
    puVar1 = &DAT_0486b039;
    if (lVar2 != 0) {
      puVar1 = (undefined *)*param_3;
    }
    uVar3 = FUN_029e16a0(param_1,puVar1,lVar2 >> 2);
  }
  uVar3 = FUN_029e17e0(param_1,param_2,uVar3);
  return uVar3;
}


