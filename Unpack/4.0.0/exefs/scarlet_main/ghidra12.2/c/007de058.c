/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de058; name: FUN_007de058
 */


void FUN_007de058(undefined8 param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_620 [4];
  undefined1 auStack_610 [32];
  undefined1 local_5f0;
  ulong local_5ef;
  undefined2 local_5e7;
  undefined1 local_5e5;
  undefined1 local_5e4;
  undefined1 auStack_5e3 [1459];
  undefined2 local_28;
  undefined1 local_26;
  char local_24;
  
  puVar1 = PTR_DAT_047d0a08;
  lVar6 = *(long *)PTR_DAT_047d0a08;
  local_5f0 = 0;
  uVar4 = FUN_007e5328(lVar6 + 0x178);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  local_5ef = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar2 = FUN_007e5330(lVar6 + 0x178);
  local_5e5 = (undefined1)((ushort)uVar2 >> 8);
  local_5e4 = (undefined1)uVar2;
  local_5e7 = 0;
  iVar3 = FUN_007de13c(param_1,auStack_5e3);
  if (local_24 != '\0') {
    FUN_007e5304(auStack_610,*(long *)puVar1 + 0x1b8);
    uVar5 = FUN_007ec544(param_1);
    local_620[0] = 0xa0000000;
    local_28 = 0;
    local_26 = 0;
    lVar6 = FUN_007ebb00(uVar5,local_620,auStack_610,iVar3 - (int)&local_5f0,&local_28,0x1000000);
    if (lVar6 != 0) {
      uVar5 = FUN_007ec544(param_1);
      FUN_007eba90(local_620,uVar5,&local_5f0);
    }
  }
  return;
}


