/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a6000; name: FUN_033a6000
 */


void FUN_033a6000(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  do {
    puVar4 = (uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    iVar7 = param_2;
    iVar3 = param_3;
    do {
      for (puVar4 = (uint *)(param_1 + (long)iVar7 * 8);
          (*puVar4 < uVar1 || ((*puVar4 == uVar1 && (puVar4[1] < uVar2)))); puVar4 = puVar4 + 2) {
        iVar7 = iVar7 + 1;
      }
      puVar5 = (uint *)(param_1 + (long)iVar3 * 8);
      while( true ) {
        if ((*puVar5 <= uVar1) && ((*puVar5 != uVar1 || (puVar5[1] <= uVar2)))) break;
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + -2;
      }
      if (iVar7 <= iVar3) {
        if (iVar7 != iVar3) {
          uVar6 = *(undefined8 *)puVar5;
          *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = uVar6;
        }
        iVar3 = iVar3 + -1;
        iVar7 = iVar7 + 1;
      }
    } while (iVar7 <= iVar3);
    if (param_2 < iVar3) {
      FUN_033a6000(param_1);
    }
    param_2 = iVar7;
  } while (iVar7 < param_3);
  return;
}


