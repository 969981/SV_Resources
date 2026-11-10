/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081293c; name: FUN_0081293c
 */


void FUN_0081293c(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  FUN_007ec2e0();
  *(undefined4 *)((long)param_1 + 0x5c) = 300;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  puVar1 = PTR_DAT_047d18d8;
  *(undefined8 *)((long)param_1 + 100) = 0x1388000001f4;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xfa000004e20;
  param_1[0x10] = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0xfa0000007d0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047d15f8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  plVar3 = param_1 + 0x11;
  *plVar3 = (long)(puVar1 + 0x10);
  param_1[0x15] = (long)(puVar1 + 0x68);
  param_1[0x12] = (long)(param_1 + 0x16);
  param_1[0x13] = 0x200;
  uVar2 = FUN_00793194(plVar3,&DAT_03c886bc,1);
  FUN_008103cc(local_40,plVar3,&DAT_03c886bc,uVar2,1);
  *(undefined4 *)(param_1 + 0x5a) = 0;
  puVar1 = PTR_DAT_047d0910 + 0x10;
  param_1[0x5b] = (long)(PTR_DAT_047d0910 + 0x68);
  param_1[0x58] = (long)(param_1 + 0x5c);
  param_1[0x57] = (long)puVar1;
  param_1[0x59] = 0x400;
  uVar2 = FUN_00793194(param_1 + 0x57,&DAT_03c886bc,1);
  FUN_0078d430(local_40,param_1 + 0x57,&DAT_03c886bc,uVar2,1);
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  FUN_0078ca60(param_1 + 0xe0);
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1 + 0xe6,local_40);
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  FUN_0284e338(param_1 + 0xfb);
  FUN_0284e338(param_1 + 0xff);
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined2 *)(param_1 + 0x10d) = 0;
  FUN_00812b88(local_40,param_1);
  FUN_00812cc8(param_1);
  return;
}


