/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc9080; name: FUN_00dc9080
 */


undefined8 FUN_00dc9080(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = pthread_once((pthread_once_t *)PTR_DAT_047d1998,(__init_routine *)PTR_LAB_047d19a0);
  if (iVar1 != 0) {
    return 0xffffffffffffffff;
  }
  pvVar2 = calloc(1,0x100);
  if (pvVar2 == (void *)0x0) {
    *param_1 = 0;
    return 0xfffffffffffffff7;
  }
  *(undefined4 *)((long)pvVar2 + 0x20) = param_2;
  *param_1 = pvVar2;
  return 0;
}


