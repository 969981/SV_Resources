/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a3330; name: FUN_029a3330
 */


long FUN_029a3330(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  if (param_1 != param_2) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)((long)param_1 + lVar9);
      puVar2 = (undefined8 *)(param_3 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      plVar8 = (long *)puVar1[3];
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      plVar3 = (long *)puVar2[3];
      puVar2[3] = plVar8;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar1 + 0x24);
      pcVar4 = (code *)puVar2[7];
      if (pcVar4 != (code *)0x0) {
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        (*pcVar4)(puVar2 + 10);
      }
      if ((code *)puVar1[9] != (code *)0x0) {
        (*(code *)puVar1[9])(puVar1 + 10,puVar2 + 10);
        uVar5 = puVar1[6];
        uVar6 = puVar1[7];
        puVar2[9] = puVar1[9];
        uVar7 = puVar1[8];
        puVar2[7] = uVar6;
        puVar2[8] = uVar7;
        puVar2[6] = uVar5;
        pcVar4 = (code *)puVar1[7];
        if (pcVar4 != (code *)0x0) {
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          (*pcVar4)(puVar1 + 10);
        }
      }
      lVar9 = lVar9 + 0xb0;
    } while (puVar1 + 0x16 != param_2);
    param_3 = param_3 + lVar9;
  }
  return param_3;
}


