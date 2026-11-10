/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02244ed0; name: FUN_02244ed0
 */


void FUN_02244ed0(long param_1)

{
  uint uVar1;
  char **ppcVar2;
  ulong *puVar3;
  long **pplVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  long *local_90;
  ulong local_88;
  char *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  char *local_60;
  ulong local_58;
  long *local_50;
  long *local_48;
  
  local_a8 = 0x91fc4aa14b691c6;
  puStack_a0 = &DAT_03c41801;
  local_98 = 4;
  local_90 = (long *)0x0;
  FUN_01315eac(&local_88,param_1,&local_a8);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar6 = (char)local_88 != '\0';
  ppcVar2 = (char **)PTR_DAT_047d3e30;
  if (bVar6) {
    ppcVar2 = &local_80;
  }
  local_60 = *ppcVar2;
  puVar3 = (ulong *)(PTR_DAT_047d3e30 + 8);
  if (bVar6) {
    puVar3 = &local_78;
  }
  local_58 = *puVar3;
  pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
  if (bVar6) {
    pplVar4 = &local_70;
  }
  local_50 = *pplVar4;
  pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar6) {
    pplVar4 = &local_68;
  }
  local_48 = *pplVar4;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  if ((char)local_88 != '\0') {
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_88 = local_88 & 0xffffffffffffff00;
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (DAT_0485a0e8 != 0) {
    local_a8 = FUN_00d4e220(DAT_0485a0e8,&local_60,0);
    if ((local_a8 & 0xff) != 0) {
      uVar7 = FUN_00d80f14(DAT_0485a0e8,&local_a8);
      local_88 = 0x746c50dd3115765e;
      local_80 = "IsEnable";
      local_78 = 8;
      local_70 = (long *)0x0;
      uVar8 = FUN_0141f968(param_1,&local_88);
      uVar1 = 0;
      if ((uVar8 & 0xff) != 0) {
        uVar1 = uVar8 >> 8 & 0xff;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (uVar1 != (uVar7 & 1)) {
        local_88 = 0x746c50dd3115765e;
        puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_88);
        puVar5 = PTR_LAB_047dcd90;
        *(char *)(puVar10 + 2) = (char)(uVar7 & 1);
        *puVar10 = puVar5;
        FUN_016a7f0c(DAT_0485a0e8,&local_a8,uVar1 != 0);
      }
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


