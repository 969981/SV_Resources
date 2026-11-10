/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e4bc8; name: FUN_017e4bc8
 */


void FUN_017e4bc8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long *local_1a0;
  long *local_198;
  undefined1 *local_190;
  char *pcStack_188;
  size_t local_180;
  long *local_178;
  undefined1 *local_170;
  byte *local_168;
  size_t local_160;
  long *local_158;
  byte local_150 [256];
  long *local_38;
  
  memcpy(local_150,(void *)param_3[1],param_3[2] + 1);
  pcVar5 = strchr((char *)local_150,0x3a);
  if (pcVar5 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_170 = *(undefined1 **)PTR_DAT_047d3e30;
    local_168 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_160 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_158 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x18))();
    }
    local_190 = (undefined1 *)*param_3;
    pcStack_188 = (char *)param_3[1];
    local_180 = param_3[2];
    local_178 = (long *)param_3[3];
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x18))();
    }
  }
  else {
    *pcVar5 = '\0';
    puVar7 = &DAT_cbf29ce484222645;
    local_160 = strlen((char *)local_150);
    local_170 = &DAT_cbf29ce484222645;
    if (local_150[0] != 0) {
      local_170 = &DAT_cbf29ce484222645;
      pbVar6 = (byte *)((ulong)local_150 | 1);
      do {
        local_170 = (undefined1 *)(((ulong)local_170 ^ (ulong)local_150[0]) * 0x100000001b3);
        local_150[0] = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (local_150[0] != 0);
    }
    local_158 = (long *)0x0;
    local_168 = local_150;
    local_180 = strlen(pcVar5 + 1);
    bVar1 = pcVar5[1];
    if (bVar1 != 0) {
      pbVar6 = (byte *)(pcVar5 + 2);
      do {
        puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
    }
    local_178 = (long *)0x0;
    local_190 = puVar7;
    pcStack_188 = pcVar5 + 1;
  }
  (**(code **)(*param_2 + 0x40))(&local_38,param_2);
  if (*local_168 != 0) {
    (**(code **)(*param_2 + 0x40))(&local_198,param_2);
    while( true ) {
      FUN_017e4ea0(&local_1a0,local_198);
      plVar2 = local_1a0;
      if (local_1a0 == (long *)0x0) break;
      (**(code **)(*local_1a0 + 0x58))(local_1a0);
      plVar3 = local_198;
      local_198 = plVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x60))();
      }
      if (local_1a0 != (long *)0x0) {
        (**(code **)(*local_1a0 + 0x60))();
      }
    }
    FUN_00c5cf04(&local_1a0,local_198,&local_170);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x60))();
    }
    local_38 = local_1a0;
    if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x60))();
    }
  }
  if (local_38 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_00cb7f10(&local_198,local_38 + 8,&local_190);
    *param_1 = local_198;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x60))();
    }
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  return;
}


