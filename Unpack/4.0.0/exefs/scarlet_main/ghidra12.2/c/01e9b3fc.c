/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9b3fc; name: FUN_01e9b3fc
 */


/* WARNING: Removing unreachable block (ram,0x01e9c64c) */
/* WARNING: Removing unreachable block (ram,0x01e9c650) */
/* WARNING: Removing unreachable block (ram,0x01e9c658) */
/* WARNING: Removing unreachable block (ram,0x01e9c660) */
/* WARNING: Removing unreachable block (ram,0x01e9c840) */
/* WARNING: Removing unreachable block (ram,0x01e9c848) */
/* WARNING: Removing unreachable block (ram,0x01e9c84c) */
/* WARNING: Removing unreachable block (ram,0x01e9c854) */
/* WARNING: Removing unreachable block (ram,0x01e9c85c) */
/* WARNING: Removing unreachable block (ram,0x01e9ccc0) */
/* WARNING: Removing unreachable block (ram,0x01e9ccd0) */
/* WARNING: Removing unreachable block (ram,0x01e9c864) */
/* WARNING: Removing unreachable block (ram,0x01e9c668) */

void FUN_01e9b3fc(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined2 uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  int extraout_var;
  long *plVar27;
  int extraout_var_00;
  ulong uVar28;
  undefined8 uVar29;
  long *plVar30;
  code *pcVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  long *plVar35;
  undefined4 *puVar36;
  undefined8 *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 *local_268 [45];
  undefined2 local_fc [2];
  long *local_f8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long *local_70 [2];
  
  puVar8 = PTR_DAT_047d4c98;
  puVar36 = (undefined4 *)(param_1 + 0x30);
  switch(*puVar36) {
  case 1:
    FUN_01e9ccfc(param_1);
    return;
  case 2:
    if (((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) ||
       ((*(long *)(param_1 + 0x40) == 0 ||
        (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 == 0))))
    goto switchD_01e9bee0_default;
    FUN_01e9a5ec(lVar32 + -0x28);
    uVar23 = 3;
    break;
  case 3:
    if ((((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0))
        || (*(long *)(param_1 + 0x40) == 0)) ||
       (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 == 0))
    goto switchD_01e9bee0_default;
    if ((*(char *)(lVar32 + 0x98) != '\0') && (*(long *)(lVar32 + 0xa0) != 0)) {
      return;
    }
    uVar23 = 4;
    break;
  case 4:
    if (((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) ||
       ((*(long *)(param_1 + 0x40) == 0 ||
        ((lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 == 0 ||
         (uVar28 = FUN_01e9ceb8(lVar32 + -0x28), (uVar28 & 1) == 0))))))
    goto switchD_01e9bee0_default;
    uVar23 = 5;
    break;
  case 5:
    if (((*(long *)(param_1 + 0x40) != 0) && (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0)) &&
       ((*(long *)(param_1 + 0x40) != 0 &&
        (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 != 0)))) {
      lVar32 = lVar32 + -0x28;
      uVar28 = FUN_01e9d0ec(lVar32);
      if ((uVar28 & 1) != 0) {
        return;
      }
      uVar28 = FUN_01e9d0fc(lVar32);
      if (uVar28 >> 0x20 == 0) {
        uVar23 = 6;
        break;
      }
    }
    goto switchD_01e9bee0_default;
  case 6:
    if (((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) ||
       (*(long *)(param_1 + 0x40) == 0)) {
      lVar32 = 0;
    }
    else {
      lVar33 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
      lVar32 = 0;
      if (lVar33 != 0) {
        lVar32 = lVar33 + -0x28;
      }
    }
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    lVar33 = FUN_01dd68a8();
    if (((lVar32 != 0) && (lVar33 != 0)) && (uVar28 = FUN_01e9d104(lVar32), (uVar28 & 0xff) != 0)) {
      iVar18 = (int)(uVar28 >> 0x20);
      iVar26 = (uint)(iVar18 == 2) << 1;
      if (iVar18 == 1) {
        iVar26 = 1;
      }
      iVar18 = FUN_01e9a628(lVar33);
      if (iVar18 == iVar26) {
LAB_01e9c318:
        uVar23 = 7;
        break;
      }
      if (iVar26 == 0) {
        if (iVar18 == 2) goto LAB_01e9c318;
      }
      else if (iVar26 != 2) goto switchD_01e9bee0_default;
      if (iVar18 == 1) {
        FUN_01e9ccfc(param_1);
        uVar23 = 7;
LAB_01e9be7c:
        *(undefined4 *)(param_1 + 0x30) = uVar23;
        return;
      }
    }
    goto switchD_01e9bee0_default;
  case 7:
    switch(*(undefined4 *)(param_1 + 0x34)) {
    case 0:
      goto switchD_01e9bee0_caseD_0;
    case 1:
      iVar26 = FUN_0179ff1c();
      if (((iVar26 != 2) && (iVar26 != 1)) && (iVar26 == 0)) {
        uVar23 = 8;
        goto LAB_01e9bf68;
      }
      break;
    case 2:
      iVar26 = FUN_0179ff1c();
      if (iVar26 == 2) {
        uVar23 = 0xe;
        goto LAB_01e9bf68;
      }
      break;
    case 3:
      iVar26 = FUN_0179ff1c();
      if (iVar26 != 2) {
        if (iVar26 == 1) {
          uVar23 = 0x12;
          goto LAB_01e9bf68;
        }
        if (iVar26 == 0) goto switchD_01e9bee0_caseD_0;
      }
    }
    goto switchD_01e9bee0_default;
  case 8:
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    uVar34 = FUN_01dd68a8();
    FUN_01e9d10c(&local_3d8,param_1);
    if ((char)local_3d8 != '\0') {
      FUN_01e9d458(uVar34,1);
      FUN_01e9d460(uVar34,*(undefined4 *)(param_1 + 0x50));
      FUN_01e9d468(uVar34,*(undefined4 *)(param_1 + 0x54));
      FUN_01e9d470(uVar34,(ulong)&local_3d8 | 4);
      uVar28 = FUN_01e9d47c();
      if ((uVar28 & 1) == 0) {
        return;
      }
      *puVar36 = 9;
      return;
    }
    goto LAB_01e9bdac;
  case 9:
    uVar28 = FUN_01e9d5d4();
    if ((uVar28 & 1) == 0) {
      return;
    }
    uVar23 = 0xc;
    break;
  case 10:
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    uVar34 = FUN_01dd68a8();
    FUN_01e9d458(uVar34,0);
    uVar28 = FUN_01e9d47c();
    if ((uVar28 & 1) == 0) {
      return;
    }
    uVar23 = 0xb;
    break;
  case 0xb:
    uVar28 = FUN_01e9d5d4();
    if ((uVar28 & 1) == 0) {
      return;
    }
    goto switchD_01e9bee0_default;
  case 0xc:
    if (((*(long *)(param_1 + 0x40) != 0) && (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0)) &&
       ((*(long *)(param_1 + 0x40) != 0 &&
        (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 != 0)))) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
      lVar33 = FUN_01dd68a8();
      memcpy(&local_3d8,(void *)(lVar33 + 0x4c),0x16c);
      uVar28 = FUN_01e9d7a8(lVar32 + -0x28,&local_3d8,0x16c,param_1 + 0x58,0x100);
      uVar23 = 0xd;
      if ((uVar28 & 1) == 0) {
        uVar23 = 10;
      }
      goto LAB_01e9be7c;
    }
    goto LAB_01e9bdac;
  case 0xd:
    if ((((*(long *)(param_1 + 0x40) != 0) && (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0))
        && (*(long *)(param_1 + 0x40) != 0)) &&
       (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 != 0)) {
      lVar32 = lVar32 + -0x28;
      uVar28 = FUN_01e9d0ec(lVar32);
      if ((uVar28 & 1) != 0) {
        return;
      }
      uVar28 = FUN_01e9d0fc(lVar32);
      if (uVar28 >> 0x20 == 0) goto switchD_01e9bee0_caseD_0;
    }
LAB_01e9bdac:
    uVar23 = 10;
    break;
  case 0xe:
    if (((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) ||
       ((*(long *)(param_1 + 0x40) == 0 ||
        ((lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 == 0 ||
         (uVar28 = FUN_01e9d938(lVar32 + -0x28), (uVar28 & 1) == 0))))))
    goto switchD_01e9bee0_default;
    uVar23 = 0xf;
    break;
  case 0xf:
    if ((((*(long *)(param_1 + 0x40) != 0) && (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0))
        && (*(long *)(param_1 + 0x40) != 0)) &&
       (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 != 0)) {
      lVar32 = lVar32 + -0x28;
      uVar28 = FUN_01e9d0ec(lVar32);
      if ((uVar28 & 1) != 0) {
        return;
      }
      FUN_01e9d0fc(lVar32);
      if ((extraout_var == 5) || (extraout_var == 0)) {
        uVar23 = 0x10;
        break;
      }
    }
    goto switchD_01e9bee0_default;
  case 0x10:
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    puVar10 = PTR_DAT_047d4ca8;
    puVar9 = PTR_DAT_047d4ca0;
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    uVar34 = FUN_01dd68a8();
    if (((*puVar8 & 1) == 0) && (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar32 = *(long *)puVar9;
    *(long *)puVar10 = lVar32;
    puVar11 = PTR_DAT_047d8f00;
    puVar9 = PTR_DAT_047d8ef8;
    plVar4 = *(long **)(lVar32 + 0x1c8);
    for (plVar35 = *(long **)(lVar32 + 0x1c0); plVar35 != plVar4; plVar35 = plVar35 + 1) {
      lVar32 = *plVar35;
      plVar27 = (long *)(*(code *)**(undefined8 **)(lVar32 + 0x28))((undefined8 *)(lVar32 + 0x28));
      if (((*puVar9 & 1) == 0) && (iVar26 = __cxa_guard_acquire(puVar9), iVar26 != 0)) {
        uVar29 = FUN_01b3fb0c();
        *(undefined8 *)puVar11 = uVar29;
        __cxa_guard_release(puVar9);
      }
      for (; plVar27 != (long *)0x0; plVar27 = (long *)*plVar27) {
        if (plVar27 == (long *)puVar11) goto LAB_01e9c11c;
      }
    }
    lVar32 = 0;
LAB_01e9c11c:
    puVar9 = PTR_DAT_047d4ca0;
    if (((*puVar8 & 1) == 0) && (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
    lVar33 = FUN_01dd68a8();
    memcpy(&local_3d8,(void *)(lVar33 + 0x1b8),0x16c);
    FUN_01e99b74(&local_98,&local_3d8);
    plVar35 = local_98;
    if (local_98 != (long *)0x0) {
      if ((*(byte *)(*(long *)(local_98[0xe] + 0x10) + 4) >> 2 & 1) == 0) {
        sVar15 = FUN_00cf44f4();
        if (sVar15 != 0) goto LAB_01e9c17c;
      }
      else {
LAB_01e9c17c:
        uVar23 = *(undefined4 *)(lVar33 + 0x40);
        uVar24 = *(undefined4 *)(lVar33 + 0x44);
        memcpy(local_268,(void *)(lVar33 + 0x4c),0x16c);
        FUN_01e99b74(local_f8,local_268);
        plVar35 = local_f8[0];
        if (local_f8[0] != (long *)0x0) {
          if ((*(byte *)(*(long *)(local_f8[0][0xe] + 0x10) + 4) >> 2 & 1) == 0) {
            sVar15 = FUN_00cf44f4();
            if (sVar15 != 0) goto LAB_01e9c1c0;
          }
          else {
LAB_01e9c1c0:
            plVar27 = local_98;
            uVar29 = *(undefined8 *)(param_1 + 8);
            plVar4 = plVar35 + 5;
            do {
              lVar33 = *plVar4;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *(int *)plVar4 = (int)lVar33 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar33 == -1) {
LAB_01e9cbc0:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            if (local_98 != (long *)0x0) {
              plVar3 = local_98 + 5;
              do {
                lVar33 = *plVar3;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *(int *)plVar3 = (int)lVar33 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((int)lVar33 == -1) goto LAB_01e9cbc0;
            }
            local_70[0] = (long *)FUN_00fee8fc(&local_d8,uVar29);
            if (local_70[0] != (long *)0x0) {
              plVar3 = local_70[0] + 5;
              do {
                lVar33 = *plVar3;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar7) {
                  *(int *)plVar3 = (int)lVar33 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((int)lVar33 == -1) goto LAB_01e9cbc0;
            }
            FUN_00feea48(local_70[0],plVar27);
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = (long *)0x0;
            uStack_d0 = 0;
            if (((*puVar8 & 1) == 0) &&
               (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
              FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4c98);
            }
            lVar33 = *(long *)PTR_DAT_047d4ca0;
            *(long *)puVar10 = lVar33;
            puVar9 = PTR_DAT_047d4ce8;
            puVar8 = PTR_DAT_047d4ce0;
            plVar5 = *(long **)(lVar33 + 0x1c8);
            for (plVar3 = *(long **)(lVar33 + 0x1c0); plVar3 != plVar5; plVar3 = plVar3 + 1) {
              lVar33 = *plVar3;
              plVar30 = (long *)(*(code *)**(undefined8 **)(lVar33 + 0x28))
                                          ((undefined8 *)(lVar33 + 0x28));
              if (((*puVar8 & 1) == 0) && (iVar26 = __cxa_guard_acquire(puVar8), iVar26 != 0)) {
                uVar29 = FUN_01b3fb0c();
                *(undefined8 *)puVar9 = uVar29;
                __cxa_guard_release(puVar8);
              }
              for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
                if (plVar30 == (long *)puVar9) goto LAB_01e9c364;
              }
            }
            lVar33 = 0;
LAB_01e9c364:
            uVar29 = local_d8;
            local_d8._6_2_ = SUB82(uVar29,6);
            local_d8._0_6_ =
                 CONCAT15(*(undefined1 *)(lVar33 + 0x47),
                          CONCAT14(*(undefined1 *)(lVar33 + 0x45),*(undefined4 *)(lVar33 + 0x40)));
            FUN_011b8d00((ulong)&local_d8 | 6,lVar33 + 0x50,0xd);
            plVar3 = local_70[0];
            FUN_01dbd74c(local_70[0],&local_d8);
            FUN_00f13b9c(plVar3,1);
            uVar25 = FUN_00d75438(plVar3[0xe]);
            FUN_00f14810(plVar3[0xe],uVar25);
            FUN_00deb388(plVar3[0xe],0);
            FUN_00deb1b4(plVar3);
            local_fc[0] = 0;
            local_78 = 0;
            uVar29 = FUN_00cf40ac();
            uVar28 = FUN_01df494c(uVar29,local_fc,&local_78,plVar3,plVar35);
            if ((uVar28 & 1) != 0) {
              FUN_0196f62c(plVar3,local_78);
            }
            plVar3 = plVar27 + 5;
            do {
              lVar33 = *plVar3;
              iVar26 = (int)lVar33 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = iVar26;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar26 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
            }
            else if ((int)lVar33 == 0) goto LAB_01e9c5ac;
            do {
              lVar33 = *plVar4;
              iVar26 = (int)lVar33 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *(int *)plVar4 = iVar26;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar26 == 0) {
              (**(code **)(*plVar35 + 0x10))(plVar35);
            }
            else if ((int)lVar33 == 0) goto LAB_01e9c5ac;
            FUN_01d1d4c4(local_70);
            FUN_0152ebc8(lVar32,uVar23,uVar24,*(undefined8 *)(lVar32 + 8));
            plVar35 = local_70[0];
            local_d8 = local_70[0];
            if (local_70[0] == (long *)0x0) {
              FUN_0152e9a8(lVar32,uVar23,uVar24,&local_d8);
            }
            else {
              plVar4 = local_70[0] + 5;
              do {
                lVar33 = *plVar4;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar7) {
                  *(int *)plVar4 = (int)lVar33 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((int)lVar33 == -1) goto LAB_01e9cbc0;
              FUN_0152e9a8(lVar32,uVar23,uVar24,&local_d8);
              if (plVar35 != (long *)0x0) {
                plVar4 = plVar35 + 5;
                do {
                  lVar32 = *plVar4;
                  iVar26 = (int)lVar32 + -1;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar7) {
                    *(int *)plVar4 = iVar26;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar26 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                }
                else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
              }
            }
            if (local_70[0] != (long *)0x0) {
              plVar35 = local_70[0] + 5;
              do {
                lVar32 = *plVar35;
                iVar26 = (int)lVar32 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar7) {
                  *(int *)plVar35 = iVar26;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar26 == 0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
            }
            plVar35 = local_f8[0];
            if (local_f8[0] == (long *)0x0) goto LAB_01e9c500;
          }
          plVar4 = plVar35 + 5;
          do {
            lVar32 = *plVar4;
            iVar26 = (int)lVar32 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *(int *)plVar4 = iVar26;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar26 == 0) {
            (**(code **)(*plVar35 + 0x10))(plVar35);
          }
          else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
        }
LAB_01e9c500:
        plVar35 = local_98;
        if (local_98 == (long *)0x0) goto LAB_01e9c524;
      }
      plVar4 = plVar35 + 5;
      do {
        lVar32 = *plVar4;
        iVar26 = (int)lVar32 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *(int *)plVar4 = iVar26;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar26 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
      else if ((int)lVar32 == 0) {
LAB_01e9c5ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
LAB_01e9c524:
    FUN_01e9d458(uVar34,0);
    uVar28 = FUN_01e9d47c();
    if ((uVar28 & 1) == 0) {
      return;
    }
    uVar23 = 0x11;
    break;
  case 0x11:
    uVar28 = FUN_01e9d5d4();
    if ((uVar28 & 1) == 0) {
      return;
    }
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    lVar32 = FUN_01dd68a8();
    if ((lVar32 != 0) && (*(long *)(param_1 + 0x160) != 0)) {
      memcpy(&local_3d8,(void *)(lVar32 + 0x4c),0x16c);
      memcpy(local_268,(void *)(lVar32 + 0x1b8),0x16c);
      FUN_01e99b74(local_70,&local_3d8);
      FUN_01e99b74(&local_78,local_268);
      plVar35 = local_70[0];
      if ((local_70[0] != (long *)0x0) && (CONCAT44(uStack_74,local_78) != 0)) {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = (long *)0x0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = (long *)0x0;
        uStack_d0 = 0;
        FUN_01b61a00(local_f8);
        FUN_01b3c818(0x9c,local_f8);
        puVar8 = PTR_DAT_047d3a88;
        FUN_01c99bf0(local_f8,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),&local_3d8);
        FUN_01e74ef0(&local_98,0x20,local_f8[0][6],(short)local_f8[0][10]);
        FUN_01b3c818(0x9d,&local_98);
        FUN_01b3c818(0x108,&local_98);
        plVar35 = plVar35 + 0xe;
        FUN_01e9da00(*plVar35,&local_d8,0x20);
        FUN_01e74ef0(&local_98,0x20,&local_d8,0x20);
        FUN_01b3c818(0x9e,&local_98);
        FUN_01b3c818(0x109,&local_98);
        uVar16 = FUN_00cf44f4(*plVar35);
        uVar17 = FUN_00cf41a8(*plVar35);
        snprintf(&DAT_0483b140,8,"%04d_%02d",uVar16 & 0xffff,uVar17 & 0xffff);
        FUN_01b3c818(0x9f,&DAT_0483b140);
        uVar14 = FUN_00e974e0(*plVar35);
        FUN_01b3c408(0xa0,uVar14);
        uVar28 = FUN_00d1eb6c(*plVar35);
        if ((uVar28 & 1) == 0) {
          iVar26 = FUN_00e97f74(*plVar35);
        }
        else {
          iVar26 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 1 & 1) == 0) {
          iVar18 = FUN_00e982bc(*plVar35);
        }
        else {
          iVar18 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 2 & 1) == 0) {
          iVar19 = FUN_00e98604(*plVar35);
        }
        else {
          iVar19 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 3 & 1) == 0) {
          iVar20 = FUN_00e9894c(*plVar35);
        }
        else {
          iVar20 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 4 & 1) == 0) {
          iVar21 = FUN_00e98fdc(*plVar35);
        }
        else {
          iVar21 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 5 & 1) == 0) {
          iVar22 = FUN_00e98c94(*plVar35);
        }
        else {
          iVar22 = 0x1f;
        }
        snprintf(&DAT_0483b148,0x12,"%02d_%02d_%02d_%02d_%02d_%02d",iVar26,iVar18,iVar19,iVar20,
                 iVar21,iVar22);
        FUN_01b3c818(0xa1,&DAT_0483b148);
        uVar16 = FUN_00dbf838(*plVar35);
        uVar17 = FUN_00dbfb7c(*plVar35);
        FUN_01b3c408(0xa2,(uVar16 & 0xfff0 ^ uVar16 >> 0x10 ^ uVar17 >> 0x10 ^ uVar17 & 0xfff0) <
                          0x10);
        cVar13 = FUN_01400ba8(*plVar35);
        cVar6 = '\x1b';
        if ((byte)(cVar13 - 1U) < 0x1a) {
          cVar6 = cVar13;
        }
        FUN_01b3c408(0xa3,cVar6);
        if (*(long *)(*plVar35 + 8) == 0) {
          uVar23 = FUN_00cf44f4();
          uVar24 = FUN_00cf41a8(*plVar35);
          uVar25 = FUN_00f14b64(*plVar35);
          uVar16 = FUN_00f13da0(uVar23,uVar24,uVar25);
          uVar16 = uVar16 & 0xff;
        }
        else {
          uVar16 = FUN_00e9987c();
        }
        FUN_01b3c408(0xac,uVar16);
        if (local_f8[0] != (long *)0x0) {
          plVar35 = local_f8[0] + 5;
          do {
            lVar32 = *plVar35;
            iVar26 = (int)lVar32 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar7) {
              *(int *)plVar35 = iVar26;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar26 == 0) {
            (**(code **)(*local_f8[0] + 0x10))();
          }
          else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
        }
        FUN_01c99bf0(local_f8,*(undefined8 *)(*(long *)puVar8 + 8),local_268);
        FUN_01e74ef0(&local_98,0x20,local_f8[0][6],(short)local_f8[0][10]);
        FUN_01b3c818(0xa5,&local_98);
        FUN_01b3c818(0x10a,&local_98);
        plVar35 = (long *)(CONCAT44(uStack_74,local_78) + 0x70);
        FUN_01e9da00(*plVar35,&local_d8,0x20);
        FUN_01e74ef0(&local_98,0x20,&local_d8,0x20);
        FUN_01b3c818(0xa6,&local_98);
        FUN_01b3c818(0x10b,&local_98);
        uVar16 = FUN_00cf44f4(*plVar35);
        uVar17 = FUN_00cf41a8(*plVar35);
        snprintf(&DAT_0483b140,8,"%04d_%02d",uVar16 & 0xffff,uVar17 & 0xffff);
        FUN_01b3c818(0xa7,&DAT_0483b140);
        uVar14 = FUN_00e974e0(*plVar35);
        FUN_01b3c408(0xa8,uVar14);
        uVar28 = FUN_00d1eb6c(*plVar35);
        if ((uVar28 & 1) == 0) {
          iVar26 = FUN_00e97f74(*plVar35);
        }
        else {
          iVar26 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 1 & 1) == 0) {
          iVar18 = FUN_00e982bc(*plVar35);
        }
        else {
          iVar18 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 2 & 1) == 0) {
          iVar19 = FUN_00e98604(*plVar35);
        }
        else {
          iVar19 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 3 & 1) == 0) {
          iVar20 = FUN_00e9894c(*plVar35);
        }
        else {
          iVar20 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 4 & 1) == 0) {
          iVar21 = FUN_00e98fdc(*plVar35);
        }
        else {
          iVar21 = 0x1f;
        }
        uVar16 = FUN_00d1eb6c(*plVar35);
        if ((uVar16 >> 5 & 1) == 0) {
          iVar22 = FUN_00e98c94(*plVar35);
        }
        else {
          iVar22 = 0x1f;
        }
        snprintf(&DAT_0483b148,0x12,"%02d_%02d_%02d_%02d_%02d_%02d",iVar26,iVar18,iVar19,iVar20,
                 iVar21,iVar22);
        FUN_01b3c818(0xa9,&DAT_0483b148);
        uVar16 = FUN_00dbf838(*plVar35);
        uVar17 = FUN_00dbfb7c(*plVar35);
        FUN_01b3c408(0xaa,(uVar16 & 0xfff0 ^ uVar16 >> 0x10 ^ uVar17 >> 0x10 ^ uVar17 & 0xfff0) <
                          0x10);
        cVar13 = FUN_01400ba8(*plVar35);
        cVar6 = '\x1b';
        if ((byte)(cVar13 - 1U) < 0x1a) {
          cVar6 = cVar13;
        }
        FUN_01b3c408(0xab,cVar6);
        if (*(long *)(*plVar35 + 8) == 0) {
          uVar23 = FUN_00cf44f4();
          uVar24 = FUN_00cf41a8(*plVar35);
          uVar25 = FUN_00f14b64(*plVar35);
          uVar16 = FUN_00f13da0(uVar23,uVar24,uVar25);
          uVar16 = uVar16 & 0xff;
        }
        else {
          uVar16 = FUN_00e9987c();
        }
        FUN_01b3c408(0xad,uVar16);
        if (local_f8[0] != (long *)0x0) {
          plVar35 = local_f8[0] + 5;
          do {
            lVar32 = *plVar35;
            iVar26 = (int)lVar32 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar7) {
              *(int *)plVar35 = iVar26;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar26 == 0) {
            (**(code **)(*local_f8[0] + 0x10))();
          }
          else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
        }
        FUN_01b3c4d8(0x5a,1);
        FUN_017d2474(0x12,0);
      }
      plVar35 = (long *)CONCAT44(uStack_74,local_78);
      if (plVar35 != (long *)0x0) {
        plVar4 = plVar35 + 5;
        do {
          lVar32 = *plVar4;
          iVar26 = (int)lVar32 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *(int *)plVar4 = iVar26;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*plVar35 + 0x10))();
        }
        else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
      }
      if (local_70[0] != (long *)0x0) {
        plVar35 = local_70[0] + 5;
        do {
          lVar32 = *plVar35;
          iVar26 = (int)lVar32 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar7) {
            *(int *)plVar35 = iVar26;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar26 == 0) {
          (**(code **)(*local_70[0] + 0x10))();
        }
        else if ((int)lVar32 == 0) goto LAB_01e9c5ac;
      }
      (**(code **)(param_1 + 0x160))(param_1 + 0x180,&local_3d8,local_268);
      pcVar31 = *(code **)(param_1 + 0x168);
      if (pcVar31 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x170) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        (*pcVar31)(param_1 + 0x180);
      }
    }
    goto switchD_01e9bee0_caseD_0;
  case 0x12:
    if (((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) ||
       ((*(long *)(param_1 + 0x40) == 0 ||
        ((lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 == 0 ||
         (uVar28 = FUN_01e9dfc4(lVar32 + -0x28), (uVar28 & 1) == 0))))))
    goto switchD_01e9bee0_default;
    uVar23 = 0x13;
    break;
  case 0x13:
    if ((((*(long *)(param_1 + 0x40) != 0) && (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0))
        && (*(long *)(param_1 + 0x40) != 0)) &&
       (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 != 0)) {
      lVar32 = lVar32 + -0x28;
      uVar28 = FUN_01e9d0ec(lVar32);
      if ((uVar28 & 1) != 0) {
        return;
      }
      FUN_01e9d0fc(lVar32);
      if ((extraout_var_00 == 5) || (extraout_var_00 == 0)) {
        uVar23 = 0x14;
        break;
      }
    }
switchD_01e9bee0_default:
    uVar23 = 0x17;
    break;
  case 0x14:
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar26 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar26 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    uVar34 = FUN_01dd68a8();
    FUN_01e9d458(uVar34,0);
    uVar28 = FUN_01e9d47c();
    if ((uVar28 & 1) == 0) {
      return;
    }
    uVar23 = 0x15;
    break;
  case 0x15:
    uVar28 = FUN_01e9d5d4();
    if ((uVar28 & 1) == 0) {
      return;
    }
switchD_01e9bee0_caseD_0:
    uVar23 = 0x16;
    break;
  case 0x16:
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_01e9ccfc(param_1);
    uVar23 = 1;
    goto LAB_01e9be7c;
  case 0x17:
    *(undefined4 *)(param_1 + 0x38) = 1;
    FUN_01e9ccfc(param_1);
    *(undefined4 *)(param_1 + 0x30) = 1;
    return;
  case 0x18:
    if ((((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0))
        || (*(long *)(param_1 + 0x40) == 0)) ||
       (lVar32 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar32 == 0)) {
LAB_01e9c0f0:
      local_3d8 = 0;
      uStack_3d0 = 0;
      FUN_01e9a1bc(param_1 + 0x40,&local_3d8);
      FUN_01e9a4dc(&local_3d8);
    }
    else {
      if ((*(char *)(lVar32 + 0x98) != '\0') && (*(long *)(lVar32 + 0xa0) != 0)) {
        return;
      }
      uVar28 = FUN_01e9d0ec(lVar32 + -0x28);
      if ((uVar28 & 1) != 0) {
        return;
      }
      if (((*PTR_DAT_047da800 & 1) == 0) &&
         (iVar26 = __cxa_guard_acquire(PTR_DAT_047da800), iVar26 != 0)) {
        FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047da800);
      }
      lVar32 = *(long *)PTR_DAT_047da808;
      *(long *)PTR_DAT_047da810 = lVar32;
      puVar8 = PTR_DAT_047d3908;
      if (lVar32 != 0) {
        local_3e8 = (undefined8 *)0x0;
        local_3e0 = 0;
        uVar34 = *(undefined8 *)(param_1 + 0x48);
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar26 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar26 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        puVar10 = PTR_DAT_047d3918;
        puVar9 = PTR_DAT_047d3910;
        uVar29 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar29;
        FUN_00c44204(local_268,uVar29,uVar34);
        puVar12 = local_3e8;
        if (local_268[0] == (undefined8 *)0x0) {
          FUN_01e76420(&local_3e8);
        }
        else {
          local_3e8 = (undefined8 *)0x0;
          if (puVar12 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar12 + 3);
            do {
              sVar15 = *psVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar15 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar15 == 1) {
              piVar2 = (int *)((long)puVar12 + 0x1c);
              do {
                iVar26 = *piVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar7) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar26 != -1) {
                if (((*puVar8 & 1) == 0) &&
                   (iVar26 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar26 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar33 = *(long *)puVar9;
                *(long *)puVar10 = lVar33;
                local_3d8 = *puVar12;
                FUN_00c44438(lVar33 + 0x8040,&local_3d8);
              }
            }
            else if (sVar15 == 0) goto LAB_01e9c66c;
          }
          local_3e8 = local_268[0];
          local_268[0] = (undefined8 *)0x0;
          local_3e0 = uVar34;
        }
        FUN_01e73700(lVar32,&local_3e8);
        puVar12 = local_3e8;
        if (local_3e8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_3e8 + 3);
          do {
            sVar15 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar15 == 1) {
            piVar2 = (int *)((long)local_3e8 + 0x1c);
            do {
              iVar26 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar26 != -1) {
              if (((*puVar8 & 1) == 0) &&
                 (iVar26 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar26 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar32 = *(long *)puVar9;
              *(long *)puVar10 = lVar32;
              local_3d8 = *puVar12;
              FUN_00c44438(lVar32 + 0x8040,&local_3d8);
            }
          }
          else if (sVar15 == 0) {
LAB_01e9c66c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        goto LAB_01e9c0f0;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_01e9b1b0(param_1);
  default:
    goto switchD_01e9b448_default;
  }
LAB_01e9bf68:
  *puVar36 = uVar23;
switchD_01e9b448_default:
  return;
}


