/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de5f80; name: FUN_01de5f80
 */


void FUN_01de5f80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  
  if (*(char *)param_1[2] == '\0') {
    param_3 = *(undefined8 *)(*param_1 + 0x118);
    lVar4 = 0;
  }
  else {
    lVar4 = *param_1 + 0xa0;
  }
  uVar3 = FUN_0180a4d0(param_2,param_3,lVar4,param_1[1],1,param_1[4]);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_00cc4dc0(param_2,0xffffffff);
    uVar5 = (ushort)(iVar2 != 0) << 8;
  }
  FUN_00c5db00(param_2,0);
  *(ushort *)param_1[3] = uVar5 | !bVar1;
  return;
}


