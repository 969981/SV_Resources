/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee9bbc; name: FUN_02ee9bbc
 */


void FUN_02ee9bbc(undefined4 param_1,long *param_2,undefined1 param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,int param_9)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2[2] = 1;
  *(undefined1 *)(param_2 + 3) = param_3;
  *(undefined1 *)((long)param_2 + 0x19) = 2;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  puVar1 = PTR_DAT_047e34a8 + 0x10;
  *(undefined2 *)((long)param_2 + 0x1a) = 3;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 4) = param_1;
  *param_2 = (long)puVar1;
  param_2[1] = 0xffffffff;
  *(undefined2 *)(param_2 + 0xe) = 0x7f7f;
  uVar3 = param_9 + 0xfU & 0xfff0;
  *(uint *)(param_2 + 8) = uVar3 - 0x40;
  *(uint *)((long)param_2 + 0x44) = param_4 & 0xffff;
  uVar4 = uVar3 + param_4 * 0xc + 0xf & 0xfff0;
  uVar3 = uVar4 + param_5 * 0x10;
  uVar2 = uVar3 + param_5 * 4;
  *(uint *)(param_2 + 9) = uVar4 - 0x48;
  *(uint *)((long)param_2 + 0x4c) = param_5 & 0xffff;
  *(uint *)(param_2 + 10) = (uVar3 & 0xfff0) - 0x50;
  *(uint *)((long)param_2 + 0x54) = param_5 & 0xffff;
  uVar3 = param_6 + uVar2 + 3 & 0xfffc;
  *(uint *)(param_2 + 0xb) = (uVar2 & 0xfffc) - 0x58;
  *(uint *)((long)param_2 + 0x5c) = param_6 & 0xffff;
  *(uint *)(param_2 + 0xc) = uVar3 - 0x60;
  *(uint *)((long)param_2 + 100) = param_7 & 0xffff;
  *(uint *)(param_2 + 0xd) = (uVar3 + param_7 * 4 & 0xfffc) - 0x68;
  *(uint *)((long)param_2 + 0x6c) = param_8 & 0xffff;
  return;
}


