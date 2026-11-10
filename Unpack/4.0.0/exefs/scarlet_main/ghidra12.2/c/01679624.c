/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01679624; name: FUN_01679624
 */


void FUN_01679624(long *param_1,uint param_2,ulong param_3)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 local_90 [8];
  undefined4 *puVar14;
  int local_38;
  
  uVar7 = param_3 & 0xffff;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  uVar6 = param_1[1];
  uVar4 = (uint)param_3;
  if (uVar6 != 0) {
    uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar8 = (int)uVar6 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
    }
    plVar10 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar10[1] == uVar7) {
            if ((uint)*(ushort *)(plVar10 + 2) == (uVar4 & 0xffff)) goto LAB_016796f4;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar8) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar10[1];
          if (uVar9 == uVar7) {
            if ((uint)*(ushort *)(plVar10 + 2) == (uVar4 & 0xffff)) goto LAB_016796f4;
          }
          else {
            if (uVar6 <= uVar9) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar9 / uVar6;
              }
              uVar9 = uVar9 - uVar3 * uVar6;
            }
            if (uVar9 != uVar8) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_016797ac:
  if ((param_2 & 0xffff) == 0xffff) {
    return;
  }
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar8 = (int)uVar6 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
    }
    plVar10 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar10[1] == uVar7) {
            if ((uint)*(ushort *)(plVar10 + 2) == (uVar4 & 0xffff)) goto LAB_01679838;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar8) goto LAB_016799a0;
          plVar10 = (long *)*plVar10;
          uVar5 = 0;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar10[1];
          if (uVar9 == uVar7) {
            if ((uint)*(ushort *)(plVar10 + 2) == (uVar4 & 0xffff)) goto LAB_01679838;
          }
          else {
            if (uVar6 <= uVar9) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar9 / uVar6;
              }
              uVar9 = uVar9 - uVar3 * uVar6;
            }
            if (uVar9 != uVar8) goto LAB_016799a0;
          }
          plVar10 = (long *)*plVar10;
          uVar5 = 0;
        } while (plVar10 != (long *)0x0);
      }
      goto LAB_0167983c;
    }
  }
LAB_016799a0:
  uVar5 = 0;
LAB_0167983c:
  *(uint *)((long)param_1 + 0x6c) = (uint)*(ushort *)((long)param_1 + 0x6c);
  if ((uVar4 & 0xffff) != 0xcf) {
    uVar2 = *(ushort *)(param_1 + 0xd);
    *(uint *)(param_1 + 0xd) = param_2 & 0xffff;
    FUN_0129bf58(param_1,param_3 & 0xffffffff,uVar5,local_90);
    *(uint *)(param_1 + 0xd) = (uint)uVar2;
  }
  return;
LAB_016796f4:
  bVar1 = *(byte *)((long)plVar10 + 0x12);
  if ((bVar1 == 0x20) || (bVar1 == 0x10)) {
    uVar6 = 10;
  }
  else {
    uVar6 = (ulong)bVar1 & 0xf;
    if ((int)uVar6 == 0) goto LAB_016797ac;
  }
  local_38 = -0x28;
  puVar11 = local_90;
  puVar14 = (undefined4 *)register0x00000008;
  do {
    if (local_38 < 0) {
      iVar12 = local_38 + 8;
      if (-8 < local_38) goto LAB_01679744;
      puVar13 = (undefined4 *)((long)local_90 + (long)local_38);
      local_38 = iVar12;
    }
    else {
      iVar12 = local_38;
LAB_01679744:
      puVar13 = puVar14;
      local_38 = iVar12;
      puVar14 = puVar14 + 2;
    }
    uVar6 = uVar6 - 1;
    *(undefined4 *)puVar11 = *puVar13;
    puVar11 = (undefined8 *)((long)puVar11 + 4);
  } while (uVar6 != 0);
  goto LAB_016797ac;
LAB_01679838:
  uVar5 = *(undefined1 *)((long)plVar10 + 0x12);
  goto LAB_0167983c;
}


