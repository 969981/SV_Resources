/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02534ba4; name: FUN_02534ba4
 */


void FUN_02534ba4(undefined8 param_1,undefined8 param_2)

{
  char *__s;
  undefined8 uVar1;
  ulong *puVar2;
  size_t sVar3;
  void *__dest;
  ulong local_28;
  
  uVar1 = 0x38;
  if (DAT_04850a20 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = (ulong *)FUN_02535628(param_2);
  local_28 = 0;
  __s = (char *)(*puVar2 & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    sVar3 = (size_t)((int)sVar3 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
    memcpy(__dest,__s,sVar3);
    local_28 = (ulong)__dest | 1;
  }
  FUN_025356b4(param_1,uVar1,&local_28);
  if ((local_28 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_28 - 1,0);
  }
  return;
}


