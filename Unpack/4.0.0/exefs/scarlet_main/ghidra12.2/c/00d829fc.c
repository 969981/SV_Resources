/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d829fc; name: FUN_00d829fc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d829fc(long param_1,long *param_2,char *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  if (*param_2 != 0) {
    uVar4 = *(uint *)(*param_2 + 0x78);
    uVar12 = (ulong)uVar4;
    lVar13 = *(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208);
    lVar10 = lVar13 >> 3;
    uVar11 = lVar10 * -0x5555555555555555;
    if (1 < uVar4 && uVar11 != uVar12) {
      uVar15 = 0;
      if (uVar12 != 0) {
        uVar15 = uVar11 / uVar12;
      }
      if (uVar11 != uVar15 * uVar12) {
        if (uVar12 < uVar11) {
          uVar15 = uVar11;
          uVar16 = uVar12;
LAB_00d82adc:
          uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar17 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
          uVar16 = uVar16 >> (uVar17 & 0x3f);
          uVar15 = uVar15 >> (uVar14 & 0x3f);
          if ((uint)uVar17 <= (uint)uVar14) {
            uVar14 = uVar17;
          }
          while (1 < uVar16) {
            uVar17 = 0;
            if (uVar16 != 0) {
              uVar17 = uVar15 / uVar16;
            }
            uVar17 = uVar15 - uVar17 * uVar16;
            uVar15 = uVar16 - uVar17;
            if (uVar17 == 0) goto LAB_00d82b0c;
            if (uVar15 == 0) {
              uVar15 = uVar17;
              goto LAB_00d82b0c;
            }
            uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar17 >> (LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) & 0x3fU);
            uVar16 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 >> (LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) & 0x3fU);
            uVar16 = uVar17;
            if (uVar15 <= uVar17) {
              uVar16 = uVar15;
              uVar15 = uVar17;
            }
          }
          if (uVar16 == 1) {
            uVar15 = 1;
          }
LAB_00d82b0c:
          uVar15 = uVar15 << (uVar14 & 0x3f);
          if (uVar15 != 0) goto LAB_00d82b14;
          uVar16 = 0;
LAB_00d82d48:
          if (uVar16 < uVar11) {
            *(ulong *)(param_1 + 0x210) = *(long *)(param_1 + 0x208) + uVar16 * 0x18;
          }
        }
        else {
          uVar15 = uVar12;
          uVar16 = uVar11;
          if (lVar13 != 0) goto LAB_00d82adc;
LAB_00d82b14:
          uVar16 = 0;
          if (uVar15 != 0) {
            uVar16 = uVar12 / uVar15;
          }
          uVar16 = uVar16 * uVar11;
          lVar10 = uVar16 + lVar10 * 0x5555555555555555;
          if (uVar16 < uVar11 || lVar10 == 0) goto LAB_00d82d48;
          FUN_00e007a8(param_1 + 0x208,lVar10);
        }
        if (uVar16 <= *(uint *)(param_1 + 0x240)) {
          *(undefined4 *)(param_1 + 0x240) = 0;
        }
      }
    }
  }
  local_80 = *(undefined8 *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x48);
  if (lVar10 == 0) {
    FUN_00d8a020(&local_78,local_80,&local_80);
    lVar10 = local_78;
    local_78 = 0;
    lVar13 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar10;
    if (lVar13 == 0) {
      *(undefined8 *)(param_1 + 0x58) = uStack_68;
      *(undefined8 *)(param_1 + 0x60) = local_60;
    }
    else {
      FUN_00c4e5a0(auStack_58,0);
      FUN_00eeabac(lVar13);
      plVar9 = *(long **)(param_1 + 0x50);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      uVar18 = *(undefined8 *)(param_1 + 0x60);
      uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,uVar3,uVar18);
      }
      else {
        FUN_00c48fe8(plVar9,lVar13,uVar3,uVar18);
      }
      FUN_00c4e70c(auStack_58);
      *(undefined8 *)(param_1 + 0x58) = uStack_68;
      *(undefined8 *)(param_1 + 0x60) = local_60;
      lVar10 = *(long *)(param_1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x50) = local_70;
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  plVar9 = *(long **)(lVar10 + 0x38);
  param_2 = (long *)*param_2;
  if (plVar9 == param_2) {
    bVar7 = 1;
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar9 = param_2 + 5;
      do {
        lVar13 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar9 = *(long **)(lVar10 + 0x38);
    }
    *(long **)(lVar10 + 0x38) = param_2;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        iVar2 = (int)*plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    bVar7 = 0;
  }
  cVar5 = *(char *)(lVar10 + 0x40);
  if ((cVar5 == '\0') || (*param_3 == '\0')) {
    if (*param_3 == '\0' && cVar5 == '\0') goto LAB_00d82a98;
  }
  else if (*(long *)(lVar10 + 0x48) == *(long *)(param_3 + 8)) {
LAB_00d82a98:
    if ((bool)(bVar8 & bVar7)) {
      return;
    }
    goto LAB_00d82bf4;
  }
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)param_3;
  *(undefined8 *)(lVar10 + 0x48) = uVar3;
LAB_00d82bf4:
  lVar10 = *(long *)(param_1 + 0x208);
  lVar13 = *(long *)(param_1 + 0x210);
  if (((lVar10 != lVar13) && (*(undefined1 *)(lVar10 + 0x10) = 1, lVar10 + 0x18 != lVar13)) &&
     (*(undefined1 *)(lVar10 + 0x28) = 1, lVar10 + 0x30 != lVar13)) {
    *(undefined1 *)(lVar10 + 0x40) = 1;
    for (lVar10 = lVar10 + 0x48; lVar10 != lVar13; lVar10 = lVar10 + 0x18) {
      *(undefined1 *)(lVar10 + 0x10) = 1;
    }
  }
  return;
}


