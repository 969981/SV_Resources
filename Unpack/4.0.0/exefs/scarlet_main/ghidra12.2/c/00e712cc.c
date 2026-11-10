/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e712cc; name: FUN_00e712cc
 */


void FUN_00e712cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  long *local_38;
  
  puVar1 = PTR_DAT_047d4df8;
  if (*(char *)(param_1 + 0x42) != '\0') {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    puVar3 = PTR_DAT_047d4e08;
    puVar2 = PTR_DAT_047d4e00;
    lVar9 = *(long *)PTR_DAT_047d4e00;
    *(long *)PTR_DAT_047d4e08 = lVar9;
    if (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0xc0)) {
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
      puVar5 = (undefined8 *)FUN_00e74c64();
      uVar6 = FUN_00e74c74(*puVar5,0,param_1);
      if (((((*(ulong *)(*(long *)(param_1 + 0x78) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar6 & 0x3f) & 1) != 0) && (lVar7 = FUN_021901c4(lVar9,0), lVar7 == 0)) &&
          (*(char *)(lVar9 + 0xb2c8) == '\0')) &&
         (FUN_018be9dc(&local_38,lVar9 + 0xb090), local_38 != (long *)0x0)) {
        uVar6 = FUN_00e74c3c();
        if ((uVar6 & 1) != 0) {
          sVar8 = 0x7ffe;
          if (*(short *)(param_1 + 0x40) < 0x7ffe) {
            sVar8 = *(short *)(param_1 + 0x40) + 1;
          }
          *(short *)(param_1 + 0x40) = sVar8;
          if (local_38 == (long *)0x0) {
            return;
          }
          (**(code **)(*local_38 + 0x60))();
          return;
        }
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x60))();
        }
      }
    }
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  return;
}


