/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124b30c; name: FUN_0124b30c
 */


void FUN_0124b30c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 local_40 [16];
  
  uVar3 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar3 & 1) == 0) {
    local_40 = (**(code **)(*param_2 + 0x240))(param_2,0x14);
    uVar1 = FUN_01a375b0(local_40);
    uVar2 = (**(code **)(*param_2 + 0x248))(param_2,0x14);
    if (0 < (int)((uVar1 & 0xff) - (uVar2 & 0xff))) {
      FUN_029889d4(param_1,param_2);
    }
  }
  return;
}


