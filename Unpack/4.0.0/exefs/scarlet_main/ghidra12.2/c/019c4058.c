/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c4058; name: FUN_019c4058
 */


void FUN_019c4058(undefined8 param_1,undefined8 param_2,byte *param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *local_28;
  
  FUN_019c4120(&local_28);
  if ((1 < *param_3) ||
     (puVar2 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
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
  FUN_019c41c0(param_1,*puVar2,&local_28,param_4 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}


