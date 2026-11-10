/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d4ef0; name: FUN_007d4ef0
 */


void FUN_007d4ef0(undefined8 param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 auStack_620 [16];
  undefined1 auStack_610 [32];
  undefined1 local_5f0;
  undefined1 local_5ef;
  undefined1 local_5ee;
  undefined1 local_5ed;
  undefined1 local_5ec;
  undefined1 local_5eb;
  undefined1 local_5ea;
  undefined1 local_5e9;
  undefined1 local_5e8;
  undefined1 local_5e7;
  ulong auStack_5e6 [182];
  
  lVar3 = FUN_007ec50c();
  if (lVar3 != 0) {
    lVar3 = FUN_007ec50c(param_1);
    lVar4 = FUN_007ec4a8(param_1);
    if (lVar3 == lVar4) {
      return;
    }
  }
  lVar3 = FUN_007ec50c(param_1);
  if ((lVar3 != 0) && (lVar3 = FUN_007ec4a8(param_1), lVar3 != 0)) {
    lVar3 = FUN_007ec50c(param_1);
    lVar4 = FUN_007ec4a8(param_1);
    puVar2 = PTR_DAT_047d0a08;
    if (lVar3 != lVar4) {
      local_5f0 = 9;
      uVar5 = FUN_007e5328(*(long *)PTR_DAT_047d0a08 + 0x178);
      local_5ef = (undefined1)((ulong)uVar5 >> 0x38);
      local_5ee = (undefined1)((ulong)uVar5 >> 0x30);
      local_5ed = (undefined1)((ulong)uVar5 >> 0x28);
      local_5ec = (undefined1)((ulong)uVar5 >> 0x20);
      local_5eb = (undefined1)((ulong)uVar5 >> 0x18);
      local_5ea = (undefined1)((ulong)uVar5 >> 0x10);
      local_5e9 = (undefined1)((ulong)uVar5 >> 8);
      puVar7 = auStack_5e6;
      local_5e8 = (undefined1)uVar5;
      if (0 < (int)param_3) {
        uVar8 = (ulong)param_3;
        puVar6 = puVar7;
        do {
          uVar1 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          puVar7 = puVar6 + 1;
          *puVar6 = uVar1 >> 0x20 | uVar1 << 0x20;
          uVar8 = uVar8 - 1;
          puVar6 = puVar7;
          param_2 = param_2 + 1;
        } while (uVar8 != 0);
      }
      local_5e7 = (char)param_3;
      FUN_007e5304(auStack_610,*(long *)puVar2 + 0x1b8);
      FUN_007d5520(auStack_620,param_1,auStack_610,&local_5f0,(int)puVar7 - (int)&local_5f0,0);
    }
  }
  return;
}


