/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0103bbd0; name: FUN_0103bbd0
 */


void FUN_0103bbd0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  while (puVar3 = puVar6, puVar3 != puVar1) {
    puVar6 = puVar3 + -0x20;
    param_1[2] = (long)puVar6;
    pcVar7 = (code *)puVar3[-0x1f];
    if (pcVar7 != (code *)0x0) {
      puVar3[-0x1e] = 0;
      puVar3[-0x1d] = 0;
      *puVar6 = 0;
      puVar3[-0x1f] = 0;
      (*pcVar7)(puVar3 + -0x1c);
      puVar6 = (undefined8 *)param_1[2];
    }
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar9 = *(long **)param_1[4];
  uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0103bc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar2 - lVar8,0x10);
    return;
  }
  FUN_00c48fe8(plVar9,lVar8,lVar2 - lVar8,0x10);
  return;
}


