/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01990a84; name: FUN_01990a84
 */


void FUN_01990a84(long param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  local_40 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = 0;
  uVar5 = FUN_00d1e340(&local_50);
  if ((uVar5 & 1) != 0) {
    local_70 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x70);
    local_60 = *(undefined8 *)(param_1 + 0x78);
    local_58 = (long *)0x0;
    FUN_0147af14(&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    uVar3 = FUN_01990bd4(*(undefined8 *)(param_1 + 8));
    if (uVar3 < 0x100) {
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar6 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar6;
      plVar1 = *(long **)(lVar6 + 0x1c8);
      plVar2 = *(long **)(lVar6 + 0x1c0);
      do {
        if (plVar2 == plVar1) {
          lVar6 = 0;
          break;
        }
        lVar6 = *plVar2;
        uVar5 = FUN_011b8548(lVar6 + 0x28);
        plVar2 = plVar2 + 1;
      } while ((uVar5 & 1) == 0);
      FUN_01990bcc(lVar6);
    }
  }
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar5 = FUN_01990c48(), (uVar5 & 1) != 0)) {
    FUN_01df7b3c(*(undefined8 *)(param_1 + 0x58),0);
  }
  return;
}


