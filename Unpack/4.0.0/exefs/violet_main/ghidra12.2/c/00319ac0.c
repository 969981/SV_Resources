/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319ac0; name: FUN_00319ac0
 */


void FUN_00319ac0(uint param_1,byte *param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_3 - 1);
  switch(uVar1) {
  case 4:
    param_2[4] = (byte)(param_1 >> 0x1c) | 0x80;
  case 3:
    param_2[3] = (byte)(param_1 >> 0x15) | 0x80;
  case 2:
    param_2[2] = (byte)(param_1 >> 0xe) | 0x80;
  case 1:
    param_2[1] = (byte)(param_1 >> 7) | 0x80;
  case 0:
    *param_2 = (byte)param_1 | 0x80;
  default:
    param_2[uVar1] = param_2[uVar1] & 0x7f;
    return;
  }
}


