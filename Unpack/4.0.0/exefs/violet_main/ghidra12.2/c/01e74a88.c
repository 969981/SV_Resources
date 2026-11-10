/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e74a88; name: FUN_01e74a88
 */


void FUN_01e74a88(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 local_50 [2];
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = *(undefined8 *)PTR_PTR_047e20d8;
  local_40 = param_2 + 0x48;
  uStack_28 = param_3;
  FUN_027b91ec(&local_38,*(undefined8 *)(param_2 + 0x40),&local_40,&uStack_28,&local_30);
  local_50[0] = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_01f710f0(local_50);
  *(long *)(param_2 + 0x78) = local_38;
  if (local_38 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01f717cc(local_50);
    FUN_027b9280(param_1,local_50);
    FUN_01d0fcc8(local_50);
  }
  return;
}


