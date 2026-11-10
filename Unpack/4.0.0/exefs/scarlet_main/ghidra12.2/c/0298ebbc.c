/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


