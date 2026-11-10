/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c8aac; name: FUN_031c8aac
 */


undefined4 FUN_031c8aac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,1);
  }
  if (*(int *)(param_1 + 1) != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  uVar1 = FUN_031c8c08(param_1,param_2,param_3);
  return uVar1;
}


