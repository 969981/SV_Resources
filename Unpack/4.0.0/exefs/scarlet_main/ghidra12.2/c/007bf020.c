/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bf020; name: FUN_007bf020
 */


void FUN_007bf020(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_68;
  undefined4 local_60;
  undefined4 local_48 [2];
  
  if (*(short *)(param_2 + 0x92) != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      FUN_00796868(&local_68,*(long *)(param_2 + 0x80) + lVar5);
      uVar3 = FUN_0078b278(&local_68,param_4);
      FUN_0284e3d4(&local_68);
      if ((uVar3 & 1) != 0) {
        if (*(short *)(param_3 + 0x12) == 0) {
          uVar2 = FUN_00796ce4(param_2 + 8,uVar4 & 0xffffffff);
          *(undefined2 *)(param_3 + 0x12) = uVar2;
        }
        *(undefined2 *)(param_3 + 0xe) = *(undefined2 *)(*(long *)(param_2 + 0x88) + uVar4 * 2);
        cVar1 = *(char *)(param_3 + 0x623);
        goto joined_r0x007bf0cc;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 < *(ushort *)(param_2 + 0x92));
  }
  cVar1 = *(char *)(param_3 + 0x623);
joined_r0x007bf0cc:
  if (cVar1 == '\0') {
    if (*(ushort *)(param_3 + 0xe) < 2) {
      local_60 = 0;
      local_68 = 0x20000000;
      FUN_007976c8(param_3,&local_68,0);
      local_68 = local_68 & 0xffffffff00000000;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
      FUN_00cbd7c0(param_1,&local_68);
      return;
    }
  }
  else {
    *(undefined2 *)(param_3 + 0xe) = 0;
  }
  FUN_00796d24(param_3);
  FUN_007bf154(param_1,param_2,param_3,param_4);
  return;
}


