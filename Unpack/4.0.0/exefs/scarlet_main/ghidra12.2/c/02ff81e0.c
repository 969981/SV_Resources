/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ff81e0; name: FUN_02ff81e0
 */


void FUN_02ff81e0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 auStack_c0 [48];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined8 local_70;
  int local_68;
  
  plVar14 = *(long **)(param_2 + 8);
  plVar15 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    lVar16 = *plVar14;
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("FinalizeShiftWorldTask",0x16,*(undefined8 *)(lVar16 + 0x28));
    }
    puVar13 = (undefined8 *)plVar14[2];
    uVar4 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar14[3]) && (plVar14[2] = uVar4, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtFinalizeShiftWorldTask";
      uVar2 = nn::os::GetSystemTick();
      puVar13[1] = uVar2;
    }
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar13 = (undefined8 *)plVar14[2];
      uVar4 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar14[3]) && (plVar14[2] = uVar4, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    plVar15 = *(long **)(param_2 + 8);
  }
  local_78 = 0;
  local_70 = -0x8000000000000000;
  local_68 = 0;
  memcpy(auStack_c0,PTR_DAT_047d19b0 + 0x200,0x30);
  puVar13 = (undefined8 *)(param_1 + 0x30);
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  local_90 = *puVar13;
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x488);
  lVar16 = *(long *)(lVar10 + 8);
  uVar11 = *(uint *)(lVar10 + 0x2c);
  if (*(int *)(lVar10 + 0x28) != 0) {
    iVar9 = *(int *)(lVar16 + 0x30);
    uVar1 = uVar11 + 1;
    if (iVar9 != 0x7fffffff) {
      uVar4 = 0;
LAB_02ff84d4:
      do {
        lVar8 = (long)iVar9;
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x488) + 8);
        if (((~*(uint *)(lVar10 + (long)iVar9 * 0x68 + 8) & 0xffffff) == 0) ||
           ((~*(uint *)(lVar10 + lVar8 * 0x68 + 0x18) & 0xffffff) == 0)) {
          plVar14 = (long *)(lVar10 + lVar8 * 0x68 + 0x20);
          lVar3 = *plVar14;
          if (1 < (int)local_70) {
            uVar11 = (int)lVar3 * -0x61c8864f;
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            uVar7 = uVar11 >> 0x10 | uVar11 << 0x10;
            uVar11 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
            uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
            uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
            uVar11 = uVar7 + (uVar7 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11;
            while( true ) {
              uVar11 = uVar11 & (int)local_70 - 1U;
              lVar12 = *(long *)(local_78 + (long)(int)uVar11 * 8);
              if (lVar12 == -1) break;
              if (lVar12 == lVar3) {
                if ((int)uVar11 < (int)local_70) goto LAB_02ff8680;
                break;
              }
              uVar11 = uVar11 + 1;
            }
          }
          if (*(long *)(lVar10 + lVar8 * 0x68) == -1) {
            uVar2 = 0;
LAB_02ff85b8:
            FUN_02f0e2d0(lVar3,auStack_c0,uVar2);
          }
          else if (*(long *)(lVar10 + lVar8 * 0x68 + 0x10) == -1) {
            uVar2 = 1;
            goto LAB_02ff85b8;
          }
          lVar10 = *plVar14;
          if ((int)local_70 <= local_68 * 2) {
            FUN_02ff8c54(&local_78,(int)local_70 << 1);
          }
          uVar11 = (int)lVar10 * -0x61c8864f;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar7 = uVar11 >> 0x10 | uVar11 << 0x10;
          uVar11 = (int)((ulong)lVar10 >> 0x20) * -0x61c8864f;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
          uVar11 = (int)local_70 - 1U & (uVar7 + (uVar7 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11)
          ;
          plVar14 = (long *)(local_78 + (long)(int)uVar11 * 8);
          if (*plVar14 == -1) {
            iVar9 = 1;
          }
          else if (*plVar14 == lVar10) {
            iVar9 = 0;
          }
          else {
            do {
              uVar11 = uVar11 + 1 & (int)local_70 - 1U;
              lVar8 = *(long *)(local_78 + (long)(int)uVar11 * 8);
              if (lVar8 == -1) {
                iVar9 = 1;
                goto LAB_02ff8668;
              }
            } while (lVar8 != lVar10);
            iVar9 = 0;
LAB_02ff8668:
            plVar14 = (long *)(local_78 + (long)(int)uVar11 * 8);
          }
          local_68 = local_68 + iVar9;
          *plVar14 = lVar10;
        }
LAB_02ff8680:
        piVar5 = (int *)(lVar16 + 0x30 + (ulong)((int)uVar4 + 1) * 0x68);
        do {
          uVar11 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar11;
          if (uVar1 <= uVar11) goto LAB_02ff8344;
          iVar9 = *piVar5;
          piVar5 = piVar5 + 0x1a;
        } while (iVar9 == 0x7fffffff);
      } while( true );
    }
    uVar4 = 0;
    if (uVar1 < 2) {
      uVar11 = 0;
    }
    do {
      if (uVar11 == uVar4) goto LAB_02ff8344;
      uVar4 = uVar4 + 1;
      iVar9 = *(int *)(lVar16 + (uVar4 & 0xffffffff) * 0x68 + 0x30);
    } while (iVar9 == 0x7fffffff);
    if ((int)uVar4 != -1) goto LAB_02ff84d4;
  }
