/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078d258; name: FUN_0078d258
 */


undefined8 FUN_0078d258(long param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 auStack_78 [16];
  long local_68;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  undefined4 local_18 [2];
  
  FUN_0284e338(auStack_40);
  FUN_0284e338(auStack_60);
  local_68 = 0;
  FUN_007935cc(&local_68);
  uVar2 = FUN_00793098(param_1 + 0x90);
  uVar3 = FUN_00792bd8(uVar2,0,2,auStack_40,auStack_60);
  if ((uVar3 & 1) == 0) {
    local_88 = CONCAT44(local_88._4_4_,0x6485);
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_88 | 4),(Result *)local_18);
    FUN_00cbd7c0(auStack_78,&local_88);
    FUN_0078cb94(param_1 + 0x58,auStack_78);
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_0078b160();
    }
  }
  else {
    local_88 = (ulong)local_88._4_4_ << 0x20;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_88 | 4),(Result *)local_18);
    FUN_00cbd7c0(auStack_98,&local_88);
    FUN_0078cb28(param_1 + 0x58,auStack_98);
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar3 = FUN_0078a324(auStack_60);
      if ((uVar3 & 1) != 0) {
        FUN_0284e39c(*(undefined8 *)(param_1 + 0x88),auStack_60);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x88) + 0x18) = 0x8627;
    }
  }
  local_88 = 0;
  FUN_007935cc(&local_88);
  lVar5 = local_88 - local_68;
  plVar4 = (long *)FUN_0079365c();
  uVar1 = 0;
  if (*plVar4 != 0) {
    uVar1 = (undefined2)(lVar5 / *plVar4);
  }
  *(undefined2 *)(PTR_DAT_047d0868 + 0xb4) = uVar1;
  FUN_0284e3d4(auStack_60);
  FUN_0284e3d4(auStack_40);
  return 1;
}


