/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344cf70; name: FUN_0344cf70
 */


bool FUN_0344cf70(long param_1,int param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  char cVar12;
  long *plVar13;
  char *pcVar14;
  long *plVar15;
  int iVar16;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 uStack_93;
  undefined3 uStack_8f;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  puVar4 = PTR_DAT_047e2fe8;
  cVar12 = *(char *)(param_1 + 0x28);
  if (cVar12 != -0x80) {
    if (cVar12 == -2) {
      uVar7 = (uint)*(byte *)(param_1 + 0x38);
      if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
        if ((int)(uint)*(ushort *)PTR_DAT_047e6d08 <= *(int *)(param_1 + 0x34)) {
          return false;
        }
        lVar8 = *(long *)(param_1 + 0x18);
        if (((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) || ((param_3 & 1) == 0)) {
          uVar7 = *(int *)(param_1 + 0x34) - param_2;
          *(uint *)(param_1 + 0x34) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
          return false;
        }
        pcVar14 = (char *)(param_1 + 0x28);
        if (*(short *)(param_1 + 0x2c) == 0) {
          FUN_0344d5b8(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                       *(long *)(lVar8 + 0x10),lVar8 + 0x18,pcVar14);
        }
        else {
          plVar15 = (long *)*(long *)(param_4 + 8);
          while (plVar15 != (long *)0x0) {
            lVar8 = *plVar15;
            if (((*(char *)(plVar15 + 5) == -2) && (*(short *)((long)plVar15 + 0x2c) == 0)) &&
               (((*(byte *)(plVar15 + 7) & 10) == 2 &&
                ((lVar10 = plVar15[2], lVar10 != 0 && (*pcVar14 == -2)))))) {
              switch(*(undefined2 *)(param_1 + 0x2c)) {
              case 1:
              case 4:
              case 5:
                if (*(long **)(lVar10 + 0x48) != (long *)0x0) {
                  cVar12 = -2;
                  plVar9 = *(long **)(lVar10 + 0x48);
                  while( true ) {
                    plVar13 = (long *)*plVar9;
                    if (cVar12 == -2) {
                      plVar9 = (long *)plVar9[2];
                      uVar2 = *(ushort *)(param_1 + 0x2c);
                      if (uVar2 == 1) {
                        *(undefined4 *)(plVar9 + 99) = *(undefined4 *)(param_1 + 0x34);
                        local_98 = local_98 & 0xffffff00;
                        local_a0 = 0x400000000;
                        FUN_034a30a4(plVar9,&local_a0,0);
                        *(byte *)(plVar15 + 7) = *(byte *)(plVar15 + 7) | 8;
                      }
                      else if ((uVar2 & 0xfffe) == 4) {
                        if (uVar2 == 5) {
                          (**(code **)(*plVar9 + 0x40))(plVar9,*(undefined4 *)(param_1 + 0x30));
                        }
                        else if (uVar2 == 4) {
                          (**(code **)(*plVar9 + 0x48))(plVar9,*(undefined4 *)(param_1 + 0x30),0);
                        }
                      }
                    }
                    if (plVar13 == (long *)0x0) break;
                    cVar12 = *pcVar14;
                    plVar9 = plVar13;
                  }
                }
                break;
              case 2:
                plVar9 = *(long **)(lVar10 + 0x48);
                if (plVar9 != (long *)0x0) {
                  do {
                    local_98 = local_98 & 0xffffff00;
                    local_a0 = 0x400000000;
                    FUN_034a3174(plVar9[2],&local_a0);
                    plVar9 = (long *)*plVar9;
                  } while (plVar9 != (long *)0x0);
                  lVar10 = plVar15[2];
                }
                for (plVar15 = *(long **)(lVar10 + 0x70); plVar15 != (long *)0x0;
                    plVar15 = (long *)*plVar15) {
                  FUN_034555f4(*(undefined8 *)puVar4,plVar15[2]);
                }
                break;
              case 3:
                plVar9 = *(long **)(lVar10 + 0x48);
                if (plVar9 != (long *)0x0) {
                  uVar1 = *(undefined4 *)(param_1 + 0x34);
                  do {
                    lVar10 = plVar9[2];
                    local_98 = local_98 & 0xffffff00;
                    local_a0 = 0x400000000;
                    *(undefined4 *)(lVar10 + 0x2d8) = uVar1;
                    FUN_034a32dc(lVar10,&local_a0,0);
                    plVar9 = (long *)*plVar9;
                  } while (plVar9 != (long *)0x0);
                  lVar10 = plVar15[2];
                }
                for (plVar15 = *(long **)(lVar10 + 0x70); plVar15 != (long *)0x0;
                    plVar15 = (long *)*plVar15) {
                  FUN_03456880(*(undefined8 *)puVar4,plVar15[2]);
                }
              }
            }
            plVar15 = (long *)lVar8;
          }
        }
        uVar3 = *(int *)(param_1 + 0x34) - param_2;
        uVar7 = *(byte *)(param_1 + 0x38) | 2;
        *(char *)(param_1 + 0x38) = (char)uVar7;
        *(uint *)(param_1 + 0x34) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        if (*(char *)(param_1 + 0x28) != -2) {
          return true;
        }
      }
      if ((*(short *)(param_1 + 0x2c) == 0) &&
         ((((uVar7 >> 3 & 1) != 0 || (lVar8 = *(long *)(param_1 + 0x10), lVar8 == 0)) ||
          ((*(int *)(lVar8 + 0x6c) == 0 && (*(int *)(lVar8 + 0x94) == 0)))))) {
        return true;
      }
      return *(short *)(param_1 + 0x2c) != 0;
    }
    if (cVar12 != -0x70) {
      return true;
    }
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x10) == 0)) ||
     ((param_3 & 1) == 0)) goto LAB_0344d4fc;
  uVar7 = (uint)*(byte *)(param_1 + 0x38);
  if (((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) &&
     (iVar16 = *(int *)(param_1 + 0x34), iVar16 < (int)(uint)*(ushort *)PTR_DAT_047e6d08)) {
    if ((cVar12 == -0x80) || ((cVar12 == -0x70 && (*(char *)(param_1 + 0x2d) == '\0')))) {
      lVar8 = *(long *)(param_1 + 0x10);
      plVar15 = *(long **)(lVar8 + 0x48);
      if (plVar15 != (long *)0x0) {
        do {
          plVar13 = (long *)plVar15[2];
          plVar9 = (long *)plVar13[0xd];
          if (plVar9 == (long *)0x0) {
            *(int *)(plVar13 + 0xe) = iVar16;
          }
          else {
            while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
              lVar8 = plVar9[1];
              if ((*(int *)(lVar8 + 0x6c) == 0x7fffffff) &&
                 (*(int *)(lVar8 + 0x6c) = *(int *)(lVar8 + 0x70) + iVar16,
                 *(int *)(lVar8 + 0x78) != 3)) {
                *(undefined4 *)(lVar8 + 0x78) = 2;
              }
            }
          }
          uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
          if ((uVar6 & 1) == 0) {
            if ((int)plVar15[1] == 2) {
              (**(code **)(*plVar13 + 0x38))(plVar13,*(undefined8 *)(param_1 + 0x20));
            }
            else if ((int)plVar15[1] == 3) goto LAB_0344d09c;
          }
          else {
            *(undefined4 *)(plVar15 + 1) = 3;
            iVar16 = -1;
LAB_0344d09c:
            *(int *)(plVar13 + 99) = iVar16;
            local_98 = local_98 & 0xffffff00;
            local_a0 = 0x400000000;
            FUN_034a30a4(plVar13,&local_a0,iVar16 == -1);
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_0344d30c;
          iVar16 = *(int *)(param_1 + 0x34);
        } while( true );
      }
      goto LAB_0344d310;
    }
    goto LAB_0344d340;
  }
LAB_0344d348:
  if ((uVar7 & 1) == 0) {
    pcVar14 = (char *)(param_1 + 0x28);
    if ((*pcVar14 == -0x70) && (*(char *)(param_1 + 0x2d) != '\0')) {
      FUN_0344d5b8(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                   *(long *)(param_1 + 0x18) + 0x18,pcVar14);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      plVar15 = *(long **)(lVar8 + 0x20);
      if (plVar15 != (long *)0x0) {
        do {
          if ((int)plVar15[1] == 1) {
            uVar11 = *(undefined8 *)pcVar14;
            local_98 = *(uint *)(param_1 + 0x30);
            local_a0._2_6_ = (undefined6)((ulong)uVar11 >> 0x10);
            local_a0._0_2_ = CONCAT11(*(undefined1 *)((long)plVar15 + 0x19),(char)uVar11);
            uVar5 = local_a0;
            local_a0._5_3_ = (undefined3)((ulong)uVar11 >> 0x28);
            local_a0._0_5_ = CONCAT14((char)plVar15[3],(int)uVar5);
            FUN_0344d5b8(param_1,plVar15[2],*(undefined8 *)(param_1 + 0x20),
                         *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                         *(long *)(param_1 + 0x18) + 0x18,&local_a0);
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        lVar8 = *(long *)(param_1 + 0x10);
      }
      plVar15 = *(long **)(lVar8 + 0x48);
      if (plVar15 != (long *)0x0) {
        do {
          if ((int)plVar15[1] != 1) {
            lVar8 = plVar15[2];
            plVar9 = *(long **)(lVar8 + 0x188);
            if (plVar9 != (long *)0x0) {
              uStack_93 = *(undefined4 *)(param_1 + 0x2d);
              local_a0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
              uStack_64 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
              local_94 = *(undefined1 *)(lVar8 + 0x2f0);
              local_98 = CONCAT22(*(undefined2 *)(param_1 + 0x2a),
                                  CONCAT11(*(undefined1 *)(lVar8 + 0x2ed),
                                           *(undefined1 *)(param_1 + 0x28)));
              uStack_8f = uStack_64;
              local_88 = *(undefined8 *)(lVar8 + 0x2f8);
              local_80 = *(undefined4 *)(lVar8 + 0x38);
              local_78 = *(undefined4 *)(param_1 + 0x34);
              uStack_7c = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x2c);
              uStack_74 = 3;
              local_70 = lVar8;
              uStack_68 = uStack_93;
              (**(code **)(*plVar9 + 0x148))(plVar9,&local_a0,lVar8 + 0x68,1);
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
    uVar7 = *(byte *)(param_1 + 0x38) | 1;
    *(char *)(param_1 + 0x38) = (char)uVar7;
  }
  if (((((*(char *)(param_1 + 0x28) == -0x70) && ((uVar7 >> 2 & 1) == 0)) &&
       (*(char *)(param_1 + 0x2d) != '\0')) &&
      ((lVar8 = *(long *)(param_1 + 0x10), lVar8 != 0 && (*(int *)(lVar8 + 0x6c) == 0)))) &&
     ((*(int *)(lVar8 + 0x94) == 0 &&
      (uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(), (uVar6 & 1) == 0)))) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
  }
LAB_0344d4fc:
  uVar7 = *(int *)(param_1 + 0x34) - param_2;
  *(uint *)(param_1 + 0x34) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  return ((*(byte *)(param_1 + 0x38) ^ 0xff) & 6) == 0;
LAB_0344d30c:
  lVar8 = *(long *)(param_1 + 0x10);
LAB_0344d310:
  puVar4 = PTR_DAT_047e2fe8;
  for (plVar15 = *(long **)(lVar8 + 0x70); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
    FUN_03455924(*(undefined8 *)puVar4,plVar15[2],*(undefined8 *)(param_1 + 0x20),
                 *(undefined4 *)(plVar15 + 1));
  }
  uVar7 = (uint)*(byte *)(param_1 + 0x38);
LAB_0344d340:
  uVar7 = uVar7 | 2;
  *(char *)(param_1 + 0x38) = (char)uVar7;
  goto LAB_0344d348;
}


