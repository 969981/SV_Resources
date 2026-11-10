/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df12b0; name: FUN_01df12b0
 */


void FUN_01df12b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01dd994c(*(undefined8 *)(param_1 + 0x30),param_1 + 0x40);
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar1 = FUN_01ddc730(*(undefined8 *)(param_1 + 0x30));
  FUN_01ddc9d0(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 - 0x16U < 3) {
    FUN_01dcddfc(*(undefined8 *)(param_1 + 0x30),
                 *(undefined4 *)(&DAT_03d3024c + (long)(int)(iVar1 - 0x16U) * 4),0,1,1,0);
    uVar3 = 0xb;
  }
  else {
    uVar3 = 2;
  }
  FUN_01704cf8(*(undefined8 *)(param_1 + 0x30),uVar3);
  return;
}


