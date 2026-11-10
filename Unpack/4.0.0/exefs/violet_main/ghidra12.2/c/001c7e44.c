/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7e44; name: FUN_001c7e44
 */


long FUN_001c7e44(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar6 = *(undefined4 **)param_1[3], puVar6 == (undefined4 *)0x0)) {
LAB_001c7f38:
    lVar4 = 0;
  }
  else {
    lVar5 = 8;
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar3 = FUN_001ec338(1,0x30);
      if (lVar3 == 0) {
LAB_001c7f30:
        FUN_001c7e00(lVar8);
        goto LAB_001c7f38;
      }
      lVar4 = FUN_001ec328(*param_1);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (lVar4 == 0) {
LAB_001c7f28:
        FUN_001ec308(lVar3);
        goto LAB_001c7f30;
      }
      lVar4 = FUN_001ec338(1,0x10);
      *(long *)(lVar3 + 0x20) = lVar4;
      if (lVar4 == 0) {
        FUN_001ec308(*(undefined8 *)(lVar3 + 0x18));
        goto LAB_001c7f28;
      }
      lVar4 = lVar3;
      if (lVar8 != 0) {
        lVar4 = lVar8;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x28) = lVar3;
      }
      iVar1 = *(int *)(param_1 + 2);
      *(int *)(lVar3 + 4) = iVar1;
      *(undefined4 *)(lVar3 + 8) = 1;
      *(undefined4 *)(lVar3 + 0x10) = 0x10;
      if (iVar1 == 2) {
        lVar8 = *(long *)(lVar3 + 0x20);
        *(undefined4 *)(lVar8 + 4) = *puVar6;
        *(char *)(lVar8 + 1) = (char)*(undefined4 *)(param_1 + 2);
        uVar2 = nnsocketInetHtons(param_2);
        *(undefined2 *)(lVar8 + 2) = uVar2;
      }
      puVar6 = *(undefined4 **)(param_1[3] + lVar5);
      lVar5 = lVar5 + 8;
      lVar8 = lVar4;
      lVar7 = lVar3;
    } while (puVar6 != (undefined4 *)0x0);
  }
  return lVar4;
}


