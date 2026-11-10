/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008eb67c; name: FUN_008eb67c
 */


void FUN_008eb67c(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_047d26b8;
  if (*(long *)PTR_DAT_047d26b8 != 0) {
    FUN_008d42b0("ConnectionStripeSystem is already initialized.\n");
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x30,0x80);
  puVar1 = PTR_DAT_047d26c0;
  if (plVar4 == (long *)0x0) {
    FUN_008d43e0("[ConnectedStripe] Memory Allocate Error!! : %d\n",0x30);
    return;
  }
  *(undefined4 *)(plVar4 + 4) = param_3;
  plVar4[5] = 0;
  puVar3 = PTR_FUN_047d26c8;
  plVar4[2] = 0x3f8000003f800000;
  plVar4[3] = param_2;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0x3f8000003f800000;
  *(undefined8 *)(param_2 + 0xeb8) = 0;
  *(undefined **)(param_2 + 0xec0) = puVar3;
  *(undefined8 *)(param_2 + 0xed0) = 0;
  puVar1 = PTR_LAB_047d26d0;
  *(undefined8 *)(param_2 + 0xec8) = 0;
  puVar3 = PTR_LAB_047d26d8;
  *(undefined **)(param_2 + 0xed8) = puVar1;
  puVar1 = PTR_LAB_047d26e0;
  *(undefined **)(param_2 + 0xee0) = puVar3;
  *(undefined **)(param_2 + 0xee8) = puVar1;
  *(undefined8 *)(param_2 + 0xf00) = 0;
  *(undefined8 *)(param_2 + 0xef8) = 0;
  puVar1 = PTR_LAB_047d2628;
  *(undefined8 *)(param_2 + 0xef0) = 0;
  *(undefined **)(param_2 + 0xf08) = puVar1;
  *(long **)puVar2 = plVar4;
  return;
}


