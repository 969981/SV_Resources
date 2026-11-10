/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124ce2c; name: FUN_0124ce2c
 */


void FUN_0124ce2c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  bool bVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined2 local_100;
  int local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined2 local_87;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_78 [8];
  undefined2 local_70 [8];
  
  uVar11 = FUN_0124d34c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310));
  if ((uVar11 & 1) == 0) {
    return;
  }
  puVar16 = (undefined4 *)*param_3;
  FUN_0124d390(param_1,puVar16);
  if ((((*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x310) + 0x8c) != '\0') &&
       (plVar12 = (long *)FUN_0106fc68(), plVar12 != (long *)0x0)) &&
      (*(short *)(*(long *)(*(long *)(param_1 + 0x10) + 0x310) + 100) != 0)) &&
     (iVar7 = FUN_0124d360(param_1), iVar7 != 0)) {
    bVar1 = *(byte *)(puVar16 + 0x908);
    uVar11 = (ulong)bVar1;
    if (bVar1 != 0) {
      uVar18 = 0;
      puVar3 = puVar16;
      do {
        if (((((uint)uVar18 & 0xff) < (uint)uVar11) &&
            (iVar7 = puVar3[2], iVar8 = (**(code **)(*plVar12 + 0x98))(plVar12), iVar7 == iVar8)) &&
           ((puVar3[3] == 1 && (*(char *)((long)puVar3 + 0x91) == '\0')))) {
          local_90 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          plVar12 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310));
          if (plVar12 != (long *)0x0) {
            local_70[0] = 0;
            sVar5 = (**(code **)(*plVar12 + 0x730))(plVar12,0);
            bVar4 = sVar5 != 0;
            if (bVar4) {
              local_70[0] = (**(code **)(*plVar12 + 0x730))(plVar12,0);
            }
            uVar11 = (ulong)bVar4;
            local_70[1] = 0;
            sVar5 = (**(code **)(*plVar12 + 0x730))(plVar12,1);
            if (sVar5 != 0) {
              uVar6 = (**(code **)(*plVar12 + 0x730))(plVar12,1);
              uVar18 = uVar11 << 1;
              uVar11 = (ulong)(bVar4 + 1);
              *(undefined2 *)((ulong)local_70 | uVar18) = uVar6;
            }
            local_70[2] = 0;
            sVar5 = (**(code **)(*plVar12 + 0x730))(plVar12,2);
            if (sVar5 != 0) {
              uVar6 = (**(code **)(*plVar12 + 0x730))(plVar12,2);
              local_70[uVar11] = uVar6;
              uVar11 = (ulong)((int)uVar11 + 1);
            }
            local_70[3] = 0;
            sVar5 = (**(code **)(*plVar12 + 0x730))(plVar12,3);
            if (sVar5 != 0) {
              uVar6 = (**(code **)(*plVar12 + 0x730))(plVar12,3);
              local_70[uVar11] = uVar6;
              uVar11 = (ulong)((int)uVar11 + 1);
            }
            lVar19 = *(long *)(param_1 + 0x48);
            uVar18 = (ulong)*(byte *)(lVar19 + 0x2420);
            if (*(byte *)(lVar19 + 0x2420) != 0) {
              uVar20 = 0;
              lVar21 = 8;
              goto LAB_0124d098;
            }
          }
          break;
        }
        uVar11 = (ulong)*(byte *)(puVar16 + 0x908);
        uVar18 = uVar18 + 1;
        puVar3 = puVar3 + 0x23;
      } while (uVar18 < uVar11);
    }
  }
  goto LAB_0124cf14;
LAB_0124d098:
  do {
    if ((((uint)uVar20 & 0xff) < (uint)uVar18) && (iVar7 = *(int *)(lVar19 + lVar21), iVar7 != 0)) {
      lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 0x310);
      if (((*(byte *)(*(long *)(*(long *)(lVar17 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (*(int *)(lVar17 + 0x18) == 0)) {
        uVar14 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x30),1);
        plVar13 = (long *)FUN_0124c614(uVar14,0);
        if (plVar13 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar13 + 0x98))();
          *(undefined4 *)(lVar17 + 0x18) = uVar9;
        }
      }
      if (*(int *)(lVar17 + 0x18) != iVar7) {
        plVar13 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                                       *(undefined4 *)(lVar19 + lVar21));
        if ((plVar13 != (long *)0x0) &&
           (uVar18 = (**(code **)(*plVar13 + 0x200))(), (uVar18 & 1) == 0)) {
          uVar14 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
          uVar11 = FUN_012440f0(uVar14,uVar11);
          uVar6 = *(undefined2 *)
                   ((long)local_70 +
                   (-(uVar11 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar11 & 0xffffffff) << 1));
          local_80 = (**(code **)(*plVar12 + 0x98))(plVar12);
          local_7c = uVar6;
          FUN_02942270(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xb40),local_78,&local_80);
          if (((*PTR_DAT_047d7940 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7940);
          }
          uVar14 = *(undefined8 *)PTR_DAT_047d7948;
          *(undefined8 *)PTR_DAT_047d7950 = uVar14;
          piVar15 = (int *)FUN_00cf60cc(uVar14,uVar6);
          if ((((*(ushort *)((long)piVar15 - (long)*piVar15) < 0x27) ||
               (uVar11 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[0x13], uVar11 == 0)) ||
              (cVar2 = *(char *)((long)piVar15 + uVar11), cVar2 == '\x03')) || (cVar2 == '\0')) {
            uVar9 = (**(code **)(*plVar13 + 0x98))(plVar13);
            uVar10 = (**(code **)(*plVar13 + 0x98))(plVar13);
            local_78[0] = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar10);
          }
          else {
            uVar9 = 0;
          }
          memset(&local_110,0,0x8c);
          local_88 = 5;
          local_8c = 0x5400000;
          local_10c = 0xc;
          local_108 = local_78[0];
          local_104 = uVar9;
          local_100 = uVar6;
          local_110 = (**(code **)(*plVar12 + 0x98))(plVar12);
          uVar9 = (**(code **)(*plVar12 + 0x98))(plVar12);
          piVar15 = (int *)FUN_011e2dd4(*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8
                                                   ) + 0x50),uVar9);
          if (piVar15 == (int *)0x0) {
            local_88 = 0;
          }
          else {
            iVar7 = *piVar15;
            if (4 < iVar7) {
              iVar7 = 0;
            }
            local_88 = (undefined1)iVar7;
          }
          local_87 = 0;
          lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 400);
          local_bc = *(int *)(lVar19 + 8);
          if (local_bc == 0) {
            local_bc = 1;
            *(undefined4 *)(lVar19 + 8) = 1;
          }
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          local_8c = puVar3[0x23];
          FUN_01920eb8(puVar16,&local_110);
        }
        break;
      }
      lVar19 = *(long *)(param_1 + 0x48);
    }
    uVar18 = (ulong)*(byte *)(lVar19 + 0x2420);
    uVar20 = uVar20 + 1;
    lVar21 = lVar21 + 0x8c;
  } while (uVar20 < uVar18);
LAB_0124cf14:
  FUN_0124d528(param_1,puVar16);
  return;
}


