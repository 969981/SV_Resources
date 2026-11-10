/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00820bd0; name: FUN_00820bd0
 */


undefined8 FUN_00820bd0(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar9;
  undefined8 uVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar4 = *param_1 + (int)param_3;
  *param_1 = uVar4;
  param_1[1] = param_1[1] | (uint)(0xf < param_3 || 0xf < uVar4);
  uVar4 = param_1[10];
  uVar2 = (ulong)uVar4;
  if (uVar2 + param_3 < 0x10) {
    memcpy((void *)((long)param_1 + uVar2 + 0x18),param_2,param_3);
    param_1[10] = param_1[10] + (int)param_3;
    return 0;
  }
  puVar1 = (undefined8 *)((long)param_2 + param_3);
  if (uVar4 != 0) {
    memcpy((void *)((long)param_1 + uVar2 + 0x18),param_2,(ulong)(0x10 - uVar4));
    uVar4 = (int)*(undefined8 *)(param_1 + 2) + (int)*(undefined8 *)(param_1 + 6) * -0x7a143589;
    uVar6 = (int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
            (int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) * -0x7a143589;
    uVar7 = (int)*(undefined8 *)(param_1 + 4) + (int)*(undefined8 *)(param_1 + 8) * -0x7a143589;
    uVar9 = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) +
            (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * -0x7a143589;
    iVar10 = uVar4 * 0x2000;
    iVar11 = uVar6 * 0x2000;
    iVar12 = uVar7 * 0x2000;
    iVar13 = uVar9 * 0x2000;
    iVar10 = CONCAT13((char)((uint)iVar10 >> 0x18),
                      CONCAT12((char)((uint)iVar10 >> 0x10),
                               CONCAT11((byte)((uint)iVar10 >> 8) | (byte)(uVar4 >> 0x1b),
                                        (char)(uVar4 >> 0x13))));
    iVar12 = CONCAT13((char)((uint)iVar12 >> 0x18),
                      CONCAT12((char)((uint)iVar12 >> 0x10),
                               CONCAT11((byte)((uint)iVar12 >> 8) | (byte)(uVar7 >> 0x1b),
                                        (char)(uVar7 >> 0x13))));
    param_2 = (undefined8 *)((long)param_2 + (ulong)(0x10 - param_1[10]));
    *(ulong *)(param_1 + 4) =
         CONCAT44((int)(CONCAT17((char)((uint)iVar13 >> 0x18),
                                 CONCAT16((char)((uint)iVar13 >> 0x10),
                                          CONCAT15((byte)((uint)iVar13 >> 8) | (byte)(uVar9 >> 0x1b)
                                                   ,CONCAT14((char)(uVar9 >> 0x13),iVar12)))) >>
                       0x20) * -0x61c8864f,iVar12 * -0x61c8864f);
    *(ulong *)(param_1 + 2) =
         CONCAT44((int)(CONCAT17((char)((uint)iVar11 >> 0x18),
                                 CONCAT16((char)((uint)iVar11 >> 0x10),
                                          CONCAT15((byte)((uint)iVar11 >> 8) | (byte)(uVar6 >> 0x1b)
                                                   ,CONCAT14((char)(uVar6 >> 0x13),iVar10)))) >>
                       0x20) * -0x61c8864f,iVar10 * -0x61c8864f);
    param_1[10] = 0;
  }
  if (param_2 <= puVar1 + -2) {
    uVar8 = *(undefined8 *)(param_1 + 4);
    uVar5 = *(undefined8 *)(param_1 + 2);
    puVar3 = param_2;
    do {
      param_2 = puVar3 + 2;
      uVar4 = (int)uVar5 + (int)*puVar3 * -0x7a143589;
      uVar6 = (int)((ulong)uVar5 >> 0x20) + (int)((ulong)*puVar3 >> 0x20) * -0x7a143589;
      uVar7 = (int)uVar8 + (int)puVar3[1] * -0x7a143589;
      uVar9 = (int)((ulong)uVar8 >> 0x20) + (int)((ulong)puVar3[1] >> 0x20) * -0x7a143589;
      iVar10 = uVar4 * 0x2000;
      iVar11 = uVar6 * 0x2000;
      iVar12 = uVar7 * 0x2000;
      iVar13 = uVar9 * 0x2000;
      iVar10 = CONCAT13((char)((uint)iVar10 >> 0x18),
                        CONCAT12((char)((uint)iVar10 >> 0x10),
                                 CONCAT11((byte)((uint)iVar10 >> 8) | (byte)(uVar4 >> 0x1b),
                                          (char)(uVar4 >> 0x13))));
      iVar12 = CONCAT13((char)((uint)iVar12 >> 0x18),
                        CONCAT12((char)((uint)iVar12 >> 0x10),
                                 CONCAT11((byte)((uint)iVar12 >> 8) | (byte)(uVar7 >> 0x1b),
                                          (char)(uVar7 >> 0x13))));
      uVar5 = CONCAT44((int)(CONCAT17((char)((uint)iVar11 >> 0x18),
                                      CONCAT16((char)((uint)iVar11 >> 0x10),
                                               CONCAT15((byte)((uint)iVar11 >> 8) |
                                                        (byte)(uVar6 >> 0x1b),
                                                        CONCAT14((char)(uVar6 >> 0x13),iVar10)))) >>
                            0x20) * -0x61c8864f,iVar10 * -0x61c8864f);
      uVar8 = CONCAT44((int)(CONCAT17((char)((uint)iVar13 >> 0x18),
                                      CONCAT16((char)((uint)iVar13 >> 0x10),
                                               CONCAT15((byte)((uint)iVar13 >> 8) |
                                                        (byte)(uVar9 >> 0x1b),
                                                        CONCAT14((char)(uVar9 >> 0x13),iVar12)))) >>
                            0x20) * -0x61c8864f,iVar12 * -0x61c8864f);
      puVar3 = param_2;
    } while (param_2 <= puVar1 + -2);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  if (param_2 < puVar1) {
    memcpy(param_1 + 6,param_2,(long)puVar1 - (long)param_2);
    param_1[10] = (uint)((long)puVar1 - (long)param_2);
    return 0;
  }
  return 0;
}


