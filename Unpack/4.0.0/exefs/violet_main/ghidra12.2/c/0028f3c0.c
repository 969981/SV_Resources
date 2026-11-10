/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0028f3c0; name: FUN_0028f3c0
 */


void FUN_0028f3c0(int *param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  pbVar2 = (byte *)(param_1 + 2);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar3 = param_1 + 10;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(int **)(param_1 + 8) = piVar3;
  piVar3 = param_1 + 0xe;
  piVar3[0] = 0;
  piVar3[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  iVar1 = *param_1;
  if (iVar1 - 3U < 2) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 6));
    }
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)pbVar2 = uVar4;
    *(undefined2 *)(param_2 + 2) = 0;
  }
  else if (iVar1 == 5) {
                    /* try { // try from 0028f494 to 0028f49b has its CatchHandler @ 0028f4b8 */
    FUN_0028f35c(param_1 + 8,param_2 + 8);
  }
  else if (iVar1 == 6) {
    FUN_0028f2d4(piVar3,param_2 + 0xe);
    return;
  }
  return;
}


