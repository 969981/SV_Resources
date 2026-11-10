/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c6090; name: FUN_010c6090
 */


void FUN_010c6090(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 != 0) && (puVar4 = *(undefined8 **)(*param_2 + 8), puVar4 != (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)PTR_DAT_047daf20;
    if (((*PTR_DAT_047daf18 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047daf18), puVar1 = PTR_DAT_047d3988,
       puVar5 = (undefined8 *)PTR_DAT_047daf20, iVar2 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980,param_2), iVar2 != 0)) {
        uVar3 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar3;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      puVar5 = (undefined8 *)PTR_DAT_047daf20;
      *(undefined **)PTR_DAT_047daf20 = puVar1;
      __cxa_guard_release(PTR_DAT_047daf18);
    }
    do {
      if (puVar4 == puVar5) {
        FUN_010c5cc0(param_1,param_2);
        return;
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}


