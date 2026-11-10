/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c7f74; name: FUN_011c7f74
 */


undefined8 FUN_011c7f74(ulong *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x26;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  
  local_80 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(long *)(*(long *)(param_3 + 0x30) + 0x30);
  uStack_78 = *(undefined8 *)(lVar5 + 8);
  local_70 = *(undefined8 *)(lVar5 + 0x6098);
  lStack_68 = lVar5 + 0x10;
  auVar14 = FUN_00ec13d4(*(undefined8 *)(lVar5 + 0x6140),&uStack_78,&local_80,1,
                         *(undefined8 *)(param_2 + 0x10));
  lVar5 = auVar14._8_8_;
  uVar9 = auVar14._0_8_;
  if (lVar5 != 0 && (uVar9 & 0xff) != 0) {
    FUN_00f1d9f4(*(long *)(*(long *)(*(long *)(param_3 + 0x30) + 0x30) + 0x6140) + 0x110,param_1,
                 *(undefined4 *)(lVar5 + 0x88));
  }
  if ((uVar9 & 0xff) == 0) {
    return 0;
  }
  uVar11 = *param_1;
  plVar1 = (long *)(param_3 + 0x80);
  uVar10 = *(ulong *)(param_3 + 0x88);
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x26 = uVar6 & uVar11;
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 != (long *)0x0) {
        while ((plVar7 = (long *)*plVar7, plVar7 != (long *)0x0 &&
               (plVar7[1] == uVar11 || (plVar7[1] & uVar6) == unaff_x26))) {
          if (plVar7[2] == uVar11) {
            return 1;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x26 = uVar11 - uVar6 * uVar10;
      }
      plVar7 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar7 != (long *)0x0) {
        while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
          uVar6 = plVar7[1];
          if (uVar6 != uVar11) {
            if (uVar10 <= uVar6) {
              uVar2 = 0;
              if (uVar10 != 0) {
                uVar2 = uVar6 / uVar10;
              }
              uVar6 = uVar6 - uVar2 * uVar10;
            }
            if (uVar6 != unaff_x26) break;
          }
          if (plVar7[2] == uVar11) {
            return 1;
          }
        }
      }
    }
  }
  plVar7 = (long *)(**(code **)(**(long **)(param_3 + 0xb8) + 0x10))
                             (*(long **)(param_3 + 0xb8),0x28,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(**(long **)(param_3 + 0xb8) + 0xe8))();
  }
  uVar12 = *(undefined8 *)(param_3 + 0xb8);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    plVar7[2] = uVar11;
    *(undefined1 (*) [16])(plVar7 + 3) = auVar14;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    plVar7[4] = lVar5;
    plVar7[2] = uVar11;
    plVar7[3] = uVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar7 = 0;
  plVar7[1] = uVar11;
  fVar13 = (float)(*(long *)(param_3 + 0xd8) + 1);
  if ((uVar10 == 0) || (*(float *)(param_3 + 0xe0) * (float)uVar10 < fVar13)) {
    uVar9 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar10 = (ulong)(fVar13 / *(float *)(param_3 + 0xe0));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_011c82e8(plVar1,uVar10);
    uVar10 = *(ulong *)(param_3 + 0x88);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = uVar10 - 1 & uVar11;
    }
    else if (uVar11 < uVar10) {
      unaff_x26 = uVar11;
    }
    else {
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar11 / uVar10;
      }
      unaff_x26 = uVar11 - uVar9 * uVar10;
    }
  }
  plVar8 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(param_3 + 0xb0);
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(*(long *)(param_3 + 0x80) + unaff_x26 * 8) = plVar8;
    if (*plVar7 == 0) goto LAB_011c813c;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar11 * uVar10;
    }
    plVar8 = (long *)(*plVar1 + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar8;
  }
  *plVar8 = (long)plVar7;
LAB_011c813c:
  *(long *)(param_3 + 0xd8) = *(long *)(param_3 + 0xd8) + 1;
  return 1;
}


