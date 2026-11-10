/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007de3f8; name: FUN_007de3f8
 */


void FUN_007de3f8(undefined8 param_1,long param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [32];
  int local_80 [4];
  undefined1 auStack_70 [64];
  
  if (0xe < param_3) {
    lVar4 = FUN_007ec50c();
    if (lVar4 != 0) {
      lVar4 = FUN_007ec50c(param_1);
      lVar5 = FUN_007ec4a8(param_1);
      if (lVar4 == lVar5) {
        uVar3 = (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 1) & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        FUN_007e5190(auStack_70);
        uVar6 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
        lVar4 = FUN_007e2bb4(uVar6,uVar3 >> 0x20 | uVar3 << 0x20);
        if (lVar4 != 0) {
          FUN_007e1c44(local_80,lVar4,auStack_70);
          if (local_80[0] == 0) {
            uVar6 = FUN_007e5330(auStack_70);
            lVar4 = FUN_007de31c(uVar6,param_2 + 0xd,(ulong)param_3 - 0xd,lVar4);
            if (lVar4 != 0) {
              FUN_007ddf88(param_1);
              cVar1 = *(char *)(param_2 + 0xd);
              cVar2 = *(char *)(param_2 + 0xe);
              FUN_007e5304(auStack_a0,auStack_70);
              FUN_007de4fc(param_1,auStack_a0,param_2 + 0xf,cVar2 + cVar1);
            }
          }
        }
        FUN_007e51d0(auStack_70);
      }
    }
  }
  return;
}


