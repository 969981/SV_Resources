/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00152010; name: FUN_00152010
 */


long FUN_00152010(ulong param_1,long param_2,ulong param_3,long param_4,ulong *param_5,
                 undefined4 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int local_98 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((param_3 & 0x3fff) == 0) {
    if (param_2 < 2) {
LAB_0015207c:
      lVar6 = 0;
    }
    else {
      uVar1 = param_4 + param_3;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 1;
      }
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      uVar13 = param_1;
      uVar15 = param_3;
      if ((long)param_3 < (long)uVar1) {
        uVar2 = param_1 + param_2;
        do {
          while( true ) {
            uVar11 = uVar15 + 0x40000 & 0xfffffffffffc0000;
            if ((long)uVar1 <= (long)uVar11) {
              uVar11 = uVar1;
            }
            iVar14 = (int)(uVar11 - uVar15);
            if ((uVar15 & 0x3ffff) == 0) break;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = 0;
            }
joined_r0x00152210:
            if (iVar14 < 1) {
              iVar5 = 0;
            }
            else {
              iVar5 = 0;
              do {
                iVar12 = iVar14 - iVar5;
                if (0x3fff < iVar12) {
                  iVar12 = 0x4000;
                }
                iVar4 = FUN_0015cab0(uVar13,uVar2,local_98,local_68._4_4_,iVar12);
                if (iVar4 < 1) {
LAB_001522d4:
                  if (param_5 != (ulong *)0x0) {
                    *param_5 = uVar15;
                  }
                  goto LAB_001522e0;
                }
                if (((long)param_3 < (long)uVar15) &&
                   ((long)(uVar2 - uVar13) < (long)(local_98[0] + iVar4))) goto LAB_001522d4;
                if ((long)(uVar2 - uVar13) < (long)(local_98[0] + iVar4)) goto LAB_0015207c;
                if (local_98[0] < 0) {
                  FUN_0015c3d0();
                  pcVar10 = *(code **)PTR_PTR_047cb868;
                  if (pcVar10 == (code *)0x0) goto LAB_00152068;
                  pcVar9 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
                  uVar8 = 0x8a8;
                  goto LAB_00152060;
                }
                if (0x4000 < local_98[0]) {
                  FUN_0015c3d0();
                  pcVar10 = *(code **)PTR_PTR_047cb868;
                  if (pcVar10 == (code *)0x0) goto LAB_00152068;
                  pcVar9 = "OODLE ERROR : corruption : qh.compLen <= (1<<14)\n";
                  uVar8 = 0x8a9;
                  goto LAB_00152060;
                }
                iVar5 = iVar12 + iVar5;
                uVar15 = uVar15 + (long)iVar12;
                uVar13 = uVar13 + (long)iVar4 + (long)local_98[0];
                if ((iVar5 < iVar14) && ((long)uVar1 <= (long)uVar15)) goto LAB_001522d4;
              } while (iVar5 < iVar14);
            }
            if (uVar2 < uVar13) {
              FUN_0015c3d0();
              pcVar10 = *(code **)PTR_PTR_047cb868;
              if (pcVar10 == (code *)0x0) goto LAB_00152068;
              pcVar9 = "OODLE ERROR : corruption : compPtr <= compEnd\n";
              uVar8 = 0x8be;
              goto LAB_00152060;
            }
            if (iVar5 != iVar14) {
              FUN_0015c3d0();
              pcVar10 = *(code **)PTR_PTR_047cb868;
              if (pcVar10 == (code *)0x0) goto LAB_00152068;
              pcVar9 = "OODLE ERROR : corruption : chunkGot == chunkLen\n";
              uVar8 = 0x8bf;
              goto LAB_00152060;
            }
joined_r0x001521d4:
            if ((long)uVar1 <= (long)uVar15) goto LAB_001522c8;
          }
          if ((long)(uVar2 - uVar13) < 2) goto LAB_0015207c;
          uVar7 = FUN_0015c660(&local_78,uVar13);
          if (uVar7 == 0) {
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_001523fc;
            pcVar9 = "OODLE ERROR : corruption : compPtr != 0L\n";
            uVar8 = 0x822;
            goto LAB_001523f4;
          }
          if (local_70._4_4_ != 0) {
            lVar6 = (long)iVar14;
            if ((long)(uVar2 - uVar7) < lVar6) {
LAB_00152390:
              if (param_5 == (ulong *)0x0) {
                return uVar13 - param_1;
              }
              *param_5 = uVar15;
              return uVar13 - param_1;
            }
            uVar15 = lVar6 + uVar15;
            uVar13 = uVar7 + lVar6;
            goto joined_r0x001521d4;
          }
          if (0xc < local_78._4_4_) {
LAB_00152304:
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_00152068;
            pcVar9 = "OODLE ERROR : corruption : unknown LZ code type";
            uVar8 = 0x879;
            goto LAB_00152060;
          }
          uVar3 = 1 << (ulong)(local_78._4_4_ & 0x1f);
          if ((uVar3 & 0x8bf) != 0) {
            uVar13 = uVar7;
            if ((param_6 != (undefined4 *)0x0) && ((int)local_68 == 0)) {
              *param_6 = 0;
            }
            goto joined_r0x00152210;
          }
          if ((uVar3 & 0x1440) == 0) goto LAB_00152304;
          if ((param_6 != (undefined4 *)0x0) && ((int)local_68 == 0)) {
            *param_6 = 0;
          }
          iVar5 = FUN_0015cd50(uVar7,uVar2,local_98,local_68._4_4_,uVar11 - uVar15 & 0xffffffff);
          if (iVar5 < 1) {
            if ((long)(uVar2 - uVar7) < 0x10) goto LAB_00152390;
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_00152068;
            pcVar9 = "OODLE ERROR : corruption : lzqhlen > 0\n";
            uVar8 = 0x859;
            goto LAB_00152060;
          }
          if ((long)(uVar2 - uVar7) < (long)iVar5) {
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_001523fc;
            pcVar9 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= lzqhlen\n";
            uVar8 = 0x85d;
LAB_001523f4:
            (*pcVar10)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar8,pcVar9);
LAB_001523fc:
            FUN_0015c3f0();
            return 0;
          }
          if (local_98[0] < 0) {
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_00152068;
            pcVar9 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
            uVar8 = 0x861;
            goto LAB_00152060;
          }
          if (0x40000 < local_98[0]) {
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_00152068;
            pcVar9 = "OODLE ERROR : corruption : qh.compLen <= (1<<18)\n";
            uVar8 = 0x862;
            goto LAB_00152060;
          }
          lVar6 = uVar7 + (long)iVar5;
          if ((long)(uVar2 - lVar6) < (long)local_98[0]) {
            FUN_0015c3d0();
            pcVar10 = *(code **)PTR_PTR_047cb868;
            if (pcVar10 == (code *)0x0) goto LAB_001523fc;
            pcVar9 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= qh.compLen\n";
            uVar8 = 0x864;
            goto LAB_001523f4;
          }
          uVar13 = lVar6 + local_98[0];
          uVar15 = uVar15 + (long)iVar14;
        } while ((long)uVar15 < (long)uVar1);
      }
LAB_001522c8:
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar15;
      }
LAB_001522e0:
      lVar6 = uVar13 - param_1;
    }
  }
  else {
    FUN_0015c3d0();
    pcVar10 = *(code **)PTR_PTR_047cb868;
    if (pcVar10 != (code *)0x0) {
      pcVar9 = "OODLE ERROR : GetCompressedStepForRawStep : start pos not a quantum!\n";
      uVar8 = 0x7e4;
LAB_00152060:
      (*pcVar10)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar8,pcVar9);
    }
LAB_00152068:
    FUN_0015c3f0();
    lVar6 = -1;
  }
  return lVar6;
}


