/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034948c4; name: FUN_034948c4
 */


void FUN_034948c4(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  lVar8 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x78) = 3;
  if (lVar8 != 0) {
    if ((*(int *)(lVar8 + 0x30) != 0) &&
       (iVar4 = *(int *)(lVar8 + 0x34) + -1, *(int *)(lVar8 + 0x34) = iVar4, iVar4 == 0)) {
      FUN_034b87e8(*(undefined8 *)PTR_DAT_047e6fd8);
    }
    puVar5 = PTR_DAT_047e2fe8;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) != 0) {
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(PTR_DAT_047e7230 + 4));
      pbVar9 = *(byte **)(*(long *)(param_1 + 0x10) + 0x20);
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar2 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar2 = 1;
        }
        uVar14 = (ulong)uVar2;
        pbVar6 = pbVar9 + ((ulong)(bVar3 + 4) & 0x1fc);
        pbVar12 = pbVar9;
        do {
          pbVar9 = pbVar6;
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 == 1) goto LAB_03494978;
          uVar14 = uVar14 - 1;
          pbVar6 = pbVar9 + 4;
        } while (uVar14 != 0);
        pbVar9 = (byte *)0x0;
      }
LAB_03494978:
      puVar1 = &local_70;
      if (pbVar9 != (byte *)0x0) {
        puVar1 = (ulong *)pbVar9;
      }
      if (*(int *)puVar1 != 0) {
        iVar4 = *(int *)(param_1 + 0x7c);
        if (iVar4 == 2) {
          if (*(int *)(param_1 + 0x28) != 0) {
            local_68 = (ulong)local_68._1_7_ << 8;
            local_70 = 0x400000000;
            puVar16 = *(undefined8 **)(param_1 + 0x20);
            do {
              puVar13 = puVar16 + 1;
              FUN_034a30a4(*puVar16,&local_70,1);
              puVar16 = puVar13;
            } while (puVar13 !=
                     (undefined8 *)
                     (*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8));
          }
        }
        else if (iVar4 == 1) {
          if (*(int *)(param_1 + 0x38) != 0) {
            lVar8 = *(long *)(param_1 + 0x48);
            if (lVar8 == 0) {
              puVar16 = *(undefined8 **)(param_1 + 0x30);
              do {
                puVar13 = puVar16 + 1;
                plVar7 = (long *)*puVar16;
                FUN_0345423c(*(undefined8 *)puVar5,plVar7,*(undefined8 *)(param_1 + 0x40),
                             *(undefined4 *)(param_1 + 0x58));
                local_68 = *(ulong *)(param_1 + 0x40);
                local_60 = *(undefined4 *)(param_1 + 0x58);
                local_54 = 0;
                local_48 = 0;
                local_4c = 0;
                local_70 = local_70 & 0xffffffff00000000;
                local_5c = 0x400000000;
                local_50 = 0;
                (**(code **)(*plVar7 + 0x98))(plVar7,&local_70);
                puVar16 = puVar13;
              } while (puVar13 !=
                       (undefined8 *)
                       (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
            }
            else {
              plVar7 = *(long **)(lVar8 + 0x48);
              if (plVar7 != (long *)0x0) {
                do {
                  plVar10 = *(long **)(plVar7[2] + 0x68);
                  if (plVar10 != (long *)0x0) {
                    do {
                      plVar10 = (long *)*plVar10;
                      if (plVar10 == (long *)0x0) goto LAB_03494a58;
                    } while (plVar10[1] != param_1);
                    local_68 = local_68 & 0xffffffffffffff00;
                    local_70 = 0x400000000;
                    FUN_034a30a4(plVar7[2],&local_70,1);
                  }
LAB_03494a58:
                  plVar7 = (long *)*plVar7;
                } while (plVar7 != (long *)0x0);
                lVar8 = *(long *)(param_1 + 0x48);
              }
              puVar5 = PTR_DAT_047e2fe8;
              plVar7 = *(long **)(lVar8 + 0x70);
              if (plVar7 != (long *)0x0) {
                uVar11 = (ulong)*(uint *)(param_1 + 0x38);
                uVar14 = uVar11;
                do {
                  if ((int)uVar14 != 0) {
                    puVar13 = *(undefined8 **)(param_1 + 0x30);
                    puVar16 = puVar13;
                    do {
                      lVar8 = plVar7[2];
                      if (*(uint *)(lVar8 + 0x120) != 0) {
                        lVar15 = (ulong)*(uint *)(lVar8 + 0x120) << 3;
                        plVar10 = *(long **)(lVar8 + 0x118);
                        do {
                          if (*plVar10 == param_1) {
                            FUN_03455924(*(undefined8 *)puVar5,lVar8,*puVar16,3);
                            puVar13 = *(undefined8 **)(param_1 + 0x30);
                            uVar11 = (ulong)*(uint *)(param_1 + 0x38);
                            break;
                          }
                          lVar15 = lVar15 + -8;
                          plVar10 = plVar10 + 1;
                        } while (lVar15 != 0);
                      }
                      puVar16 = puVar16 + 1;
                      uVar14 = uVar11;
                    } while (puVar16 != puVar13 + uVar11);
                  }
                  plVar7 = (long *)*plVar7;
                } while (plVar7 != (long *)0x0);
              }
            }
          }
        }
        else if ((iVar4 == 0) && (*(long *)(param_1 + 0x18) != 0)) {
          local_68 = (ulong)local_68._1_7_ << 8;
          local_70 = 0x400000000;
          FUN_034a30a4(*(long *)(param_1 + 0x18),&local_70,1);
        }
      }
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar5 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(puVar5 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0xffff;
  while( true ) {
    uVar2 = *(uint *)(param_1 + 0x38);
    if (uVar2 == 0) break;
    plVar7 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar2 * 8 + -8);
    *(uint *)(param_1 + 0x38) = uVar2 - 1;
    (**(code **)(*plVar7 + 0x30))();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(puVar5 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  piVar17 = *(int **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (piVar17 != (int *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    iVar4 = *piVar17;
    *piVar17 = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      FUN_0344ca4c(piVar17);
      (**(code **)(puVar5 + 0x30))(0,piVar17);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


