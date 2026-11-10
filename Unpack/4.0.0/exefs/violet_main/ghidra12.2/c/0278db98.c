/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278db98; name: FUN_0278db98
 */


void FUN_0278db98(long param_1,ulong *param_2,byte *param_3)

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
    bVar1 = *param_3;
  }
  if ((bVar1 >> 3 & 1) != 0) {
    uVar2 = *param_2 + 3 >> 3;
    *(byte *)(param_1 + uVar2) = (byte)(1 << (*param_2 + 3 & 7)) | *(byte *)(param_1 + uVar2);
  }
  return;
}


