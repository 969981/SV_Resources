/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346d39c; name: FUN_0346d39c
 */


void FUN_0346d39c(undefined8 *param_1,long param_2,long *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined1 *)(param_1 + 6) = 0xff;
  *param_1 = &PTR_FUN_047c1bc8;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  memset(param_1 + 0xc,0,0x68);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(ushort *)((long)param_1 + 0xee) = *(ushort *)((long)param_1 + 0xee) & 0xfc00;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_3;
  param_1[0x2f] = 0;
  iVar1 = *(int *)PTR_DAT_047e7160;
  *(int *)PTR_DAT_047e7160 = iVar1 + 1;
  *(int *)((long)param_1 + 0x184) = iVar1;
  uVar3 = 0x50;
  if ((param_4 & 1) == 0) {
    uVar3 = 0x10;
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  uVar3 = *(ushort *)(param_1 + 0x33) & 0xfc00 | uVar3;
  *(ushort *)(param_1 + 0x33) = uVar3;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x3f7fc105;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)((long)param_3 + 0xba) & 0xe) == 0) {
    plVar6 = param_3;
    do {
      plVar5 = (long *)plVar6[0x14];
      if ((plVar5 == (long *)0x0) &&
         (plVar5 = (long *)plVar6[0x13], uVar4 = 0, plVar5 == (long *)0x0)) goto LAB_0346d4c8;
      plVar6 = plVar5;
    } while ((*(byte *)((long)plVar5 + 0xba) & 0xe) == 0);
  }
  uVar4 = 0x80;
LAB_0346d4c8:
  *(ushort *)(param_1 + 0x33) = uVar4 | uVar3;
  uVar2 = *(uint *)(param_2 + 0x80);
  if (uVar2 < 2) {
    *(uint *)(param_2 + 0x80) = uVar2 + 1;
    if ((uVar2 != 0) && (*(char *)(param_2 + 0x84) != '\0')) {
      FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,param_2);
    }
  }
  else {
    *(uint *)(param_2 + 0x80) = uVar2 + 1;
  }
  (**(code **)(*param_3 + 0x28))(param_3);
  *(undefined4 *)((long)param_1 + 0x114) = 0x42ca0000;
  return;
}


