/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278da48; name: FUN_0278da48
 */


void FUN_0278da48(long param_1,ulong *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_3;
  if ((bVar1 & 1) != 0) {
    uVar2 = *param_2 >> 3;
    *(byte *)(param_1 + uVar2) = (byte)(1 << (*param_2 & 7)) | *(byte *)(param_1 + uVar2);
    bVar1 = *param_3;
  }
  if ((bVar1 >> 1 & 1) != 0) {
    uVar2 = *param_2 + 1 >> 3;
    *(byte *)(param_1 + uVar2) = (byte)(1 << (*param_2 + 1 & 7)) | *(byte *)(param_1 + uVar2);
    bVar1 = *param_3;
  }
  if ((bVar1 >> 2 & 1) != 0) {
    uVar2 = *param_2 + 2 >> 3;
    *(byte *)(param_1 + uVar2) = (byte)(1 << (*param_2 + 2 & 7)) | *(byte *)(param_1 + uVar2);
  }
  return;
}


