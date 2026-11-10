/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027856a8; name: FUN_027856a8
 */


void FUN_027856a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_18 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_02785618(auStack_18);
  FUN_027859f8(uVar1,auStack_18);
  FUN_02782500(auStack_18);
  FUN_00c43ef0(param_1 + 0x20,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


