/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085dc44; name: FUN_0085dc44
 */


void FUN_0085dc44(long *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  void *__dest;
  
  FUN_031c1e50(param_2,param_4);
  if ((param_3 == (void *)0x0) || ((int)param_4 <= *(int *)(param_2 + 1))) {
    uVar1 = param_4;
    if ((int)*(uint *)((long)param_2 + 0xc) <= (int)param_4) {
      uVar1 = *(uint *)((long)param_2 + 0xc);
    }
    __dest = (void *)(**(code **)(*param_1 + 0x18))
                               (param_1,-(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)param_4 << 4);
    memcpy(__dest,(void *)*param_2,-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)
    ;
    (**(code **)(*param_1 + 0x20))(param_1,*param_2,(long)*(int *)((long)param_2 + 0xc) << 4);
    if (0x7ffffffe < param_4) {
      param_4 = 0x7fffffff;
    }
    *param_2 = __dest;
  }
  else {
    memcpy(param_3,(void *)*param_2,(long)*(int *)(param_2 + 1) << 4);
    (**(code **)(*param_1 + 0x20))
              (param_1,*param_2,((ulong)*(uint *)((long)param_2 + 0xc) & 0x7fffffff) << 4);
    *param_2 = param_3;
    param_4 = param_4 | 0x80000000;
  }
  *(uint *)((long)param_2 + 0xc) = param_4;
  return;
}


