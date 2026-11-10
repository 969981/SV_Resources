/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046a3b0; name: FUN_0046a3b0
 */


undefined8
FUN_0046a3b0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) ||
     (iVar1 = *(int *)*param_1, iVar1 == 0x390 || iVar1 == 6)) {
    uVar2 = FUN_00440390(param_1,0xffffffff,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0xffffffff;
}


