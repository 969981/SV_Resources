/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004eb984; name: FUN_004eb984
 */


void FUN_004eb984(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *plStack_68;
  
  lVar8 = *(long *)(param_1 + 0x10);
  lVar16 = *(long *)(lVar8 + 0x20);
  iVar13 = *(int *)(lVar16 + 0x6c);
  if (0 < iVar13) {
    lVar11 = 0;
    iVar14 = 0;
    puVar12 = (undefined8 *)(*(long *)(lVar16 + 0x30) + 0x20);
    do {
      if ((*(int *)(puVar12 + -1) != 1) || (*(char *)(*(long *)*puVar12 + 0x41) == '\0')) {
        iVar13 = iVar14 * 4;
        iVar14 = iVar14 + 1;
        *(undefined4 *)(param_1 + (*(int *)(lVar8 + 8) + iVar13)) = 0;
        iVar13 = *(int *)(lVar16 + 0x6c);
      }
      lVar11 = lVar11 + 1;
      puVar12 = puVar12 + 6;
    } while (lVar11 < iVar13);
  }
  if (*(int *)(lVar8 + 0xc) != -1) {
    FUN_005212a0(param_1 + *(int *)(lVar8 + 0xc),*(undefined8 *)(param_1 + 0x18));
  }
  puVar2 = PTR_DAT_047cd750;
  puVar1 = PTR_LAB_047cd728;
  if (0 < *(int *)(lVar16 + 0x68)) {
    lVar11 = 0;
    lVar8 = 0;
    do {
      lVar4 = *(long *)(lVar16 + 0x28) + lVar11;
      iVar13 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + lVar8 * 4);
      lVar9 = *(long *)(lVar4 + 0x58);
      if ((lVar9 == 0) ||
         ((*(int *)(lVar9 + 0x18) == 1 && (*(char *)(**(long **)(lVar9 + 0x20) + 0x41) != '\0')))) {
        puVar3 = *(ulong **)(lVar4 + 0x30);
        if ((puVar3 != (ulong *)0x0) &&
           (puStack_80 = puVar1, local_88 = lVar4, *puVar3 != 0xffffffffffffffff)) {
          plStack_68 = &local_88;
          local_78 = &local_70;
          local_70 = &puStack_80;
          std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
        }
        uVar7 = *(uint *)(lVar4 + 0x38);
        if (*(int *)(puVar2 + (ulong)uVar7 * 4) - 1U < 10) {
          puVar12 = (undefined8 *)(param_1 + iVar13);
          switch(*(int *)(puVar2 + (ulong)uVar7 * 4)) {
          default:
            if (*(int *)(lVar4 + 0x3c) == 3) {
LAB_004eba60:
              uVar6 = *(undefined8 *)(param_1 + 0x18);
              *puVar12 = 0;
              puVar12[1] = uVar6;
            }
            else {
              *(undefined4 *)puVar12 = *(undefined4 *)(lVar4 + 0x90);
            }
            break;
          case 2:
          case 4:
          case 5:
            if (*(int *)(lVar4 + 0x3c) == 3) goto LAB_004eba60;
            *puVar12 = *(undefined8 *)(lVar4 + 0x90);
            break;
          case 7:
            if (*(int *)(lVar4 + 0x3c) == 3) goto LAB_004eba60;
            *(undefined1 *)puVar12 = *(undefined1 *)(lVar4 + 0x90);
            break;
          case 8:
            if (*(int *)(lVar4 + 0x3c) == 3) goto LAB_004eba60;
            lVar4 = FUN_004a6930(lVar4);
            *(undefined4 *)puVar12 = *(undefined4 *)(lVar4 + 0x10);
            break;
          case 9:
            if (*(int *)(lVar4 + 0x3c) == 3) {
LAB_004ebc58:
              uVar6 = *(undefined8 *)(param_1 + 0x18);
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = uVar6;
            }
            else {
              lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
              if ((lVar9 == param_1) || (lVar9 == 0)) {
                puVar10 = (undefined8 *)(lVar4 + 0x90);
              }
              else {
                puVar10 = (undefined8 *)
                          (lVar9 + *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + lVar8 * 4)
                          );
              }
              *puVar12 = *puVar10;
            }
            break;
          case 10:
            if (*(int *)(lVar4 + 0x3c) == 3) {
              puVar3 = *(ulong **)(lVar4 + 0x30);
              if (puVar3 != (ulong *)0x0) {
                puStack_80 = puVar1;
                local_88 = lVar4;
                if (*puVar3 != 0xffffffffffffffff) {
                  plStack_68 = &local_88;
                  local_78 = &local_70;
                  local_70 = &puStack_80;
                  std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)&LAB_004ed5a0);
                }
                uVar7 = *(uint *)(lVar4 + 0x38);
              }
              if ((uVar7 != 0xb) || (uVar5 = FUN_004a64c0(lVar4), (uVar5 & 1) == 0))
              goto LAB_004ebc58;
              lVar9 = *(long *)(param_1 + 0x18);
              plVar15 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
              uVar6 = FUN_004a5124(lVar4);
              if ((param_2 & 1) == 0) {
                uVar6 = FUN_004ebcc8(plVar15,uVar6);
              }
              else {
                uVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
              }
              if (lVar9 == 0) {
                FUN_004fdea8(puVar12,uVar6);
              }
              else {
                FUN_004fdf18(puVar12,uVar6,*(undefined8 *)(param_1 + 0x18));
              }
            }
            else {
              *puVar12 = 0;
            }
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 + 0x98;
    } while (lVar8 < *(int *)(lVar16 + 0x68));
  }
  return;
}


