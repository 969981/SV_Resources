/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2da58; name: FUN_00c2da58
 */


ulong * FUN_00c2da58(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_58 [16];
  ulong local_48;
  
  bVar1 = (byte)*param_1;
  uVar5 = (ulong)bVar1;
  uVar9 = (long)param_3 - (long)param_2;
  if ((bVar1 & 1) == 0) {
    if (uVar9 == 0) {
      return param_1;
    }
    uVar8 = (ulong)(bVar1 >> 1);
    puVar6 = (undefined1 *)((long)param_1 + 1);
    uVar4 = 0x16;
  }
  else {
    if (uVar9 == 0) {
      return param_1;
    }
    uVar5 = *param_1;
    uVar8 = param_1[1];
    uVar4 = (uVar5 & 0xfffffffffffffffe) - 1;
    puVar6 = (undefined1 *)param_1[2];
  }
  if ((param_2 < puVar6) || (puVar6 + uVar8 <= param_2)) {
    if (uVar4 - uVar8 < uVar9) {
      std::string::__grow_by((ulong)param_1,uVar4,(uVar8 + uVar9) - uVar4,uVar8,uVar8,0);
      uVar5 = (ulong)(byte)*param_1;
    }
    if ((uVar5 & 1) == 0) {
      uVar5 = (long)param_1 + 1;
    }
    else {
      uVar5 = param_1[2];
    }
    puVar6 = (undefined1 *)(uVar5 + uVar8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    }
    *puVar6 = 0;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)(uVar8 + uVar9) << 1);
    }
    else {
      param_1[1] = uVar8 + uVar9;
    }
  }
  else {
    FUN_01f6e9f8(local_58,param_2,param_3);
    uVar5 = (ulong)local_58 | 1;
    if ((local_58[0] & 1) != 0) {
      uVar5 = local_48;
    }
    std::string::append((char *)param_1,uVar5);
    if (((local_58[0] & 1) != 0) && (local_48 != 0)) {
      lVar3 = tpidr_el0;
      plVar7 = *(long **)(lVar3 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar5 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,local_48,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,local_48,0,8);
      }
    }
  }
  return param_1;
}


