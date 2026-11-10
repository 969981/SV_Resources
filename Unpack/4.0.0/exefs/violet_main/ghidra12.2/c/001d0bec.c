/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d0bec; name: FUN_001d0bec
 */


void FUN_001d0bec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_4 + 0x12d8) != (long *)0x0) {
    plVar3 = *(long **)(param_4 + 0x12d8);
    do {
      lVar4 = *plVar3;
      plVar5 = (long *)plVar3[2];
      iVar1 = FUN_001e0e28(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),param_1,
                           param_2);
      if (0 < iVar1) break;
      FUN_001cb600((long *)(param_4 + 0x12d8),plVar3,0);
      plVar3 = plVar5;
    } while (plVar5 != (long *)0x0);
    if (*(long *)(param_4 + 0x12d8) != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(param_4 + 0x1290) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_4 + 0x1298) = uVar2;
      uVar2 = FUN_001e06f4(*(undefined8 *)(param_4 + 0x1290),*(undefined8 *)(param_4 + 0x1298),
                           *(undefined8 *)(param_3 + 0xb0),param_4 + 0x12a0);
      *(undefined8 *)(param_3 + 0xb0) = uVar2;
      return;
    }
  }
  *(undefined8 *)(param_4 + 0x1290) = 0;
  *(undefined4 *)(param_4 + 0x1298) = 0;
  return;
}


