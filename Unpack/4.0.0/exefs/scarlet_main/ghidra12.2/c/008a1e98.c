/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a1e98; name: FUN_008a1e98
 */


void FUN_008a1e98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_047d2380;
  puVar3 = PTR_DAT_047d2378;
  puVar2 = PTR_DAT_047d2370;
  puVar1 = PTR_DAT_047d2368;
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x18);
      lVar10 = uVar9 * 0x10;
      if ((*(ushort *)(lVar7 + lVar10) >> 8 & 1) == 0) {
        if ((*(ushort *)(lVar7 + lVar10) >> 0xc & 1) != 0) {
          plVar8 = *(long **)(lVar7 + uVar9 * 0x10 + 8);
          if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
            if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
              *(undefined8 *)puVar4 = 0;
              __cxa_guard_release(puVar3);
            }
            *(undefined **)puVar1 = puVar4;
            __cxa_guard_release(puVar2);
          }
          if (plVar8 != (long *)0x0) {
            for (plVar6 = (long *)(**(code **)*plVar8)(plVar8); plVar6 != (long *)0x0;
                plVar6 = (long *)*plVar6) {
              if (plVar6 == (long *)puVar1) goto LAB_008a1ef0;
            }
          }
        }
      }
      else {
        plVar8 = (long *)(**(code **)(**(long **)(lVar7 + uVar9 * 0x10 + 8) + 0x48))();
        if (plVar8 != (long *)0x0) {
LAB_008a1ef0:
          (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
          (**(code **)(*plVar8 + 8))(plVar8);
          FUN_00896e98(plVar8);
        }
      }
      FUN_008afd3c(*(long *)(param_1 + 0x18) + lVar10);
      FUN_008afd38(*(long *)(param_1 + 0x18) + lVar10);
      uVar9 = uVar9 + 1;
    } while (uVar9 < ((ulong)*(uint *)(param_1 + 0x10) & 3));
  }
  return;
}


