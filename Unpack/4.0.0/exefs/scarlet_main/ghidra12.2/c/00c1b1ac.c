/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1b1ac; name: FUN_00c1b1ac
 */


void FUN_00c1b1ac(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  void *__s;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  size_t __n;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_80 [32];
  
  uVar12 = *(ulong *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_2;
  lVar1 = *(long *)(param_1 + 0x20);
  __n = param_2 << 3;
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar5 = tpidr_el0;
    plVar8 = *(long **)(lVar5 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    __s = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,__n,8);
  }
  else {
    __s = (void *)FUN_00c0e238(*(long *)(param_1 + 0x28),0,__n);
  }
  memset(__s,0,__n);
  uVar13 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(void **)(param_1 + 0x20) = __s;
  if (uVar13 < uVar12) {
    lVar5 = tpidr_el0;
    do {
      puVar9 = *(undefined8 **)(lVar1 + uVar13 * 8);
      if (puVar9 != (undefined8 *)0x0) {
        if (puVar9 == *(undefined8 **)(lVar1 + (uVar13 ^ 1) * 8)) {
          plVar8 = (long *)*puVar9;
          do {
            lVar11 = plVar8[4];
            lVar3 = FUN_00c1aa00(lVar11);
            FUN_00c1af10(auStack_80,param_1,
                         *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar3,lVar11);
            plVar6 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              plVar6 = plVar8 + 2;
              plVar7 = (long *)*plVar6;
              if ((long *)*plVar7 != plVar8) {
                do {
                  lVar3 = *plVar6;
                  plVar6 = (long *)(lVar3 + 0x10);
                  plVar7 = (long *)*plVar6;
                } while (*plVar7 != lVar3);
              }
            }
            else {
              do {
                plVar7 = plVar6;
                plVar6 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
            }
            plVar8 = plVar7;
          } while (plVar7 != puVar9 + 1);
          uVar13 = uVar13 + 1;
          lVar3 = *(long *)(param_1 + 0x28);
          FUN_00c1a630(puVar9,puVar9[1]);
          if (lVar3 == 0) {
            plVar8 = *(long **)(lVar5 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar5 + 0x30) = DAT_04859430;
            }
            uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,puVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar8,puVar9,0,8);
            }
          }
        }
        else {
          do {
            puVar10 = (undefined8 *)puVar9[3];
            lVar3 = FUN_00c1aa00(puVar9);
            FUN_00c1af10(auStack_80,param_1,
                         *(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar3,puVar9);
            puVar9 = puVar10;
          } while (puVar10 != (undefined8 *)0x0);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
  }
  if ((*(long *)(param_1 + 0x28) != 0) || (lVar1 == 0)) {
    return;
  }
  lVar5 = tpidr_el0;
  plVar8 = *(long **)(lVar5 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  uVar12 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar12 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c1b4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar1,0,8);
    return;
  }
  FUN_00c48fe8(plVar8,lVar1,0,8);
  return;
}


