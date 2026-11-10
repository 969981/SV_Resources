/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030f350; name: FUN_0030f350
 */


void FUN_0030f350(undefined4 param_1,undefined8 param_2,ulong param_3,int param_4,long *param_5,
                 undefined8 param_6)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  long local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  uVar4 = param_3 & 0xffffffff;
  FUN_003670f0(&local_80,9);
  local_34[0] = local_77;
  local_44[0] = local_75;
  local_38[0] = local_76;
  local_48[0] = local_74;
  local_4c[0] = local_73;
  local_50[0] = local_72;
  local_60 = local_70;
  local_54[0] = local_71;
  if ((param_3 & 0xff000000) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar3 = local_80 != 0;
  puVar2 = local_34;
  if (bVar3) {
    puVar2 = local_70;
  }
  *puVar2 = (char)(uVar4 >> 0x10);
  puVar2 = local_38;
  if (bVar3) {
    puVar2 = local_70 + 1;
  }
  *puVar2 = (char)(uVar4 >> 8);
  puVar2 = local_44;
  if (bVar3) {
    puVar2 = local_70 + 2;
  }
  *puVar2 = (char)uVar4;
  puVar2 = local_48;
  if (bVar3) {
    puVar2 = local_70 + 3;
  }
  *puVar2 = 0;
  puVar2 = local_4c;
  if (bVar3) {
    puVar2 = local_70 + 4;
  }
  *puVar2 = param_4 != 0;
  puVar2 = local_50;
  if (bVar3) {
    puVar2 = local_70 + 5;
  }
  *puVar2 = (char)((uint)param_1 >> 0x18);
  puVar2 = local_54;
  if (bVar3) {
    puVar2 = local_70 + 6;
  }
  *puVar2 = (char)((uint)param_1 >> 0x10);
  ppuVar1 = &local_60;
  if (bVar3) {
    ppuVar1 = (undefined1 **)(local_70 + 7);
  }
  *(char *)ppuVar1 = (char)((uint)param_1 >> 8);
  puVar2 = (undefined1 *)((ulong)&local_60 | 1);
  if (bVar3) {
    puVar2 = local_70 + 8;
  }
  *puVar2 = (char)param_1;
  local_a0 = local_80;
  local_97 = local_34[0];
  local_96 = local_38[0];
  local_95 = local_44[0];
  local_94 = local_48[0];
  local_93 = local_4c[0];
  local_92 = local_50[0];
  local_91 = local_54[0];
  local_98 = local_78;
  local_90 = local_60;
  uStack_88 = local_68;
  FUN_003686e0(param_6,&local_a0);
  FUN_00368d40(param_2,param_3 & 0xffffffff,param_6);
  *param_5 = *param_5 + 9;
  param_5[1] = param_5[1] + (param_3 & 0xffffffff);
  return;
}


