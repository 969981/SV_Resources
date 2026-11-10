/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b58c8; name: FUN_021b58c8
 */


bool FUN_021b58c8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  size_t __n;
  char *__s1;
  long lVar6;
  char *__s;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 8))((undefined8 *)(lVar6 + 8));
    if (((*PTR_DAT_047d8d40 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8d40), iVar2 != 0)) {
      uVar5 = FUN_0168ea04();
      *(undefined8 *)PTR_DAT_047d8d48 = uVar5;
      __cxa_guard_release(PTR_DAT_047d8d40);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d8d48) {
        uVar4 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar4 & 1) != 0) {
          return false;
        }
        __s1 = *(char **)(lVar6 + 0xd8);
        puVar1 = (undefined8 *)PTR_PTR_047d4508;
        if (*param_2 != 0) {
          puVar1 = (undefined8 *)(*param_2 + 0x38);
        }
        __s = (char *)*puVar1;
        __n = strlen(__s);
        iVar2 = strncmp(__s1,__s,__n);
        return iVar2 == 0;
      }
    }
  }
  return false;
}


