/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00514d68; name: FUN_00514d68
 */


long FUN_00514d68(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = *param_1;
  if (lVar2 == param_1[1]) {
    lVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    lVar3 = (param_1[1] - lVar2) + 0x18;
    do {
      lVar2 = lVar2 + lVar4;
      if (*(int *)(lVar2 + 4) == 4) {
        iVar1 = FUN_00514d68(*(undefined8 *)(lVar2 + 8));
        lVar2 = (long)iVar1;
LAB_00514da4:
        lVar3 = lVar3 + lVar2 + 0x18;
      }
      else if (*(int *)(lVar2 + 4) == 3) {
        lVar2 = FUN_0052b0a0(*(undefined8 *)(lVar2 + 8));
        goto LAB_00514da4;
      }
      lVar2 = *param_1;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < (ulong)(param_1[1] - lVar2 >> 4));
  }
  return lVar3;
}


