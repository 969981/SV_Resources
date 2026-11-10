/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4686c; name: FUN_00e4686c
 */


void FUN_00e4686c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  ushort *puVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  long *local_58;
  
  piVar11 = (int *)*param_2;
  if (piVar11 == (int *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_88 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar14 == 0)) {
      lVar18 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar11 + uVar14);
      lVar18 = (long)puVar2 + (ulong)*puVar2;
    }
    puVar17 = &DAT_cbf29ce484222645;
    local_80 = strlen((char *)(lVar18 + 4));
    bVar4 = *(byte *)(lVar18 + 4);
    if (bVar4 != 0) {
      pbVar12 = (byte *)(lVar18 + 5);
      do {
        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar4 != 0);
    }
    local_78 = (long *)0x0;
    local_90 = puVar17;
    pcStack_88 = (char *)(lVar18 + 4);
  }
  piVar11 = (int *)*param_2;
  if (piVar11 == (int *)0x0) goto switchD_00e46968_default;
  puVar15 = (ushort *)((long)piVar11 - (long)*piVar11);
  uVar5 = *puVar15;
  if (uVar5 < 0xb) {
    if (uVar5 < 7) goto switchD_00e46968_default;
LAB_00e46b1c:
    bVar7 = false;
  }
  else {
    if ((ulong)puVar15[5] == 0) goto LAB_00e46b1c;
    bVar7 = *(char *)((long)piVar11 + (ulong)puVar15[5]) != '\0';
  }
  if ((ulong)puVar15[3] == 0) goto switchD_00e46968_default;
  switch(*(undefined1 *)((long)piVar11 + (ulong)puVar15[3])) {
  case 1:
    if ((uVar5 < 9) || ((ulong)puVar15[4] == 0)) {
LAB_00e469a4:
      uVar20 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar11 + (ulong)puVar15[4]);
      piVar11 = (int *)((long)puVar2 + (ulong)*puVar2);
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar14 == 0))
      goto LAB_00e469a4;
      uVar20 = *(undefined4 *)((long)piVar11 + uVar14);
    }
    local_70 = CONCAT44(local_70._4_4_,uVar20);
    uVar14 = FUN_00e4702c(*(undefined8 *)(param_1 + 0xf8),&local_90);
    if ((uVar14 & 1) == 0) {
      if (bVar7) {
        FUN_00e5051c(*(long *)(param_1 + 0xf8),&local_90,&local_70);
      }
      else {
        lVar18 = *(long *)(*(long *)(param_1 + 0xf8) + 0x40);
        uVar14 = FUN_00e47330(lVar18);
        if (((uVar14 & 0xff) != 0) || (uVar14 = FUN_00e49ce8(lVar18), (uVar14 & 0xff) != 0)) {
          FUN_00d96d94(lVar18 + (uVar14 >> 0x20) * 0x78 + 0x38,&local_90,uVar20);
        }
      }
    }
    break;
  case 2:
    uVar20 = 0;
    if ((8 < uVar5) && ((ulong)puVar15[4] != 0)) {
      puVar2 = (uint *)((long)piVar11 + (ulong)puVar15[4]);
      piVar11 = (int *)((long)puVar2 + (ulong)*puVar2);
      if ((4 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar14 != 0)) {
        uVar20 = *(undefined4 *)((long)piVar11 + uVar14);
      }
    }
    local_70 = CONCAT44(local_70._4_4_,uVar20);
    uVar14 = FUN_00e4764c(*(undefined8 *)(param_1 + 0xf8),&local_90);
    if ((uVar14 & 1) == 0) {
      if (bVar7) {
        FUN_00e506b0(*(long *)(param_1 + 0xf8),&local_90,&local_70);
      }
      else {
        lVar18 = *(long *)(*(long *)(param_1 + 0xf8) + 0x40);
        uVar14 = FUN_00e47950(lVar18);
        if (((uVar14 & 0xff) != 0) || (uVar14 = FUN_00e4b15c(lVar18), (uVar14 & 0xff) != 0)) {
          FUN_00e489d4(uVar20,lVar18 + (uVar14 >> 0x20) * 0x78 + 0x38,&local_90);
        }
      }
    }
    break;
  case 3:
    if ((uVar5 < 9) || ((ulong)puVar15[4] == 0)) {
LAB_00e46cec:
      bVar8 = false;
    }
    else {
      puVar2 = (uint *)((long)piVar11 + (ulong)puVar15[4]);
      piVar11 = (int *)((long)puVar2 + (ulong)*puVar2);
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar14 == 0))
      goto LAB_00e46cec;
      bVar8 = *(char *)((long)piVar11 + uVar14) != '\0';
    }
    local_70 = CONCAT71(local_70._1_7_,bVar8);
    uVar14 = FUN_00e47c70(*(undefined8 *)(param_1 + 0xf8),&local_90);
    if ((uVar14 & 1) == 0) {
      if (bVar7) {
        FUN_00e50844(*(long *)(param_1 + 0xf8),&local_90,&local_70);
      }
      else {
        lVar18 = *(long *)(*(long *)(param_1 + 0xf8) + 0x40);
        uVar14 = FUN_00e47f74(lVar18);
        if (((uVar14 & 0xff) != 0) || (uVar14 = FUN_00e4a780(lVar18), (uVar14 & 0xff) != 0)) {
          FUN_00d8d574(lVar18 + (uVar14 >> 0x20) * 0x78 + 0x38,&local_90,bVar8);
        }
      }
    }
    break;
  case 4:
    uVar22 = 0;
    uStack_68 = 0;
    if ((8 < uVar5) && ((ulong)puVar15[4] != 0)) {
      puVar2 = (uint *)((long)piVar11 + (ulong)puVar15[4]);
      piVar11 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar15 = (ushort *)((long)piVar11 - (long)*piVar11);
      uVar5 = *puVar15;
      if (uVar5 < 5) {
        uVar20 = 0;
LAB_00e46e28:
        uVar19 = 0;
        uVar21 = 0;
      }
      else {
        uVar20 = 0;
        if ((ulong)puVar15[2] != 0) {
          uVar20 = *(undefined4 *)((long)piVar11 + (ulong)puVar15[2]);
        }
        if (uVar5 < 7) goto LAB_00e46e28;
        uVar21 = 0;
        uVar19 = 0;
        if ((ulong)puVar15[3] != 0) {
          uVar19 = *(undefined4 *)((long)piVar11 + (ulong)puVar15[3]);
        }
        if ((8 < uVar5) && ((ulong)puVar15[4] != 0)) {
          uVar21 = *(uint *)((long)piVar11 + (ulong)puVar15[4]);
        }
      }
      uVar22 = CONCAT44(uVar19,uVar20);
      uStack_68 = (ulong)uVar21;
    }
    local_70 = uVar22;
    uVar14 = FUN_00e48294(*(undefined8 *)(param_1 + 0xf8),&local_90);
    if ((uVar14 & 1) == 0) {
      if (bVar7) {
        FUN_00e509d8(*(long *)(param_1 + 0xf8),&local_90,&local_70);
      }
      else {
        lVar18 = *(long *)(*(long *)(param_1 + 0xf8) + 0x40);
        uVar14 = FUN_00dc4b38(lVar18);
        if (((uVar14 & 0xff) != 0) || (uVar14 = FUN_00dc50dc(uVar22,lVar18), (uVar14 & 0xff) != 0))
        {
          FUN_00dc4e58(uVar22,lVar18 + (uVar14 >> 0x20) * 0x78 + 0x38,&local_90);
        }
      }
    }
    break;
  case 5:
    FUN_00e48704(&local_b0,param_2);
    lVar18 = *(long *)(param_1 + 0xf8);
    uVar14 = FUN_00e48598(*(undefined8 *)(lVar18 + 0x40),&local_90);
    if ((uVar14 & 1) == 0) {
      plVar1 = (long *)(lVar18 + 0x70);
      lVar10 = nn::os::GetCurrentThread();
      do {
        lVar13 = *plVar1;
        lVar16 = *(long *)(lVar18 + 0x78);
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar13;
          *(long *)(lVar18 + 0x78) = lVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00e46d10:
      while ((lVar13 != 0 && (lVar10 != lVar13))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x80));
        do {
          lVar13 = *plVar1;
          lVar16 = *(long *)(lVar18 + 0x78);
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar13;
            *(long *)(lVar18 + 0x78) = lVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar3 = *plVar1;
        if (lVar3 != lVar13 || *(long *)(lVar18 + 0x78) != lVar16) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_00e46d4c;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar13;
          *(long *)(lVar18 + 0x74) = lVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
LAB_00e46d4c:
      if (!bVar8) {
        lVar13 = lVar3;
        lVar16 = *(long *)(lVar18 + 0x78);
        goto LAB_00e46d10;
      }
      uVar14 = FUN_00e48598(*(undefined8 *)(lVar18 + 0x48),&local_90);
      do {
        lVar10 = *plVar1;
        lVar13 = *(long *)(lVar18 + 0x78);
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar10;
          *(long *)(lVar18 + 0x78) = lVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar16 = *plVar1;
        lVar3 = *(long *)(lVar18 + 0x78);
        if (lVar16 != lVar10 || lVar3 != lVar13) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto LAB_00e46d9c;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar10;
          *(long *)(lVar18 + 0x74) = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
LAB_00e46d9c:
      if (!bVar8) {
        do {
          lVar10 = *plVar1;
          lVar13 = *(long *)(lVar18 + 0x78);
          if (lVar10 != lVar16 || lVar13 != lVar3) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto joined_r0x00e46f04;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar16;
            *(long *)(lVar18 + 0x74) = lVar3 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar8 = true;
joined_r0x00e46f04:
        if (!bVar8) {
          do {
            lVar16 = *plVar1;
            lVar3 = *(long *)(lVar18 + 0x78);
            if (lVar16 != lVar10 || lVar3 != lVar13) {
              bVar8 = false;
              ClearExclusiveLocal();
              lVar10 = lVar16;
              lVar13 = lVar3;
              goto joined_r0x00e46f04;
            }
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar10;
              *(long *)(lVar18 + 0x74) = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar8 = true;
          lVar10 = lVar16;
          lVar13 = lVar3;
          goto joined_r0x00e46f04;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x80));
      if ((uVar14 & 1) == 0) {
        if (bVar7) {
          FUN_00e50d00(*(long *)(param_1 + 0xf8),&local_90,&local_b0);
        }
        else {
          lVar18 = *(long *)(*(long *)(param_1 + 0xf8) + 0x40);
          uVar14 = FUN_00e48eec(lVar18);
          if (((uVar14 & 0xff) != 0) || (uVar14 = FUN_00e4b87c(lVar18), (uVar14 & 0xff) != 0)) {
            local_70 = local_b0;
            uStack_68 = uStack_a8;
            local_60 = local_a0;
            local_58 = local_98;
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x18))();
            }
            FUN_00e49528(lVar18 + (uVar14 >> 0x20) * 0x78 + 0x38,&local_90,&local_70);
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
          }
        }
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    break;
  case 6:
    FUN_00e4886c(&local_70,param_2);
    uVar22 = local_70;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar14 = FUN_00e48be8(*(undefined8 *)(param_1 + 0xf8),&local_90);
    if ((uVar14 & 1) == 0) {
      if (bVar7) {
        FUN_00e50b6c(*(long *)(param_1 + 0xf8),&local_90,&local_70);
      }
      else {
        lVar18 = *(long *)(*(long *)(param_1 + 0xf8) + 0x40);
        uVar14 = FUN_00e49208(lVar18);
        if (((uVar14 & 0xff) != 0) || (uVar14 = FUN_00e4b4ec(lVar18), (uVar14 & 0xff) != 0)) {
          FUN_00e497cc(lVar18 + (uVar14 >> 0x20) * 0x78 + 0x38,&local_90,uVar22);
        }
      }
    }
  }
switchD_00e46968_default:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


