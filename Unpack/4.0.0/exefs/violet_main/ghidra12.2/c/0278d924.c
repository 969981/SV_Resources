/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278d924; name: FUN_0278d924
 */


void FUN_0278d924(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((param_1[1] & 0x1fffffffffffffff) != 0)) {
    if ((*param_2 & 1) != 0) {
      *pbVar1 = *pbVar1 | 8;
    }
    uVar2 = param_1[4] + 1 >> 3;
    *(byte *)(param_1[3] + uVar2) =
         (byte)(1 << (param_1[4] + 1 & 7)) | *(byte *)(param_1[3] + uVar2);
  }
  return;
}


