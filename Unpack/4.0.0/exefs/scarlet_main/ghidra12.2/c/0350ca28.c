/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350ca28; name: FUN_0350ca28
 */


int FUN_0350ca28(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  short *local_48;
  
  uVar1 = *(uint *)(param_2 + 0x2e8);
  lVar3 = *(long *)(param_2 + 0x248);
  if (*(long *)(param_2 + 0x2e0) != 0 && uVar1 != 0) {
    iVar2 = FUN_0347e990(*(long *)(param_2 + 0x2e0),uVar1,auStack_50,0,auStack_54,auStack_58,
                         &local_5c,&local_60,0,0,1);
    if (iVar2 != 1) {
      *(undefined8 *)(param_2 + 0x250) = 0;
      FUN_034e8708(0,param_2,4,1);
      return iVar2;
    }
    if (*local_48 == -2) {
      *(undefined4 *)(lVar3 + 0x18) = 0x10001;
    }
    if ((uint)(local_5c + local_60) <= uVar1) {
      *(ushort *)(lVar3 + 0xc) = *(ushort *)(lVar3 + 0xc) & 0xff8f | 0xc;
    }
  }
  if ((((*(ushort *)(lVar3 + 0xc) & 0x7c) == 0xc) && (*(long *)(param_2 + 0x2e0) == 0)) ||
     (lVar3 = FUN_0350f410(*(ushort *)(lVar3 + 0xc) >> 2 & 0x1f,*(undefined4 *)(lVar3 + 0x18),
                           param_2), lVar3 == 0)) {
    *(undefined8 *)(param_2 + 0x250) = 0;
    FUN_034e8708(0,param_2,4,1);
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_0350cb74(param_1,lVar3,param_3 & 1,1);
  }
  return iVar2;
}


