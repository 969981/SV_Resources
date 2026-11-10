/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344b418; name: FUN_0344b418
 */


void FUN_0344b418(long param_1,long param_2,char *param_3,int param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_034b3fc4(*(undefined8 *)PTR_DAT_047e6f38,*(int *)(param_2 + 0x2c),param_3);
    iVar5 = *(int *)(param_2 + 0x2c);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar15 = (ulong)uVar2;
  plVar14 = *(long **)(param_2 + 0x40);
  lVar16 = *(long *)(param_2 + 0x10);
  puVar12 = puVar6;
  if (uVar2 == 0) {
LAB_0344b4dc:
    if (puVar12 == puVar6 + uVar15 * 6) goto LAB_0344b4ec;
    puVar12 = puVar12 + 3;
  }
  else {
    lVar10 = uVar15 * 0x30;
    do {
      if ((((long *)*puVar12 == plVar14) && (puVar12[1] == lVar16)) &&
         (iVar5 == *(int *)(puVar12 + 2))) goto LAB_0344b4dc;
      lVar10 = lVar10 + -0x30;
      puVar12 = puVar12 + 6;
    } while (lVar10 != 0);
LAB_0344b4ec:
    local_68 = 0;
    local_78 = 0;
    local_70 = 0;
    puVar12 = puVar6;
    if (uVar2 == 0) {
LAB_0344b544:
      if (puVar12 == puVar6 + uVar15 * 6) goto LAB_0344b554;
      puVar12 = puVar12 + 3;
    }
    else {
      lVar10 = uVar15 * 0x30;
      do {
        if ((((long *)*puVar12 == plVar14) && (puVar12[1] == lVar16)) &&
           (iVar5 == *(int *)(puVar12 + 2))) goto LAB_0344b544;
        lVar10 = lVar10 + -0x30;
        puVar12 = puVar12 + 6;
      } while (lVar10 != 0);
LAB_0344b554:
      uVar17 = *(uint *)(param_1 + 0x1c);
      if (uVar17 <= uVar2) {
        iVar1 = uVar17 + (uVar17 >> 1);
        if (uVar17 == 0) {
          iVar1 = 1;
        }
        uVar17 = iVar1 + uVar17;
        puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar6,(ulong)uVar17 * 0x30)
        ;
        if (puVar6 == (undefined8 *)0x0) {
          return;
        }
        *(undefined8 **)(param_1 + 0x10) = puVar6;
        *(uint *)(param_1 + 0x1c) = uVar17;
      }
      if (uVar17 <= uVar2) {
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      puVar6 = puVar6 + (ulong)uVar2 * 6;
      puVar12 = puVar6 + 3;
      *puVar12 = 0;
      *(undefined2 *)(puVar6 + 5) = 0;
      puVar6[4] = 0;
      *(int *)(puVar6 + 2) = iVar5;
      *puVar6 = plVar14;
      puVar6[1] = lVar16;
    }
    *(undefined2 *)(puVar12 + 2) = local_68;
    *puVar12 = local_78;
    puVar12[1] = local_70;
    plVar14 = *(long **)(param_2 + 0x40);
  }
  iVar5 = (**(code **)(*plVar14 + 0x88))(plVar14);
  if (((iVar5 == 0) || (iVar5 = (**(code **)(*plVar14 + 0x88))(plVar14), iVar5 == 10)) &&
     (*param_3 != -0x50)) {
    return;
  }
  puVar4 = PTR_DAT_047e2fd0;
  puVar6 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x40);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)(puVar6 + 1) = 1;
  puVar6[2] = 0;
  puVar6[3] = param_2;
  *(undefined2 *)(puVar6 + 5) = 0xff00;
  puVar6[4] = plVar14;
  *(byte *)(puVar6 + 7) = *(byte *)(puVar6 + 7) & 0xf0;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
    plVar14 = (long *)puVar6[4];
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  uVar15 = FUN_0344ccac(puVar6,param_3,param_4);
  if ((uVar15 & 1) == 0) goto LAB_0344b7b8;
  cVar3 = *param_3;
  if (cVar3 == -0x80) {
LAB_0344b768:
    plVar14 = (long *)puVar12[1];
    if (plVar14 != (long *)0x0) {
      if ((param_5 & 1) == 0) {
        do {
          uVar15 = FUN_0344ce58(puVar6,plVar14);
          if ((uVar15 & 1) != 0) goto LAB_0344b6bc;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          if ((plVar14[3] == puVar6[3]) &&
             (uVar15 = FUN_0344ce58(puVar6,plVar14), (uVar15 & 1) != 0)) goto LAB_0344b6bc;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
LAB_0344b7b8:
    iVar5 = *(int *)(puVar6 + 1);
    *(int *)(puVar6 + 1) = iVar5 + -1;
    if (iVar5 + -1 != 0) {
      return;
    }
    puVar12 = (undefined8 *)puVar6[3];
    if ((puVar12 != (undefined8 *)0x0) &&
       (iVar5 = *(int *)((long)puVar12 + 0x4c) + -1, *(int *)((long)puVar12 + 0x4c) = iVar5,
       iVar5 == 0)) {
      (**(code **)*puVar12)(puVar12);
      (**(code **)(puVar4 + 0x30))(0,puVar12);
    }
    if ((long *)puVar6[4] != (long *)0x0) {
      (**(code **)(*(long *)puVar6[4] + 0x30))();
    }
    piVar13 = (int *)puVar6[2];
    if ((piVar13 != (int *)0x0) && (iVar5 = *piVar13, *piVar13 = iVar5 + -1, iVar5 + -1 == 0)) {
      FUN_0344ca4c(piVar13);
      (**(code **)(puVar4 + 0x30))(0,piVar13);
    }
                    /* WARNING: Could not recover jumptable at 0x0344b86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar4 + 0x30))(0,puVar6);
    return;
  }
  if (cVar3 == -0x70) {
    if (param_3[5] == '\0') goto LAB_0344b768;
LAB_0344b6bc:
    cVar3 = *param_3;
    if (cVar3 != -0x70) goto LAB_0344b6c8;
  }
  else {
LAB_0344b6c8:
    if (((cVar3 != -0x80) &&
        (((cVar3 != -0x70 || (param_3[5] != '\0')) && (*(char *)(puVar6 + 5) == -0x50)))) &&
       ((*(char *)((long)puVar6 + 0x2c) == '{' || (*(char *)((long)puVar6 + 0x2c) == 'x')))) {
      lVar16 = puVar6[3];
      cVar3 = *(char *)((long)puVar6 + 0x29);
      plVar7 = *(long **)(param_1 + 0x10);
      uVar2 = *(uint *)(param_1 + 0x18);
      plVar14 = plVar7;
      if (uVar2 == 0) {
LAB_0344b874:
        if ((plVar14 != plVar7 + (ulong)uVar2 * 6) &&
           (plVar14 = (long *)plVar14[4], plVar14 != (long *)0x0)) {
          if (cVar3 == -1) {
            do {
              if ((((plVar14[3] == lVar16) && ((char)plVar14[5] == -0x70)) &&
                  (*(char *)((long)plVar14 + 0x2d) != '\0')) &&
                 (((*(byte *)(plVar14 + 7) >> 2 & 1) == 0 &&
                  (*(int *)((long)plVar14 + 0x34) <= param_4)))) {
                local_70 = CONCAT44(local_70._4_4_,(int)plVar14[6]);
                local_78._1_7_ = (undefined7)((ulong)plVar14[5] >> 8);
                local_78 = CONCAT71(local_78._1_7_,0x80);
                FUN_0344b418(param_1,lVar16,&local_78,*(int *)((long)plVar14 + 0x34),1,0);
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              if (((plVar14[3] == lVar16) && (*(char *)((long)plVar14 + 0x29) == cVar3)) &&
                 (((char)plVar14[5] == -0x70 &&
                  (((*(char *)((long)plVar14 + 0x2d) != '\0' &&
                    ((*(byte *)(plVar14 + 7) >> 2 & 1) == 0)) &&
                   (*(int *)((long)plVar14 + 0x34) <= param_4)))))) {
                local_70 = CONCAT44(local_70._4_4_,(int)plVar14[6]);
                local_78._1_7_ = (undefined7)((ulong)plVar14[5] >> 8);
                local_78 = CONCAT71(local_78._1_7_,0x80);
                FUN_0344b418(param_1,lVar16,&local_78,*(int *)((long)plVar14 + 0x34),1,0);
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      else {
        lVar10 = (ulong)uVar2 * 0x30;
        do {
          if (((*(long *)(lVar16 + 0x40) == *plVar14) && (*(long *)(lVar16 + 0x10) == plVar14[1]))
             && (*(int *)(lVar16 + 0x2c) == (int)plVar14[2])) goto LAB_0344b874;
          lVar10 = lVar10 + -0x30;
          plVar14 = plVar14 + 6;
        } while (lVar10 != 0);
      }
    }
  }
  puVar9 = puVar12 + 1;
  puVar8 = (undefined8 *)*puVar9;
  if (puVar8 != (undefined8 *)0x0) {
    if (*(int *)((long)puVar8 + 0x34) <= *(int *)((long)puVar6 + 0x34)) {
      do {
        puVar9 = puVar8;
        puVar8 = (undefined8 *)*puVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
          goto LAB_0344b9cc;
        }
      } while (*(int *)((long)puVar8 + 0x34) <= *(int *)((long)puVar6 + 0x34));
      puVar11 = puVar8;
LAB_0344b9cc:
      *puVar6 = puVar11;
      goto LAB_0344b9d0;
    }
  }
  *puVar6 = puVar8;
LAB_0344b9d0:
  *puVar9 = puVar6;
  if (puVar8 == (undefined8 *)0x0) {
    *puVar12 = puVar6;
    return;
  }
  return;
}


