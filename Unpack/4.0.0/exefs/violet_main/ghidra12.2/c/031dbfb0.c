/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dbfb0; name: FUN_031dbfb0
 */


undefined8 FUN_031dbfb0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  code *pcVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  long local_48;
  long lStack_40;
  ulong local_38;
  
  puVar13 = (ulong *)param_1[1];
  puVar10 = (ulong *)param_2[1];
  if (puVar13 != puVar10) {
    puVar16 = puVar13;
    do {
      uVar12 = (uint)*puVar16;
      if ((uVar12 >> 0xd & 1) != 0) {
        puVar17 = (ulong *)0x0;
        if (puVar16 != (ulong *)0x0) {
          uVar14 = CONCAT44(uVar12,uVar12) & 0x1fff00001fff;
          puVar17 = puVar16 + (ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)))
                              + 2;
        }
        goto LAB_031dc094;
      }
      if ((*puVar16 & 1) != 0) {
        puVar17 = (ulong *)0x0;
        goto LAB_031dc094;
      }
      puVar16 = (ulong *)puVar16[1];
    } while (puVar16 != (ulong *)0x0);
    puVar17 = (ulong *)0x0;
LAB_031dc094:
    puVar16 = puVar10;
LAB_031dc098:
    uVar12 = (uint)*puVar16;
    if ((uVar12 >> 0xd & 1) == 0) goto code_r0x031dc0a0;
    if (puVar16 != (ulong *)0x0) {
      if (puVar17 != (ulong *)0x0) {
        uVar14 = CONCAT44(uVar12,uVar12) & 0x1fff00001fff;
        while( true ) {
          DataMemoryBarrier(2,1);
          uVar18 = *puVar17 ^
                   puVar16[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2
                          ];
          if (((DAT_04884450 & 1) == 0) || ((uVar18 & 3) == 0)) break;
          DataMemoryBarrier(2,2);
          Yield();
        }
        if (((int)(*puVar17 >> 0x11) ==
             (int)(puVar16[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2
                          ] >> 0x11)) && ((uVar18 & 0x1fffc) == 0)) {
          puVar13 = (ulong *)param_2[1];
          goto LAB_031dbffc;
        }
      }
      goto LAB_031dc4e4;
    }
LAB_031dc118:
    if (puVar17 != (ulong *)0x0) goto LAB_031dc4e4;
    for (; (puVar13 != (ulong *)0x0 && ((*puVar13 & 1) == 0)); puVar13 = (ulong *)puVar13[1]) {
    }
    if (puVar10 == (ulong *)0x0) {
      puVar16 = (ulong *)0x0;
    }
    else {
      puVar16 = puVar10;
      do {
        if ((*puVar16 & 1) != 0) break;
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
    }
    bVar7 = puVar13 != puVar16;
    puVar13 = puVar10;
    if (bVar7) goto LAB_031dc4e4;
  }
