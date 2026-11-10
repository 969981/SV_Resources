/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007edc00; name: FUN_007edc00
 */


void FUN_007edc00(long param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  undefined7 uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  int iVar15;
  byte bVar16;
  undefined4 local_a0 [5];
  uint local_8c;
  uint local_88 [4];
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  if (param_2 != (void *)0x0) {
    local_68 = 0;
    local_88[0] = 0;
    local_78 = PTR_DAT_047d14f0 + 0x10;
    local_70 = 0;
    local_a0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_a0);
    if (*(int *)(param_1 + 0x6b0) != 0) {
      uVar13 = 0;
      pcVar14 = (char *)(param_1 + 0x3ee);
      do {
        local_68 = *(long *)(pcVar14 + -0xe);
        local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x3cc),
                            CONCAT22((short)*(undefined4 *)(param_1 + 0x3c8),
                                     CONCAT11(pcVar14[-3] | pcVar14[-2] << 1 | pcVar14[-1] << 2 |
                                              *pcVar14 << 3 | pcVar14[-5] << 4 | pcVar14[-4] << 5 |
                                              (pcVar14[-6] == '\x01') << 6 |
                                              (pcVar14[-6] == '\x02') << 7,(undefined1)local_70)));
        uVar8 = FUN_007edf14(param_1,*(undefined8 *)(pcVar14 + -0x1e));
        lVar6 = local_68;
        uVar3 = local_70._1_7_;
        iVar5 = local_70._4_4_;
        cVar2 = local_70._1_1_;
        sVar4 = local_70._2_2_;
        if ((int)uVar8 < 0) {
          bVar7 = true;
          local_70 = CONCAT71(uVar3,1);
          lVar11 = *(long *)(pcVar14 + -0x1e);
          uVar8 = FUN_007edf14(param_1,lVar11);
        }
        else {
          lVar11 = param_1 + (ulong)uVar8 * 0x28;
          bVar7 = local_70._1_1_ != *(char *)(lVar11 + 0x19);
          bVar16 = bVar7;
          if (local_70._2_2_ != *(short *)(lVar11 + 0x1a)) {
            bVar16 = 2;
          }
          if (local_70._4_4_ != *(int *)(lVar11 + 0x1c)) {
            bVar16 = bVar16 | 4;
          }
          if (local_68 != *(long *)(lVar11 + 0x20)) {
            bVar16 = bVar16 | 8;
          }
          local_70 = CONCAT71(uVar3,bVar7);
          iVar15 = 1;
          if (bVar7) {
            iVar15 = 2;
          }
          if ((bVar16 & 2) != 0) {
            iVar15 = iVar15 + 2;
          }
          lVar11 = *(long *)(pcVar14 + -0x1e);
          if ((bVar16 & 4) != 0) {
            iVar15 = iVar15 + 4;
          }
          if ((bVar16 & 8) != 0) {
            iVar15 = iVar15 + 8;
          }
          uVar1 = (*(int *)(lVar11 + 0x5f8) + iVar15) - 0x10;
          uVar8 = 0;
          if (uVar1 < 0x5c1) {
            uVar8 = uVar1;
          }
          *(uint *)(lVar11 + 0x5f8) = uVar8;
          uVar8 = FUN_007edf14(param_1,lVar11);
        }
        if ((int)uVar8 < 0) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x3c0);
          *(short *)(param_1 + 0x3c0) = (short)((*(ushort *)(param_1 + 0x3c0) + 1) % 0x18);
        }
        puVar9 = (undefined1 *)(param_1 + (ulong)uVar8 * 0x28);
        *puVar9 = 1;
        *(long *)(puVar9 + 8) = lVar11;
        puVar9[0x18] = bVar7;
        puVar9[0x19] = cVar2;
        *(short *)(puVar9 + 0x1a) = sVar4;
        *(int *)(puVar9 + 0x1c) = iVar5;
        *(long *)(puVar9 + 0x20) = lVar6;
        FUN_007ed6f4(local_a0,&local_78,*(undefined8 *)(pcVar14 + -0x16),&local_8c,0x10);
        FUN_018ff39c(local_88,local_a0);
        memcpy((void *)(*(long *)(pcVar14 + -0x16) + (ulong)local_8c),param_2,
               (ulong)*(uint *)(param_1 + 0x3c8));
        uVar10 = (ulong)*(uint *)(param_1 + 0x6b0);
        uVar13 = uVar13 + 1;
        pcVar14 = pcVar14 + 0x20;
      } while (uVar13 < uVar10);
      bVar16 = *(byte *)(param_1 + 0x6b4);
      if ((bVar16 != 0) && (*(uint *)(param_1 + 0x6b0) != 0)) {
        plVar12 = (long *)(param_1 + 0x3d0);
        do {
          if (*(byte *)(*plVar12 + 0x620) < bVar16) {
            *(byte *)(*plVar12 + 0x620) = bVar16;
          }
          plVar12 = plVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x6b0) = 0;
  }
  return;
}


