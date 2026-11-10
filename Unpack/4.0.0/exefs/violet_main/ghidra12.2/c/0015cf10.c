/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015cf10; name: FUN_0015cf10
 */


void FUN_0015cf10(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (0x7f < (long)param_3) {
    uVar2 = param_3 >> 7;
    do {
      uVar2 = uVar2 - 1;
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2;
      param_1[3] = param_2;
      param_1[4] = param_2;
      param_1[5] = param_2;
      param_1[6] = param_2;
      param_1[7] = param_2;
      param_1[8] = param_2;
      param_1[9] = param_2;
      param_1[10] = param_2;
      param_1[0xb] = param_2;
      param_1[0xc] = param_2;
      param_1[0xd] = param_2;
      param_1[0xe] = param_2;
      param_1[0xf] = param_2;
      param_1 = param_1 + 0x10;
    } while (0 < (long)uVar2);
  }
  uVar3 = (param_3 & 0x7f) >> 5;
  uVar2 = (param_3 & 0x7f) - (param_3 & 0x60);
  lVar1 = (long)uVar2 >> 3;
  if (uVar3 != 0) {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    if (uVar3 == 1) {
      param_1 = param_1 + 4;
    }
    else {
      param_1[4] = param_2;
      param_1[5] = param_2;
      param_1[6] = param_2;
      param_1[7] = param_2;
      if (uVar3 == 2) {
        param_1 = param_1 + 8;
      }
      else {
        param_1[8] = param_2;
        param_1[9] = param_2;
        param_1[10] = param_2;
        param_1[0xb] = param_2;
        param_1 = param_1 + 0xc;
      }
    }
  }
  if (lVar1 != 0) {
    uVar3 = lVar1 - 1;
    for (uVar2 = uVar2 >> 3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar1 = lVar1 + -1;
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
    if (2 < uVar3) {
      do {
        *param_1 = param_2;
        param_1[1] = param_2;
        lVar1 = lVar1 + -4;
        param_1[2] = param_2;
        param_1[3] = param_2;
        param_1 = param_1 + 4;
      } while (lVar1 != 0);
    }
  }
  return;
}


