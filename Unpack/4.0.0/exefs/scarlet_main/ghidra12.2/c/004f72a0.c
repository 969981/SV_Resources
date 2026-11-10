/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f72a0; name: FUN_004f72a0
 */


long FUN_004f72a0(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  char cVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_047cd728, local_50 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_40 = &puStack_48;
    local_28 = &local_40;
    puStack_38 = (undefined1 *)&local_50;
    std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x40);
    cVar2 = *(char *)(param_3 + 0x43);
  }
  else {
    cVar2 = *(char *)(param_3 + 0x43);
  }
  if (cVar2 == '\0') {
    plVar6 = (long *)FUN_004f1094(param_1,param_2,param_3);
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 8);
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar6 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar6 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar7 = (int)((ulong)(param_3 - *plVar6) >> 3) * 0x286bca1b;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x10) +
                       (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
      puVar3 = *(ulong **)(param_3 + 0x30);
      if ((puVar3 != (ulong *)0x0) && (puStack_48 = PTR_LAB_047cd728, *puVar3 != 0xffffffffffffffff)
         ) {
        local_40 = &puStack_48;
        local_28 = &local_40;
        local_50 = param_3;
        puStack_38 = (undefined1 *)&local_50;
        std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar7 = uVar7 & 0xfffffffe;
      }
      lVar5 = *(long *)(lVar5 + (ulong)uVar7);
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_004a5124(param_3);
    lVar5 = FUN_004ee0fc(param_2 + (ulong)uVar7,uVar1,uVar4,param_4);
  }
  return lVar5;
}


