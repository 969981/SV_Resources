/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5dbe0; name: FUN_00c5dbe0
 */


void FUN_00c5dbe0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = param_2;
    *(undefined1 *)(puVar4 + 1) = 0x16;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  else {
    lVar1 = FUN_00129600(param_1,param_3);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + (long)param_3 * -0x10;
    lVar2 = (long)param_3 + -1;
    lVar5 = lVar1 + lVar2 * 0x10;
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar6 + -0x10);
    *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(lVar6 + -8);
    if (lVar2 != 0) {
      lVar5 = (long)param_3 << 4;
      do {
        lVar6 = *(long *)(param_1 + 0x10) + lVar5;
        puVar4 = (undefined8 *)(lVar1 + lVar5);
        lVar5 = lVar5 + -0x10;
        *puVar4 = *(undefined8 *)(lVar6 + -0x20);
        lVar2 = lVar2 + -1;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(lVar6 + -0x18);
      } while (lVar2 != 0);
    }
    plVar3 = *(long **)(param_1 + 0x10);
    *plVar3 = lVar1;
    *(undefined1 *)(plVar3 + 1) = 0x66;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_0012ac30(param_1);
      return;
    }
  }
  return;
}


