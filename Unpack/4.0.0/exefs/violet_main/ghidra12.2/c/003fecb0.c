/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fecb0; name: FUN_003fecb0
 */


undefined8 FUN_003fecb0(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  lVar4 = FUN_003eb9a0();
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar8 = 1 << (ulong)(param_5 & 0x1f);
    if ((int)param_5 < 4) {
      if (0 < (int)param_2) {
        lVar4 = *param_1;
        uVar2 = uVar8;
        if ((int)uVar8 < 2) {
          uVar2 = 1;
        }
        uVar11 = 0;
        uVar3 = param_4 ^ 0x80000000;
        do {
          if ((int)uVar8 < 2) {
            uVar14 = 0;
            uVar12 = 0;
          }
          else {
            uVar14 = 0;
            uVar12 = 0;
            do {
              puVar1 = (uint *)(param_3 + uVar14 * 4);
              uVar13 = (uint)uVar14;
              uVar14 = uVar14 + 2;
              uVar12 = puVar1[1] & (int)((uVar13 + 1 ^ param_4) - 1 & uVar3) >> 0x1f |
                       *puVar1 & (int)((uVar13 ^ param_4) - 1 & uVar3) >> 0x1f | uVar12;
            } while (((ulong)uVar2 & 0x7ffffffe) != uVar14);
          }
          if ((uVar2 & 1) != 0) {
            uVar12 = *(uint *)(param_3 + uVar14 * 4) &
                     (int)(((uint)uVar14 ^ param_4) - 1 & uVar3) >> 0x1f | uVar12;
          }
          *(uint *)(lVar4 + uVar11 * 4) = uVar12;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2);
        } while (uVar11 != param_2);
      }
    }
    else if (0 < (int)param_2) {
      __s = (void *)*param_1;
      param_5 = param_5 - 2;
      if (param_5 == 0x1f) {
        memset(__s,0,(ulong)param_2 << 2);
      }
      else {
        uVar2 = (int)param_4 >> (param_5 & 0x1f);
        uVar12 = uVar2 ^ 0x80000000;
        uVar13 = 1 << (ulong)(param_5 & 0x1f);
        lVar4 = param_3 + (long)(3 << (ulong)(param_5 & 0x1f)) * 4;
        lVar6 = param_3 + (long)(int)(uVar13 << 1) * 4;
        param_4 = uVar13 - 1 & param_4;
        uVar11 = 0;
        uVar3 = uVar13;
        if ((int)uVar13 < 2) {
          uVar3 = 1;
        }
        lVar7 = (ulong)uVar8 * 4;
        do {
          uVar14 = 0;
          uVar8 = 0;
          do {
            lVar10 = uVar14 * 4;
            uVar9 = (uint)uVar14;
            uVar14 = uVar14 + 1;
            uVar8 = (*(uint *)(param_3 + (long)(int)(uVar13 + uVar9) * 4) &
                     (int)((uVar2 ^ 1) - 1 & uVar12) >> 0x1f |
                     *(uint *)(param_3 + lVar10) & (int)(uVar2 - 1 & uVar12) >> 0x1f |
                     *(uint *)(lVar6 + lVar10) & (int)((uVar2 ^ 2) - 1 & uVar12) >> 0x1f |
                    *(uint *)(lVar4 + lVar10) & (int)((uVar2 ^ 3) - 1 & uVar12) >> 0x1f) &
                    (int)((param_4 ^ uVar9) - 1 & (param_4 ^ 0x80000000)) >> 0x1f | uVar8;
          } while (uVar3 != uVar14);
          *(uint *)((long)__s + uVar11 * 4) = uVar8;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + lVar7;
          lVar4 = lVar4 + lVar7;
          lVar6 = lVar6 + lVar7;
        } while (uVar11 != param_2);
      }
    }
    uVar5 = 1;
    *(uint *)(param_1 + 1) = param_2;
  }
  return uVar5;
}


