/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048e090; name: FUN_0048e090
 */


long * FUN_0048e090(undefined8 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  size_t __n;
  ushort local_24;
  undefined1 local_22;
  
  local_24 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  if (param_3 == (undefined4 *)0x0) {
    __n = 2;
    iVar1 = FUN_0047e430(param_1);
  }
  else {
    __n = 3;
    local_22 = (undefined1)*param_3;
    iVar1 = FUN_0047e430(param_1);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      plVar3 = (long *)FUN_0047e450(param_1,iVar1);
      if ((*(int *)*plVar3 == (int)__n) &&
         (iVar2 = memcmp(*(void **)((int *)*plVar3 + 2),&local_24,__n), iVar2 == 0)) {
        return plVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_1);
    } while (iVar1 < iVar2);
  }
  plVar3 = (long *)FUN_003e49a0(PTR_DAT_047cd5e8);
  if (plVar3 != (long *)0x0) {
    if (plVar3[1] == 0) {
      lVar4 = FUN_003e49a0(PTR_DAT_047cd5f0);
      plVar3[1] = lVar4;
      if (lVar4 == 0) goto LAB_0048e19c;
    }
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      lVar4 = FUN_003e4ff0();
      *plVar3 = lVar4;
      if (lVar4 == 0) goto LAB_0048e19c;
    }
    iVar1 = thunk_FUN_003df070(lVar4,&local_24,__n);
    if ((iVar1 != 0) && (iVar1 = FUN_0047e2f0(param_1,plVar3), iVar1 != 0)) {
      return plVar3;
    }
  }
LAB_0048e19c:
  FUN_003e4550(plVar3,PTR_DAT_047cd5e8);
  return (long *)0x0;
}


