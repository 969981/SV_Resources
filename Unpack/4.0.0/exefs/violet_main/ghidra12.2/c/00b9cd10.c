/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b9cd10; name: FUN_00b9cd10
 */


void FUN_00b9cd10(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  std::string::reserve((ulong)param_1);
  uVar2 = 0;
  do {
    if ((*param_2 & 1) == 0) {
      if (*param_2 >> 1 <= uVar2) goto LAB_00b9cdf8;
      bVar1 = param_2[uVar2 + 1];
    }
    else {
      if (*(ulong *)(param_2 + 8) <= uVar2) {
LAB_00b9cdf8:
        if ((param_3 & 1) != 0) {
          if ((*param_1 & 1) == 0) {
            if (*param_1 < 2) {
              return;
            }
            param_1 = param_1 + 1;
            bVar1 = *param_1;
          }
          else {
            if (*(long *)(param_1 + 8) == 0) {
              return;
            }
            param_1 = *(byte **)(param_1 + 0x10);
            bVar1 = *param_1;
          }
          if (bVar1 - 0x41 < 0x1a) {
            *param_1 = bVar1 + 0x20;
          }
        }
        return;
      }
      bVar1 = *(byte *)(*(long *)(param_2 + 0x10) + uVar2);
    }
    if (bVar1 != 0x5f) {
      std::string::push_back((char)param_1);
    }
    uVar2 = uVar2 + 1;
  } while( true );
}