LAB_02ff8344:
  lVar16 = local_70;
  uVar4 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_78 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_78,uVar4 << 3);
  }
  lVar16 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(lVar16 + 0x4e8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x4e8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)*(undefined8 *)(lVar16 + 0x4e8) + (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(lVar16 + 0x4e0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x4e0) >> 0x20) +
                (float)((ulong)uVar2 >> 0x20),(float)*(undefined8 *)(lVar16 + 0x4e0) + (float)uVar2)
  ;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(lVar16 + 0x4f8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x4f8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)*(undefined8 *)(lVar16 + 0x4f8) + (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(lVar16 + 0x4f0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x4f0) >> 0x20) +
                (float)((ulong)uVar2 >> 0x20),(float)*(undefined8 *)(lVar16 + 0x4f0) + (float)uVar2)
  ;
  plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x4b0);
  (**(code **)(*plVar14 + 0x18))(plVar14,puVar13);
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x498);
  lVar16 = *(long *)(lVar10 + 8);
  uVar11 = *(uint *)(lVar10 + 0x2c);
  if (*(int *)(lVar10 + 0x28) == 0) {
LAB_02ff8414:
    FUN_02ff8ba8(*(long *)(param_1 + 0x28) + 0x6a8,*(long *)(param_1 + 0x28),puVar13);
    if (plVar15 != (long *)0x0) {
      lVar16 = *plVar15;
      if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
        puVar13 = (undefined8 *)plVar15[2];
        uVar4 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
        if ((uVar4 <= (ulong)plVar15[3]) && (plVar15[2] = uVar4, puVar13 != (undefined8 *)0x0)) {
          *puVar13 = &DAT_03c4e575;
          puVar13[1] = *(undefined8 *)(plVar15[6] + 8);
        }
      }
      puVar13 = (undefined8 *)plVar15[2];
      uVar4 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar15[3]) && (plVar15[2] = uVar4, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c2d363;
        uVar2 = nn::os::GetSystemTick();
        puVar13[1] = uVar2;
      }
      if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
        (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
      }
    }
    return;
  }
  uVar7 = *(uint *)(lVar16 + 8);
  uVar1 = uVar11 + 1;
  if ((~uVar7 & 0xffffff) == 0) {
    uVar4 = 0;
    if (uVar1 < 2) {
      uVar11 = 0;
    }
    do {
      if (uVar11 == uVar4) goto LAB_02ff8414;
      uVar4 = uVar4 + 1;
      uVar7 = *(uint *)(lVar16 + (uVar4 & 0xffffffff) * 0x10 + 8);
    } while ((~uVar7 & 0xffffff) == 0);
    if ((int)uVar4 == -1) goto LAB_02ff8414;
  }
  else {
    uVar4 = 0;
  }
  do {
    FUN_030094d8(*(undefined8 *)(*(long *)(lVar10 + 8) + (ulong)(uVar7 & 0xffffff) * 0x10),puVar13);
    puVar6 = (uint *)(lVar16 + 8 + (ulong)((int)uVar4 + 1) * 0x10);
    do {
      uVar11 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar11;
      if (uVar1 <= uVar11) goto LAB_02ff8414;
      uVar7 = *puVar6;
      puVar6 = puVar6 + 4;
    } while ((~uVar7 & 0xffffff) == 0);
  } while( true );
}


