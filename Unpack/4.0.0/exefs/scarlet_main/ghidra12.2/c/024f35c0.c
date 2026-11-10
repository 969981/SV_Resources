/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f35c0; name: FUN_024f35c0
 */


void FUN_024f35c0(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((1 < *param_2) ||
     (puVar2 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar2 = (undefined8 *)PTR_DAT_047d3c20;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)((long)puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar2 = (undefined8 *)PTR_DAT_047d3c20;
    }
  }
  FUN_025003d0(&local_40,*puVar2);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  return;
}


