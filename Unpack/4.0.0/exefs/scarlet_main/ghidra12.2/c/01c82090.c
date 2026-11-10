/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c82090; name: FUN_01c82090
 */


void FUN_01c82090(char *param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  lVar1 = 0x68;
  if (DAT_04815bd8 == '\0') {
    lVar1 = -1;
  }
  if ((((1 < *param_2) ||
       (puVar3 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar3 = (undefined8 *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar3 = (undefined8 *)PTR_DAT_047d3ba0,
     iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) + lVar1) = *puVar3;
  }
  return;
}


