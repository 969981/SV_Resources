/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00523ea0; name: FUN_00523ea0
 */


void FUN_00523ea0(long *param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  size_t __n;
  ulong *puVar13;
  long lVar14;
  code *pcVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  
  if (*(char *)((long)param_3 + 9) == '\0') {
    if ((*(byte *)((long)param_3 + 10) & 1) != 0) {
      return;
    }
    bVar1 = *(byte *)(param_3 + 1);
    switch(*(undefined4 *)(PTR_DAT_047cdbe8 + (ulong)bVar1 * 4)) {
    case 1:
    case 3:
    case 6:
    case 8:
      lVar18 = *param_3;
      lVar21 = param_3[2];
      auVar22 = FUN_00524ad8(param_1,param_2);
      puVar5 = auVar22._0_8_;
      *(long *)(puVar5 + 4) = lVar21;
      if ((auVar22._8_8_ & 0xff) != 0) {
        *(byte *)(puVar5 + 2) = bVar1;
        *(undefined1 *)((long)puVar5 + 9) = 0;
      }
      *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0;
      *puVar5 = (int)lVar18;
      return;
    case 2:
    case 4:
    case 5:
      lVar21 = *param_3;
      lVar18 = param_3[2];
      auVar22 = FUN_00524ad8(param_1,param_2);
      plVar7 = auVar22._0_8_;
      plVar7[2] = lVar18;
      if ((auVar22._8_8_ & 0xff) != 0) {
        *(byte *)(plVar7 + 1) = bVar1;
        *(undefined1 *)((long)plVar7 + 9) = 0;
      }
      *(byte *)((long)plVar7 + 10) = *(byte *)((long)plVar7 + 10) & 0xf0;
      *plVar7 = lVar21;
      return;
    case 7:
      lVar18 = *param_3;
      lVar21 = param_3[2];
      auVar22 = FUN_00524ad8(param_1,param_2);
      puVar8 = auVar22._0_8_;
      *(long *)(puVar8 + 0x10) = lVar21;
      if ((auVar22._8_8_ & 0xff) != 0) {
        puVar8[8] = bVar1;
        puVar8[9] = 0;
      }
      puVar8[10] = puVar8[10] & 0xf0;
      *puVar8 = (char)lVar18;
      return;
    case 9:
      goto switchD_00523fa0_caseD_9;
    case 10:
      lVar18 = param_3[2];
      auVar22 = FUN_00524ad8(param_1,param_2);
      puVar4 = auVar22._0_8_;
      puVar4[2] = lVar18;
      if ((auVar22._8_8_ & 0xff) == 0) {
        if ((*(byte *)((long)param_3 + 10) >> 4 & 1) != 0) {
          if ((*(byte *)((long)puVar4 + 10) >> 4 & 1) == 0) {
            plVar7 = (long *)*puVar4;
            lVar18 = (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,plVar7);
            pcVar15 = *(code **)(*plVar7 + 0x40);
            goto LAB_005247b8;
          }
          plVar7 = (long *)*puVar4;
          goto LAB_005247ac;
        }
        if ((*(byte *)((long)puVar4 + 10) >> 4 & 1) == 0) {
          plVar7 = (long *)*puVar4;
        }
        else {
          plVar7 = (long *)(**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,*param_3);
        }
      }
      else {
        *(char *)(puVar4 + 1) = (char)param_3[1];
        *(undefined1 *)((long)puVar4 + 0xb) = *(undefined1 *)((long)param_3 + 0xb);
        *(undefined1 *)((long)puVar4 + 9) = 0;
        bVar1 = *(byte *)((long)puVar4 + 10) & 0xf;
        if ((*(byte *)((long)param_3 + 10) >> 4 & 1) != 0) {
          *(byte *)((long)puVar4 + 10) = bVar1 | 0x10;
          plVar7 = (long *)(**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,*param_1);
          *puVar4 = plVar7;
LAB_005247ac:
          lVar18 = *param_3;
          pcVar15 = *(code **)(*plVar7 + 0x68);
          goto LAB_005247b8;
        }
        *(byte *)((long)puVar4 + 10) = bVar1;
        plVar7 = (long *)(**(code **)(*(long *)*param_3 + 0x20))((long *)*param_3,*param_1);
        *puVar4 = plVar7;
      }
      lVar18 = *param_3;
      pcVar15 = *(code **)(*plVar7 + 0x40);
LAB_005247b8:
      (*pcVar15)(plVar7,lVar18);
      *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) & 0xf0;
      return;
    default:
      return;
    }
  }
  lVar18 = param_3[2];
  auVar22 = FUN_00524ad8(param_1,param_2);
  uVar11 = auVar22._8_8_;
  plVar7 = auVar22._0_8_;
  plVar7[2] = lVar18;
  if ((uVar11 & 0xff) != 0) {
    *(char *)(plVar7 + 1) = (char)param_3[1];
    *(undefined1 *)((long)plVar7 + 0xb) = *(undefined1 *)((long)param_3 + 0xb);
    *(undefined1 *)((long)plVar7 + 9) = 1;
  }
  switch(*(undefined4 *)(PTR_DAT_047cdbe8 + (ulong)*(byte *)(param_3 + 1) * 4)) {
  case 1:
  case 8:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdbf0);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    lVar18 = (long)*piVar17;
    FUN_00531134(piVar17,*piVar17 + *piVar16);
    break;
  case 2:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdbf8);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    lVar18 = (long)*piVar17;
    FUN_00531704(piVar17,*piVar17 + *piVar16);
    goto LAB_00524530;
  case 3:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdc00);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    lVar18 = (long)*piVar17;
    FUN_0053141c(piVar17,*piVar17 + *piVar16);
    break;
  case 4:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdc08);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    lVar18 = (long)*piVar17;
    FUN_005319ec(piVar17,*piVar17 + *piVar16);
    goto LAB_00524530;
  case 5:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdc18);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    lVar18 = (long)*piVar17;
    FUN_00531fbc(piVar17,*piVar17 + *piVar16);
