/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e1f5c; name: FUN_033e1f5c
 */


undefined8
FUN_033e1f5c(float param_1,uint *param_2,long *param_3,undefined4 *param_4,undefined4 *param_5,
            uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((param_7 - 1 | param_6 - 1) < 0x40) {
    fVar11 = exp2f(param_1 * 0.01);
    fVar12 = (float)NEON_fminnm(*param_4,*param_5);
    fVar12 = fVar12 * fVar11;
    fVar13 = (float)param_4[(ulong)(param_6 - 1) * 2];
    if ((float)param_4[(ulong)(param_6 - 1) * 2] <= (float)param_5[(ulong)(param_7 - 1) * 2]) {
      fVar13 = (float)param_5[(ulong)(param_7 - 1) * 2];
    }
    fVar14 = (float)param_8 * 0.001;
    uVar7 = (uint)((fVar13 * fVar11 - fVar12) * fVar14);
    if (uVar7 < 5) {
      uVar7 = 4;
    }
    if (uVar7 >> 0x10 == 0) {
      *param_2 = uVar7 & 0xfffc;
      lVar5 = (**(code **)(*param_3 + 0x10))
                        (param_3,(uVar7 & 0xfffc) << 2,
                         "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkRoomVerb/ERUnitDual.cpp"
                         ,0x36);
      *(long *)(param_2 + 2) = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      *(undefined2 *)(param_2 + 0xc5) = 0;
      if (param_6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = *param_2;
        uVar9 = 0;
        uVar8 = 0;
        uVar6 = 0;
        uVar10 = 0xffffffff;
        do {
          uVar9 = uVar9 & 0xffff;
          uVar2 = (int)(((float)param_4[uVar9 * 2] * fVar11 - fVar12) * fVar14) & 0xfffffffc;
          if (uVar7 <= uVar2) {
            uVar2 = uVar7 - 4;
          }
          if (uVar2 != uVar10) {
            sVar3 = 0;
            if (uVar2 != 0) {
              sVar3 = (short)uVar7 - (short)uVar2;
            }
            *(short *)((long)param_2 + (ulong)uVar6 * 2 + 0x214) = sVar3;
            param_2[(ulong)uVar6 + 5] = param_4[uVar9 * 2 + 1];
            uVar4 = *(ushort *)((long)param_2 + (ulong)uVar6 * 2 + 0x214);
            if (uVar8 < uVar4) {
              *(ushort *)(param_2 + 0xc5) = uVar6;
              uVar8 = uVar4;
            }
            uVar6 = uVar6 + 1;
          }
          uVar1 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          uVar10 = uVar2;
        } while ((uVar1 & 0xffff) < param_6);
      }
      *(ushort *)(param_2 + 0xc6) = uVar6;
      *(undefined2 *)((long)param_2 + 0x316) = 0;
      if (param_7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = *param_2;
        uVar9 = 0;
        uVar8 = 0;
        uVar6 = 0;
        uVar10 = 0xffffffff;
        do {
          uVar9 = uVar9 & 0xffff;
          uVar2 = (int)(((float)param_5[uVar9 * 2] * fVar11 - fVar12) * fVar14) & 0xfffffffc;
          if (uVar7 <= uVar2) {
            uVar2 = uVar7 - 4;
          }
          if (uVar2 != uVar10) {
            sVar3 = 0;
            if (uVar2 != 0) {
              sVar3 = (short)uVar7 - (short)uVar2;
            }
            *(short *)((long)param_2 + (ulong)uVar6 * 2 + 0x294) = sVar3;
            param_2[(ulong)uVar6 + 0x45] = param_5[uVar9 * 2 + 1];
            uVar4 = *(ushort *)((long)param_2 + (ulong)uVar6 * 2 + 0x294);
            if (uVar8 < uVar4) {
              *(ushort *)((long)param_2 + 0x316) = uVar6;
              uVar8 = uVar4;
            }
            uVar6 = uVar6 + 1;
          }
          uVar1 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          uVar10 = uVar2;
        } while ((uVar1 & 0xffff) < param_7);
      }
      *(ushort *)((long)param_2 + 0x31a) = uVar6;
      param_2[4] = 0;
      return 1;
    }
  }
  return 2;
}


