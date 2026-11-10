/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8d574; name: FUN_00d8d574
 */


void FUN_00d8d574(long *param_1,ulong *param_2,byte param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined2 local_28;
  
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar8 = *param_2;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar8;
    }
    else if (uVar8 < uVar10) {
      uVar12 = uVar8;
    }
    else {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar8 / uVar10;
      }
      uVar12 = uVar8 - uVar12 * uVar10;
    }
    plVar13 = *(long **)(*param_1 + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_00d8d6f8;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar8) {
            if (plVar13[2] == uVar8) {
LAB_00d8d6f8:
              *(byte *)(plVar13 + 4) = param_3 & 1;
              return;
            }
          }
          else {
            if (uVar10 <= uVar11) {
              uVar3 = 0;
              if (uVar10 != 0) {
                uVar3 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar3 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  lVar9 = param_1[0xd];
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar4 + 0x30) = DAT_04859430;
  }
  plVar13 = (long *)(lVar4 + 0x30);
  lVar1 = *plVar13;
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  *plVar13 = lVar9;
  *(undefined2 *)(lVar4 + 0x38) = 1;
  puVar7 = (undefined8 *)FUN_00d8d7f4(param_1,param_2);
  puVar5 = PTR_LAB_047dca58;
  *(byte *)(puVar7 + 1) = param_3 & 1;
  *puVar7 = puVar5;
  *plVar13 = lVar1;
  local_28 = (undefined2)uVar2;
  *(undefined2 *)(lVar4 + 0x38) = local_28;
  return;
}


