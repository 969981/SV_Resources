/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d43b60; name: FUN_00d43b60
 */


void FUN_00d43b60(int *param_1,long *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  if ((4 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar11 != 0)) {
    puVar1 = (uint *)((long)param_1 + uVar11);
    uVar13 = (ulong)*puVar1;
    uVar8 = (ulong)*(uint *)((long)puVar1 + uVar13);
    uVar10 = param_2[1] - *param_2 >> 3;
    if (uVar10 < uVar8) {
      FUN_00d44330(param_2,uVar8 - uVar10);
    }
    else if (uVar10 != uVar8) {
      FUN_00d460ac(param_2,*param_2 + uVar8 * 8);
    }
    if (*(int *)((long)puVar1 + uVar13) != 0) {
      lVar3 = tpidr_el0;
      lVar14 = 0;
      lVar15 = 0;
      uVar8 = 0;
      lVar4 = uVar13 + uVar11 + 4;
      do {
        uVar2 = *(uint *)((long)param_1 + uVar8 * 4 + lVar4);
        plVar9 = *(long **)(lVar3 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
        *(undefined1 *)(puVar6 + 2) = 0;
        *puVar6 = &PTR_LAB_045a0398;
        puVar6[1] = 0;
        puVar6[3] = 0;
        FUN_00d43e1c((long)param_1 + lVar14 + (ulong)uVar2 + lVar4,puVar6,param_3);
        puVar12 = *(undefined8 **)(*param_2 + lVar15);
        *(undefined8 **)(*param_2 + lVar15) = puVar6;
        if (puVar12 != (undefined8 *)0x0) {
          FUN_00d44bc8(puVar12 + 2);
          *puVar12 = &PTR_LAB_045a0398;
          if ((long *)puVar12[1] != (long *)0x0) {
            (**(code **)(*(long *)puVar12[1] + 0x20))();
          }
          plVar9 = *(long **)(lVar3 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,puVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar9,puVar12,0,8);
          }
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 4;
      } while (uVar8 < *(uint *)((long)puVar1 + uVar13));
    }
  }
  return;
}


