/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00364894; name: FUN_00364894
 */


void FUN_00364894(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_LAB_047cba48;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        lVar5 = *(long *)(lVar4 + -0x18);
        if (lVar5 != 0) {
          lVar2 = *(long *)(lVar4 + -0x10);
          if (lVar2 == lVar5) {
            lVar2 = lVar5;
          }
          else {
            do {
              lVar2 = lVar2 + -0x50;
              FUN_00364974(lVar2);
            } while (lVar5 != lVar2);
            lVar2 = *(long *)(lVar4 + -0x18);
          }
          *(long *)(lVar4 + -0x10) = lVar5;
          FUN_0049e790(puVar1,lVar2);
        }
        lVar5 = lVar4 + -0x50;
        FUN_0025cef0(lVar4 + -0x30,*(undefined8 *)(lVar4 + -0x28));
        if ((*(byte *)(lVar4 + -0x48) & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(lVar4 + -0x38));
        }
        lVar4 = lVar5;
      } while (lVar5 != lVar3);
      lVar4 = *param_1;
    }
    param_1[1] = lVar3;
    FUN_0049e790(PTR_LAB_047cba48,lVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


