/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e29ac; name: FUN_007e29ac
 */


void FUN_007e29ac(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    plVar2 = *(long **)(param_1 + 0xb0);
    plVar1 = (long *)(param_1 + 0xa8);
    if (plVar2 != plVar1) {
      do {
        (**(code **)(plVar2[2] + 0x10))(plVar2 + 2);
        plVar2 = (long *)plVar2[1];
      } while (plVar2 != plVar1);
      if (*(int *)(param_1 + 0xb8) == 0) goto LAB_007e2a3c;
    }
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) break;
      (*(code *)**(undefined8 **)(lVar3 + 0x10))();
      FUN_0078fa2c(plVar1,lVar3);
      FUN_0078fa04(param_1 + 0xc0,param_1 + 0xc0,lVar3 + *(int *)(param_1 + 0xd4));
    } while (*(int *)(param_1 + 0xb8) != 0);
  }
LAB_007e2a3c:
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}


