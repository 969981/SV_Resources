/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008de330; name: FUN_008de330
 */


void FUN_008de330(long *param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  
  puVar1 = PTR_DAT_047d25d8;
  if (*(long *)PTR_DAT_047d25d8 != 0) {
    FUN_008d42b0("StripeSystem is already initialized.\n");
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  puVar2 = PTR_DAT_047d25e0;
  if (plVar3 == (long *)0x0) {
    FUN_008d43e0("[Stripe] Memory Allocate Error!! : %d\n",0x38);
    return;
  }
  plVar3[2] = (long)param_1;
  *(undefined4 *)(plVar3 + 3) = param_3;
  *(int *)((long)plVar3 + 0x1c) = param_4;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = param_2;
  plVar3[4] = (long)param_4 * 0x90;
  plVar3[5] = 0;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0x90,0x80);
  plVar3[6] = (long)__s;
  memset(__s,0,(long)*(int *)((long)plVar3 + 0x1c) * 0x90);
  lVar4 = plVar3[1];
  *(undefined8 *)(lVar4 + 0xf10) = 0;
  *(undefined **)(lVar4 + 0xf18) = PTR_FUN_047d25e8;
  *(undefined **)(lVar4 + 0xf20) = PTR_LAB_047d25f0;
  *(undefined **)(lVar4 + 0xf30) = PTR_LAB_047d25f8;
  *(undefined **)(lVar4 + 0xf38) = PTR_LAB_047d2600;
  *(undefined **)(lVar4 + 0xf40) = PTR_LAB_047d2608;
  *(undefined **)(lVar4 + 0xf48) = PTR_FUN_047d2610;
  *(undefined **)(lVar4 + 0xf50) = PTR_FUN_047d2618;
  *(undefined **)(lVar4 + 0xf58) = PTR_LAB_047d2620;
  puVar2 = PTR_LAB_047d2628;
  *(undefined8 *)(lVar4 + 0xf28) = 0;
  *(undefined **)(lVar4 + 0xf60) = puVar2;
  *(long **)puVar1 = plVar3;
  return;
}


