/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ba7490; name: FUN_01ba7490
 */


void FUN_01ba7490(undefined8 param_1,undefined8 param_2)

{
  char *__s;
  undefined8 uVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_80 [56];
  ulong local_48;
  
  uVar1 = 0x10;
  if (DAT_0480c8b8 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  pvVar2 = (void *)FUN_01b96000(param_2);
  memcpy(auStack_80,pvVar2,0x34);
  local_48 = 0;
  __s = (char *)(*(ulong *)((long)pvVar2 + 0x38) & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    sVar3 = (size_t)((int)sVar3 + 1);
    pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
    memcpy(pvVar2,__s,sVar3);
    local_48 = (ulong)pvVar2 | 1;
  }
  FUN_01ba7838(param_1,uVar1,auStack_80);
  if ((local_48 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_48 - 1,0);
  }
  return;
}


