/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d87f4; name: FUN_007d87f4
 */


void FUN_007d87f4(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_007ec50c();
  if (lVar2 != 0) {
    lVar2 = FUN_007ec50c(param_1);
    lVar3 = FUN_007ec4a8(param_1);
    if (((0xc < param_3) && (lVar2 == lVar3)) &&
       (uVar1 = (*(uint *)(param_2 + 9) & 0xff00ff00) >> 8 |
                (*(uint *)(param_2 + 9) & 0xff00ff) << 8,
       (uVar1 >> 0x10 | uVar1 << 0x10) == (uint)*(ushort *)(param_1 + 0xdc))) {
      plVar4 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      lVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,param_4);
      if (lVar2 != 0) {
        FUN_007e5bac(param_1 + 0x180,*(undefined1 *)(lVar2 + 0x28),param_4);
        return;
      }
    }
  }
  return;
}


