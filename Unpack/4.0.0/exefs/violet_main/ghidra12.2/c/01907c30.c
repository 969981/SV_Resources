/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01907c30; name: FUN_01907c30
 */


void FUN_01907c30(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_01246e90();
  uVar2 = FUN_0124b9a4(uVar1,*param_3,*(undefined4 *)(param_3 + 1),
                       *(undefined1 *)((long)param_3 + 0xc));
  if ((uVar2 & 1) != 0) {
    *param_2 = 1;
  }
  return;
}


