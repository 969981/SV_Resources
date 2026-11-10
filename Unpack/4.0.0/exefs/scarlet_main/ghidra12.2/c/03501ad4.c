/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03501ad4; name: FUN_03501ad4
 */


int FUN_03501ad4(long *param_1,long param_2,long *param_3,byte param_4,undefined4 param_5,
                long param_6,uint param_7)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  undefined *puVar18;
  int local_90;
  uint local_8c;
  ushort local_88;
  byte local_86;
  undefined8 local_80;
  char local_78;
  undefined4 local_77;
  undefined2 local_73;
  long *local_70;
  undefined2 local_68;
  
  if ((char)param_1[5] != '\0') {
    return 2;
  }
  if (*(char *)((long)param_1 + 0x24) != '\0') {
    lVar10 = 0;
    if (*(char *)((long)param_1 + 0x27) != '\0') {
      lVar10 = param_2;
    }
    *param_3 = lVar10;
    return 1;
  }
  *param_3 = param_2;
  *(byte *)((long)param_1 + 0x25) = param_4 & 1;
  local_70 = (long *)0x0;
  plVar9 = *(long **)(param_6 + 0x60);
  if (plVar9 == (long *)0x0) {
    return 1;
  }
  (**(code **)(*plVar9 + 0x1c8))(plVar9,param_5,&local_70,*(undefined8 *)(param_6 + 0x70));
  if (local_70 == (long *)0x0) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)local_70[6];
  *(undefined2 *)((long)param_1 + 0x2c) = local_68;
  if (local_70[7] == 0) {
    iVar8 = 1;
    goto LAB_03501fc0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = (ulong)uVar3;
  uVar17 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 < uVar17) {
LAB_03501bf8:
    if (uVar3 < uVar17) {
      uVar17 = *(uint *)(param_1 + 1);
      lVar10 = *param_1;
      *(uint *)(param_1 + 1) = uVar17 + 1;
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + (ulong)uVar17 * 8) = 0;
        local_80 = 0;
        local_78 = '\x01';
        local_77 = 0;
        local_73 = 1;
        puVar11 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x78);
        if (puVar11 == (undefined8 *)0x0) {
LAB_03501ee8:
          iVar8 = 2;
LAB_03501eec:
          puVar18 = PTR_DAT_047e2fd0;
        }
        else {
          *(undefined1 *)(puVar11 + 6) = 0xff;
          *(undefined1 *)(puVar11 + 7) = 0xff;
          *puVar11 = &PTR_LAB_047c6610;
          puVar11[1] = 0;
          *(undefined4 *)(puVar11 + 5) = 0;
          *(undefined4 *)(puVar11 + 4) = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          puVar11[0xb] = 0;
          puVar11[0xc] = 0;
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          *(undefined8 **)(lVar10 + (ulong)uVar17 * 8) = puVar11;
          lVar10 = FUN_0347ff40(puVar11,local_70,0,*(long *)(param_6 + 8) + 0x10,
                                *(long *)(param_6 + 8) + 0x50,1);
          puVar18 = PTR_DAT_047e2fd0;
          if (lVar10 == 0) goto LAB_03501ee8;
          plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x30);
          if (plVar9 != (long *)0x0) {
            plVar9[2] = 0;
            plVar9[3] = 0;
            puVar2 = PTR_DAT_047e7458 + 0x10;
            *(undefined4 *)(plVar9 + 1) = param_5;
            plVar9[4] = param_6;
            plVar9[5] = (long)(param_6 + 0x60);
            *plVar9 = (long)puVar2;
            puVar11[0xe] = plVar9;
            puVar2 = PTR_DAT_047e6f70;
            lVar10 = param_1[4];
            puVar11[0xd] = 0;
            piVar13 = *(int **)puVar2;
            uVar17 = *(uint *)(puVar2 + 8);
            if ((uVar17 == 0) || (*piVar13 == (int)lVar10)) {
              piVar15 = piVar13;
            }
            else {
              lVar14 = (ulong)uVar17 * 0x20;
              piVar16 = piVar13;
              do {
                lVar14 = lVar14 + -0x20;
                if (lVar14 == 0) goto LAB_03501dc8;
                piVar15 = piVar16 + 8;
                piVar1 = piVar16 + 8;
                piVar16 = piVar15;
              } while (*piVar1 != (int)lVar10);
            }
            if (piVar15 == piVar13 + (ulong)uVar17 * 8) goto LAB_03501dc8;
            plVar9 = (long *)(**(code **)(piVar15 + 2))(PTR_PTR_047e71e0);
            puVar11[0xd] = plVar9;
            if (plVar9 == (long *)0x0) goto LAB_03501dc8;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_80);
            iVar8 = 2;
            if (local_80._4_4_ != 0x7e501) goto LAB_03501ef8;
            if ((int)local_80 != 3) goto LAB_03501ef8;
            if ((local_77._3_1_ != '\0') || (((char)local_73 == '\0' && ((param_4 & 1) != 0))))
            goto LAB_03501dc8;
            if ((local_78 != '\0') || ((param_7 & 1) != 0)) {
              uVar3 = *(uint *)(param_2 + 8);
              uVar7 = (uVar3 & 0xff) << 8;
              local_88 = (ushort)uVar7 | 0x20;
              iVar5 = *(int *)PTR_DAT_047e6fa0;
              uVar17 = uVar3;
              if (local_77._2_1_ != '\0') {
                *(undefined1 *)((long)param_1 + 0x24) = 1;
                *(undefined1 *)((long)param_1 + 0x25) = 1;
                *(undefined1 *)((long)param_1 + 0x26) = local_73._1_1_;
                uVar17 = 0x300;
                if ((param_4 & 1) == 0) {
                  uVar17 = uVar3;
                }
              }
              *(char *)((long)param_1 + 0x27) = local_78;
              local_86 = 5;
              local_90 = iVar5;
              local_8c = uVar17;
              iVar8 = (**(code **)(*(long *)puVar11[0xd] + 0x38))
                                ((long *)puVar11[0xd],PTR_PTR_047e71e0,puVar11[0xe],puVar11[1],
                                 &local_90);
              if (iVar8 != 1) goto LAB_03501ee8;
              if (local_78 != '\0') {
                iVar8 = 2;
                if ((iVar5 != local_90) || (local_8c != uVar17)) goto LAB_03501eec;
                if (((uint)local_88 | (local_86 & 7) << 0x10) != (uVar7 | 0x50020))
                goto LAB_03501ee8;
              }
              if (local_77._2_1_ == '\0') {
                puVar11[0xc] = **(undefined8 **)(param_2 + 0x18);
                if (local_78 == '\0') {
                  uVar6 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x78);
LAB_03502010:
                  lVar10 = FUN_035011e0(param_1,local_8c,uVar6);
                  if (lVar10 == 0) {
                    iVar8 = 0x34;
                    goto LAB_03501eec;
                  }
                  *param_3 = lVar10;
                }
              }
              else if (((local_8c & 0xf00) == 0x300) || ((int)param_1[3] != 0)) {
                if (local_78 == '\0') {
                  *param_3 = 0;
                }
              }
              else {
                *(undefined1 *)((long)param_1 + 0x25) = 0;
                if (local_78 == '\0') {
                  uVar6 = *(undefined4 *)(*(long *)(param_6 + 8) + 0x184);
                  goto LAB_03502010;
                }
              }
              iVar8 = (**(code **)(*(long *)puVar11[0xd] + 0x18))();
              puVar18 = PTR_DAT_047e2fd0;
              if (iVar8 == 1) goto LAB_03501fc0;
              goto LAB_03501ef8;
            }
            iVar8 = 4;
            goto LAB_03501eec;
          }
          puVar11[0xe] = 0;
