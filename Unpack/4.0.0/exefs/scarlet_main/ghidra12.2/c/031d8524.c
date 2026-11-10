/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d8524; name: FUN_031d8524
 */


undefined4 * FUN_031d8524(long param_1,undefined4 *param_2,ulong *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *__dest;
  short *psVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  size_t sVar10;
  long *plVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    plVar11 = (long *)*param_3;
    uVar17 = ((long)*(int *)(param_1 + 0x178) << 4 | 8U) + (long)plVar11;
    *param_3 = uVar17;
    if (param_3[1] < uVar17) goto LAB_031d8ab0;
    *plVar11 = (long)*(int *)(param_1 + 0x178);
    if (0 < *(int *)(param_1 + 0x178)) {
      lVar15 = 0;
      lVar16 = 0;
      plVar3 = plVar11;
      do {
        lVar16 = lVar16 + 1;
        plVar3[1] = *(long *)(*(long *)(param_1 + 0x170) + lVar15);
        lVar18 = *(long *)(param_1 + 0x170) + lVar15;
        lVar15 = lVar15 + 0x18;
        plVar3[2] = *(long *)(lVar18 + 8);
        plVar3 = plVar3 + 2;
      } while (lVar16 < *(int *)(param_1 + 0x178));
    }
    *(long **)(param_2 + (ulong)(byte)POPCOUNT((byte)*param_2 & 0x1f) * 2 + 4) = plVar11;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    plVar11 = (long *)(((*param_3 - param_3[2]) + 7 & 0xfffffffffffffff8) + param_3[2]);
    *param_3 = (ulong)(plVar11 + 2);
    if ((long *)param_3[1] < plVar11 + 2) {
LAB_031d8a90:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0xdeadf11d,"../..\\Common/Base/Reflect/Util/hkLinearBuffer.inl",0x2f,
                   "hkLinearBuffer exhausted");
    }
    uVar17 = CONCAT44(*param_2,*param_2) & 0x3ff000003ff;
    *(long **)(param_2 +
              (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8))) * 2 + 4) =
         plVar11;
    lVar16 = ((*param_3 - param_3[2]) + 7 & 0xfffffffffffffff8) + param_3[2];
    uVar17 = lVar16 + (long)*(int *)(param_1 + 0x188) * 0x40;
    *param_3 = uVar17;
    if (param_3[1] < uVar17) goto LAB_031d8a90;
    *plVar11 = lVar16;
    *(undefined4 *)(plVar11 + 1) = 0;
    *(undefined2 *)((long)plVar11 + 0xc) = 0;
    iVar13 = *(int *)(param_1 + 0x188);
    if (0 < iVar13) {
      lVar18 = 0;
      lVar15 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x180) + lVar18;
        if (*(char *)(lVar1 + 0x30) == '\0') {
          FUN_031d8ad0(lVar1,*(undefined8 *)(lVar1 + 0x18),param_2,lVar16,param_3);
          *(short *)(plVar11 + 1) = (short)plVar11[1] + 1;
          iVar13 = *(int *)(param_1 + 0x188);
          lVar16 = lVar16 + 0x40;
        }
        lVar15 = lVar15 + 1;
        lVar18 = lVar18 + 0x38;
      } while (lVar15 < iVar13);
      if (0 < iVar13) {
        lVar18 = 0;
        lVar15 = 0;
        do {
          lVar1 = *(long *)(param_1 + 0x180) + lVar18;
          if (*(char *)(lVar1 + 0x30) == '\x01') {
            FUN_031d8ad0(lVar1,param_2,0,lVar16,param_3);
            *(short *)((long)plVar11 + 10) = *(short *)((long)plVar11 + 10) + 1;
            iVar13 = *(int *)(param_1 + 0x188);
            lVar16 = lVar16 + 0x40;
          }
          lVar15 = lVar15 + 1;
          lVar18 = lVar18 + 0x38;
        } while (lVar15 < iVar13);
        if (0 < iVar13) {
          lVar18 = 0;
          lVar15 = 0;
          do {
            lVar1 = *(long *)(param_1 + 0x180) + lVar18;
            if (*(char *)(lVar1 + 0x30) == '\x02') {
              FUN_031d8ad0(lVar1,*(undefined8 *)(lVar1 + 0x18),0,lVar16,param_3);
              *(short *)((long)plVar11 + 0xc) = *(short *)((long)plVar11 + 0xc) + 1;
              iVar13 = *(int *)(param_1 + 0x188);
              lVar16 = lVar16 + 0x40;
            }
            lVar15 = lVar15 + 1;
            lVar18 = lVar18 + 0x38;
          } while (lVar15 < iVar13);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x61) < '\0') {
    if (*(long *)(param_1 + 0xe0) == 0) {
      uVar14 = *(uint *)(param_1 + 0x198);
      puVar2 = (undefined8 *)*param_3;
      *param_3 = (ulong)(puVar2 + (long)(int)uVar14 * 2 + 2);
      if ((undefined8 *)param_3[1] < puVar2 + (long)(int)uVar14 * 2 + 2) goto LAB_031d8ab0;
      *puVar2 = 0;
      puVar2[1] = (long)(int)uVar14;
      uVar17 = CONCAT44(*param_2,*param_2) & 0x7fff00007fff;
      *(undefined8 **)
       (param_2 + (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8))) * 2 + 4) =
           puVar2;
      if (0 < (int)uVar14) {
        lVar16 = 0;
        do {
          sVar10 = strlen(*(char **)(*(long *)(param_1 + 400) + lVar16 + 8));
          __dest = (void *)*param_3;
          uVar17 = ((long)((sVar10 << 0x20) + 0x800000000) >> 0x20 & 0xfffffffffffffff8U) +
                   (long)__dest;
          *param_3 = uVar17;
          if (param_3[1] < uVar17) goto LAB_031d8a90;
          memcpy(__dest,*(void **)(*(long *)(param_1 + 400) + lVar16 + 8),
                 (long)((sVar10 << 0x20) + 0x100000000) >> 0x20);
          lVar15 = lVar16 + 0x10;
          *(undefined8 *)((long)puVar2 + lVar16 + 0x10) =
               *(undefined8 *)(*(long *)(param_1 + 400) + lVar16);
          *(void **)((long)puVar2 + lVar16 + 0x18) = __dest;
          lVar16 = lVar15;
        } while ((ulong)uVar14 * 0x10 != lVar15);
      }
    }
    else {
      uVar17 = CONCAT44(*param_2,*param_2) & 0x7fff00007fff;
      *(long *)(param_2 +
               (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8))) * 2 + 4) =
           *(long *)(param_1 + 0xe0);
    }
  }
  uVar14 = (uint)*(undefined8 *)(param_1 + 0x60);
  if ((uVar14 >> 0xe & 1) != 0) {
    uVar14 = *(uint *)(param_1 + 0x1c8);
    plVar11 = (long *)*param_3;
    uVar17 = ((long)(int)uVar14 << 4 | 8U) + (long)plVar11;
    *param_3 = uVar17;
    if (param_3[1] < uVar17) goto LAB_031d8ab0;
    *plVar11 = (long)(int)uVar14;
    if (0 < (int)uVar14) {
      if (uVar14 == 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        lVar16 = 0;
        do {
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar16);
          uVar5 = puVar2[1];
          uVar17 = uVar17 + 2;
          *(undefined8 *)((long)plVar11 + lVar16 + 8) = *puVar2;
          *(undefined8 *)((long)plVar11 + lVar16 + 0x10) = uVar5;
          lVar15 = *(long *)(param_1 + 0x1c0) + lVar16;
          uVar5 = *(undefined8 *)(lVar15 + 0x18);
          *(undefined8 *)((long)plVar11 + lVar16 + 0x18) = *(undefined8 *)(lVar15 + 0x10);
          *(undefined8 *)((long)plVar11 + lVar16 + 0x20) = uVar5;
          lVar16 = lVar16 + 0x20;
        } while (((ulong)uVar14 & 0xfffffffe) != uVar17);
      }
      if ((uVar14 & 1) != 0) {
        plVar3 = (long *)(*(long *)(param_1 + 0x1c0) + uVar17 * 0x10);
        lVar16 = plVar3[1];
        plVar11[uVar17 * 2 + 1] = *plVar3;
        plVar11[uVar17 * 2 + 2] = lVar16;
      }
    }
    uVar17 = CONCAT44(*param_2,*param_2) & 0x3fff00003fff;
    *(long **)(param_2 +
              (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8))) * 2 + 4) =
         plVar11;
    uVar14 = (uint)*(undefined8 *)(param_1 + 0x60);
  }
  if ((uVar14 >> 0x17 & 1) != 0) {
    if (*(long *)(param_1 + 0x120) == 0) {
      iVar13 = *(int *)(param_1 + 0x1d8);
      iVar7 = iVar13 << 3;
      uVar6 = *(undefined4 *)(param_1 + 0x1f8);
      psVar4 = (short *)*param_3;
      uVar17 = (long)psVar4 + (long)iVar7 + 8;
      *param_3 = uVar17;
      if (param_3[1] < uVar17) {
LAB_031d8ab0:
                    /* WARNING: Subroutine does not return */
        FUN_032270d0(0xdeadf11d,"../..\\Common/Base/Reflect/Util/hkLinearBuffer.inl",0x1e,
                     "hkLinearBuffer exhausted");
      }
      sVar8 = (short)uVar6;
      *psVar4 = sVar8;
      sVar9 = (short)iVar13;
      psVar4[1] = sVar9 - sVar8;
      psVar4[2] = sVar9;
      memset(psVar4 + 4,0,(long)iVar7 & 0xfffffff8);
      if (0 < *(int *)(param_1 + 0x1d8)) {
        lVar16 = 0;
        do {
          plVar11 = *(long **)(*(long *)(param_1 + 0x1d0) + lVar16 * 8);
          puVar12 = (uint *)(**(code **)(*plVar11 + 0x30))(plVar11,param_3);
          uVar14 = *puVar12 & 0x3ffff;
          *(undefined4 **)
           (puVar12 +
           (ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                        POPCOUNT((char)(uVar14 >> 0x10))) * 2 + 4) = param_2;
          *(uint **)(psVar4 + 4 + lVar16 * 4) = puVar12;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(param_1 + 0x1d8));
      }
      uVar17 = CONCAT44(*param_2,*param_2) & 0x7fffff007fffff;
      *(short **)
       (param_2 +
       (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                    POPCOUNT((char)(uVar17 >> 0x10))) * 2 + 4) = psVar4;
    }
    if (*(char *)(param_1 + 0x219) != '\0') {
      local_70 = 0x400000008;
      uStack_68 = 0x1000001;
      FUN_031d9d10(param_2,&local_70);
    }
  }
  if (*(char *)(param_1 + 0x21a) != '\0') {
    FUN_031dc928(param_2,1);
  }
  return param_2;
}


