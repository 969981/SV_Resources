/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f9370; name: FUN_003f9370
 */


undefined8 FUN_003f9370(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  
  uVar7 = FUN_003f8db0();
  if (-1 < (int)uVar7) {
    if (0 < *(int *)(param_3 + 0xf0)) {
      iVar13 = *(int *)(param_3 + 0xf0) << 2;
      lVar10 = (long)iVar13;
      lVar8 = 0;
      puVar11 = (undefined4 *)(param_3 + 8);
      puVar9 = (undefined4 *)(param_3 + (long)iVar13 * 4 + 8);
      do {
        lVar10 = lVar10 + -4;
        uVar3 = puVar11[-2];
        lVar8 = lVar8 + 4;
        puVar11[-2] = puVar9[-2];
        puVar9[-2] = uVar3;
        uVar3 = puVar11[-1];
        puVar11[-1] = puVar9[-1];
        puVar9[-1] = uVar3;
        uVar3 = *puVar11;
        *puVar11 = *puVar9;
        *puVar9 = uVar3;
        uVar3 = puVar11[1];
        puVar11[1] = puVar9[1];
        puVar9[1] = uVar3;
        puVar9 = puVar9 + -4;
        puVar11 = puVar11 + 4;
      } while (lVar8 < lVar10);
      if (1 < *(int *)(param_3 + 0xf0)) {
        iVar13 = 1;
        puVar12 = (uint *)(param_3 + 0x1c);
        do {
          uVar1 = puVar12[-3];
          uVar2 = puVar12[-2];
          bVar4 = (&DAT_03cdeea8)[((ulong)(uVar2 >> 0x10) & 0xff) * 4];
          bVar5 = (&DAT_03cdeea8)[((ulong)(uVar2 >> 8) & 0xff) * 4];
          bVar6 = (&DAT_03cdeea8)[((ulong)uVar2 & 0xff) * 4];
          uVar2 = *(uint *)(&DAT_03cdf2d0 +
                           (ulong)(byte)(&DAT_03cdeea8)[(ulong)(uVar2 >> 0x16) & 0x3fc] * 4);
          puVar12[-3] = *(uint *)(&DAT_03cdf6d0 +
                                 (ulong)(byte)(&DAT_03cdeea8)[((ulong)(uVar1 >> 0x10) & 0xff) * 4] *
                                 4) ^
                        *(uint *)(&DAT_03cdf2d0 +
                                 (ulong)(byte)(&DAT_03cdeea8)[(ulong)(uVar1 >> 0x16) & 0x3fc] * 4) ^
                        *(uint *)(&DAT_03cdfad0 +
                                 (ulong)(byte)(&DAT_03cdeea8)[((ulong)(uVar1 >> 8) & 0xff) * 4] * 4)
                        ^ *(uint *)(&DAT_03cdfed0 +
                                   (ulong)(byte)(&DAT_03cdeea8)[((ulong)uVar1 & 0xff) * 4] * 4);
          puVar12[-2] = *(uint *)(&DAT_03cdf6d0 + (ulong)bVar4 * 4) ^ uVar2 ^
                        *(uint *)(&DAT_03cdfad0 + (ulong)bVar5 * 4) ^
                        *(uint *)(&DAT_03cdfed0 + (ulong)bVar6 * 4);
          uVar2 = puVar12[-1];
          uVar1 = *puVar12;
          puVar12[-1] = *(uint *)(&DAT_03cdf6d0 +
                                 (ulong)(byte)(&DAT_03cdeea8)[((ulong)(uVar2 >> 0x10) & 0xff) * 4] *
                                 4) ^
                        *(uint *)(&DAT_03cdf2d0 +
                                 (ulong)(byte)(&DAT_03cdeea8)[(ulong)(uVar2 >> 0x16) & 0x3fc] * 4) ^
                        *(uint *)(&DAT_03cdfad0 +
                                 (ulong)(byte)(&DAT_03cdeea8)[((ulong)(uVar2 >> 8) & 0xff) * 4] * 4)
                        ^ *(uint *)(&DAT_03cdfed0 +
                                   (ulong)(byte)(&DAT_03cdeea8)[((ulong)uVar2 & 0xff) * 4] * 4);
          iVar13 = iVar13 + 1;
          *puVar12 = *(uint *)(&DAT_03cdf6d0 +
                              (ulong)(byte)(&DAT_03cdeea8)[((ulong)(uVar1 >> 0x10) & 0xff) * 4] * 4)
                     ^ *(uint *)(&DAT_03cdf2d0 +
                                (ulong)(byte)(&DAT_03cdeea8)[(ulong)(uVar1 >> 0x16) & 0x3fc] * 4) ^
                     *(uint *)(&DAT_03cdfad0 +
                              (ulong)(byte)(&DAT_03cdeea8)[((ulong)(uVar1 >> 8) & 0xff) * 4] * 4) ^
                     *(uint *)(&DAT_03cdfed0 +
                              (ulong)(byte)(&DAT_03cdeea8)[((ulong)uVar1 & 0xff) * 4] * 4);
          puVar12 = puVar12 + 4;
        } while (iVar13 < *(int *)(param_3 + 0xf0));
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}


