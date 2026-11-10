/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f0980; name: FUN_003f0980
 */


undefined8 FUN_003f0980(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auStack_d0 [128];
  
  puVar9 = auStack_d0;
  uVar6 = *(uint *)(param_4 + 1);
  lVar8 = FUN_003eb9a0(param_1,uVar6);
  uVar10 = 0;
  if (lVar8 != 0) {
    uVar16 = (ulong)(int)uVar6;
    if ((0x20 < uVar6) &&
       (puVar9 = (undefined1 *)FUN_00452c30(uVar16 << 2,"external/openssl/crypto/bn/bn_mod.c",0x3c),
       puVar9 == (undefined1 *)0x0)) {
      return 0;
    }
    puVar4 = puVar9;
    if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)*param_2;
    }
    puVar5 = puVar9;
    if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*param_3;
    }
    if (uVar6 == 0) {
      uVar17 = 0;
    }
    else {
      uVar12 = 0;
      lVar8 = 0;
      lVar11 = 0;
      uVar17 = 0;
      do {
        uVar2 = *(uint *)(puVar4 + lVar8 * 4) &
                (uint)((long)(uVar12 - (long)*(int *)(param_2 + 1)) >> 0x3f);
        uVar1 = uVar2 + uVar17;
        uVar3 = *(uint *)(puVar5 + lVar11 * 4) &
                (uint)((long)(uVar12 - (long)*(int *)(param_3 + 1)) >> 0x3f);
        uVar13 = 2;
        if (!CARRY4(uVar2,uVar17)) {
          uVar13 = 1;
        }
        *(uint *)(puVar9 + uVar12 * 4) = uVar3 + uVar1;
        lVar14 = uVar12 - (long)*(int *)((long)param_2 + 0xc);
        lVar15 = uVar12 - (long)*(int *)((long)param_3 + 0xc);
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 - (lVar14 + 1 >> 0x3f);
        lVar11 = lVar11 - (lVar15 + 1 >> 0x3f);
        uVar17 = (uint)CARRY4(uVar2,uVar17);
        if (CARRY4(uVar3,uVar1)) {
          uVar17 = uVar13;
        }
      } while (uVar12 < uVar16);
    }
    lVar8 = *param_1;
    iVar7 = FUN_003ee6a0(lVar8,puVar9,*param_4,uVar6);
    if (uVar6 != 0) {
      uVar12 = 0;
      do {
        lVar11 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        *(uint *)(lVar8 + lVar11) =
             *(uint *)(lVar8 + lVar11) & ~(uVar17 - iVar7) |
             *(uint *)(puVar9 + lVar11) & uVar17 - iVar7;
        *(undefined4 *)(puVar9 + lVar11) = 0;
      } while (uVar12 < uVar16);
    }
    *(uint *)(param_1 + 1) = uVar6;
    *(undefined4 *)(param_1 + 2) = 0;
    if (puVar9 != auStack_d0) {
      FUN_00452f80(puVar9,"external/openssl/crypto/bn/bn_mod.c",0x5a);
    }
    uVar10 = 1;
  }
  return uVar10;
}


