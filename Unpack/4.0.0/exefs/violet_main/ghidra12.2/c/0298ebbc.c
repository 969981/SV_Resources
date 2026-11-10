/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298ebbc; name: FUN_0298ebbc
 */


void FUN_0298ebbc(long param_1,byte param_2)

{
  ulong uVar1;
  
  param_2 = param_2 & 1;
  *(byte *)(param_1 + 0x4dd) = param_2;
  uVar1 = FUN_0298ec40(*(undefined4 *)(param_1 + 0x34),0,1);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x4de) = param_2;
  }
  uVar1 = FUN_0298ec40(*(undefined4 *)(param_1 + 0x34),0,2);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x4df) = param_2;
  }
  uVar1 = FUN_0298ec40(*(undefined4 *)(param_1 + 0x34),0,3);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x4e0) = param_2;
  }
  uVar1 = FUN_0298ec40(*(undefined4 *)(param_1 + 0x34),0,4);
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x4e1) = param_2;
  }
  return;
}


