/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ef758; name: FUN_026ef758
 */


void FUN_026ef758(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = FUN_026d5d80(lVar3);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_026ef7b0(param_1[5],param_2,lVar3 + 0x148,*(undefined4 *)(lVar3 + 0x348));
    *(undefined4 *)(lVar3 + 0x348) = uVar1;
  }
  return;
}


