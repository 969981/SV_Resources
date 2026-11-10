/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0db10; name: FUN_02f0db10
 */


undefined8 FUN_02f0db10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar3;
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return 0x30;
}


