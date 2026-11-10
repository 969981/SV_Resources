/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d940c; name: FUN_007d940c
 */


void FUN_007d940c(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_40 [16];
  
  lVar3 = FUN_007ec50c();
  if (lVar3 != 0) {
    lVar3 = FUN_007ec50c(param_1);
    lVar4 = FUN_007ec4a8(param_1);
    if ((10 < param_3) && (lVar3 == lVar4)) {
      uVar2 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      bVar1 = *(byte *)(param_2 + 9);
      plVar5 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar2 >> 0x20 | uVar2 << 0x20);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x3a) == '\x02' && bVar1 < 2)) {
        if (bVar1 != 0) {
          uVar2 = (*(ulong *)(param_2 + 10) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_2 + 10) & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          FUN_007dc878(auStack_40,*(undefined8 *)(param_1 + 200),uVar2 >> 0x20 | uVar2 << 0x20,1);
        }
        FUN_007d44f0(param_1);
      }
    }
  }
  return;
}


