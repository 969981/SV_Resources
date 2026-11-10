/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006838b0; name: FUN_006838b0
 */


size_t FUN_006838b0(int *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong __n;
  long lVar4;
  size_t __n_00;
  
  iVar1 = *param_1;
  if (iVar1 == 3) {
    plVar2 = *(long **)(param_1 + 0xc);
    if ((plVar2 != (long *)0x0) &&
       (__n_00 = *(long *)(param_1 + 0x14) - *(long *)(param_1 + 0x18), __n_00 != 0)) {
      if (param_3 <= __n_00) {
        __n_00 = param_3;
      }
                    /* try { // try from 006839a8 to 006839b3 has its CatchHandler @ 006839dc */
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x10,param_2,__n_00);
      *(size_t *)(param_1 + 0x12) = *(long *)(param_1 + 0x12) + __n_00;
      goto LAB_006839c0;
    }
  }
  else {
    if (iVar1 == 2) {
      __n_00 = *(long *)(param_1 + 6) - *(long *)(param_1 + 0x18);
      if (param_3 <= __n_00) {
        __n_00 = param_3;
      }
      memcpy(param_2,(void *)(*(long *)(param_1 + 4) + *(long *)(param_1 + 0x18)),__n_00);
LAB_006839c0:
      *(size_t *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n_00;
      return __n_00;
    }
    if (iVar1 == 1) {
      if ((*(byte *)(param_1 + 4) & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0x18);
        __n = (ulong)(*(byte *)(param_1 + 4) >> 1) - lVar3;
        if (param_3 <= __n) {
          __n = param_3;
        }
        lVar4 = (long)param_1 + 0x11;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 8);
        __n = *(long *)(param_1 + 6) - lVar3;
        if (param_3 <= (ulong)(*(long *)(param_1 + 6) - lVar3)) {
          __n = param_3;
        }
      }
      memcpy(param_2,(void *)(lVar4 + lVar3),__n);
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + __n;
      return __n;
    }
  }
  return 0;
}


