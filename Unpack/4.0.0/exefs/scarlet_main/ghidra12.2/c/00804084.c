/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00804084; name: FUN_00804084
 */


void FUN_00804084(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_130 [4];
  int local_120 [4];
  int local_110 [4];
  undefined *local_100;
  int local_f8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [40];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  FUN_00796584(auStack_70);
  FUN_00796584(auStack_90);
  if ((param_4 < 7) && ((1 << (ulong)(param_4 & 0x1f) & 0x43U) != 0)) {
    FUN_007ffeec(&local_100,*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_3 + 0x10));
    FUN_00796828(auStack_70,&local_100);
    FUN_007965fc(auStack_90);
  }
  else {
    lVar2 = param_3 + 0x48;
    if (*(char *)(param_3 + 0x68) != '\0') {
      lVar2 = param_3 + 0x28;
    }
    FUN_0078a1c0(&local_100,lVar2);
    uVar4 = FUN_0078b12c(&local_100);
    FUN_0284e3d4(&local_100);
    if ((uVar4 & 1) == 0) {
      local_110[0] = 0;
      local_100 = (undefined *)CONCAT44(local_100._4_4_,0x2c0a);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_100 | 4),(Result *)local_110);
      FUN_00cbd7c0(param_1,&local_100);
      return;
    }
    FUN_007968fc(auStack_70,param_3 + 0x48);
    FUN_007968fc(auStack_90,param_3 + 0x28);
  }
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = FUN_007ec4a8(*(undefined8 *)(param_2 + 0xb0));
  FUN_00804fd0(&local_100,param_4,uVar7,uVar8,param_2 + 0x60,param_2 + 0x80,uVar3);
  if (local_f8 == 2) {
    sVar5 = 1;
    if ((*(ushort *)(PTR_DAT_047d0868 + 500) + 1 & 0x10000) == 0) {
      sVar5 = *(ushort *)(PTR_DAT_047d0868 + 500) + 1;
    }
    *(short *)(PTR_DAT_047d0868 + 500) = sVar5;
    iVar6 = (int)*(float *)(param_3 + 0x70);
  }
  else {
    iVar6 = 0;
  }
  local_110[0] = 0;
  local_120[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_110 | 4),(Result *)local_120);
  local_120[0] = 0;
  local_130[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_120 | 4),(Result *)local_130);
  if ((*(char *)(param_3 + 0x69) != '\0') && (uVar4 = FUN_00796784(auStack_90), (uVar4 & 1) != 0)) {
    local_97 = *(undefined1 *)(param_3 + 0x7d);
    local_98 = 2;
    FUN_00803f88(local_130,param_2,&local_100,auStack_90,iVar6);
    FUN_018ff39c(local_120,local_130);
  }
  local_97 = *(undefined1 *)(param_3 + 0x7d);
  local_98 = 1;
  FUN_00803f88(local_130,param_2,&local_100,auStack_70,iVar6);
  FUN_018ff39c(local_110,local_130);
  piVar1 = local_120;
  if (local_110[0] != 0) {
    piVar1 = local_110;
  }
  FUN_00cbd7c0(param_1,piVar1);
  local_100 = PTR_DAT_047d1688 + 0x10;
  FUN_0284e3d4(auStack_c0);
  FUN_0284e3d4(auStack_e0);
  return;
}


