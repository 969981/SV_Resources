/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f3cc64; name: FUN_02f3cc64
 */


long FUN_02f3cc64(long param_1,long param_2,ushort param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint local_18 [2];
  
  if (param_2 < 0) {
    local_18[0] = (uint)param_2;
  }
  else {
    uVar5 = FUN_00dbb6c8(param_1 + 0x940,param_2,local_18);
    if ((uVar5 & 1) == 0) {
      local_18[0] = 0xffffff;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xc4);
  if (0 < (int)uVar1) {
    uVar3 = ((uint)param_3 * -0x61c8864f & 0xff00ff00) >> 8 |
            ((uint)param_3 * -0x61c8864f & 0xff00ff) << 8;
    uVar5 = (ulong)(uVar1 & (uVar3 >> 0x10 | uVar3 << 0x10));
    lVar4 = *(long *)(param_1 + 0xb8);
    uVar2 = *(ushort *)(lVar4 + uVar5 * 0x10);
    if (uVar2 != 0xffff) {
      if (uVar2 != param_3) {
        do {
          uVar5 = (ulong)((int)uVar5 + 1U & uVar1);
          uVar2 = *(ushort *)(lVar4 + uVar5 * 0x10);
          if (uVar2 == 0xffff) {
            return 0;
          }
        } while (uVar2 != param_3);
      }
      lVar4 = *(long *)(lVar4 + uVar5 * 0x10 + 8);
      if (lVar4 != 0) {
        uVar1 = local_18[0] & 0xffffff;
        if ((uVar1 < *(uint *)(lVar4 + 0x18)) &&
           ((*(uint *)(*(long *)(lVar4 + 8) + (ulong)(uVar1 >> 5) * 4) >>
             (ulong)(local_18[0] & 0x1f) & 1) != 0)) {
          return *(long *)(lVar4 + 0x20) + (ulong)uVar1 * param_4;
        }
      }
    }
  }
  return 0;
}


