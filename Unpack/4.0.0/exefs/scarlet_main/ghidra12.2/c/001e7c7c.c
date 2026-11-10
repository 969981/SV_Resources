/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e7c7c; name: FUN_001e7c7c
 */


undefined8 FUN_001e7c7c(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x15a4);
  }
  else {
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xfffff7ff;
    uVar1 = *(ushort *)(param_1 + 0x15a4);
    if (((uVar1 >> 7 & 1) != 0) && ((*(byte *)(*(long *)(param_2 + 0x420) + 0x85) >> 4 & 1) == 0)) {
      uVar1 = uVar1 & 0xff7f;
      *(ushort *)(param_1 + 0x15a4) = uVar1;
    }
  }
  *(ushort *)(param_1 + 0x15a4) = uVar1 & 0xf6ff;
  if ((*(byte *)(param_1 + 0xf43) & 1) == 0) {
    if (*(int *)(param_1 + 0xa38) != 6) goto LAB_001e7cf0;
    uVar2 = 1;
  }
  else {
    uVar2 = 6;
  }
  *(undefined4 *)(param_1 + 0xa38) = uVar2;
LAB_001e7cf0:
  auVar3 = FUN_001e0dfc();
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar3;
  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfff7 | 1;
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
  FUN_001e052c(param_1);
  FUN_001daf34(param_1,0);
  FUN_001daf2c(param_1,0);
  return 0;
}


