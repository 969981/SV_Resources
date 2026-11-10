/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f071c; name: FUN_026f071c
 */


void FUN_026f071c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  long *plStack_50;
  long local_48;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if (lVar3 != 0) {
    uVar4 = FUN_00fe9b78();
    lVar3 = *(long *)(param_1 + 0x8068);
    lVar1 = *(long *)(param_1 + 0x8070);
    if (lVar3 != lVar1) {
      do {
        if (((*(long *)(lVar3 + 0x10) != 0) &&
            (lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar6 != 0)) &&
           (uVar5 = (**(code **)(*(long *)(lVar6 + -0x28) + 0xd8))(), (uVar5 & 1) != 0)) {
          local_48 = FUN_0265dff4(lVar6 + 0xe0,&local_68);
          if (((local_48 != 0) && (uVar5 = FUN_026d5e08(), (uVar5 & 1) != 0)) &&
             (uVar5 = FUN_026d5da0(local_48), (uVar5 & 1) != 0)) {
            local_68 = param_1;
            uStack_60 = uVar4;
            local_58 = lVar3;
            plStack_50 = &local_48;
            FUN_026f09a8(lVar6 + 0xe0,&local_68);
          }
        }
        lVar3 = lVar3 + 0x20;
      } while (lVar1 != lVar3);
    }
  }
  return;
}


