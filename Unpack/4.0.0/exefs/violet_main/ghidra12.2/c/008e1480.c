/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e1480; name: FUN_008e1480
 */


void FUN_008e1480(long *param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  
  puVar2 = PTR_DAT_047d2630;
  if (*(long *)PTR_DAT_047d2630 != 0) {
    FUN_008d42b0("SuperStripeSystem is already initialized.\n");
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  puVar1 = PTR_DAT_047d2638;
  if (plVar3 == (long *)0x0) {
    FUN_008d43e0("[SuperStripe] Memory Allocate Error!! : %d\n",0x38);
    return;
  }
  plVar3[2] = (long)param_1;
  *(undefined4 *)(plVar3 + 3) = param_3;
  *(int *)((long)plVar3 + 0x1c) = param_4;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = param_2;
  plVar3[4] = (long)param_4 * 0xa0;
  plVar3[5] = 0;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0xa0,0x80);
  plVar3[6] = (long)__s;
  memset(__s,0,(long)*(int *)((long)plVar3 + 0x1c) * 0xa0);
  lVar4 = plVar3[1];
  *(undefined8 *)(lVar4 + 0xf68) = 0;
  *(undefined **)(lVar4 + 0xf70) = PTR_FUN_047d2640;
  *(undefined **)(lVar4 + 0xf78) = PTR_LAB_047d2648;
  *(undefined **)(lVar4 + 0xf88) = PTR_LAB_047d2650;
  *(undefined **)(lVar4 + 0xf90) = PTR_LAB_047d2658;
  *(undefined **)(lVar4 + 0xf98) = PTR_LAB_047d2660;
  *(undefined **)(lVar4 + 4000) = PTR_FUN_047d2668;
  *(undefined **)(lVar4 + 0xfa8) = PTR_FUN_047d2670;
  *(undefined **)(lVar4 + 0xfb0) = PTR_LAB_047d2678;
  puVar1 = PTR_LAB_047d2628;
  *(undefined8 *)(lVar4 + 0xf80) = 0;
  *(undefined **)(lVar4 + 0xfb8) = puVar1;
  *(long **)puVar2 = plVar3;
  return;
}


