/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e5054; name: FUN_001e5054
 */


undefined8 FUN_001e5054(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x3fc);
  if ((uVar1 >> 6 & 1) == 0) {
    return 0;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar2 = param_1[0x2c];
    uVar3 = *(uint *)(param_1 + 0x2e);
    goto LAB_001e50c4;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if (param_2 != 1) {
      uVar2 = param_1[0x1a];
LAB_001e50b4:
      if ((uVar1 >> 3 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x33);
      }
      else {
        uVar3 = *(uint *)((long)param_1 + 0x19c);
      }
      goto LAB_001e50c4;
    }
    uVar2 = param_1[0x1d];
  }
  else {
    uVar2 = param_1[0x20];
    if (param_2 != 1) goto LAB_001e50b4;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x34);
LAB_001e50c4:
  *(uint *)((long)param_1 + 0x3fc) = uVar1 | 0x40000000;
  switch(*(undefined4 *)(param_1 + 0x27)) {
  case 4:
  case 6:
    uVar2 = FUN_001e86dc(param_1[0x28],uVar2,uVar3,param_2,param_1);
    break;
  case 5:
  case 7:
    uVar2 = FUN_001e8b10(param_1[0x28],param_1[0x29]);
    break;
  default:
    FUN_001db9c8(*param_1,"unknown proxytype option given",uVar2,uVar3);
    uVar2 = 7;
  }
  *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xbfffffff;
  return uVar2;
}


