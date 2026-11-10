/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278e4d4; name: FUN_0278e4d4
 */


void FUN_0278e4d4(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  char local_190 [4];
  undefined8 local_18c;
  undefined *local_180 [2];
  char local_170;
  undefined1 auStack_160 [256];
  undefined1 auStack_60 [16];
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x1c0) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x10), lVar6 != 0)) {
    lVar6 = lVar6 + -0x28;
    uVar2 = FUN_0278e8ec(lVar6);
    if (uVar2 != 0) {
      uVar7 = 0;
      puVar1 = PTR_DAT_047e20b0 + 0x10;
      do {
        FUN_0278e920(auStack_60,lVar6,uVar7);
        uVar4 = FUN_0278dcb0(auStack_60);
        iVar3 = FUN_0278e988(lVar6,uVar4);
        if (iVar3 == 0xfc) {
          memset(auStack_160,0,0xfc);
          uVar4 = FUN_0278dcb0(auStack_60);
          uVar5 = FUN_0278e9bc(lVar6,uVar4,auStack_160,0xfc);
          if ((uVar5 & 1) != 0) {
            FUN_0278dc58(&local_38,auStack_60);
            local_190[0] = '\x01';
            local_18c = local_38;
            FUN_0278ea78(local_180,auStack_160,local_190);
            if (local_190[0] != '\0') {
              local_190[0] = '\0';
            }
            uVar5 = FUN_0278dcb8(local_180);
            if (((uVar5 & 1) != 0) && (*(long *)(param_1 + 0x90) != 0)) {
              FUN_0278eaa4(*(long *)(param_1 + 0x90),local_180);
            }
            local_180[0] = puVar1;
            if (local_170 != '\0') {
              local_170 = '\0';
            }
          }
        }
        FUN_0278f0cc(auStack_60);
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
  }
  return;
}


