/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036762c; name: FUN_0036762c
 */


void FUN_0036762c(undefined8 *param_1,char *param_2)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *__dest;
  
  __n = strlen(param_2);
  if (__n < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    if (__n == 0) {
      return;
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_0038c780(__n + 0x30);
    puVar1[5] = 1;
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = puVar1 + 5;
    puVar1[4] = puVar1;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_00368360;
    __dest = puVar1 + 6;
    *param_1 = puVar1;
    param_1[1] = __n;
    param_1[2] = __dest;
    if (puVar1 != (undefined8 *)0x0) goto LAB_003676b0;
  }
  __dest = (undefined8 *)((long)param_1 + 9);
LAB_003676b0:
  memcpy(__dest,param_2,__n);
  return;
}


