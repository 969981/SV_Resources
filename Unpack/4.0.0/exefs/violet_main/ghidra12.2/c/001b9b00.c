/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001b9b00; name: FUN_001b9b00
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_001b9b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9,
                 long param_10,int param_11,long param_12,undefined8 param_13,undefined8 param_14,
                 long *param_15)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int local_cc;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  int aiStack_88 [10];
  
  aiStack_88[6] = 8;
  iVar6 = (uint)(param_12 == 0) * 8;
  aiStack_88[4] = 8;
  aiStack_88[5] = 8;
  iVar7 = param_11 + -0x10;
  aiStack_88[0] = 8;
  aiStack_88[1] = 8;
  aiStack_88[2] = 8;
  aiStack_88[3] = 8;
  param_15[2] = 0;
  lVar13 = *(long *)(param_8 + 0x10);
  local_cc = 8;
  iVar2 = 0x40000000;
  if (*(int *)(lVar13 + 0x14) - 1U >> 0x1e == 0) {
    iVar2 = *(int *)(lVar13 + 0x14);
  }
  FUN_0015cf00(param_3,0xd40c);
  iVar17 = iVar6;
  if (iVar6 < iVar7) {
    lVar20 = param_10 + param_11 + -8;
    local_cc = 8;
    iVar18 = iVar6;
    do {
      while( true ) {
        lVar14 = param_10 + iVar18;
        uVar10 = FUN_001bd9d0(param_9 + (long)iVar18 * 0x20,auStack_a8,lVar14,lVar20,param_6,
                              param_13,iVar2,param_7,lVar13);
        if ((int)uVar10 == 0) break;
        iVar16 = (int)(uVar10 >> 0x20);
        uVar8 = uVar10;
        while( true ) {
          iVar9 = iVar18 + 1;
          iVar19 = (int)uVar10;
          if (iVar7 <= iVar9) break;
          lVar15 = lVar14 + 1;
          uVar11 = FUN_001bd9d0(param_9 + (long)iVar9 * 0x20,auStack_a8,lVar15,lVar20,param_6,
                                param_13,iVar2,param_7,lVar13);
          iVar16 = (int)(uVar8 >> 0x20);
          if ((int)uVar11 == 0) {
LAB_001b9cec:
            iVar9 = iVar18 + 2;
            if (iVar7 <= iVar9) break;
            lVar15 = lVar14 + 2;
            uVar11 = FUN_001bd9d0(param_9 + (long)iVar9 * 0x20,auStack_a8,lVar15,lVar20,param_6,
                                  param_13,iVar2,param_7,lVar13);
            if ((int)uVar11 == 0) break;
            iVar12 = (int)(uVar11 >> 0x20);
            iVar3 = 0;
            if (0 < iVar12) {
              iVar3 = (int)LZCOUNT(iVar12) + -0x22;
            }
            iVar12 = -4;
            if (0 < iVar16) {
              iVar12 = 0x1e - (int)LZCOUNT(iVar16);
            }
            if (iVar12 + ((int)uVar11 - iVar19) * 4 + iVar3 < 4) break;
          }
          else {
            iVar12 = (int)(uVar11 >> 0x20);
            iVar3 = 0;
            if (0 < iVar12) {
              iVar3 = (int)LZCOUNT(iVar12) + -0x22;
            }
            iVar12 = -4;
            if (0 < iVar16) {
              iVar12 = 0x1e - (int)LZCOUNT(iVar16);
            }
            if (iVar12 + ((int)uVar11 - iVar19) * 4 + iVar3 < 1) goto LAB_001b9cec;
          }
          iVar16 = (int)(uVar11 >> 0x20);
          uVar10 = uVar11 & 0xffffffff;
          lVar14 = lVar15;
          uVar8 = uVar11;
          iVar18 = iVar9;
        }
        if (iVar16 == 0) {
          if (iVar18 == iVar17) {
            iVar16 = -(uint)(local_cc == aiStack_88[1]);
          }
          lVar14 = param_15[2];
          if ((ulong)param_15[1] < lVar14 + 1U) {
LAB_001b9da0:
            iVar9 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                                 "needmakefit","newsize <= m_capacity");
            if (iVar9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            lVar14 = param_15[2];
          }
        }
        else {
          lVar14 = param_15[2];
          if ((ulong)param_15[1] < lVar14 + 1U) goto LAB_001b9da0;
        }
        piVar1 = (int *)(*param_15 + lVar14 * 0x10);
        *piVar1 = local_cc;
        piVar1[1] = iVar18 - iVar17;
        piVar1[2] = iVar19;
        piVar1[3] = iVar16;
        param_15[2] = param_15[2] + 1;
        FUN_001bb0d0(param_3,param_10,(long)iVar17,(long)(iVar18 - iVar17),local_cc,1);
        iVar3 = aiStack_88[6];
        iVar9 = aiStack_88[4];
        iVar17 = aiStack_88[2];
        if (iVar16 < 1) {
          lVar14 = (long)-iVar16;
          lVar15 = lVar14 * 4;
          uVar22 = *(undefined8 *)(auStack_a0 + lVar15);
          uVar21 = *(undefined8 *)(auStack_a8 + lVar15);
          uVar23 = *(undefined8 *)(auStack_98 + lVar15);
          iVar16 = aiStack_88[lVar14];
          *(undefined8 *)(aiStack_88 + lVar14 + -1) = *(undefined8 *)((long)&local_90 + lVar15);
          *(undefined8 *)(auStack_98 + lVar15 + 4) = uVar23;
          *(undefined8 *)(auStack_a0 + lVar15 + 4) = uVar22;
          *(undefined8 *)(auStack_a8 + lVar15 + 4) = uVar21;
        }
        else {
          aiStack_88[6] = aiStack_88[5];
          aiStack_88[7] = iVar3;
          aiStack_88[4] = aiStack_88[3];
          aiStack_88[5] = iVar9;
          aiStack_88[2] = aiStack_88[1];
          aiStack_88[3] = iVar17;
          aiStack_88[1] = aiStack_88[0];
        }
        iVar18 = iVar18 + iVar19;
        local_cc = iVar16;
        aiStack_88[0] = iVar16;
        iVar17 = iVar18;
        if (iVar7 <= iVar18) goto LAB_001b9e80;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar7);
  }
LAB_001b9e80:
  if (0 < param_11 - iVar17) {
    FUN_001bb0d0(param_3,param_10,(long)iVar17,(long)(param_11 - iVar17),local_cc,1);
  }
  uVar4 = *(uint *)(param_8 + 0x48);
  uVar5 = *(undefined4 *)(param_8 + 4);
  *(undefined4 *)(param_8 + 4) = 4;
  *(uint *)(param_8 + 0x48) = uVar4 & 0xffffffef;
  FUN_001bb240(param_14,param_1,param_3,param_2,param_10,param_11,param_4,param_5,param_8,local_cc,
               param_15,iVar6,param_3,param_7);
  *(undefined4 *)(param_8 + 4) = uVar5;
  *(uint *)(param_8 + 0x48) = uVar4;
  return;
}