LAB_03501dc8:
          iVar8 = 2;
        }
LAB_03501ef8:
        lVar10 = *param_1;
        plVar9 = *(long **)(lVar10 + uVar4 * 8);
        if (plVar9 != (long *)0x0) {
          plVar12 = (long *)plVar9[0xd];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,PTR_PTR_047e71e0);
            plVar9[0xd] = 0;
          }
          puVar11 = (undefined8 *)plVar9[0xe];
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11);
            (**(code **)(puVar18 + 0x30))(5,puVar11);
            plVar9[0xe] = 0;
          }
          (**(code **)(*plVar9 + 0x28))(plVar9);
          lVar10 = *param_1;
          puVar11 = *(undefined8 **)(lVar10 + uVar4 * 8);
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11);
            (**(code **)(puVar18 + 0x30))(5,puVar11);
            lVar10 = *param_1;
          }
        }
        uVar17 = *(uint *)(param_1 + 1);
        if (1 < uVar17) {
          *(undefined8 *)(lVar10 + uVar4 * 8) = *(undefined8 *)(lVar10 + (ulong)uVar17 * 8 + -8);
          uVar17 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar17 - 1;
        *(undefined1 *)((long)param_1 + 0x24) = 0;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_03501fc0;
      }
    }
  }
  else {
    iVar8 = uVar17 + (uVar17 >> 1);
    if (uVar17 == 0) {
      iVar8 = 1;
    }
    uVar17 = iVar8 + uVar17;
    lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_1,(ulong)uVar17 << 3);
    if (lVar10 != 0) {
      *param_1 = lVar10;
      *(uint *)((long)param_1 + 0xc) = uVar17;
      goto LAB_03501bf8;
    }
  }
  iVar8 = 0x34;
LAB_03501fc0:
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  return iVar8;
}


