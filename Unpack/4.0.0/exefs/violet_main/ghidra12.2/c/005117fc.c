/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005117fc; name: FUN_005117fc
 */


void FUN_005117fc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005117fc(param_1,*param_2);
  FUN_005117fc(param_1,param_2[1]);
  puVar1 = PTR_LAB_047cba48;
  plVar3 = (long *)param_2[5];
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)param_2[6];
    if (plVar4 == plVar3) {
      plVar4 = plVar3;
    }
    else {
      do {
        plVar4 = plVar4 + -1;
        lVar2 = *plVar4;
        *plVar4 = 0;
        if (lVar2 != 0) {
          FUN_005117fc(lVar2 + 0x18,*(undefined8 *)(lVar2 + 0x20));
          FUN_005118c0(lVar2,*(undefined8 *)(lVar2 + 8));
          FUN_0049e790(puVar1,lVar2);
        }
      } while (plVar3 != plVar4);
      plVar4 = (long *)param_2[5];
    }
    param_2[6] = plVar3;
    FUN_0049e790(PTR_LAB_047cba48,plVar4);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