LAB_00524530:
    *piVar17 = *piVar17 + *piVar16;
    pvVar9 = (void *)(*(long *)(piVar17 + 2) + lVar18 * 8);
    pvVar12 = *(void **)(piVar16 + 2);
    __n = (long)*piVar16 << 3;
    goto LAB_005245b8;
  case 6:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdc10);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    lVar18 = (long)*piVar17;
    FUN_00531cd4(piVar17,*piVar17 + *piVar16);
    break;
  case 7:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x10);
        }
        puVar4 = (undefined8 *)FUN_00520544(lVar18,0x10,PTR_LAB_047cdc20);
        *puVar4 = 0;
        puVar4[1] = lVar18;
      }
      *plVar7 = (long)puVar4;
    }
    piVar16 = (int *)*param_3;
    if (*piVar16 == 0) {
      return;
    }
    piVar17 = (int *)*plVar7;
    iVar2 = *piVar17;
    FUN_00530e58(piVar17,iVar2 + *piVar16);
    pvVar9 = (void *)(*(long *)(piVar17 + 2) + (long)iVar2);
    *piVar17 = *piVar17 + *piVar16;
    pvVar12 = *(void **)(piVar16 + 2);
    __n = (size_t)*piVar16;
    goto LAB_005245b8;
  case 9:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
        if (plVar6 != (long *)0x0) {
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x18);
        }
        plVar6 = (long *)FUN_00520544(lVar18,0x18,PTR_LAB_047cdc28);
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = lVar18;
      }
      *plVar7 = (long)plVar6;
    }
    FUN_004e80a8(*plVar7,*param_3);
    return;
  case 10:
    if ((uVar11 & 0xff) != 0) {
      lVar18 = *param_1;
      if (lVar18 == 0) {
        plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
        if (plVar6 != (long *)0x0) {
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar6[2] = 0;
        }
      }
      else {
        if (*(long *)(lVar18 + 0x70) != 0) {
          FUN_00520d08(lVar18,0,0x18);
        }
        plVar6 = (long *)FUN_00520544(lVar18,0x18,PTR_LAB_047cdac0);
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = lVar18;
      }
      *plVar7 = (long)plVar6;
    }
    lVar18 = *param_3;
    if (0 < *(int *)(lVar18 + 8)) {
      lVar21 = 0;
      do {
        plVar6 = *(long **)(*(long *)(lVar18 + 0x10) + lVar21 * 8 + 8);
        lVar14 = *plVar7;
        piVar16 = *(int **)(lVar14 + 0x10);
        if (piVar16 == (int *)0x0) {
LAB_005243a4:
          plVar19 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,*param_1);
          lVar14 = *plVar7;
          piVar16 = *(int **)(lVar14 + 0x10);
          if (piVar16 != (int *)0x0) {
            iVar2 = *piVar16;
            if (iVar2 < *(int *)(lVar14 + 0xc)) {
              iVar3 = *(int *)(lVar14 + 8);
              if (iVar3 < iVar2) {
                *(undefined8 *)(piVar16 + (long)iVar2 * 2 + 2) =
                     *(undefined8 *)(piVar16 + (long)iVar3 * 2 + 2);
              }
              *(long **)(piVar16 + (long)iVar3 * 2 + 2) = plVar19;
              *(int *)(lVar14 + 8) = iVar3 + 1;
              **(int **)(lVar14 + 0x10) = **(int **)(lVar14 + 0x10) + 1;
              goto LAB_00524344;
            }
          }
          FUN_004ef91c(lVar14,plVar19);
        }
        else {
          iVar2 = *(int *)(lVar14 + 8);
          if (*piVar16 <= iVar2) goto LAB_005243a4;
          *(int *)(lVar14 + 8) = iVar2 + 1;
          plVar19 = *(long **)(piVar16 + (long)iVar2 * 2 + 2);
          if (plVar19 == (long *)0x0) goto LAB_005243a4;
        }
LAB_00524344:
        (**(code **)(*plVar19 + 0x40))(plVar19,plVar6);
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(lVar18 + 8));
    }
  default:
    return;
  }
  pvVar9 = (void *)(*(long *)(piVar17 + 2) + lVar18 * 4);
  *piVar17 = *piVar17 + *piVar16;
  pvVar12 = *(void **)(piVar16 + 2);
  __n = (long)*piVar16 << 2;
