/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00338d08; name: FUN_00338d08
 */


long * FUN_00338d08(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar9 = (ulong)*(byte *)(param_2 + 1);
    lVar4 = (long)param_2 + 9;
LAB_00338d74:
    uVar7 = FUN_0038cbd0(lVar4,uVar9,*(undefined4 *)PTR_DAT_047cc650);
    uVar9 = param_1[1];
  }
  else {
    if (*(int *)(lVar4 + 8) == 1) {
      uVar1 = *(uint *)(lVar4 + 0x60);
      uVar9 = param_1[1];
    }
    else {
      if (*(int *)(lVar4 + 8) != 0) {
        uVar9 = param_2[1];
        lVar4 = param_2[2];
        goto LAB_00338d74;
      }
      uVar1 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
      uVar9 = param_1[1];
    }
    uVar7 = (ulong)uVar1;
  }
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar7 = uVar7 & 0xffffffff;
    if (uVar5 < 2) {
      uVar8 = (int)uVar9 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            lStack_48 = plVar6[3];
            local_50 = plVar6[2];
            lStack_38 = plVar6[5];
            lStack_40 = plVar6[4];
            lStack_68 = param_2[1];
            local_70 = *param_2;
            lStack_58 = param_2[3];
            lStack_60 = param_2[2];
            iVar3 = FUN_00368020(&local_50,&local_70);
            if (iVar3 != 0) {
              return plVar6;
            }
          }
          else if ((plVar6[1] & uVar9 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar5 = plVar6[1];
        if (uVar5 == uVar7) {
          lStack_48 = plVar6[3];
          local_50 = plVar6[2];
          lStack_38 = plVar6[5];
          lStack_40 = plVar6[4];
          lStack_68 = param_2[1];
          local_70 = *param_2;
          lStack_58 = param_2[3];
          lStack_60 = param_2[2];
          iVar3 = FUN_00368020(&local_50,&local_70);
          if (iVar3 != 0) {
            return plVar6;
          }
        }
        else {
          if (uVar9 <= uVar5) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar5 / uVar9;
            }
            uVar5 = uVar5 - uVar2 * uVar9;
          }
          if (uVar5 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


