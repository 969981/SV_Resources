/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01972138; name: FUN_01972138
 */


void FUN_01972138(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar3);
  param_3[2] = lVar3 + 1;
  if (bVar1 < 0x81) {
    if (bVar1 == 0x80) {
      bVar1 = *(byte *)(*param_3 + lVar3 + 1);
      param_3[2] = lVar3 + 2;
    }
    *param_2 = bVar1;
    lVar3 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar3);
    param_3[2] = lVar3 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar3 + 1);
        param_3[2] = lVar3 + 2;
      }
      uVar2 = 0;
      param_2[1] = bVar1;
      goto LAB_01972184;
    }
  }
  uVar2 = 1;
LAB_01972184:
  *param_1 = uVar2;
  return;
}


