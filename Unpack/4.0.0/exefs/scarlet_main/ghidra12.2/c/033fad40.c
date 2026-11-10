/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033fad40; name: FUN_033fad40
 */


undefined8 FUN_033fad40(long param_1,byte param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  
  uVar5 = (uint)param_2;
  if (param_2 != 0) {
    lVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                       (*(long **)(param_1 + 0x20),uVar5 * 0x38,
                        "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkFlanger/AkFlangerFX.cpp"
                        ,99);
    *(long *)(param_1 + 8) = lVar11;
    if (lVar11 == 0) {
      return 0x34;
    }
    lVar14 = 0;
    while( true ) {
      if (lVar11 != 0) {
        puVar1 = (undefined8 *)(lVar11 + lVar14);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined4 *)(puVar1 + 6) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
      }
      if ((ulong)uVar5 * 0x38 + -0x38 == lVar14) break;
      lVar11 = *(long *)(param_1 + 8);
      lVar14 = lVar14 + 0x38;
    }
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
    uVar13 = (uint)(*(float *)(param_1 + 0x68) * 0.001 * fVar15);
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    if (uVar13 < 9) {
      uVar13 = 8;
    }
    uVar3 = uVar13 + 3 & 0xfffffffc;
    uVar13 = uVar3 * 2 + 0x400;
    lVar11 = 0;
    do {
      plVar9 = *(long **)(param_1 + 0x20);
      lVar14 = *(long *)(param_1 + 8);
      plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
      (**(code **)(*plVar12 + 0x18))();
      uVar10 = *(uint *)(param_1 + 0x30);
      uVar7 = *(uint *)(param_1 + 0x34);
      uVar8 = *(uint *)(param_1 + 0x38);
      puVar2 = (uint *)(lVar14 + lVar11);
      uVar4 = (int)(*(float *)(param_1 + 0x3c) * (float)uVar3) & 0xfffffffc;
      uVar6 = 0x3000;
      if (uVar4 * 8 + 0x1000 >> 0xc < 0x19) {
        uVar6 = uVar4;
      }
      if (uVar3 <= uVar6) {
        uVar6 = uVar6 - 4;
      }
      puVar2[0xb] = uVar7;
      puVar2[0xc] = uVar10;
      *puVar2 = uVar3;
      puVar2[1] = uVar6;
      puVar2[7] = uVar8;
      puVar2[8] = uVar7;
      puVar2[9] = uVar10;
      puVar2[10] = uVar8;
      puVar2[2] = uVar13;
      lVar14 = (**(code **)(*plVar9 + 0x10))
                         (plVar9,(ulong)uVar13 << 2,
                          "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/Common/UniComb.cpp"
                          ,0x30);
      *(long *)(puVar2 + 4) = lVar14;
      if (lVar14 == 0) {
        return 0x34;
      }
      lVar11 = lVar11 + 0x38;
      puVar2[6] = 0;
    } while ((ulong)uVar5 * 0x38 != lVar11);
  }
  return 1;
}


