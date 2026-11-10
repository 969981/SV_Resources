/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e49528; name: FUN_00e49528
 */


void FUN_00e49528(long *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined2 local_38;
  
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar9 <= uVar8) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar8) {
            if (plVar12[2] == uVar8) {
LAB_00e496e0:
              plVar12[4] = *param_3;
              plVar12[5] = param_3[1];
              plVar12[6] = param_3[2];
              plVar13 = (long *)param_3[3];
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 0x18))(plVar13);
              }
              plVar7 = (long *)plVar12[7];
              plVar12[7] = (long)plVar13;
              if (plVar7 == (long *)0x0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00e49764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar7 + 0x20))();
              return;
            }
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar8) {
            if (plVar12[2] == uVar8) goto LAB_00e496e0;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar3 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  lVar14 = param_1[0xd];
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar4 + 0x30) = DAT_04859430;
  }
  lVar1 = *(long *)(lVar4 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  *(long *)(lVar4 + 0x30) = lVar14;
  *(undefined2 *)(lVar4 + 0x38) = 1;
  puVar6 = (undefined8 *)FUN_00d8d7f4(param_1,param_2);
  puVar6[1] = *param_3;
  puVar6[2] = param_3[1];
  puVar6[3] = param_3[2];
  plVar12 = (long *)param_3[3];
  puVar6[4] = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  *puVar6 = PTR_LAB_047dcac0;
  *(long *)(lVar4 + 0x30) = lVar1;
  local_38 = (undefined2)uVar2;
  *(undefined2 *)(lVar4 + 0x38) = local_38;
  return;
}


