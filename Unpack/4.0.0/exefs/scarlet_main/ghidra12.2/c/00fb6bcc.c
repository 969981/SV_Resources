/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb6bcc; name: FUN_00fb6bcc
 */


ulong * FUN_00fb6bcc(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long *plVar10;
  byte local_48 [16];
  ulong local_38;
  
  bVar1 = (byte)*param_1;
  uVar7 = (ulong)bVar1;
  uVar6 = (long)param_3 - (long)param_2;
  if ((bVar1 & 1) == 0) {
    if (uVar6 == 0) {
      return param_1;
    }
    uVar9 = (ulong)(bVar1 >> 1);
    puVar8 = (undefined1 *)((long)param_1 + 1);
    uVar4 = 0x16;
  }
  else {
    if (uVar6 == 0) {
      return param_1;
    }
    uVar7 = *param_1;
    uVar9 = param_1[1];
    puVar8 = (undefined1 *)param_1[2];
    uVar4 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  if ((param_2 < puVar8) || (puVar8 + uVar9 <= param_2)) {
    if (uVar4 - uVar9 < uVar6) {
      std::string::__grow_by((ulong)param_1,uVar4,(uVar9 + uVar6) - uVar4,uVar9,uVar9,0);
      uVar7 = (ulong)(byte)*param_1;
    }
    if ((uVar7 & 1) == 0) {
      uVar7 = (long)param_1 + 1;
    }
    else {
      uVar7 = param_1[2];
    }
    puVar8 = (undefined1 *)(uVar7 + uVar9);
    puVar5 = puVar8;
    if (param_2 != param_3) {
      *puVar8 = *param_2;
      puVar5 = puVar8 + 1;
      if (param_2 + 1 != param_3) {
        puVar8[1] = param_2[1];
        puVar5 = puVar8 + 2;
        if (param_2 + 2 != param_3) {
          puVar8[2] = param_2[2];
          puVar5 = puVar8 + 3;
          if (param_2 + 3 != param_3) {
            puVar5 = puVar8 + 4;
            puVar8[3] = param_2[3];
            if (param_2 + 4 != param_3) {
              *puVar5 = param_2[4];
              puVar5 = puVar8 + 5;
              for (param_2 = param_2 + 5; param_2 != param_3; param_2 = param_2 + 1) {
                *puVar5 = *param_2;
                puVar5 = puVar5 + 1;
              }
            }
          }
        }
      }
    }
    *puVar5 = 0;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)(uVar9 + uVar6) << 1);
    }
    else {
      param_1[1] = uVar9 + uVar6;
    }
  }
  else {
    FUN_00fc5cc0(local_48);
    uVar7 = (ulong)local_48 | 1;
    if ((local_48[0] & 1) != 0) {
      uVar7 = local_38;
    }
    std::string::append((char *)param_1,uVar7);
    if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
      lVar3 = tpidr_el0;
      plVar10 = *(long **)(lVar3 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar7 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,local_38,0,8);
      }
      else {
        FUN_00c48fe8(plVar10,local_38,0,8);
      }
    }
  }
  return param_1;
}


