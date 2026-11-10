/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2d9e8; name: FUN_01b2d9e8
 */


void FUN_01b2d9e8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *local_8;
  
  FUN_019c4120(&local_8);
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
  FUN_01b2f35c(param_1,*puVar2,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return;
}


