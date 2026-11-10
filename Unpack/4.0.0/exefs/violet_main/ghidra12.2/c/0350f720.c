/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350f720; name: FUN_0350f720
 */


void FUN_0350f720(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
  }
  plVar1 = (long *)(param_1[3] + 0x18);
  uVar2 = *(ushort *)(param_1[3] + 0x1b0);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,0);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    (**(code **)(*plVar1 + 0x60))();
  }
  lVar3 = param_1[3];
  fVar4 = exp2f(*(float *)(lVar3 + 0x7c) * 0.00083333335);
  fVar4 = (float)uVar5 / fVar4;
  *(byte *)(lVar3 + 0x2ba) = *(byte *)(lVar3 + 0x2ba) & 0x9f | 0x18;
  FUN_034e8708(fVar4,lVar3,3,0);
  lVar3 = param_1[3];
  FUN_034b381c(uVar5,fVar4,*(undefined8 *)PTR_DAT_047e6f38,*(undefined4 *)(lVar3 + 0x228),
               *(undefined4 *)(*(long *)(lVar3 + 0x188) + 0x18),**(undefined4 **)(lVar3 + 0x248),
               (*(ushort *)(*(undefined4 **)(lVar3 + 0x248) + 3) & 0x7c) == 4);
  if ((*(byte *)(param_1[3] + 10) >> 4 & 1) == 0) {
    return;
  }
  FUN_034b4728(*(undefined8 *)PTR_DAT_047e6988,*(undefined4 *)(param_1[3] + 0x228),param_1);
  return;
}


