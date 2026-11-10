/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc7dcc; name: FUN_01dc7dcc
 */


undefined4
FUN_01dc7dcc(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,uint param_7,
            uint param_8,int param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_74;
  char local_70 [4];
  int local_6c;
  int local_68;
  
  if ((((param_5 == 3) || (param_2 == 3)) || (param_8 == 0)) || (param_9 == 0)) {
LAB_01dc7f44:
    uVar4 = 0xc;
LAB_01dc7f48:
    *(undefined4 *)(param_1 + 0x1c0) = uVar4;
  }
  else {
    if (param_2 == 0) {
      if (param_5 == 2) {
        uVar8 = param_4 / 6;
        uVar9 = param_4 % 6;
LAB_01dc7e70:
        if ((param_8 < 2) && ((param_7 + param_9) - 1 < 6)) {
          if (param_2 != 0) goto LAB_01dc7ea4;
          uVar6 = FUN_014e797c(*(undefined8 *)(param_1 + 0x40),param_6 + -1);
          puVar3 = PTR_DAT_047d6008;
          puVar2 = PTR_DAT_047d6000;
          puVar1 = PTR_DAT_047d5ff8;
          if ((uVar6 & 1) == 0) {
            local_74 = 0;
            iVar10 = uVar9 + uVar8 * 6;
            do {
              iVar11 = iVar10;
              uVar8 = param_8;
              do {
                lVar7 = FUN_010f26f8(param_1,0,param_3,iVar11);
                if (lVar7 != 0) {
                  uVar6 = FUN_00cf4cfc(*(undefined8 *)(lVar7 + 0x70));
                  if (((uVar6 & 1) != 0) ||
                     ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x70) + 0x10) + 4) >> 2 & 1) != 0)) {
                    uVar4 = 10;
                    goto LAB_01dc7f48;
                  }
                  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
                    FUN_00100190(&LAB_00b1a5bc,puVar2,&PTR_LOOP_04483000);
                    __cxa_guard_release(puVar1);
                  }
                  lVar7 = *(long *)puVar2;
                  *(long *)puVar3 = lVar7;
                  if (lVar7 == 0) {
                    local_70[0] = '\0';
                  }
                  else {
                    FUN_01a2fe88(local_70);
                    if (((local_70[0] != '\0') && (local_6c == param_3)) && (iVar11 == local_68)) {
                      uVar4 = 0xb;
                      goto LAB_01dc7f48;
                    }
                  }
                }
                iVar11 = iVar11 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              local_74 = local_74 + 1;
              iVar10 = iVar10 + 6;
            } while (local_74 != param_9);
            goto LAB_01dc7e24;
          }
LAB_01dc7f7c:
          uVar4 = 8;
        }
        else {
          uVar4 = 3;
        }
        goto LAB_01dc7f48;
      }
    }
    else {
      uVar8 = param_4;
      if (1 < param_2 - 1U) {
        uVar8 = 0;
      }
      if (param_5 == 0) {
        uVar6 = FUN_014e797c(*(undefined8 *)(param_1 + 0x40),param_3 + -1);
        if ((uVar6 & 1) != 0) {
          uVar4 = 9;
          goto LAB_01dc7f48;
        }
      }
      else {
        if (param_5 == 2) {
          uVar9 = 0;
          goto LAB_01dc7e70;
        }
LAB_01dc7ea4:
        if (param_3 == param_6) {
          if ((param_4 != param_7) &&
             (uVar6 = FUN_014e797c(*(undefined8 *)(param_1 + 0x40),param_3 + -1), (uVar6 & 1) != 0))
          {
LAB_01dc7ec4:
            uVar4 = 7;
            goto LAB_01dc7f48;
          }
        }
        else {
          uVar8 = 0;
          if (param_4 < 7) {
            uVar8 = 6 - param_4;
          }
          uVar9 = 0;
          if (param_7 < 7) {
            uVar9 = 6 - param_7;
          }
          if (uVar8 <= uVar9) {
            uVar9 = uVar8;
          }
          do {
            if (uVar9 == 0) goto LAB_01dc7f44;
            uVar8 = FUN_01dc71b0(*(undefined8 *)(param_1 + 0x40),param_6 + -1,param_7);
            uVar6 = FUN_014e797c(*(undefined8 *)(param_1 + 0x40),param_6 + -1);
            if ((uVar6 & 1) != 0) {
              if (uVar8 < 0x20) goto LAB_01dc7ec4;
              goto LAB_01dc7f7c;
            }
            uVar6 = FUN_014e797c(*(undefined8 *)(param_1 + 0x40),param_3 + -1);
            if ((uVar8 < 0x20) && ((uVar6 & 1) != 0)) goto LAB_01dc7ec4;
            uVar9 = uVar9 - 1;
            param_7 = param_7 + 1;
            param_9 = param_9 + -1;
          } while (param_9 != 0);
        }
      }
    }
LAB_01dc7e24:
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return uVar4;
}


