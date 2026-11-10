/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e1dafc; name: FUN_02e1dafc
 */


void FUN_02e1dafc(long param_1,uint param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  float fVar22;
  uint local_68 [2];
  
  if (param_2 == 3) {
    plVar11 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),1,0);
    *(undefined1 *)((long)plVar11 + 0x714) = 0;
    (**(code **)(*plVar11 + 0x4d8))(plVar11,0x1c);
    (**(code **)(*plVar11 + 0x4e0))(plVar11,0x1e);
    (**(code **)(*plVar11 + 0x4e0))(plVar11,0x1c);
    FUN_0197ff90(plVar11,0,1);
    (**(code **)(*plVar11 + 0x548))(plVar11,6,0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x210) + 0x28) = 4;
  }
  else if (param_2 < 3) {
    *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x210) + 0x28) = (ulong)(param_2 + 1);
    puVar3 = PTR_DAT_047dcd58;
    puVar2 = PTR_DAT_047dcd50;
    lVar18 = *(long *)(param_1 + 0x10);
    if (param_2 == 2) {
      lVar15 = *(long *)(param_1 + 8);
    }
    else {
      lVar16 = 0;
      local_68[0] = 0;
      local_68[1] = 2;
      bVar4 = true;
      do {
        bVar1 = bVar4;
        uVar10 = local_68[lVar16];
        uVar19 = (ulong)uVar10;
        if ((int)uVar10 < 5) {
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x210) + uVar19 * 8 + 0x80) = 0;
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x2d0) + (long)(int)uVar10 * 4 + 8) = 0
          ;
        }
        lVar15 = *(long *)(param_1 + 8);
        lVar12 = *(long *)(lVar15 + 0x30);
        lVar16 = 0;
        if (uVar10 < 5) {
          lVar16 = lVar12 + uVar19 * 0x38 + 0x28;
        }
        if (*(char *)(lVar16 + 0x30) != '\0') {
          uVar20 = 0;
          do {
            plVar11 = (long *)FUN_010a0028(lVar12,uVar10,uVar20);
            if (plVar11 != (long *)0x0) {
              if (*(char *)((long)plVar11 + 0x714) != '\0') {
                *(undefined1 *)((long)plVar11 + 0x714) = 0;
                (**(code **)(*plVar11 + 0x4d8))(plVar11,0x1c);
                (**(code **)(*plVar11 + 0x4e0))(plVar11,0x1c);
              }
              (**(code **)(*plVar11 + 0x390))(plVar11);
            }
            lVar15 = *(long *)(param_1 + 8);
            uVar20 = uVar20 + 1;
            lVar12 = *(long *)(lVar15 + 0x30);
            lVar16 = 0;
            if (uVar10 < 5) {
              lVar16 = lVar12 + uVar19 * 0x38 + 0x28;
            }
          } while (uVar20 < *(byte *)(lVar16 + 0x30));
        }
        if (1 < *(byte *)(lVar16 + 0x30)) {
          uVar20 = 1;
          do {
            plVar11 = (long *)FUN_010a0028(lVar12,uVar10,uVar20);
            if (plVar11 != (long *)0x0) {
              uVar13 = (**(code **)(*plVar11 + 0x90))(plVar11,0x3f3,4);
              if ((uVar13 & 1) == 0) {
                uVar13 = (**(code **)(*plVar11 + 0x90))(plVar11,0x3f3,5);
                if ((uVar13 & 1) == 0) {
                  uVar13 = (**(code **)(*plVar11 + 0x90))(plVar11,0x3f3,6);
                  if ((uVar13 & 1) == 0) {
                    uVar13 = (**(code **)(*plVar11 + 0x90))(plVar11,0x3f3,7);
                    if ((uVar13 & 1) == 0) {
                      uVar13 = (**(code **)(*plVar11 + 0x90))(plVar11,0x3fd,2);
                      if ((uVar13 & 1) == 0) goto LAB_02e1de3c;
                      lVar16 = 4;
                    }
                    else {
                      lVar16 = 3;
                    }
                  }
                  else {
                    lVar16 = 2;
                  }
                }
                else {
                  lVar16 = 1;
                }
              }
              else {
                lVar16 = 0;
              }
              FUN_0197ff90(plVar11,(&DAT_03d6a26c)[lVar16 * 3],1);
              lVar16 = plVar11[9];
              puVar21 = (undefined8 *)(lVar16 + 0x28);
              puVar21 = (undefined8 *)(**(code **)*puVar21)(puVar21);
              if (((*puVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar2), iVar9 != 0)) {
                uVar14 = FUN_01af5520();
                *(undefined8 *)puVar3 = uVar14;
                __cxa_guard_release(puVar2);
              }
              for (; puVar21 != (undefined8 *)0x0; puVar21 = (undefined8 *)*puVar21) {
                if (puVar21 == (undefined8 *)puVar3) {
                  lVar16 = *(long *)(lVar16 + 0x48);
                  if (lVar16 != 0) {
                    uVar5 = FUN_0113b8a0(*(undefined8 *)(lVar16 + 0x70));
                    if (0x136 < (uVar5 & 0xffff)) {
                      uVar6 = FUN_00cf44f4(*(undefined8 *)(lVar16 + 0x70),uVar5);
                      uVar7 = FUN_00cf41a8(*(undefined8 *)(lVar16 + 0x70));
                      uVar8 = FUN_00e99784(lVar16);
                      uVar5 = FUN_0143b78c(uVar6,uVar7,uVar8);
                    }
                    (**(code **)(*plVar11 + 0x360))(plVar11,uVar5);
                  }
                  break;
                }
              }
            }
LAB_02e1de3c:
            lVar15 = *(long *)(param_1 + 8);
            uVar20 = uVar20 + 1;
            lVar12 = *(long *)(lVar15 + 0x30);
            lVar16 = 0;
            if (uVar10 < 5) {
              lVar16 = lVar12 + uVar19 * 0x38 + 0x28;
            }
          } while (uVar20 < *(byte *)(lVar16 + 0x30));
        }
        lVar16 = 1;
        bVar4 = false;
      } while (bVar1);
    }
    plVar11 = (long *)FUN_010a0028(*(undefined8 *)(lVar15 + 0x30),1,0);
    (**(code **)(*plVar11 + 0x390))();
    uVar10 = (**(code **)(*plVar11 + 0x560))(plVar11,6);
    fVar22 = -0.5;
    if ((uVar10 & 0xffff) != 0) {
      fVar22 = 0.5;
    }
    (**(code **)(*plVar11 + 0x660))(plVar11,(int)(fVar22 + (float)((uVar10 & 0xffff) << 0xc)));
    lVar18 = lVar18 + (ulong)(param_2 + 1) * 10;
    (**(code **)(*plVar11 + 0x548))(plVar11,6,*(undefined2 *)(lVar18 + 0xf8));
    puVar17 = (ushort *)(lVar18 + 0xfa);
    if (*puVar17 != 0) {
      plVar11 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),1,0);
      uVar10 = *puVar17 & 0x1f;
                    /* WARNING: Could not recover jumptable at 0x02e1dfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x328))(plVar11,uVar10 | uVar10 << 5 | 0x4800,0);
      return;
    }
  }
  return;
}


