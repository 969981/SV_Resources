/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b53bc; name: FUN_015b53bc
 */


void FUN_015b53bc(long param_1,long param_2,long param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar14 = 0;
LAB_015b53f0:
  lVar9 = param_1 + uVar14 * 6;
  *(undefined2 *)(lVar9 + 0xf4) = 0;
  *(undefined4 *)(lVar9 + 0xf0) = 0;
  lVar9 = *(long *)(*(long *)(param_2 + 0x290) + 8);
  uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar9 + 0x36c),*(undefined1 *)(lVar9 + 0x370),
                       uVar14 & 0xffffffff);
  if ((uVar5 & 1) != 0) {
    lVar9 = FUN_015b5634(*(undefined8 *)(param_3 + 0x30),uVar14 & 0xffffffff);
    uVar5 = (ulong)*(byte *)(lVar9 + 0x30);
    if (uVar5 != 0) {
      uVar18 = 0;
      uVar17 = 0;
      uVar11 = 0;
      iVar15 = 0;
      uVar13 = uVar5;
      do {
        if (((uVar17 & 0xff) < (uint)uVar13) &&
           (plVar16 = *(long **)(lVar9 + uVar18 * 8), plVar16 != (long *)0x0)) {
          puVar6 = (undefined8 *)(**(code **)plVar16[5])(plVar16 + 5);
          if (((*PTR_DAT_047d3f00 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar4 != 0)) {
            uVar8 = FUN_01b07aa4();
            *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
            if (puVar6 == (undefined8 *)PTR_DAT_047d3f08) {
              lVar12 = *(long *)(param_2 + 0x290);
              uVar2 = (**(code **)(*plVar16 + 0x98))(plVar16);
              lVar12 = FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x50),uVar2);
              if (lVar12 == 0) {
                uVar13 = 6;
              }
              else {
                uVar13 = (ulong)*(byte *)(lVar12 + 4);
              }
              uVar3 = (**(code **)(*plVar16 + 0x108))(plVar16);
              iVar15 = iVar15 + (uVar3 & 0xffff);
              uVar3 = (**(code **)(*plVar16 + 0x110))(plVar16);
              uVar11 = uVar11 + (uVar3 & 0xffff);
              uVar7 = (**(code **)(*plVar16 + 0x200))(plVar16);
              if ((uVar7 & 1) == 0) {
                uVar7 = (**(code **)(*plVar16 + 0x7b8))(plVar16);
                if ((uVar7 & 1) == 0) {
                  sVar1 = (**(code **)(*plVar16 + 0x230))(plVar16);
                  if (sVar1 == 0) break;
                  lVar12 = param_1 + uVar14 * 6;
                  uVar10 = 1;
                }
                else {
                  lVar12 = param_1 + uVar14 * 6;
                  uVar10 = 3;
                }
              }
              else {
                lVar12 = param_1 + uVar14 * 6;
                uVar10 = 2;
              }
              *(undefined1 *)(lVar12 + uVar13 + 0xf0) = uVar10;
              break;
            }
          }
        }
        uVar18 = uVar18 + 1;
        if (uVar18 == uVar5) goto LAB_015b5568;
        uVar13 = (ulong)*(byte *)(lVar9 + 0x30);
        uVar17 = uVar17 + 1;
      } while( true );
    }
    uVar17 = 0;
    goto LAB_015b5580;
  }
  goto LAB_015b5418;
LAB_015b5568:
  if (uVar11 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    if (uVar11 != 0) {
      uVar17 = (uint)(iVar15 * 100) / uVar11;
    }
  }
LAB_015b5580:
  *(uint *)(param_1 + uVar14 * 4 + 0x110) = uVar17;
LAB_015b5418:
  uVar14 = uVar14 + 1;
  if (uVar14 == 5) {
    return;
  }
  goto LAB_015b53f0;
}


