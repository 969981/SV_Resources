/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b7358; name: FUN_029b7358
 */


void FUN_029b7358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_1;
  *puVar6 = *param_2;
  puVar6[1] = param_2[1];
  puVar6[2] = param_2[2];
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar2 = (long *)puVar6[3];
  puVar6[3] = plVar5;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  lVar4 = param_1[1];
  FUN_029b77d4(lVar4,param_2 + 4);
  uVar1 = param_2[0xb];
  uVar3 = param_2[0xd];
  *(undefined8 *)(lVar4 + 0x40) = param_2[0xc];
  *(undefined8 *)(lVar4 + 0x48) = uVar3;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  return;
}