LAB_005245b8:
  memcpy(pvVar9,pvVar12,__n);
  return;
switchD_00523fa0_caseD_9:
  puVar13 = (ulong *)*param_3;
  if ((*puVar13 & 1) == 0) {
    uStack_58 = puVar13[1];
    local_60 = *puVar13;
    local_50 = (void *)puVar13[2];
  }
  else {
    uVar11 = puVar13[1];
    pvVar9 = (void *)puVar13[2];
    if (uVar11 < 0x17) {
      pvVar12 = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar11 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar20 = uVar11 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar20);
      local_60 = uVar20 | 1;
      uStack_58 = uVar11;
      local_50 = pvVar12;
    }
    memcpy(pvVar12,pvVar9,uVar11 + 1);
  }
  lVar18 = param_3[2];
                    /* try { // try from 005246a8 to 005246ef has its CatchHandler @ 005248b0 */
  auVar22 = FUN_00524ad8(param_1,param_2);
  puVar4 = auVar22._0_8_;
  puVar4[2] = lVar18;
  if ((auVar22._8_8_ & 0xff) == 0) goto LAB_00524714;
  *(byte *)(puVar4 + 1) = bVar1;
  *(undefined1 *)((long)puVar4 + 9) = 0;
  lVar18 = *param_1;
  if (lVar18 == 0) {
    puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar10 != (undefined8 *)0x0) goto LAB_00524708;
  }
  else {
    if (*(long *)(lVar18 + 0x70) != 0) {
                    /* try { // try from 00524894 to 005248a3 has its CatchHandler @ 005248b0 */
      FUN_00520d08(lVar18,0,0x18);
    }
    puVar10 = (undefined8 *)FUN_00520544(lVar18,0x18,PTR_LAB_047cba90);
LAB_00524708:
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
  }
  *puVar4 = puVar10;
LAB_00524714:
  *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) & 0xf0;
  puVar13 = (ulong *)*puVar4;
  if ((*puVar13 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,puVar13[2]);
  }
  puVar13[2] = (ulong)local_50;
  puVar13[1] = uStack_58;
  *puVar13 = local_60;
  return;
}


