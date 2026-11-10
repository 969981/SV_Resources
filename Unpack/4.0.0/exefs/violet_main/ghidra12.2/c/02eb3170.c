/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb3170; name: FUN_02eb3170
 */


long * FUN_02eb3170(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  int iVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  long *plVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  float fVar24;
  int iVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint local_d0;
  undefined8 local_98;
  int local_90;
  int iStack_8c;
  undefined8 local_88;
  
  (**(code **)(*param_3 + 0x20))(param_3,&iStack_8c,&local_90);
  puVar15 = PTR_DAT_047d1a08;
  iVar8 = iStack_8c + -1;
  iVar9 = local_90 + -1;
  uVar17 = 0;
  iVar3 = iVar8;
  if (iStack_8c <= local_90) {
    iVar3 = iVar9;
  }
  do {
    uVar17 = uVar17 + 1;
  } while (2 << (ulong)(uVar17 & 0x1f) < iVar3);
  if ((int)param_4 <= (int)uVar17) {
    uVar17 = param_4;
  }
  if ((int)param_4 < 1) {
    uVar17 = 1;
  }
  iVar3 = 1 << (ulong)(uVar17 & 0x1f);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = (iVar3 + -1 + iVar8) / iVar3;
  }
  uVar7 = 0;
  if (iVar3 != 0) {
    uVar7 = (iVar3 + -1 + iVar9) / iVar3;
  }
  uVar6 = (uVar6 & 1) + uVar6;
  uVar7 = (uVar7 & 1) + uVar7;
  local_88 = 0x60;
  plVar16 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_88,0);
  if (*(code **)(puVar15 + 0x10) != (code *)0x0) {
    (**(code **)(puVar15 + 0x10))(plVar16,"hknpHeightFieldBoundingVolume");
  }
  plVar16[2] = 1;
  *plVar16 = (long)(PTR_DAT_047e3490 + 0x10);
  plVar16[1] = 0xffffffff;
  plVar21 = plVar16 + 4;
  *plVar21 = 0;
  plVar16[5] = 0;
  *(uint *)(plVar16 + 10) = uVar17;
  local_88 = CONCAT44(param_1,param_1);
  local_98 = CONCAT44(param_2,param_2);
  FUN_02ebb6e0(plVar21,uVar6,uVar7,&local_88,&local_98);
  if (0 < (int)uVar7) {
    uVar32 = NEON_fmov(0xbf800000,4);
    uVar33 = NEON_fmov(0x3f800000,4);
    local_d0 = 0;
    do {
      if (0 < (int)uVar6) {
        uVar20 = 0;
        iVar4 = local_d0 << (ulong)(uVar17 & 0x1f);
        iVar2 = iVar4 + iVar3;
        if (iVar9 <= iVar4 + iVar3) {
          iVar2 = iVar9;
        }
        do {
          uVar22 = 0xffee;
          uVar23 = 0xff7f;
          uVar26 = 0xffee;
          uVar27 = 0x7f7f;
          local_88 = 0x7f7fffee7f7fffee;
          local_98 = 0xff7fffeeff7fffee;
          fVar24 = -3.40282e+38;
          fVar28 = 3.40282e+38;
          if (iVar4 < iVar9) {
            uVar22 = 0xffee;
            uVar23 = 0xff7f;
            uVar26 = 0xffee;
            uVar27 = 0x7f7f;
            iVar5 = uVar20 << (ulong)(uVar17 & 0x1f);
            if (iVar5 < iVar8) {
              iVar13 = iVar5 + iVar3;
              if (iVar8 <= iVar5 + iVar3) {
                iVar13 = iVar8;
              }
              FUN_02eb2c30(param_3,iVar8,iVar9,iVar5,iVar4,iVar13,iVar2,&local_88,&local_98);
              uVar26 = (undefined2)local_88;
              uVar27 = (undefined2)((ulong)local_88 >> 0x10);
              fVar28 = (float)((ulong)local_88 >> 0x20);
              uVar22 = (undefined2)local_98;
              uVar23 = (undefined2)((ulong)local_98 >> 0x10);
              fVar24 = (float)((ulong)local_98 >> 0x20);
            }
          }
          fVar31 = (float)plVar16[6];
          fVar30 = *(float *)((long)plVar16 + 0x44);
          iVar13 = (int)(((float)CONCAT22(uVar27,uVar26) - fVar31) * fVar30 + (float)uVar32);
          iVar29 = (int)((fVar28 - fVar31) * fVar30 + (float)((ulong)uVar32 >> 0x20));
          iVar5 = (int)(((float)CONCAT22(uVar23,uVar22) - fVar31) * fVar30 + (float)uVar33);
          iVar25 = (int)((fVar24 - fVar31) * fVar30 + (float)((ulong)uVar33 >> 0x20));
          auVar12._12_4_ = iVar29;
          auVar12._8_4_ = iVar13;
          plVar1 = (long *)(plVar16[4] + (long)plVar21);
          auVar10._12_4_ = iVar25;
          auVar10._8_4_ = iVar5;
          uVar18 = ((local_d0 >> 1) + (uVar20 >> 1) * (uint)*(ushort *)((long)plVar1 + 0x12)) * 4;
          auVar12._4_4_ = iVar29;
          auVar12._0_4_ = iVar13;
          uVar14 = NEON_sqxtun(CONCAT44(iVar29,iVar13),auVar12,4);
          auVar10._4_4_ = iVar25;
          auVar10._0_4_ = iVar5;
          uVar11 = NEON_sqxtun(CONCAT44(iVar25,iVar5),auVar10,4);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar20 & 1 | (local_d0 & 1) << 1) {
          case 0:
            *(short *)((long)plVar1 + (ulong)uVar18 * 4 + *plVar1) = (short)uVar14;
            puVar19 = (uint *)((long)plVar1 + (ulong)(uVar18 | 2) * 4 + *plVar1);
            uVar18 = (uint)uVar11 & 0xffff | (uint)*(ushort *)((long)puVar19 + 2) << 0x10;
            break;
          case 1:
            *(short *)((long)plVar1 + (ulong)(uVar18 | 1) * 4 + *plVar1 + 2) = (short)uVar14;
            puVar19 = (uint *)((long)plVar1 + (ulong)(uVar18 | 3) * 4 + *plVar1);
            uVar18 = (uint)(ushort)*puVar19 | (uint)uVar11 << 0x10;
          }
          uVar20 = uVar20 + 1;
          *puVar19 = uVar18;
        } while (uVar6 != uVar20);
      }
      local_d0 = local_d0 + 1;
    } while (local_d0 != uVar7);
  }
  FUN_02ebbbe0(plVar21,0,0,*(ushort *)((long)plVar21 + plVar16[4] + 0x10) - 1,
               *(ushort *)((long)plVar21 + plVar16[4] + 0x12) - 1,&local_88,&local_98);
  return plVar16;
}


