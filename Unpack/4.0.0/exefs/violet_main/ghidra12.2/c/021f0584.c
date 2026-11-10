/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0584; name: FUN_021f0584
 */


void FUN_021f0584(long param_1,long *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  long *plVar3;
  
  plVar1 = param_2 + 1;
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x6d) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x73) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00e97f14(*plVar3,0);
    *(undefined2 *)(param_1 + 0x38) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x6e) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x74) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00e97f14(*plVar3,1);
    *(undefined2 *)(param_1 + 0x3a) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x6f) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x75) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00e97f14(*plVar3,2);
    *(undefined2 *)(param_1 + 0x3c) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x70) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x76) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00e97f14(*plVar3,3);
    *(undefined2 *)(param_1 + 0x3e) = uVar2;
  }
  plVar3 = param_2;
  if (((*(char *)(param_1 + 0x71) != '\0') || (plVar3 = plVar1, *(char *)(param_1 + 0x77) != '\0'))
     && (*plVar3 != 0)) {
    uVar2 = FUN_00e97f14(*plVar3,4);
    *(undefined2 *)(param_1 + 0x40) = uVar2;
  }
  if (((*(char *)(param_1 + 0x72) != '\0') || (param_2 = plVar1, *(char *)(param_1 + 0x78) != '\0'))
     && (*param_2 != 0)) {
    uVar2 = FUN_00e97f14(*param_2,5);
    *(undefined2 *)(param_1 + 0x42) = uVar2;
  }
  return;
}


