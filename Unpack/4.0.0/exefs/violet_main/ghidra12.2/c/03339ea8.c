/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03339ea8; name: FUN_03339ea8
 */


void FUN_03339ea8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long local_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_047d1a08;
  while (uVar9 = *(uint *)(param_1 + 0xc0), uVar9 != 0) {
    if ((int)uVar9 < 1) {
LAB_03339f0c:
      lVar10 = *(long *)(param_1 + 0xb8);
      uVar17 = -(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5;
      do {
        uVar7 = *(ulong *)(lVar10 + -0x20 + uVar17);
        if ((uVar7 & 1) != 0) {
          (**(code **)(puVar3 + 8))(0,uVar7 - 1,0);
        }
        uVar17 = uVar17 - 0x20;
      } while (uVar17 != 0);
    }
    else {
      iVar4 = 0;
      do {
        FUN_0333606c(param_1,iVar4);
        uVar9 = *(uint *)(param_1 + 0xc0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar9);
      if (uVar9 != 0) goto LAB_03339f0c;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
LAB_03339f58:
      FUN_03338724(param_1);
    }
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar4 = *(int *)(param_1 + 0x110);
    uVar17 = (ulong)*(uint *)(param_1 + 0x50);
    if (iVar4 < (int)*(uint *)(param_1 + 0x50)) {
      lVar10 = (long)iVar4;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0x48) + lVar10 * 8);
        if ((lVar5 != 0) && (iVar4 = FUN_0333a3dc(lVar5,param_1,param_2 & 1), iVar4 < 0)) {
          lVar5 = *(long *)(*(long *)(param_1 + 0x48) + lVar10 * 8);
          lVar19 = *(long *)(lVar5 + 0x18);
          uVar9 = *(uint *)(lVar19 + 100);
          lVar18 = *(long *)(lVar5 + 0x70);
          if ((int)uVar9 < *(int *)(lVar19 + 0x60) * 2) {
            FUN_02ef5fd4((long *)(lVar19 + 0x58),PTR_PTR_047d1a50,uVar9 * 2 + 2);
            uVar9 = *(uint *)(lVar19 + 100);
          }
          uVar1 = (int)lVar18 * -0x61c8864f;
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar1 = (int)((ulong)lVar18 >> 0x20) * -0x61c8864f;
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
          lVar14 = *(long *)(lVar19 + 0x58);
          while( true ) {
            uVar1 = uVar9 & uVar1;
            lVar15 = *(long *)(lVar14 + (ulong)uVar1 * 0x10);
            if (lVar15 == -1) break;
            if (lVar15 == lVar18) {
              iVar4 = 0;
              goto LAB_0333a040;
            }
            uVar1 = uVar1 + 1;
          }
          iVar4 = 1;
LAB_0333a040:
          *(int *)(lVar19 + 0x60) = *(int *)(lVar19 + 0x60) + iVar4;
          *(long *)(lVar14 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) =
               lVar18;
          *(undefined8 *)(*(long *)(lVar19 + 0x58) + (long)(int)uVar1 * 0x10 + 8) = 0x50000000;
          lVar19 = *(long *)(*(long *)(lVar5 + 0x18) + 0x100);
          plVar13 = (long *)(*(long *)(lVar19 + 0x68) + 0xa8);
          local_70 = lVar18;
          lVar18 = FUN_03348c94(plVar13,&local_70);
          if ((lVar18 != 0) &&
             (uVar9 = *(uint *)(*plVar13 + (long)*(int *)(lVar18 + 4) * 0x10 + 8), -1 < (int)uVar9))
          {
            for (lVar18 = *(long *)(*(long *)(*(long *)(lVar19 + 0x68) + 0x98) + (ulong)uVar9 * 8);
                lVar18 != 0;
                lVar18 = FUN_03346c00(*(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x100),&local_70,
                                      *(undefined4 *)(lVar18 + 0x24))) {
              local_70 = *(long *)(lVar18 + 0x10);
              lStack_68 = *(long *)(lVar18 + 0x18);
              if (local_70 != lStack_68) {
                lVar19 = FUN_03342334(*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x100) + 0x68)
                                       + 0x90),&local_70,*(undefined4 *)(lVar18 + 0x24));
                lVar14 = *(long *)(lVar5 + 0x18);
                uVar9 = *(uint *)(lVar14 + 100);
                if ((int)uVar9 < *(int *)(lVar14 + 0x60) * 2) {
                  FUN_02ef5fd4((long *)(lVar14 + 0x58),PTR_PTR_047d1a50,uVar9 * 2 + 2);
                  uVar9 = *(uint *)(lVar14 + 100);
                }
                uVar1 = (int)lVar19 * -0x61c8864f;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
                uVar1 = (int)((ulong)lVar19 >> 0x20) * -0x61c8864f;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
                uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
                lVar15 = *(long *)(lVar14 + 0x58);
                while( true ) {
                  uVar1 = uVar9 & uVar1;
                  lVar16 = *(long *)(lVar15 + (ulong)uVar1 * 0x10);
                  if (lVar16 == -1) break;
                  if (lVar16 == lVar19) {
                    iVar4 = 0;
                    goto LAB_0333a168;
                  }
                  uVar1 = uVar1 + 1;
                }
                iVar4 = 1;
LAB_0333a168:
                *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + iVar4;
                *(long *)(lVar15 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4
                                   )) = lVar19;
                *(undefined8 *)(*(long *)(lVar14 + 0x58) + (long)(int)uVar1 * 0x10 + 8) = 0x50000000
                ;
                local_70 = *(long *)(lVar18 + 0x10);
                lStack_68 = *(long *)(lVar18 + 0x18);
              }
            }
          }
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar10 * 8) = 0;
        }
        while (uVar9 = *(uint *)(param_1 + 0xc0), uVar9 != 0) {
          if ((int)uVar9 < 1) {
LAB_0333a1f8:
            lVar5 = *(long *)(param_1 + 0xb8);
            uVar17 = -(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5;
            do {
              uVar7 = *(ulong *)(lVar5 + -0x20 + uVar17);
              if ((uVar7 & 1) != 0) {
                (**(code **)(puVar3 + 8))(0,uVar7 - 1,0);
              }
              uVar17 = uVar17 - 0x20;
            } while (uVar17 != 0);
          }
          else {
            iVar4 = 0;
            do {
              FUN_0333606c(param_1,iVar4);
              uVar9 = *(uint *)(param_1 + 0xc0);
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar9);
            if (uVar9 != 0) goto LAB_0333a1f8;
          }
          *(undefined4 *)(param_1 + 0xc0) = 0;
          if (*(int *)(param_1 + 0xd0) != 0) {
LAB_0333a1bc:
            FUN_03338724(param_1);
          }
        }
        if (*(int *)(param_1 + 0xd0) != 0) {
          *(undefined4 *)(param_1 + 0xc0) = 0;
          goto LAB_0333a1bc;
        }
        uVar17 = (ulong)*(int *)(param_1 + 0x50);
        lVar10 = lVar10 + 1;
      } while (lVar10 < (long)uVar17);
      iVar4 = *(int *)(param_1 + 0x110);
    }
    iVar6 = (int)uVar17;
    if (iVar4 < iVar6) {
      lVar10 = (long)iVar4;
      if ((param_2 & 1) == 0) {
        do {
          plVar13 = *(long **)(*(long *)(param_1 + 0x48) + lVar10 * 8);
          if (plVar13 != (long *)0x0) {
            pbVar8 = (byte *)*plVar13;
            pbVar12 = pbVar8;
            if ((*pbVar8 & 1) == 0) {
              do {
                pbVar12 = *(byte **)(pbVar12 + 8);
              } while ((*pbVar12 & 1) == 0);
            }
            if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) != 7) {
              pbVar8 = (byte *)0x0;
            }
            if ((int)plVar13[7] != 0) {
              *(undefined8 *)(pbVar8 + 8) =
                   **(undefined8 **)(plVar13[6] + (long)*(int *)((long)plVar13 + 0x14) * 8);
            }
            local_70 = 0x400000008;
            lStack_68 = 0x801000001;
            FUN_031d9d10(pbVar8,&local_70);
            uVar17 = (ulong)*(uint *)(param_1 + 0x50);
          }
          lVar10 = lVar10 + 1;
          iVar6 = (int)uVar17;
        } while (lVar10 < iVar6);
      }
      else {
        do {
          puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x48) + lVar10 * 8);
          if (puVar11 != (undefined8 *)0x0) {
            pbVar8 = (byte *)*puVar11;
            pbVar12 = pbVar8;
            if ((*pbVar8 & 1) == 0) {
              do {
                pbVar12 = *(byte **)(pbVar12 + 8);
              } while ((*pbVar12 & 1) == 0);
            }
            local_70 = 0x400000008;
            lStack_68 = 0x801000001;
            if ((*(ulong *)(pbVar12 + 0x10) & 0x1f) != 7) {
              pbVar8 = (byte *)0x0;
            }
            FUN_031d9d10(pbVar8,&local_70);
            uVar17 = (ulong)*(uint *)(param_1 + 0x50);
          }
          lVar10 = lVar10 + 1;
          iVar6 = (int)uVar17;
        } while (lVar10 < iVar6);
      }
    }
    *(int *)(param_1 + 0x110) = iVar6 + -1;
    if (0 < *(int *)(param_1 + 0xe0)) {
      lVar10 = 0;
      do {
        local_70 = 0x400000008;
        lStack_68 = 0x801000001;
        FUN_031d9d10(*(undefined8 *)(*(long *)(param_1 + 0xd8) + lVar10 * 8),&local_70);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  goto LAB_03339f58;
}


