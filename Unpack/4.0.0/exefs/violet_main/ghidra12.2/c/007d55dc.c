/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d55dc; name: FUN_007d55dc
 */


void FUN_007d55dc(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  undefined1 auStack_738 [16];
  undefined1 auStack_728 [136];
  undefined1 auStack_6a0 [16];
  undefined1 auStack_690 [16];
  undefined1 auStack_680 [32];
  undefined1 auStack_660 [64];
  undefined4 local_620;
  int local_60 [4];
  uint local_48;
  uint local_44;
  
  local_60[0] = 0;
  local_620 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_620);
  puVar2 = PTR_DAT_047d0a08;
  lVar12 = *(long *)PTR_DAT_047d0a08;
  FUN_007e5190(auStack_660);
  (**(code **)(**(long **)(*(long *)puVar2 + 0x18) + 0x108))
            (auStack_728,*(long **)(*(long *)puVar2 + 0x18),auStack_660);
  FUN_018ff39c(local_60,auStack_728);
  if (local_60[0] == 0) {
    lVar12 = lVar12 + 0x178;
    lVar7 = FUN_007e5328(auStack_660);
    lVar8 = FUN_007e5328(lVar12);
    puVar2 = PTR_DAT_047d0860;
    if (lVar7 != lVar8) {
      lVar7 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      lVar8 = *(long *)(lVar7 + 0x98);
      FUN_007e1a54(auStack_728,lVar8,auStack_680);
      FUN_007c70a8(auStack_690);
      uVar6 = FUN_007c7184(auStack_690);
      lVar7 = *(long *)puVar2;
      local_620 = local_620 & 0xffffff00;
      uVar3 = FUN_007ecf6c(lVar7 + 0x10);
      local_620._0_2_ = CONCAT11(uVar3,local_620._0_1_);
      local_44 = 0;
      FUN_007ed068(lVar7 + 0x10,(ulong)&local_620 | 2,&local_44);
      puVar1 = (uint *)(((ulong)&local_620 | 2) + (ulong)local_44);
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      *puVar1 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar9 = FUN_007e5328(lVar12);
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      *(ulong *)(puVar1 + 1) = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar5 = FUN_007e5330(lVar12);
      *(char *)((long)puVar1 + 0xf) = (char)uVar5;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(char *)((long)puVar1 + 0xe) = (char)((ushort)uVar5 >> 8);
      uVar3 = FUN_007e5310(lVar12);
      *(undefined1 *)(puVar1 + 4) = uVar3;
      bVar4 = FUN_007e531c(lVar12);
      *(byte *)((long)puVar1 + 0x11) = bVar4 & 1;
      memcpy((void *)((long)puVar1 + 0x12),auStack_680,0x20);
      uVar10 = FUN_007e5304(auStack_728,lVar12);
      puVar11 = (ulong *)FUN_007d58b4(uVar10,(long)puVar1 + 0x32,auStack_728,0);
      uVar9 = FUN_007e5328(auStack_660);
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      *puVar11 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar5 = FUN_007e5330(auStack_660);
      *(undefined2 *)(puVar11 + 1) = 0;
      *(char *)((long)puVar11 + 0xb) = (char)uVar5;
      *(char *)((long)puVar11 + 10) = (char)((ushort)uVar5 >> 8);
      *(undefined1 *)((long)puVar11 + 0xc) = *(undefined1 *)(lVar8 + 0x358);
      *(undefined1 *)((long)puVar11 + 0xd) = *(undefined1 *)(lVar8 + 0x359);
      lVar12 = (long)puVar11 + 0xe;
      if (*(char *)(lVar8 + 0x358) != '\0') {
        uVar6 = 0;
        do {
          FUN_018dd988(auStack_728);
          FUN_018dd980(auStack_728);
          memset(auStack_6a0,0,0x10);
          FUN_007e1b3c(auStack_738,lVar8,uVar6,auStack_728);
          FUN_018ff39c(local_60,auStack_738);
          FUN_007d59b4(auStack_738,auStack_728,lVar12,&local_48,(int)local_60 - (int)lVar12);
          lVar12 = lVar12 + (ulong)local_48;
          FUN_018dd490(auStack_728);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(byte *)(lVar8 + 0x358));
      }
      if (*(long *)(param_1 + 0x130) != 0) {
        lVar12 = FUN_007de13c(*(long *)(param_1 + 0x130),lVar12,(long)local_60 - lVar12,0);
      }
      FUN_007e5304(auStack_728,auStack_660);
      FUN_007d5520(auStack_738,param_1,auStack_728,&local_620,(int)lVar12 - (int)&local_620,1);
      FUN_018ff39c(local_60,auStack_738);
    }
  }
  FUN_007e51d0(auStack_660);
  return;
}