LAB_031dbffc:
  uVar14 = 0;
  do {
    uVar12 = (uint)*puVar13;
    if ((uVar12 >> 0x15 & 1) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = CONCAT44(uVar12,uVar12) & 0x1fffff001fffff;
      uVar18 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                    POPCOUNT((char)(uVar18 >> 0x10))) + 2];
    }
    uVar14 = uVar18 | uVar14;
  } while (((*puVar13 & 1) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
  if (((uint)uVar14 >> 3 & 1) == 0) {
    puVar13 = (ulong *)param_1[1];
    while (uVar14 = *puVar13, ((uint)uVar14 >> 7 & 1) == 0) {
      if (((uVar14 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
      goto LAB_031dc180;
    }
    if ((puVar13 != (ulong *)0x0) &&
       ((code *)puVar13[(ulong)(byte)POPCOUNT((byte)uVar14 & 0x7f) + 2] != (code *)0x0)) {
      (*(code *)puVar13[(ulong)(byte)POPCOUNT((byte)uVar14 & 0x7f) + 2])
                (*param_1,*param_2,(ulong *)param_1[1],1);
      return 0;
    }
  }
LAB_031dc180:
  local_48 = *param_1;
  lStack_40 = param_1[1];
  local_38 = param_1[2];
  if ((local_38 & 1) != 0) {
    piVar1 = (int *)((local_38 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_78 = *param_2;
  local_70 = param_2[1];
  local_68 = param_2[2];
  if ((local_68 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar14 = local_68 & 1;
  }
  local_90 = &PTR_FUN_046a5b28;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  if (uVar14 != 0) {
    piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_60 = uStack_78;
  uStack_58 = local_70;
  local_50 = local_68;
  FUN_0320cc70(&local_48,&local_60,&local_90);
  puVar6 = PTR_DAT_047e5b98;
  local_90 = &PTR_FUN_046a5b28;
  if (local_48 != 0) {
    if ((local_68 & 1) != 0) {
      plVar9 = (long *)(local_68 & 0xfffffffffffffffe);
      plVar2 = plVar9 + 1;
      do {
        lVar3 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar3 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    lVar3 = local_88;
    local_90 = (undefined **)(puVar6 + 0x10);
    if ((int)local_80 != 0) {
      lVar19 = local_88 + (long)(int)local_80 * 0x18;
      do {
        puVar13 = (ulong *)(lVar19 + -8);
        lVar19 = lVar19 + -0x18;
        if ((*puVar13 & 1) != 0) {
          plVar9 = (long *)(*puVar13 & 0xfffffffffffffffe);
          plVar2 = plVar9 + 1;
          do {
            lVar5 = *plVar2;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)lVar5 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      } while (lVar19 != lVar3);
    }
    lVar3 = local_80;
    uVar14 = (ulong)local_80._4_4_;
    local_80 = (ulong)local_80._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_88 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar14 * 0x18);
    }
    if ((local_50 & 1) != 0) {
      plVar9 = (long *)(local_50 & 0xfffffffffffffffe);
      plVar2 = plVar9 + 1;
      do {
        lVar3 = *plVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar3 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    if ((local_38 & 1) == 0) {
      return 0;
    }
    plVar9 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar2 = plVar9 + 1;
    do {
      lVar3 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar9 == (long *)0x0) {
      return 0;
    }
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar9 + 8))();
      return 0;
    }
    return 0;
  }
  if ((local_68 & 1) != 0) {
    plVar9 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar2 = plVar9 + 1;
    do {
      lVar3 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar3 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  lVar3 = local_88;
  local_90 = (undefined **)(puVar6 + 0x10);
  if ((int)local_80 != 0) {
    lVar19 = local_88 + (long)(int)local_80 * 0x18;
    do {
      puVar13 = (ulong *)(lVar19 + -8);
      lVar19 = lVar19 + -0x18;
      if ((*puVar13 & 1) != 0) {
        plVar9 = (long *)(*puVar13 & 0xfffffffffffffffe);
        plVar2 = plVar9 + 1;
        do {
          lVar5 = *plVar2;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    } while (lVar19 != lVar3);
  }
  lVar3 = local_80;
  uVar14 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar14 * 0x18);
  }
  if ((local_50 & 1) != 0) {
    plVar9 = (long *)(local_50 & 0xfffffffffffffffe);
    plVar2 = plVar9 + 1;
    do {
      lVar3 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar3 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if ((local_38 & 1) != 0) {
    plVar9 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar2 = plVar9 + 1;
    do {
      lVar3 = *plVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar3 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
LAB_031dc4e4:
  lVar3 = *param_1;
  puVar13 = (ulong *)param_1[1];
  puVar10 = puVar13;
  while (uVar14 = *puVar10, ((uint)uVar14 >> 6 & 1) == 0) {
    if (((uVar14 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
    goto LAB_031dc52c;
  }
  if ((puVar10 != (ulong *)0x0) &&
     (pcVar11 = (code *)puVar10[(ulong)(byte)POPCOUNT((byte)uVar14 & 0x3f) + 2],
     pcVar11 != (code *)0x0)) goto LAB_031dc754;
LAB_031dc52c:
  uVar14 = *puVar13;
  uVar12 = (uint)uVar14;
  puVar10 = puVar13;
  if ((uVar14 & 1) == 0) {
    do {
      puVar10 = (ulong *)puVar10[1];
    } while ((*puVar10 & 1) == 0);
  }
  if ((puVar13 == (ulong *)0x0) || (3 < ((uint)puVar10[2] & 0x1f) - 2)) {
    puVar10 = puVar13;
    if ((uVar14 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
    }
    if (puVar13 == (ulong *)0x0) {
      return 0x80040200;
    }
    if ((puVar10[2] & 0x1f) != 6) {
      return 0x80040200;
    }
  }
  puVar10 = puVar13;
  uVar15 = uVar12;
  if ((uVar12 >> 0x16 & 1) == 0) {
    uVar18 = uVar14;
    do {
      if (((uVar18 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
      goto LAB_031dc5e0;
      uVar18 = *puVar10;
      uVar15 = (uint)uVar18;
    } while ((uVar15 >> 0x16 & 1) == 0);
  }
  uVar18 = CONCAT44(uVar15,uVar15) & 0x3fffff003fffff;
  pcVar11 = (code *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                         POPCOUNT((char)(uVar18 >> 0x10))) + 2];
  if (pcVar11 == (code *)0x0) {
LAB_031dc5e0:
    puVar10 = puVar13;
    uVar15 = uVar12;
    if ((uVar12 >> 6 & 1) == 0) {
      uVar18 = uVar14;
      do {
        if (((uVar18 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0)) {
          return 0x80040200;
        }
        uVar18 = *puVar10;
        uVar15 = (uint)uVar18;
      } while ((uVar15 >> 6 & 1) == 0);
    }
    if (puVar10 == (ulong *)0x0) {
      return 0x80040200;
    }
    pcVar11 = (code *)puVar10[(ulong)(byte)POPCOUNT((byte)uVar15 & 0x3f) + 2];
    if (pcVar11 == (code *)0x0) {
      return 0x80040200;
    }
  }
  puVar10 = puVar13;
  if (puVar13 == (ulong *)PTR_DAT_047ddc28) {
LAB_031dc780:
    uVar20 = *(undefined8 *)(lVar3 + 8);
    (*pcVar11)(lVar3,puVar13,1);
    *(undefined8 *)(lVar3 + 8) = uVar20;
  }
  else {
    while ((uVar12 >> 0xd & 1) == 0) {
      if (((uVar14 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
      goto LAB_031dc68c;
      uVar14 = *puVar10;
      uVar12 = (uint)uVar14;
    }
    if (puVar10 == (ulong *)0x0) {
LAB_031dc68c:
      puVar10 = (ulong *)0x0;
    }
    else {
      uVar14 = CONCAT44(uVar12,uVar12) & 0x1fff00001fff;
      puVar10 = puVar10 + (ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2;
    }
    puVar16 = (ulong *)PTR_DAT_047ddc28;
LAB_031dc698:
    uVar12 = (uint)*puVar16;
    if ((uVar12 >> 0xd & 1) == 0) goto code_r0x031dc6a0;
    if ((puVar16 != (ulong *)0x0) && (puVar10 != (ulong *)0x0)) {
      uVar14 = CONCAT44(uVar12,uVar12) & 0x1fff00001fff;
      while( true ) {
        DataMemoryBarrier(2,1);
        uVar12 = (uint)puVar16[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)))
                               + 2];
        if (((DAT_04884450 & 1) == 0) || ((((uint)*puVar10 ^ uVar12) & 3) == 0)) break;
        DataMemoryBarrier(2,2);
        Yield();
      }
      iVar8 = (int)(*puVar10 >> 0x11);
      if (((int)(puVar16[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2]
                >> 0x11) <= iVar8) && (iVar8 <= (int)(uVar12 >> 2 & 0x7fff))) goto LAB_031dc780;
      goto LAB_031dc754;
    }
LAB_031dc724:
    puVar10 = (ulong *)PTR_DAT_047ddc28;
    do {
      if ((*puVar10 & 1) != 0) break;
      puVar10 = (ulong *)puVar10[1];
    } while (puVar10 != (ulong *)0x0);
    if (puVar13 != (ulong *)0x0) {
      puVar16 = puVar13;
      do {
        if (puVar16 == puVar10) goto LAB_031dc780;
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
    }
LAB_031dc754:
    (*pcVar11)(lVar3,puVar13,1);
  }
  iVar8 = FUN_031e7578(param_1,param_2);
  if (-1 < iVar8) {
    return 0;
  }
  puVar13 = (ulong *)param_1[1];
  while (uVar14 = *puVar13, ((uint)uVar14 >> 8 & 1) == 0) {
    if ((uVar14 & 1) != 0) {
      return 0x80040200;
    }
    puVar13 = (ulong *)puVar13[1];
    if (puVar13 == (ulong *)0x0) {
      return 0x80040200;
    }
  }
  if (puVar13 == (ulong *)0x0) {
    return 0x80040200;
  }
  if ((code *)puVar13[(ulong)(byte)POPCOUNT((char)uVar14) + 2] == (code *)0x0) {
    return 0x80040200;
  }
  (*(code *)puVar13[(ulong)(byte)POPCOUNT((char)uVar14) + 2])(*param_1,(ulong *)param_1[1],1);
  return 0x80040200;
code_r0x031dc0a0:
  if (((*puVar16 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
  goto LAB_031dc118;
  goto LAB_031dc098;
code_r0x031dc6a0:
  if (((*puVar16 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
  goto LAB_031dc724;
  goto LAB_031dc698;
}


