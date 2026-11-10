/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a37b60; name: FUN_01a37b60
 */


undefined8 FUN_01a37b60(long *param_1,long param_2)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((((*(byte *)(*(long *)(*(long *)(param_2 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) &&
      (sVar1 = FUN_00cf44f4(), sVar1 == 0)) || (5 < *(byte *)(param_1 + 0x12))) {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,(char)param_1[0x12]);
      FUN_00feea48(uVar3,param_2);
      lVar2 = param_1[(ulong)*(byte *)(param_1 + 0x12) + 0xc];
      *(undefined8 *)(lVar2 + 0x34) = 0;
      *(undefined8 *)(lVar2 + 0x2c) = 0;
      *(char *)(param_1 + 0x12) = (char)param_1[0x12] + '\x01';
      lVar2 = (**(code **)(*param_1 + 0x60))(param_1,*(undefined1 *)((long)param_1 + 0x91));
      if ((lVar2 != 0) &&
         ((uVar4 = FUN_00cf4cfc(*(undefined8 *)(lVar2 + 0x70)), (uVar4 & 1) != 0 ||
          ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0)))) {
        FUN_01a37c48(param_1);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


