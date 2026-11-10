/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2dc90; name: FUN_01b2dc90
 */


void FUN_01b2dc90(undefined8 param_1,undefined8 param_2,byte *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long *local_18;
  
  FUN_019c4120(&local_18);
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
  FUN_01b2f458(param_1,*puVar2,&local_18,param_4 & 1,param_5 & 1);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  return;
}


