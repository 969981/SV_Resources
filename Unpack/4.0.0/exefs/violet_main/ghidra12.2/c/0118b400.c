/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118b400; name: FUN_0118b400
 */


void FUN_0118b400(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  size_t __n;
  undefined1 *__dest;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x38);
  }
  pcVar4 = strstr((char *)*puVar1,"model_pc");
  if (pcVar4 == (char *)0x0) {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0)) {
      local_38 = (undefined1 *)FUN_00d44228();
      puVar2 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_38);
      FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    plVar6 = *(long **)PTR_DAT_047d8c30;
    *param_1 = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  else {
    pcVar4 = strchr(pcVar4,0x2f);
    pcVar4 = pcVar4 + 1;
    pcVar5 = strchr(pcVar4,0x2f);
    __n = (long)pcVar5 - (long)pcVar4;
    __dest = auStack_40 + -(__n + 0x10 & 0xfffffffffffffff0);
    local_38 = __dest;
    memcpy(__dest,pcVar4,__n);
    __dest[__n] = 0;
    FUN_00cf9768(param_1,&local_38);
  }
  return;
}


