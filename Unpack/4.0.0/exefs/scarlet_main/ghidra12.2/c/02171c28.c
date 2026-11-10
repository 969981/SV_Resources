/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02171c28; name: FUN_02171c28
 */


undefined8 FUN_02171c28(undefined2 *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = FUN_021718e4(*param_1,1);
  bVar4 = (uVar5 & 1) == 0;
  lVar1 = 2;
  if (bVar4) {
    lVar1 = 0;
  }
  uVar3 = *(ushort *)((long)param_1 + lVar1);
  puVar2 = param_1 + 1;
  if (bVar4) {
    puVar2 = param_1;
  }
  if (((uVar3 < 0x100) &&
      ((*(uint *)(&DAT_03cbf2c0 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)) ||
     (((uVar3 | 0x20) == 0x79 &&
      ((uVar3 = puVar2[1], 0xff < uVar3 ||
       ((*(uint *)(&DAT_03cbf2c0 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) == 0))))))
  {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


