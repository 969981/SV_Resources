/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a655bc; name: FUN_00a655bc
 */


void FUN_00a655bc(ushort *param_1,int param_2,undefined1 *param_3)

{
  long lVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined1 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  
  if (param_3 != (undefined1 *)0x0) {
    puVar15 = (undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 0x10) = *puVar15;
    uVar3 = *param_1;
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar12 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar12;
    plVar2 = *(long **)(lVar12 + 0x1c8);
    plVar4 = *(long **)(lVar12 + 0x1c0);
    do {
      if (plVar4 == plVar2) goto LAB_00a65658;
      lVar12 = *plVar4;
      uVar7 = FUN_00a669dc(lVar12 + 0x28);
      plVar4 = plVar4 + 1;
    } while ((uVar7 & 1) == 0);
    if (uVar3 < 0x402) {
      lVar12 = lVar12 + 0x28 + (ulong)uVar3 * 0x20;
      uVar18 = (uint)*(byte *)(lVar12 + 0x2a);
      uVar17 = (uint)*(byte *)(lVar12 + 0x2b);
    }
    else {
LAB_00a65658:
      uVar18 = 0;
      uVar17 = 0;
    }
    uVar7 = (ulong)*param_1;
    if ((char)param_1[1] != '\0') {
      uVar16 = 0;
      do {
        if (param_2 == 2) {
          if (((*PTR_DAT_047d7430 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7430);
          }
          uVar8 = *(undefined8 *)PTR_DAT_047d7438;
          *(undefined8 *)PTR_DAT_047d7440 = uVar8;
          piVar9 = (int *)FUN_00e9d320(uVar8,uVar7,uVar16);
          if (0xc < *(ushort *)((long)piVar9 - (long)*piVar9)) {
            uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[6];
joined_r0x00a65728:
            if (((uVar3 != 0) && (*(short *)((long)piVar9 + (ulong)uVar3) != 0)) &&
               ((uVar7 = FUN_00a65d24(param_1,0,uVar16), (uVar7 & 1) != 0 ||
                (uVar7 = FUN_00a65d24(param_1,1,uVar16), (uVar7 & 1) != 0)))) {
              uVar19 = 0;
              do {
                if ((uVar18 >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
                  if ((uVar17 & 1) != 0) {
                    uVar5 = FUN_00a65ebc(*param_1,uVar16,uVar19,0);
                    lVar12 = *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8);
                    if (lVar12 != 0) {
                      uVar7 = 0;
                      do {
                        lVar1 = *(long *)(param_3 + 8) + uVar7 * 0x10;
                        if ((*(uint *)(lVar1 + 4) == uVar16) && (*(uint *)(lVar1 + 8) == uVar5))
                        goto joined_r0x00a65844;
                        uVar11 = (int)uVar7 + 1;
                        uVar7 = (ulong)uVar11 & 0xff;
                      } while ((ulong)(byte)uVar11 < (ulong)(lVar12 >> 4));
                    }
                    uVar11 = (uint)*param_1;
                    if ((uVar16 == 1) && (uVar11 == 0x385)) {
                      if ((7 < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0xaaU) == 0))
                      goto LAB_00a65a40;
                    }
                    else {
                      if (uVar11 == 0x365) {
                        uStack_64 = 0;
                        local_70 = uVar11;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 1;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 2;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 3;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 4;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 5;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 6;
                      }
                      else {
LAB_00a65a40:
                        uStack_64 = 0;
                        local_70 = uVar11;
                      }
                      uStack_6c = uVar16;
                      local_68 = uVar5;
                      FUN_00a6608c(puVar15,&local_70);
                    }
                  }
joined_r0x00a65844:
                  if ((uVar17 >> 1 & 1) != 0) {
                    uVar5 = FUN_00a65ebc(*param_1,uVar16,uVar19,1);
                    lVar12 = *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8);
                    if (lVar12 != 0) {
                      uVar7 = 0;
                      do {
                        lVar1 = *(long *)(param_3 + 8) + uVar7 * 0x10;
                        if ((*(uint *)(lVar1 + 4) == uVar16) && (*(uint *)(lVar1 + 8) == uVar5))
                        goto LAB_00a65a70;
                        uVar11 = (int)uVar7 + 1;
                        uVar7 = (ulong)uVar11 & 0xff;
                      } while ((ulong)(byte)uVar11 < (ulong)(lVar12 >> 4));
                    }
                    uVar11 = (uint)*param_1;
                    if ((uVar16 == 1) && (uVar11 == 0x385)) {
                      if ((7 < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0xaaU) == 0))
                      goto LAB_00a65a5c;
                    }
                    else {
                      if (uVar11 == 0x365) {
                        uStack_64 = 0;
                        local_70 = uVar11;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 1;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 2;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 3;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 4;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 5;
                        uStack_6c = uVar16;
                        local_68 = uVar5;
                        FUN_00a6608c(puVar15,&local_70);
                        local_70 = (uint)*param_1;
                        uStack_64 = 6;
                      }
                      else {
LAB_00a65a5c:
                        uStack_64 = 0;
                        local_70 = uVar11;
                      }
                      uStack_6c = uVar16;
                      local_68 = uVar5;
                      FUN_00a6608c(puVar15,&local_70);
                    }
                  }
                }
LAB_00a65a70:
                uVar19 = uVar19 + 1;
              } while (uVar19 != 3);
            }
          }
        }
        else if (param_2 == 1) {
          if (((*PTR_DAT_047d7430 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7430);
          }
          uVar8 = *(undefined8 *)PTR_DAT_047d7438;
          *(undefined8 *)PTR_DAT_047d7440 = uVar8;
          piVar9 = (int *)FUN_00e9d320(uVar8,uVar7,uVar16);
          if (10 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
            uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[5];
            goto joined_r0x00a65728;
          }
        }
        else if (param_2 == 0) {
          if (((*PTR_DAT_047d7430 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7430);
          }
          uVar8 = *(undefined8 *)PTR_DAT_047d7438;
          *(undefined8 *)PTR_DAT_047d7440 = uVar8;
          piVar9 = (int *)FUN_00e9d320(uVar8,uVar7,uVar16);
          if (8 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
            uVar3 = ((ushort *)((long)piVar9 - (long)*piVar9))[4];
            goto joined_r0x00a65728;
          }
        }
        uVar16 = uVar16 + 1;
        uVar7 = (ulong)*param_1;
      } while (uVar16 < (byte)param_1[1]);
    }
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar12 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar12;
    plVar2 = *(long **)(lVar12 + 0x1c8);
    plVar4 = *(long **)(lVar12 + 0x1c0);
    do {
      if (plVar4 == plVar2) goto LAB_00a65ba4;
      lVar12 = *plVar4;
      uVar10 = FUN_00a669dc(lVar12 + 0x28);
      plVar4 = plVar4 + 1;
    } while ((uVar10 & 1) == 0);
    if ((uint)uVar7 < 0x402) {
      lVar12 = lVar12 + 0x28 + uVar7 * 0x20;
      uVar7 = (ulong)*(uint *)(lVar12 + 0x2c);
      uVar10 = (ulong)*(uint *)(lVar12 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar12 + 0x34);
    }
    else {
LAB_00a65ba4:
      uVar7 = 0;
      uVar10 = 0;
      uVar14 = 0;
    }
    if ((param_2 != 2) && (uVar14 = uVar10, param_2 != 1)) {
      if (param_2 == 0) {
        uVar14 = uVar7;
      }
      else {
        uVar14 = 0;
      }
    }
    uVar17 = (uint)uVar14 & 0xff;
    iVar6 = FUN_00a65ebc(*param_1,uVar17,uVar14 >> 8,(uVar14 & 0xff0000) != 0);
    lVar12 = *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","GetDrawDataArray",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/pokedex_data_property.cpp"
                 ,0x3c6,"dataArray size is zero.");
    }
    uVar10 = 0;
    uVar7 = lVar12 >> 4;
    do {
      lVar12 = *(long *)(param_3 + 8) + uVar10 * 0x10;
      if ((uVar17 == *(uint *)(lVar12 + 4)) && (iVar6 == *(int *)(lVar12 + 8))) goto LAB_00a65c38;
      uVar18 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar18 & 0xff;
    } while ((byte)uVar18 < uVar7);
    uVar10 = (ulong)uVar18;
LAB_00a65c38:
    uVar13 = (undefined1)uVar10;
    if (uVar7 <= (uVar10 & 0xff)) {
      uVar13 = 0;
    }
    *param_3 = uVar13;
  }
  return;
}


