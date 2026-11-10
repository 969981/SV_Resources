/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dce170; name: FUN_01dce170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01dce170(long param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char local_40 [4];
  int local_3c;
  uint local_38;
  
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (param_2 == 1) {
    if (param_3 == 0) {
      plVar4 = *(long **)(param_1 + 0x30);
      if (((param_4 < *(byte *)(plVar4 + 0x12)) &&
          (lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,param_4), lVar5 != 0)) &&
         (uVar6 = FUN_01dc7280(lVar5,lVar5), (uVar6 & 1) != 0)) {
        uVar7 = 0x15;
      }
      else {
        plVar4 = *(long **)(param_1 + 0x30);
        uVar8 = (uint)*(byte *)(plVar4 + 0x12);
        if (*(byte *)(plVar4 + 0x12) != 0) {
          uVar9 = 0;
          do {
            if (((param_4 != uVar9) && (uVar9 < uVar8)) &&
               (lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,uVar9), lVar5 != 0)) {
              if (*(long *)(*(long *)(lVar5 + 0x70) + 8) == 0) {
                sVar1 = FUN_00f13ef0(lVar5);
                if (sVar1 != 0) goto LAB_01dce34c;
              }
              else {
                iVar3 = FUN_00ddf348();
                if (iVar3 != 0) {
LAB_01dce34c:
                  uVar6 = FUN_00cf4cfc(*(undefined8 *)(lVar5 + 0x70));
                  if (((uVar6 & 1) == 0) &&
                     ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
                    plVar4 = *(long **)(param_1 + 0x30);
                    if (param_4 < *(byte *)(plVar4 + 0x12)) {
                      lVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,param_4);
                      goto LAB_01dce218;
                    }
                    uVar6 = FUN_00cf4cfc(_DAT_00000070);
                    if (((uVar6 & 1) == 0) &&
                       ((*(ushort *)(*(long *)(_DAT_00000070 + 0x10) + 4) >> 2 & 1) == 0)) {
                      return 1;
                    }
                    goto LAB_01dce420;
                  }
                }
              }
            }
            plVar4 = *(long **)(param_1 + 0x30);
            uVar9 = uVar9 + 1;
            uVar8 = (uint)*(byte *)(plVar4 + 0x12);
          } while (uVar9 < uVar8);
        }
        uVar7 = 0xe;
      }
    }
    else {
      uVar7 = 0xc;
    }
  }
  else {
    uVar6 = FUN_01dc00f4(*(undefined8 *)(param_1 + 0x40),param_3,param_4);
    if ((uVar6 & 1) == 0) {
      if (param_2 == 0) {
        if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar3 != 0)) {
          FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d5ff8);
        }
        lVar5 = *(long *)PTR_DAT_047d6000;
        *(long *)PTR_DAT_047d6008 = lVar5;
        if (lVar5 == 0) {
          local_40[0] = '\0';
        }
        else {
          FUN_01a2fe88(local_40);
          if (((local_40[0] != '\0') && (local_3c == param_3)) && (local_38 == param_4)) {
            uVar7 = 0x14;
            goto LAB_01dce428;
          }
        }
      }
      lVar5 = FUN_010f26f8(param_1,param_2,param_3,param_4);
LAB_01dce218:
      uVar6 = FUN_00cf4cfc(*(undefined8 *)(lVar5 + 0x70));
      if (((uVar6 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
        if ((lVar5 == 0) || (sVar1 = FUN_00cf44f4(), sVar1 == 0)) {
          return 1;
        }
        sVar1 = FUN_00cf44f4(*(undefined8 *)(lVar5 + 0x70));
        sVar2 = FUN_00cf41a8(*(undefined8 *)(lVar5 + 0x70));
        if ((sVar1 != 0x382 && sVar1 != 0x286) || (1 < (ushort)(sVar2 - 1U))) {
          if (sVar1 != 800) {
            return 1;
          }
          if (2 < (ushort)(sVar2 - 1U)) {
            return 1;
          }
        }
        sVar1 = FUN_00cf44f4(*(undefined8 *)(lVar5 + 0x70));
        uVar7 = 0x10;
        if (sVar1 == 0x382) {
          uVar7 = 0x11;
        }
      }
      else {
LAB_01dce420:
        uVar7 = 0xf;
      }
    }
    else {
      uVar7 = 0x12;
    }
  }
LAB_01dce428:
  *(undefined4 *)(param_1 + 0x1c0) = uVar7;
  return 0;
}


