/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7e0f4; name: FUN_01a7e0f4
 */


void FUN_01a7e0f4(undefined2 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  long lVar23;
  int iVar24;
  long *plVar25;
  float fVar26;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (((char)param_2[5] == '\0') &&
     (uVar19 = FUN_01a7e5e0(*param_2,(short)param_2[4]), (uVar19 & 1) == 0)) {
    lVar2 = param_2[2];
    plVar4 = (long *)param_2[3];
    lVar3 = *param_2;
    lVar5 = param_2[1];
    lVar11 = param_2[4];
    iVar7 = *(int *)((long)param_2 + 0x24);
    uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
    uVar14 = (uVar14 & 0xffff) * 2 + (uVar14 & 0xffff);
    uVar15 = (**(code **)(*plVar4 + 0x108))(plVar4);
    iVar24 = uVar14 + (uVar15 & 0xffff) * -2;
    fVar26 = -0.5;
    if (iVar24 != 0) {
      fVar26 = 0.5;
    }
    iVar24 = (int)(fVar26 + (float)(uint)(iVar24 * 0x1000));
    if ((*(byte *)(*(long *)(lVar3 + 0x38) + 0x498) >> 2 & 1) != 0) {
      uVar15 = *(uint *)((long)param_2 + 0x2c);
      if (uVar15 < 0x259) {
        if (uVar15 < 0x1c3) {
          if (uVar15 < 0x12d) {
            if (uVar15 < 0x97) {
              lVar23 = 0x800;
              if (uVar15 < 0x1f) {
                lVar23 = 0x4cd;
              }
            }
            else {
              lVar23 = 0xb33;
            }
          }
          else {
            lVar23 = 0xccd;
          }
        }
        else {
          lVar23 = 0xe66;
        }
      }
      else {
        lVar23 = 0x1000;
      }
      iVar24 = (int)(lVar23 * iVar24 + 0x800U >> 0xc);
    }
    puVar20 = (undefined8 *)(**(code **)plVar4[5])(plVar4 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar16 != 0)) {
      uVar21 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar21;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar20 != (undefined8 *)0x0) {
LAB_01a7e20c:
      if (puVar20 != (undefined8 *)PTR_DAT_047d3f08) goto LAB_01a7e53c;
      lVar23 = plVar4[0xe2];
      uVar6 = (undefined2)plVar4[0xe3];
      uVar19 = (**(code **)(*plVar4 + 0x5b0))(plVar4);
      if ((uVar19 & 1) != 0) {
        uVar6 = *(undefined2 *)((long)plVar4 + 0x712);
      }
      uVar15 = FUN_01a53b20((short)lVar23,uVar6);
      plVar25 = *(long **)(lVar3 + 400);
      if (plVar25 != (long *)0x0) {
        plVar1 = plVar25 + 5;
        do {
          lVar23 = *plVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = (int)lVar23 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((int)lVar23 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      uVar19 = (**(code **)(*plVar25 + 0x28))(plVar25,0x78e86a2aada42d85,(short)lVar11);
      if (plVar25 != (long *)0x0) {
        plVar1 = plVar25 + 5;
        do {
          lVar23 = *plVar1;
          iVar16 = (int)lVar23 + -1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = iVar16;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
        else if ((int)lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      uVar15 = uVar15 & 0xff;
      if ((uVar19 & 1) != 0) {
        uVar13 = (**(code **)(*plVar4 + 800))(plVar4);
        if (uVar13 < 1000) {
          iVar16 = -0x14;
        }
        else if (uVar13 < 2000) {
          iVar16 = 0;
        }
        else {
          iVar16 = 0x14;
          if (2999 < uVar13) {
            iVar16 = 0x1e;
          }
        }
        uVar15 = iVar16 + uVar15;
        if ((int)uVar15 < 2) {
          uVar15 = 1;
        }
      }
      iVar24 = uVar15 * iVar24;
    }
LAB_01a7e2fc:
    iVar16 = FUN_01a79ef8(lVar3,lVar5,lVar2,plVar4,(short)lVar11);
    iVar17 = FUN_0298a5f0(param_2);
    uVar15 = 0;
    if (uVar14 != 0) {
      uVar15 = (uint)(((long)iVar24 * (long)iVar16 * 0x100000 + 0x80000000 >> 0x20) * (long)iVar17 +
                      0x800U >> 0xc) / uVar14;
    }
    bVar12 = (**(code **)(*plVar4 + 0x118))(plVar4);
    if (bVar12 < 0xe) {
      uVar15 = (int)(((uint)bVar12 * -2 + 0x24) * uVar15) / 10;
    }
    uVar14 = (**(code **)(*plVar4 + 0x230))(plVar4);
    if ((uVar14 & 0xffff) < 6) {
      uVar8 = 1 << (ulong)(uVar14 & 0x1f);
      uVar14 = (uint)((long)(int)uVar15 * 0x2800 + 0x800U >> 0xc);
      if ((uVar8 & 0xc) == 0) {
        uVar14 = uVar15;
      }
      uVar15 = (uint)((long)(int)uVar15 * 0x1800 + 0x800U >> 0xc);
      if ((uVar8 & 0x32) == 0) {
        uVar15 = uVar14;
      }
    }
    uVar19 = (long)(int)uVar15 * (long)iVar7 + 0x800U >> 0xc;
    if (*(char *)((long)param_2 + 0x29) != '\0') {
      uVar18 = FUN_0298a580(*param_2);
      uVar14 = FUN_0298a58c(*param_2);
      uVar21 = FUN_012440e8(param_2[1]);
      bVar12 = FUN_0298a69c(uVar19 & 0xffffffff,uVar18,uVar14 & 1,uVar21);
      *(byte *)((long)param_1 + 1) = bVar12 & 1;
    }
    if ((int)uVar19 < 0xff000) {
      uVar18 = FUN_0298a758(uVar19 & 0xffffffff);
      uVar22 = *(undefined1 *)((long)param_1 + 1);
      uVar21 = FUN_012440e8(param_2[1]);
      FUN_0298a890(param_1,param_1 + 1,uVar18,uVar22,uVar21);
      return;
    }
    *(undefined1 *)param_1 = 1;
    uVar22 = 3;
    if (*(char *)((long)param_1 + 1) != '\0') {
      uVar22 = 1;
    }
  }
  else {
    *(undefined1 *)param_1 = 1;
    uVar22 = 3;
  }
  *(undefined1 *)(param_1 + 1) = uVar22;
  return;
LAB_01a7e53c:
  puVar20 = (undefined8 *)*puVar20;
  if (puVar20 == (undefined8 *)0x0) goto LAB_01a7e2fc;
  goto LAB_01a7e20c;
}


