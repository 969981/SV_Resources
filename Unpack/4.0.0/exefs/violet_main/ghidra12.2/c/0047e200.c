/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e200; name: FUN_0047e200
 */


ulong FUN_0047e200(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long local_18;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      if (*(__compar_fn_t *)(param_1 + 6) == (__compar_fn_t)0x0) {
        if (0 < (int)uVar1) {
          uVar3 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar3 * 8) == param_2) {
              return uVar3 & 0xffffffff;
            }
            uVar3 = uVar3 + 1;
          } while (uVar1 != uVar3);
          return 0xffffffff;
        }
      }
      else {
        local_18 = param_2;
        if (param_1[4] == 0) {
          if (1 < (int)uVar1) {
            qsort(*(void **)(param_1 + 2),(ulong)uVar1,8,*(__compar_fn_t *)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if ((param_2 != 0) &&
           (lVar2 = FUN_0045ca10(&local_18,*(undefined8 *)(param_1 + 2),*param_1,8,
                                 *(undefined8 *)(param_1 + 6),2), lVar2 != 0)) {
          return (ulong)(lVar2 - *(long *)(param_1 + 2)) >> 3;
        }
      }
    }
  }
  return 0xffffffff;
}


