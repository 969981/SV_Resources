/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba1dc4; name: FUN_00ba1dc4
 */


void FUN_00ba1dc4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 **ppuVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 ***pppuVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  int *piVar15;
  undefined8 ***pppuVar16;
  long lVar17;
  string *psVar18;
  ulong local_f8;
  char *local_f0;
  ulong local_e8;
  char local_e0 [40];
  long local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 ****local_80;
  undefined8 ****local_78;
  long local_70;
  
  if (((*(byte *)(*(long *)(param_2 + 0x20) + 0x30) & 1) == 0) ||
     (*(char *)(*(long *)(param_2 + 0x20) + 0x50) == '\0')) {
    local_78 = (undefined8 ****)0x0;
    local_70 = 0;
    local_80 = &local_78;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar17 = 0;
      lVar1 = tpidr_el0;
      do {
        lVar10 = *(long *)(param_2 + 0x30);
        piVar15 = (int *)(lVar10 + lVar17 * 0x28 + 0x10);
        iVar4 = *piVar15;
        ppppuVar13 = &local_78;
        ppppuVar14 = local_78;
        ppppuVar11 = &local_78;
        if (local_78 == (undefined8 ****)0x0) {
          psVar18 = *(string **)(lVar10 + lVar17 * 0x28 + 8);
LAB_00ba1f60:
          pppuVar16 = *ppppuVar11;
          if (pppuVar16 == (undefined8 ***)0x0) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            pppuVar16 = (undefined8 ***)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,8);
            *(int *)(pppuVar16 + 4) = iVar4;
            pppuVar16[7] = (undefined8 **)0x0;
            pppuVar16[2] = ppppuVar13;
            pppuVar16[5] = (undefined8 **)0x0;
            pppuVar16[6] = (undefined8 **)0x0;
            *pppuVar16 = (undefined8 **)0x0;
            pppuVar16[1] = (undefined8 **)0x0;
            *ppppuVar11 = pppuVar16;
            if ((undefined8 ****)*local_80 == (undefined8 ****)0x0) {
              pppuVar9 = pppuVar16;
            }
            else {
              pppuVar9 = *ppppuVar11;
              local_80 = (undefined8 ****)*local_80;
            }
            FUN_010108e0(local_78,pppuVar9);
            local_70 = local_70 + 1;
          }
          std::string::operator=((string *)(pppuVar16 + 5),psVar18);
        }
        else {
          do {
            if (iVar4 <= *(int *)(ppppuVar14 + 4)) {
              ppppuVar13 = ppppuVar14;
            }
            ppppuVar14 = (undefined8 ****)ppppuVar14[*(int *)(ppppuVar14 + 4) < iVar4];
          } while (ppppuVar14 != (undefined8 ****)0x0);
          if (((undefined8 *****)ppppuVar13 == &local_78) || (iVar4 < *(int *)(ppppuVar13 + 4))) {
            psVar18 = *(string **)(lVar10 + lVar17 * 0x28 + 8);
            ppppuVar13 = local_78;
            do {
              if (iVar4 < *(int *)(ppppuVar13 + 4)) {
                ppppuVar14 = (undefined8 ****)*ppppuVar13;
                ppppuVar11 = ppppuVar13;
                if (ppppuVar14 == (undefined8 ****)0x0) {
                  goto LAB_00ba1f60;
                }
              }
              else {
                if (iVar4 <= *(int *)(ppppuVar13 + 4)) goto LAB_00ba1f60;
                ppppuVar11 = ppppuVar13 + 1;
                ppppuVar14 = (undefined8 ****)*ppppuVar11;
                if (ppppuVar14 == (undefined8 ****)0x0) goto LAB_00ba1f60;
              }
              ppppuVar13 = ppppuVar14;
            } while( true );
          }
          std::operator+("\"",*(string **)(lVar10 + lVar17 * 0x28 + 8));
          puVar5 = (ulong *)std::string::append(local_e0 + 0x18);
          uStack_a8 = puVar5[1];
          local_a0 = puVar5[2];
          local_b0 = *puVar5;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          iVar4 = *piVar15;
          ppppuVar13 = &local_78;
          if (local_78 != (undefined8 ****)0x0) {
            ppppuVar14 = local_78;
            do {
              if (iVar4 < *(int *)(ppppuVar14 + 4)) {
                ppppuVar11 = (undefined8 ****)*ppppuVar14;
                ppppuVar13 = ppppuVar14;
                if (ppppuVar11 == (undefined8 ****)0x0) {
                  goto LAB_00ba201c;
                }
              }
              else {
                if (iVar4 <= *(int *)(ppppuVar14 + 4)) goto LAB_00ba201c;
                ppppuVar13 = ppppuVar14 + 1;
                ppppuVar11 = (undefined8 ****)*ppppuVar13;
                if (ppppuVar11 == (undefined8 ****)0x0) goto LAB_00ba201c;
              }
              ppppuVar14 = ppppuVar11;
            } while( true );
          }
          ppppuVar14 = &local_78;
LAB_00ba201c:
          pppuVar16 = *ppppuVar13;
          if (pppuVar16 == (undefined8 ***)0x0) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            pppuVar16 = (undefined8 ***)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,8);
            *(int *)(pppuVar16 + 4) = iVar4;
            pppuVar16[7] = (undefined8 **)0x0;
            pppuVar16[2] = ppppuVar14;
            pppuVar16[5] = (undefined8 **)0x0;
            pppuVar16[6] = (undefined8 **)0x0;
            *pppuVar16 = (undefined8 **)0x0;
            pppuVar16[1] = (undefined8 **)0x0;
            *ppppuVar13 = pppuVar16;
            if ((undefined8 ****)*local_80 == (undefined8 ****)0x0) {
              pppuVar9 = pppuVar16;
            }
            else {
              pppuVar9 = *ppppuVar13;
              local_80 = (undefined8 ****)*local_80;
            }
            FUN_010108e0(local_78,pppuVar9);
            local_70 = local_70 + 1;
          }
          ppuVar2 = (undefined8 **)((long)pppuVar16 + 0x29);
          if (((ulong)pppuVar16[5] & 1) != 0) {
            ppuVar2 = pppuVar16[7];
          }
          puVar5 = (ulong *)std::string::append((char *)&local_b0,(ulong)ppuVar2);
          local_f0 = (char *)puVar5[1];
          local_e8 = puVar5[2];
          local_f8 = *puVar5;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5 = (ulong *)std::string::append((char *)&local_f8);
          uVar7 = local_e8;
          local_90 = puVar5[1];
          local_88 = puVar5[2];
          local_98 = *puVar5;
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          if (((local_f8 & 1) != 0) && (local_e8 != 0)) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,uVar7,0,8);
            }
          }
          uVar7 = local_a0;
          if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,uVar7,0,8);
            }
          }
          lVar10 = local_b8;
          if (((local_e0[0x18] & 1U) != 0) && (local_b8 != 0)) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,lVar10,0,8);
            }
          }
          if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) == '\0') {
            FUN_00b89f94(param_1,*(undefined8 *)(param_2 + 8),param_3,1,&local_98);
          }
          else {
            local_f8 = CONCAT44(local_f8._4_4_,2);
            local_f0 = 
            "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
            ;
            local_e8 = CONCAT44(local_e8._4_4_,0x14f8);
            uVar7 = (ulong)&local_98 | 1;
            if ((local_98 & 1) != 0) {
              uVar7 = local_88;
            }
            local_e0[8] = '\0';
            local_e0[9] = '\0';
            local_e0[10] = '\0';
            local_e0[0xb] = '\0';
            local_e0[0xc] = '\0';
            local_e0[0xd] = '\0';
            local_e0[0xe] = '\0';
            local_e0[0xf] = '\0';
            local_e0[0x10] = '\0';
            local_e0[0x11] = '\0';
            local_e0[0x12] = '\0';
            local_e0[0x13] = '\0';
            local_e0[0x14] = '\0';
            local_e0[0x15] = '\0';
            local_e0[0x16] = '\0';
            local_e0[0x17] = '\0';
            local_e0[0] = '\0';
            local_e0[1] = '\0';
            local_e0[2] = '\0';
            local_e0[3] = '\0';
            local_e0[4] = '\0';
            local_e0[5] = '\0';
            local_e0[6] = '\0';
            local_e0[7] = '\0';
            std::string::append(local_e0,uVar7);
            FUN_00bb0e90(&local_f8);
            FUN_00bb0d74(&local_f8);
          }
          uVar7 = local_88;
          if (((local_98 & 1) != 0) && (local_88 != 0)) {
            plVar12 = *(long **)(lVar1 + 0x30);
            if (plVar12 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar12 = DAT_04859430;
              *(long **)(lVar1 + 0x30) = DAT_04859430;
            }
            uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar12,uVar7,0,8);
            }
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_2 + 0x2c));
    }
    FUN_00baf26c(local_78);
  }
  return;
}


