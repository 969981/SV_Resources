/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e15248; name: FUN_00e15248
 */


void FUN_00e15248(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined1 auStack_70 [24];
  long *local_58;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_04606148;
  param_1[1] = param_2;
  puVar18 = &DAT_cbf29ce484222645;
  param_1[3] = &DAT_cbf29ce484222645;
  param_1[4] = &DAT_03c886bc;
  lVar10 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 != (int *)0x0) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
      lVar10 = 0;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
      lVar10 = 0;
      if (uVar11 != 0) {
        puVar1 = (uint *)((long)param_2 + uVar11);
        lVar10 = (long)puVar1 + (ulong)*puVar1;
      }
    }
  }
  FUN_00e15748(param_1 + 7,lVar10);
  param_1[0x55] = param_3;
  param_1[0x56] = param_4;
  param_1[0x59] = &DAT_cbf29ce484222645;
  param_1[0x5a] = &DAT_03c886bc;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_00c43ef0(param_1 + 0x60,param_6);
  piVar17 = (int *)param_1[1];
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (piVar17 == (int *)0x0) {
    return;
  }
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3], uVar11 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar1 = (uint *)((long)piVar17 + uVar11);
    lVar10 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar7 = strlen((char *)(lVar10 + 4));
  bVar3 = *(byte *)(lVar10 + 4);
  if (bVar3 != 0) {
    pbVar12 = (byte *)(lVar10 + 5);
    do {
      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 != 0);
  }
  param_1[5] = sVar7;
  plVar8 = (long *)param_1[6];
  param_1[6] = 0;
  param_1[3] = puVar18;
  param_1[4] = (char *)(lVar10 + 4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
    piVar17 = (int *)param_1[1];
  }
  param_1[6] = 0;
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar11 == 0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = (ulong)*(uint *)((long)piVar17 + uVar11) << 0x20 | 1;
  }
  param_1[2] = uVar11;
  puVar13 = (ushort *)((long)piVar17 - (long)*piVar17);
  if (*puVar13 < 0x13) {
    if (0xc < *puVar13) goto LAB_00e15518;
    bVar5 = false;
LAB_00e1552c:
    *(bool *)(param_1 + 0x5f) = bVar5;
    if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0xf) {
      bVar5 = false;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[7];
      bVar5 = false;
      if (uVar11 != 0) {
        bVar5 = *(char *)((long)piVar17 + uVar11) != '\0';
      }
    }
    *(bool *)((long)param_1 + 0x2f9) = bVar5;
    if (*(ushort *)((long)piVar17 - (long)*piVar17) < 0x11) {
      bVar5 = false;
      goto LAB_00e153ec;
    }
    uVar11 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[8];
    bVar5 = false;
    if (uVar11 == 0) goto LAB_00e153ec;
    cVar4 = *(char *)((long)piVar17 + uVar11);
  }
  else {
    if ((ulong)puVar13[9] == 0) {
LAB_00e15518:
      bVar5 = false;
      if ((ulong)puVar13[6] != 0) {
        bVar5 = *(char *)((long)piVar17 + (ulong)puVar13[6]) != '\0';
      }
      goto LAB_00e1552c;
    }
    puVar1 = (uint *)((long)piVar17 + (ulong)puVar13[9]);
    uVar2 = *puVar1;
    *(bool *)(param_1 + 0x5f) = *(char *)((long)puVar1 + (ulong)uVar2 + 4) != '\0';
    *(bool *)((long)param_1 + 0x2f9) = *(char *)((long)puVar1 + (ulong)uVar2 + 5) != '\0';
    cVar4 = *(char *)((long)puVar1 + (ulong)uVar2 + 6);
  }
  bVar5 = cVar4 != '\0';
LAB_00e153ec:
  *(bool *)((long)param_1 + 0x2fa) = bVar5;
  if (param_5 != 0) {
    if (((*PTR_DAT_047daf58 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daf58);
    }
    plVar8 = (long *)PTR_DAT_047daf60;
    if (*(long *)(param_5 + 0xc0) != 0) {
      plVar8 = (long *)(*(long *)(param_5 + 0xc0) + 0x70);
    }
    lVar10 = *plVar8;
    if (lVar10 != 0) {
      uVar11 = (ulong)(*(long *)(lVar10 + 0x250) - *(long *)(lVar10 + 0x248)) >> 4;
      uVar16 = (ulong)(uint)(int)(short)((short)uVar11 * -0x5555);
      if (param_1[0x17] != uVar16) {
        FUN_00d7684c(param_1 + 0x16,uVar16,0);
        if ((int)uVar11 * -0x55550000 != 0) {
          uVar11 = 0;
          do {
            FUN_00e1561c(auStack_70,*plVar8,uVar11 & 0xffffffff);
            uVar9 = FUN_00c742fc(param_1 + 8,auStack_70);
            lVar10 = param_1[0x16];
            uVar14 = uVar11 >> 6;
            uVar15 = 1L << (uVar11 & 0x3f);
            if ((uVar9 & 1) == 0) {
              uVar15 = *(ulong *)(lVar10 + uVar14 * 8) & (uVar15 ^ 0xffffffffffffffff);
            }
            else {
              uVar15 = *(ulong *)(lVar10 + uVar14 * 8) | uVar15;
            }
            *(ulong *)(lVar10 + uVar14 * 8) = uVar15;
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
            uVar11 = uVar11 + 1;
          } while (uVar16 != uVar11);
        }
      }
    }
  }
  return;
}


