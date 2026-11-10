/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f7950; name: FUN_028f7950
 */


void FUN_028f7950(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  
  if (param_2 != param_3) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar4 = (undefined8 *)((long)param_2 + ((long)param_3 - (long)param_2));
    if (puVar4 != puVar2) {
      lVar3 = (long)param_3 - (long)param_2 >> 3;
      puVar4 = param_2;
      do {
        local_38 = *puVar4;
        *puVar4 = 0;
        FUN_012c50fc(&local_38);
        uVar1 = puVar4[lVar3];
        puVar4[lVar3] = 0;
        param_2 = puVar4 + 1;
        *puVar4 = uVar1;
        puVar4 = param_2;
      } while (puVar2 + -lVar3 != param_2);
      puVar4 = *(undefined8 **)(param_1 + 8);
    }
    while (puVar4 != param_2) {
      puVar4 = puVar4 + -1;
      FUN_012c50fc(puVar4);
    }
    *(undefined8 **)(param_1 + 8) = param_2;
  }
  return;
}


