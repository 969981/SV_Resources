/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02488ed4; name: FUN_02488ed4
 */


void FUN_02488ed4(undefined8 *param_1,char *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
      return;
    }
    puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + param_3);
    uVar3 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar3;
    plVar2 = (long *)puVar1[3];
    param_1[2] = puVar1[2];
    param_1[3] = plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x02488fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
  if (*param_2 != '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + param_3);
  uVar3 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  plVar2 = (long *)puVar1[3];
  param_1[2] = puVar1[2];
  param_1[3] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02488f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


