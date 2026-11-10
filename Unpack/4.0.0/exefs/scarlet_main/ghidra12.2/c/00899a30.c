/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00899a30; name: FUN_00899a30
 */


void FUN_00899a30(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  if (((*PTR_DAT_047d2160 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2160), puVar1 = PTR_DAT_047d20a0, iVar2 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2168 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2160);
  }
  if (param_1 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d2168) {
        *(ushort *)((long)param_1 + 0x114) =
             *(ushort *)((long)param_1 + 0x114) & 0xfffb |
             (*(ushort *)((long)param_1 + 0x114) >> 2 & 1 | (ushort)(param_1[0x21] != param_2)) << 2
        ;
        if (param_1[0x21] != param_2) {
          param_1[0x21] = param_2;
        }
        break;
      }
    }
  }
  for (plVar3 = (long *)param_1[5]; plVar3 != param_1 + 4; plVar3 = (long *)plVar3[1]) {
    FUN_00899a30(plVar3 + -1,param_2);
  }
  return;
}


