/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278e1d8; name: FUN_0278e1d8
 */


void FUN_0278e1d8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((param_1[1] & 0x1fffffffffffffff) != 0)) {
    if ((*param_2 & 1) != 0) {
      *pbVar1 = *pbVar1 | 1;
    }
    uVar2 = (ulong)param_1[4] >> 3;
    *(byte *)(param_1[3] + uVar2) = (byte)(1 << (param_1[4] & 7)) | *(byte *)(param_1[3] + uVar2);
  }
  return;
}


