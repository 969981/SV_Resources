/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea739c; name: FUN_01ea739c
 */


ulong FUN_01ea739c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  local_80 = &DAT_b49a716fb65dbb9c;
  puStack_78 = &DAT_03c2e7b5;
  local_70 = 4;
  local_68 = (long *)0x0;
  lVar1 = FUN_01ea74c4(*param_1,&local_80);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)((ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20)) >> 5);
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((int)uVar5 < 1) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 1;
    do {
      local_80 = &DAT_b49a716fb65dbb9c;
      puStack_78 = &DAT_03c2e7b5;
      local_70 = 4;
      local_68 = (long *)0x0;
      plVar2 = (long *)FUN_01ea74f4(*param_1,&local_80,uVar3);
      lVar1 = *plVar2;
      lVar6 = *(long *)param_1[1];
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (lVar1 == lVar6) goto LAB_01ea7480;
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
    uVar4 = 0;
    uVar3 = uVar5;
  }
LAB_01ea7480:
  return uVar4 | (ulong)uVar3 << 0x20;
}


