/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126a2b8; name: FUN_0126a2b8
 */


void FUN_0126a2b8(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  puVar5 = PTR_DAT_047d4ea0;
  puVar4 = PTR_DAT_047d4e98;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar10 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar10 != plVar1) {
    lVar11 = *param_1;
    do {
      if (*plVar10 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar10 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
            uVar9 = FUN_01adab84();
            *(undefined8 *)puVar3 = uVar9;
            __cxa_guard_release(puVar2);
          }
          *(undefined **)puVar5 = puVar3;
          __cxa_guard_release(puVar4);
        }
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar5) {
            uVar8 = (**(code **)(*(long *)*plVar10 + 0xc0))();
            if ((uVar8 & 1) == 0) goto LAB_0126a348;
            break;
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
    plVar10 = plVar1;
LAB_0126a348:
    if (plVar10 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar10 + 0xa8))();
      *(undefined **)(lVar11 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar11 + 0xb0) = 0;
    }
  }
  return;
}


