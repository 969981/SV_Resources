/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036c4c0; name: FUN_0036c4c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0036c4c0(long param_1,uint *param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong *puVar9;
  long lVar10;
  void *__ptr;
  undefined8 *puVar11;
  ulong uVar12;
  uint *puVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  uint *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  uint7 uStack_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (PTR_DAT_047ccf00[0x10] != '\0') {
    FUN_0036ea40("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x619,1,param_2,
                 param_3);
  }
  if (param_3 == 0) {
    if (param_5 == 0) {
      uVar22 = FUN_00371800(*(undefined8 *)(param_1 + 0x70),param_4);
      if ((uVar22 & 1) == 0) goto LAB_0036ced0;
      uVar17 = *(undefined8 *)(param_1 + 0x70);
      uVar23 = FUN_0038c780(0x70);
      FUN_00371820(uVar17,param_4,0,&LAB_0036d0d0,0,uVar23,0);
    }
    else if (param_4 != 0) {
      (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),0);
    }
    return 0;
  }
  if (*param_2 < 8) {
    puVar20 = (undefined8 *)(param_1 + *(long *)(&DAT_03cd7790 + (long)(int)*param_2 * 8) * 8 + 200)
    ;
    plVar18 = (long *)*puVar20;
    if (plVar18 == (long *)0x0) {
      puVar9 = *(ulong **)(param_1 + 8);
      do {
        uVar12 = *puVar9;
        uVar22 = uVar12 + 0x110;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar9,0x10);
        if (bVar7) {
          *puVar9 = uVar22;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (puVar9[1] < uVar22) {
        plVar18 = (long *)FUN_0038e7c0(puVar9,0x110);
      }
      else {
        plVar18 = (long *)((long)puVar9 + uVar12 + 0x20);
      }
      plVar18[0x20] = 0;
      plVar18[0x1f] = 0;
      plVar18[0x1e] = 0;
      plVar18[0x1d] = 0;
      plVar18[0x1c] = 0;
      plVar18[0x1b] = 0;
      plVar18[0x1a] = 0;
      plVar18[0x19] = 0;
      plVar18[0x18] = 0;
      plVar18[0x17] = 0;
      plVar18[0x16] = 0;
      plVar18[0x15] = 0;
      plVar18[0x14] = 0;
      plVar18[0x13] = 0;
      plVar18[0x12] = 0;
      plVar18[0x11] = 0;
      plVar18[0x10] = 0;
      plVar18[0xf] = 0;
      plVar18[0xe] = 0;
      plVar18[0xd] = 0;
      plVar18[0xc] = 0;
      plVar18[0xb] = 0;
      plVar18[10] = 0;
      plVar18[9] = 0;
      plVar18[8] = 0;
      plVar18[7] = 0;
      plVar18[6] = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[3] = 0;
      plVar18[2] = 0;
      plVar18[1] = 0;
      *puVar20 = plVar18;
      *plVar18 = param_1;
      plVar18[2] = param_1 + 0xf8;
      if (plVar18 == (long *)0x0) {
        return 8;
      }
    }
    else {
      if (*plVar18 != 0) {
        return 8;
      }
      local_68 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      *plVar18 = param_1;
      plVar18[4] = 0;
      plVar18[3] = (ulong)uStack_8f << 8;
      plVar18[6] = 0;
      plVar18[5] = 0;
      plVar18[2] = 0;
      plVar18[1] = 0;
      plVar18[2] = param_1 + 0xf8;
      plVar18[8] = 0;
      plVar18[7] = 0;
    }
    *(bool *)(plVar18 + 10) = param_5 != 0;
    plVar18[9] = param_4;
    lVar1 = param_1 + 400;
    uVar22 = 0;
    iVar8 = 0;
    iVar19 = 0;
    lVar2 = param_1 + 0x278;
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar23 = 9;
    lVar3 = param_1 + 0x6c0;
    puVar20 = (undefined8 *)(param_1 + 0x540);
    do {
      if (*(long *)(param_2 + uVar22 * 0x14 + 2) != 0) {
        uVar23 = 1;
        goto LAB_0036cdac;
      }
      switch(param_2[uVar22 * 0x14]) {
      case 0:
        puVar21 = param_2 + uVar22 * 0x14 + 1;
        uVar15 = 0xfffffe1b;
        if (*(char *)(param_1 + 0xa8) != '\0') {
          uVar15 = 0xfffffe0b;
        }
        if ((uVar15 & *puVar21) == 0) {
          if (*(char *)(param_1 + 0xab) != '\0') goto LAB_0036cd20;
          FUN_00367020(&local_a0);
          *(undefined8 *)(param_1 + 0x548) = uStack_98;
          *puVar20 = local_a0;
          *(undefined8 *)(param_1 + 0x558) = local_88;
          *(ulong *)(param_1 + 0x550) = CONCAT71(uStack_8f,local_90);
          FUN_00367020(&local_a0);
          *(undefined8 *)(param_1 + 0x568) = uStack_98;
          *(undefined8 *)(param_1 + 0x560) = local_a0;
          *(undefined8 *)(param_1 + 0x578) = local_88;
          *(ulong *)(param_1 + 0x570) = CONCAT71(uStack_8f,local_90);
          *(undefined4 *)(param_1 + 0x580) = 0;
          puVar9 = (ulong *)(param_2 + uVar22 * 0x14 + 4);
          if ((char)param_2[uVar22 * 0x14 + 8] == '\0') {
            if ((*(int *)(*(long *)(param_1 + 0x88) + 8) != 0) &&
               (puVar13 = (uint *)(*(long *)(param_1 + 0x88) + 0xc),
               *(char *)(param_1 + 0xa8) == '\0')) goto LAB_0036ca70;
LAB_0036ca58:
            uVar12 = *puVar9;
          }
          else {
            puVar13 = param_2 + uVar22 * 0x14 + 9;
            if (*(char *)(param_1 + 0xa8) != '\0') goto LAB_0036ca58;
LAB_0036ca70:
            FUN_0034c7e0(*puVar13,*(undefined4 *)(param_1 + 0x608));
            lVar10 = *(long *)PTR_DAT_047cc628;
            uVar25 = *(undefined8 *)(lVar10 + 0x220);
            uVar24 = *(undefined8 *)(lVar10 + 0x238);
            uVar17 = *(undefined8 *)(lVar10 + 0x230);
            *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(lVar10 + 0x228);
            *puVar20 = uVar25;
            *(undefined8 *)(param_1 + 0x558) = uVar24;
            *(undefined8 *)(param_1 + 0x550) = uVar17;
            FUN_0034c860(&local_a0);
            *(undefined8 *)(param_1 + 0x568) = uStack_98;
            *(undefined8 *)(param_1 + 0x560) = local_a0;
            *(undefined8 *)(param_1 + 0x578) = local_88;
            *(ulong *)(param_1 + 0x570) = CONCAT71(uStack_8f,local_90);
            uVar12 = *puVar9 + 1;
          }
          if (uVar12 >> 0x1f == 0) {
            *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 1;
            *(undefined1 *)(param_1 + 0xab) = 1;
            iVar8 = FUN_0036d0e0(param_1,(uint)*puVar9,*(undefined8 *)(param_2 + uVar22 * 0x14 + 6),
                                 0,*(undefined1 *)(param_1 + 0xa8),puVar20);
            if (iVar8 != 0) {
              if (*(char *)(param_1 + 0xa8) == '\0') {
                *(long *)(param_1 + 0xf8) = lVar1;
                *(uint *)(param_1 + 0x100) = *puVar21;
              }
              else {
                *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x6b8);
                *(long *)(param_1 + 0xf8) = lVar1;
                *(uint *)(param_1 + 0x100) = *puVar21;
                *(long *)(param_1 + 0x108) = param_1 + 0x5a8;
              }
              goto LAB_0036cc28;
            }
          }
          goto LAB_0036cda8;
        }
        goto LAB_0036cdac;
      case 1:
        uVar15 = param_2[uVar22 * 0x14 + 1];
        if ((uVar15 & 0x3ffffff8) == 0) {
          lVar10 = *(long *)(param_2 + uVar22 * 0x14 + 4);
          if (lVar10 != 0) {
            if (*(char *)(param_1 + 0xac) != '\0') goto LAB_0036cd20;
            uVar4 = uVar15 | 0x80000000;
            if (*(int *)(lVar10 + 0x10) < 1) {
              uVar4 = uVar15;
            }
            *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 4;
            *(undefined1 *)(param_1 + 0xac) = 1;
            FUN_00374ad8(lVar3,*(long *)(param_2 + uVar22 * 0x14 + 4) + 0x18,uVar4);
            puVar11 = *(undefined8 **)(param_1 + 0x120);
            *(long *)(param_1 + 0x120) = lVar3;
            if (puVar11 != (undefined8 *)0x0) {
                    /* try { // try from 0036c9a0 to 0036c9a3 has its CatchHandler @ 0036ced4 */
              (**(code **)*puVar11)();
            }
            goto LAB_0036cc28;
          }
          uVar23 = 0xb;
        }
        goto LAB_0036cdac;
      case 2:
        if (param_2[uVar22 * 0x14 + 1] != 0) goto LAB_0036cdac;
        if (*(char *)(param_1 + 0xa8) == '\0') {
LAB_0036cd30:
          uVar23 = 2;
          goto LAB_0036cdac;
        }
        if (*(char *)(param_1 + 0xad) != '\0') goto LAB_0036cd20;
        iVar8 = 1;
        *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 2;
        *(undefined1 *)(param_1 + 0xad) = 1;
        *(long *)(param_1 + 0x110) = lVar2;
        break;
      case 3:
        if (param_2[uVar22 * 0x14 + 1] != 0) goto LAB_0036cdac;
        if (*(char *)(param_1 + 0xa8) != '\0') {
LAB_0036cd28:
          uVar23 = 3;
          goto LAB_0036cdac;
        }
        if (*(char *)(param_1 + 0xad) != '\0') goto LAB_0036cd20;
        if (*(ulong *)(param_2 + uVar22 * 0x14 + 4) >> 0x1f != 0) goto LAB_0036cda8;
        *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 2;
        *(undefined1 *)(param_1 + 0xad) = 1;
        if (*(int *)(param_1 + 0x6b0) != 0) goto LAB_0036ced0;
        *(undefined4 *)(param_1 + 0x6b0) = 1;
        puVar21 = param_2 + uVar22 * 0x14 + 8;
        uVar15 = *puVar21;
        if (uVar15 == 2) {
          *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(*(long *)PTR_DAT_047ccae0 + 0x1f8);
          uVar15 = *puVar21;
joined_r0x0036cb54:
          if (uVar15 == 0) goto LAB_0036cb58;
LAB_0036c8b4:
          FUN_003673f0(&local_a0,"Server returned error");
          uVar17 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x6da,
                                &local_a0,0,0);
          lVar10 = FUN_00351770(uVar17,3,(long)(int)*puVar21);
          puVar11 = *(undefined8 **)(param_2 + uVar22 * 0x14 + 10);
        }
        else {
          if (uVar15 == 1) {
            *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(*(long *)PTR_DAT_047ccae0 + 0x1f0);
            uVar15 = *puVar21;
            goto joined_r0x0036cb54;
          }
          if (uVar15 == 0) {
            *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(*(long *)PTR_DAT_047ccae0 + 0x1e8);
            uVar15 = *puVar21;
            goto joined_r0x0036cb54;
          }
          uVar17 = FUN_0037a940();
          *(undefined8 *)(param_1 + 0x650) = uVar17;
          if (*puVar21 != 0) goto LAB_0036c8b4;
LAB_0036cb58:
          lVar10 = 0;
          puVar11 = *(undefined8 **)(param_2 + uVar22 * 0x14 + 10);
        }
        lVar16 = lVar10;
        if (puVar11 != (undefined8 *)0x0) {
          lVar16 = *(long *)PTR_DAT_047cc628;
          if (((undefined8 *)*puVar11 != (undefined8 *)0x0) &&
             (plVar14 = *(long **)*puVar11, plVar14 != (long *)0x0)) {
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar7) {
                *plVar14 = *plVar14 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          uVar12 = FUN_003765c0(lVar16 + 0xc0);
          *(ulong *)(param_1 + 0x670) = uVar12;
          *(int *)(param_1 + 0x6b0) = *(int *)(param_1 + 0x6b0) + 1;
          lVar16 = 0;
          if (lVar10 != 0) {
            uVar12 = uVar12 & 0xfffffffffffffffc;
            uStack_b8 = *(undefined8 *)(uVar12 + 0x28);
            local_c0 = *(undefined8 *)(uVar12 + 0x20);
            uStack_a8 = *(undefined8 *)(uVar12 + 0x38);
            uStack_b0 = *(undefined8 *)(uVar12 + 0x30);
            __ptr = (void *)FUN_00366f90(&local_c0);
            FUN_00367770(&local_a0);
            lVar16 = FUN_00351fa0(lVar10,5,&local_a0);
            free(__ptr);
          }
        }
        *(long *)(param_1 + 0x8f8) = lVar16;
        iVar8 = FUN_0036d0e0(param_1,(uint)*(ulong *)(param_2 + uVar22 * 0x14 + 4),
                             *(undefined8 *)(param_2 + uVar22 * 0x14 + 6),1,1,0,0);
        if (iVar8 == 0) {
          if (0 < *(int *)(param_1 + 0x6b0)) {
            lVar10 = 0;
            do {
              uVar22 = *(ulong *)(param_1 + lVar10 * 0x20 + 0x650);
              uVar15 = (uint)uVar22 & 3;
              if (1 < uVar15) {
                uVar22 = uVar22 & 0xfffffffffffffffc;
                plVar14 = (long *)(uVar22 + 0x40);
                do {
                  lVar16 = *plVar14;
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar7) {
                    *plVar14 = lVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar16 + -1 == 0) {
                  FUN_00376de0(uVar15,uVar22,*(undefined4 *)(uVar22 + 0x48));
                }
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(param_1 + 0x6b0));
          }
          *(undefined4 *)(param_1 + 0x6b0) = 0;
LAB_0036cda8:
          uVar23 = 10;
LAB_0036cdac:
          bVar5 = *(byte *)(plVar18 + 3);
          if ((bVar5 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xab) = 0;
            FUN_00377830(lVar1);
            bVar5 = *(byte *)(plVar18 + 3);
          }
          if ((bVar5 >> 2 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xac) = 0;
            (*(code *)**(undefined8 **)(param_1 + 0x6c0))(lVar3);
            bVar5 = *(byte *)(plVar18 + 3);
          }
          if ((bVar5 >> 1 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xad) = 0;
            FUN_00377830(lVar2);
            bVar5 = *(byte *)(plVar18 + 3);
          }
          if ((bVar5 >> 3 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xae) = 0;
            bVar5 = *(byte *)(plVar18 + 3);
          }
          if ((bVar5 >> 4 & 1) != 0) {
            *(undefined1 *)(param_1 + 0xaf) = 0;
            bVar5 = *(byte *)(plVar18 + 3);
          }
          if ((bVar5 >> 5 & 1) == 0) {
            return uVar23;
          }
          *(undefined1 *)(param_1 + 0xb0) = 0;
          return uVar23;
        }
        *(long *)(param_1 + 0x110) = lVar2;
        *(long *)(param_1 + 0x118) = param_1 + 0x8b4;
LAB_0036cc28:
        iVar8 = 1;
        break;
      case 4:
        if (param_2[uVar22 * 0x14 + 1] != 0) goto LAB_0036cdac;
        if (*(char *)(param_1 + 0xae) != '\0') goto LAB_0036cd20;
        *(undefined1 *)(param_1 + 0xae) = 1;
        *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_2 + uVar22 * 0x14 + 4);
        *(undefined1 **)(param_1 + 0x878) = &LAB_0036d3d0;
        *(long **)(param_1 + 0x880) = plVar18;
        *(undefined8 *)(param_1 + 0x888) = 0;
        *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 8;
        *(long *)(param_1 + 0x130) = param_1 + 0x360;
        *(long *)(param_1 + 0x140) = param_1 + 0x870;
        if (*(char *)(param_1 + 0xa8) == '\0') {
          *(long *)(param_1 + 0x150) = param_1 + 0x5a8;
        }
LAB_0036c6dc:
        iVar19 = iVar19 + 1;
        break;
      case 5:
        if (param_2[uVar22 * 0x14 + 1] == 0) {
          if (*(char *)(param_1 + 0xaf) == '\0') {
            *(undefined1 *)(param_1 + 0xaf) = 1;
            *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 0x10;
            uVar17 = *(undefined8 *)(param_2 + uVar22 * 0x14 + 4);
            *(undefined1 **)(param_1 + 0x858) = &LAB_0036d770;
            *(undefined8 *)(param_1 + 0x868) = 0;
            *(undefined8 *)(param_1 + 0x808) = uVar17;
            *(long **)(param_1 + 0x860) = plVar18;
            *(long *)(param_1 + 0x158) = param_1 + 0x800;
            *(long *)(param_1 + 0x160) = param_1 + 0x850;
            goto LAB_0036c6dc;
          }
          goto LAB_0036cd20;
        }
        goto LAB_0036cdac;
      case 6:
        if (param_2[uVar22 * 0x14 + 1] == 0) {
          if (*(char *)(param_1 + 0xa8) == '\0') goto LAB_0036cd30;
          if (*(char *)(param_1 + 0xb0) == '\0') {
            *(undefined1 *)(param_1 + 0xb0) = 1;
            *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_2 + uVar22 * 0x14 + 4);
            *(undefined8 *)(param_1 + 0x8e0) = *(undefined8 *)(param_2 + uVar22 * 0x14 + 6);
            *(undefined8 *)(param_1 + 0x8e8) = *(undefined8 *)(param_2 + uVar22 * 0x14 + 8);
            *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(param_2 + uVar22 * 0x14 + 10);
LAB_0036c6a4:
            *(byte *)(plVar18 + 3) = *(byte *)(plVar18 + 3) | 0x20;
            *(long *)(param_1 + 0x168) = param_1 + 0x448;
            *(long *)(param_1 + 0x170) = param_1 + 0x5b0;
            *(undefined1 **)(param_1 + 0x898) = &LAB_0036d7b0;
            *(long **)(param_1 + 0x8a0) = plVar18;
            *(undefined8 *)(param_1 + 0x8a8) = 0;
            *(long *)(param_1 + 0x178) = param_1 + 0x890;
            goto LAB_0036c6dc;
          }
          goto LAB_0036cd20;
        }
        goto LAB_0036cdac;
      case 7:
        if (param_2[uVar22 * 0x14 + 1] == 0) {
          if (*(char *)(param_1 + 0xa8) != '\0') goto LAB_0036cd28;
          if (*(char *)(param_1 + 0xb0) == '\0') {
            *(undefined1 *)(param_1 + 0xb0) = 1;
            *(undefined8 *)(param_1 + 0x8e0) = *(undefined8 *)(param_2 + uVar22 * 0x14 + 4);
            goto LAB_0036c6a4;
          }
LAB_0036cd20:
          uVar23 = 8;
        }
        goto LAB_0036cdac;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_3);
    plVar14 = (long *)(param_1 + 0x910);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((param_5 != 0) ||
       (uVar22 = FUN_00371800(*(undefined8 *)(param_1 + 0x70),param_4), (uVar22 & 1) != 0)) {
      plVar18[0x1f] = (long)(iVar19 + iVar8);
      if (iVar8 != 0) {
        plVar18[0x1c] = (long)&LAB_0036db10;
        plVar18[0x1d] = (long)plVar18;
        plVar18[0x1e] = 0;
        plVar18[1] = (long)(plVar18 + 0x1b);
      }
      *(undefined8 *)(param_1 + 0xb8) = 1;
      plVar18[4] = param_1;
      plVar18[0x1a] = 0;
      plVar18[0x18] = (long)&LAB_0036d060;
      plVar18[0x19] = (long)(plVar18 + 1);
      FUN_003504a8(param_1 + 0x10,plVar18 + 0x17,0,"executing batch");
      return 0;
    }
  }
LAB_0036ced0:
                    /* WARNING: Subroutine does not return */
  abort();
}


